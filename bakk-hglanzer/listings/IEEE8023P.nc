#include "IEEE8023.h"

module IEEE8023P
{
	provides interface IEEE8023;
	uses interface GeneralIO as ssMMC;
	uses interface GeneralIO as ssETH;
	uses interface GeneralIO as rstETH;
	uses interface HplAtm128Interrupt as intETH;
	uses interface SpiByte;
	uses interface Resource;
}

implementation
{

	command uint8_t IEEE8023.init()
	{
		/*
			... unimportant code is not shown here...
		*/

		/*
			 queue a request for this resource now...	
		*/
		if(call Resource.request() == FAIL)
		{
		        return FAIL;
		}
		else
		{
		        stateETH = IEEE8023_INITIALIZING;
			return SUCCESS;
		}
	}

	/*
		eventhandler will be called when request was queued and 
		resource becomes available
	*/
	event void Resource.granted(void)
	{
		/*
			we are now in full control of the resource
			read/write data to resource
		*/

		call Resource.release();
		/*
			NO MORE access to the resource now
			queue another request to get in control again
		*/
	}

}
