enum
{
	UNCALIBRATED				=	0,
	CALIBRATION_IN_PROGRESS_LEFT_BOTTOM	=	1,
	CALIBRATION_IN_PROGRESS_RIGHT_TOP	=	2,
	CALIBRATION_DONE			=	3,
};

enum
{
	BUSY_STRING     =       1,
	BUSY_CIRCLE     =       2,
	BUSY_RECT       =       4,
	BUSY_LINE       =       8,
	BUSY_CLEAR      =       16,
	BUSY_BAR        =       32,
};

#define MEDIAN          0x3F0

#define X_TRESHOLD      30
#define Y_TRESHOLD      60

#define X_MIN           50
#define X_MAX           855
#define X_DISTANCE      820

#define Y_MIN           128
#define Y_MAX           800
//#define Y_MAX         787
#define Y_DISTANCE      672
//#define Y_DISTANCE    659

#define X_CALIB_DISTANCE        100	// distance required for d(x_max - x_min) / adc-value, NOT PIXEL!
#define Y_CALIB_DISTANCE        100	// distance required for d(y_max - y_min) / adc-value, NOT PIXEL!
