#ifndef HX711_AKC
#define HX711_AKC

#include "Arduino.h"

class HX711_AKC
{
	private:
		byte PD_SCK;
		byte DT;
		byte GAIN;
		long OFFSET = 0;
		int SENS = 1;

	public:

		HX711();

		virtual ~HX711();
};
#endif