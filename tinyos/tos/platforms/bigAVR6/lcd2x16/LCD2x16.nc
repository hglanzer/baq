/*
	Harald Glanzer, 0727156 TU Wien

	interfacefunctions for component LCD2x16C
*/
interface LCD2x16
{
	/*
		MUST BE CALLED before lcd can be used.
		returns FAIL if BUSY. can get initialized multiple times
		* uint8_t	mode	

		available modes:
			CURSOR_ON_BLINK_ON
			CURSOR_ON_BLINK_OFF
			CURSOR_OFF
	*/
	command error_t init(uint8_t mode);

	/*
		splitphase command for writing data to LCD

		parameter:
		* char *	datastring: string to write to display
		* uint8_t	datalength: length of string to write
		* uint8_t	line: 'x' start positition, valid values 0...15
		* uint8_t	column: 'y' position, valid values 0...1
	*/
	command error_t sendString(char *str, uint8_t len, uint8_t line, uint8_t column);

	/*
		clear display by sending corresponding command
		returns FAIL if already busy, SUCCESS otherwise
	*/
	command error_t clearDisplay(void);

	/*
		event for splitphase command sendString()
	*/
	event void stringWritten(void);
}
