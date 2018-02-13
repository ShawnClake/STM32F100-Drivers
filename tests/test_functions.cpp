/* Main Program */
/* Author: Shawn Clake */
/* Date: Jan, 2018 */

//#include "retarget.cpp"

#include "clock.h"
#include "io.h"
#include "lcd.h"

#include <string>

int main(void)
{
	
	clockInit();
	initPortClocks();
	initLEDConfigs();
	
	initLCD();
	
	while(1)
	{
		uint8_t switches = readSwitches();
		
		setLEDs(switches);
		std::string what = "what";
		
		LCDScreen *lcd = new LCDScreen("the heck", "no way");
		
		toLCD(lcd);
		
		//clearLCD();
		//line1LCD();
		//strLCD(what);
		
		delay(5000000);
		
	}
	
	return 0;
	
}
