#include "chandler.h"

const rt_uint32_t P01[] = {		// 愛心
0x0E0000,0x1F0000,0x318000,0x60C000,0x606000,0x603000,0x601800,0x300C00,
0x180600,0x300C00,0x601800,0x603000,0x606000,0x60C000,0x318000,0x1F0000,
0x0E0000
};

const rt_uint16_t P02[] = {
0x0380,0x07C0,0x0FE0,0x0FF0,0x0FF8,0x0FFC,0x07FE,0x03FF,0x07FE,0x0FFC,
0x0FF8,0x0FF0,0x0FE0,0x07C0,0x0380
};

/*
const rt_uint16_t P03[] = {
0x01FF,0x01FF,0x00FF,0x00FF,0x007F,0x007F,0x003F,0x003F,0x007F,0x007F,
0x00FF,0x00FF,0x01FF,0x01FF,0x03FF,0x03FF,0x07FF,0x07FF,0x0FFF,0x0FFF,
0x1FFF,0x1FFF,0x3FFF,0x3FFF,0x7FFF,0x7FFF,0x7FFF,0x7FFF,0x3FFF,0x3FFF,
0x1FFF,0x1FFF,0x0FFF,0x0FFF,0x07FF,0x07FF,0x03FF,0x03FF,0x01FF,0x01FF,
0x00FF,0x00FF,0x007F,0x007F,0x003F,0x003F,0x001F,0x001F,0x003F,0x003F,
0x007F,0x007F,0x00FF,0x00FF,0x01FF,0x01FF,0x03FF,0x03FF,0x01FF,0x01FF
};

const rt_uint32_t P04[] = {
0x0000001F,0x0000003F,0x0000003F,0x0000007F,0x0000007F,0x000000FF,0x000000FF,0x000001FF,0x000001FF,0x000003FF,
0x000003FF,0x000007FF,0x000007FF,0x00000FFF,0x00000FFF,0x00001FFF,0x00001FFF,0x00003FFF,0x00003FFF,0x00007FFF,
0x00007FFF,0x0000FFFF,0x0000FFFF,0x0001FFFF,0x0001FFFF,0x0003FFFF,0x0003FFFF,0x0007FFFF,0x0007FFFF,0x000FFFFF,
0x000FFFFF,0x0007FFFF,0x0007FFFF,0x0003FFFF,0x0003FFFF,0x0001FFFF,0x0001FFFF,0x0000FFFF,0x0000FFFF,0x00007FFF,
0x00007FFF,0x00003FFF,0x00003FFF,0x00001FFF,0x00001FFF,0x00000FFF,0x00000FFF,0x000007FF,0x000007FF,0x000003FF,
0x000003FF,0x000001FF,0x000001FF,0x000000FF,0x000000FF,0x0000007F,0x0000007F,0x0000003F,0x0000003F,0x0000001F
};

const rt_uint32_t P05[] = {
0x0000000F,0x0000000F,0x0000001F,0x0000003F,0x0000003F,0x0000007F,0x0000007F,0x000000FF,0x000001FF,0x000007FF,
0x00000FFF,0x00001FFF,0x00001FFF,0x00003FFF,0x00007FFF,0x0000FFFF,0x0003FFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,
0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,
0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x000FFFFF,0x0003FFFF,0x0000FFFF,
0x00007FFF,0x00007FFF,0x00003FFF,0x00003FFF,0x00001FFF,0x00000FFF,0x00000FFF,0x000007FF,0x000003FF,0x000000FF,
0x0000007F,0x0000007F,0x0000003F,0x0000001F,0x0000000F,0x0000000F,0x0000000F,0x0000000F,0x0000000F,0x0000000F
};

const rt_uint32_t P06[] = {
0x00000003,0x00000003,0x00000003,0x00000003,0x0000000F,0x0000000F,0x0000001F,0x0000001F,0x0000001F,0x0000003F,
0x0000003F,0x0000003F,0x0000007F,0x0000007F,0x0000007F,0x000000FF,0x000000FF,0x000000FF,0x000001FF,0x000003FF,
0x000003FF,0x000003FF,0x000007FF,0x000007FF,0x000007FF,0x00000FFF,0x00000FFF,0x00000FFF,0x00001FFF,0x00001FFF,
0x00001FFF,0x00003FFF,0x00003FFF,0x00003FFF,0x00007FFF,0x00007FFF,0x00007FFF,0x0000FFFF,0x0000FFFF,0x0000FFFF,
0x0000FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0003FFFF,0x0003FFFF,0x0003FFFF,0x0007FFFF,
0x0007FFFF,0x0007FFFF,0x0007FFFF,0x0007FFFF,0x0007FFFF,0x00000007,0x00000007,0x00000007,0x00000007,0x00000007
};

const rt_uint16_t P07[] = {
0x0007,0x0007,0x0007,0x01FF,0x07FF,0x3FFF,0xFFFF,0x0007,0x0007,0x0007,
0x01FF,0x07FF,0x3FFF,0xFFFF,0x0007,0x0007,0x0007,0x01FF,0x07FF,0x3FFF,
0xFFFF,0x0007,0x0007,0x0007,0x01FF,0x07FF,0x3FFF,0xFFFF,0x0007,0x0007,
0x0007,0x01FF,0x07FF,0x3FFF,0xFFFF,0x0007,0x0007,0x0007,0x01FF,0x07FF,
0x3FFF,0xFFFF,0x0007,0x0007,0x0007,0x01FF,0x07FF,0x3FFF,0xFFFF,0x0007,
0x0007,0x0007,0x01FF,0x07FF,0x3FFF,0xFFFF,0x0007,0x0007,0x0007,0x0007
};

const rt_uint32_t P08[] = {
0x00000007,0x00000007,0x00000007,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x00000007,0x00000007,0x00000007,
0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x00000007,0x00000007,0x00000007,0x0001FFFF,0x0001FFFF,0x0001FFFF,
0x0001FFFF,0x00000007,0x00000007,0x00000007,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x00000007,0x00000007,
0x00000007,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x00000007,0x00000007,0x00000007,0x0001FFFF,0x0001FFFF,
0x0001FFFF,0x0001FFFF,0x00000007,0x00000007,0x00000007,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x00000007,
0x00000007,0x00000007,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x0001FFFF,0x00000007,0x00000007,0x00000007,0x00000007
};
*/

const rt_uint8_t M01[] ={"QUICKSTART"};
const rt_uint8_t M02[] ={"TIME"};
const rt_uint8_t M03[] ={"CAL"}; 
const rt_uint8_t M04[] ={"CAL/HR"};
const rt_uint8_t M05[] ={"INC H"};
const rt_uint8_t M06[] ={"INC L"};
const rt_uint8_t M07[] ={"OK"};
const rt_uint8_t M08[] ={"ERR"};
const rt_uint8_t M09[] ={"PROFILE"};
const rt_uint8_t M10[] ={"MANUAL"};
const rt_uint8_t M11[] ={"HEART"};
const rt_uint8_t M12[] ={"RATE"};
const rt_uint8_t M13[] ={"FOCUS"};
const rt_uint8_t M14[] ={"METS"};
const rt_uint8_t M15[] ={"ROOLING"};
const rt_uint8_t M16[] ={"HILL"};
const rt_uint8_t M17[] ={"PEAK"};
const rt_uint8_t M18[] ={"PLATEAU"};
const rt_uint8_t M19[] ={"CLIMB"};
const rt_uint8_t M20[] ={"INTERVAL1"};
const rt_uint8_t M21[] ={"INTERVAL2"};
const rt_uint8_t M22[] ={"LEVEL"};
const rt_uint8_t M23[] ={"WORKOUT"};
const rt_uint8_t M24[] ={"TO"};
const rt_uint8_t M25[] ={"BEGIN"};
const rt_uint8_t M26[] ={"USER 1"};
const rt_uint8_t M27[] ={"USER 2"};
const rt_uint8_t M28[] ={"USER 3"};
const rt_uint8_t M29[] ={"USER 4"};
const rt_uint8_t M30[] ={"USER 5"};
const rt_uint8_t M31[] ={"USER 6"};
const rt_uint8_t M32[] ={"USER 7"};
const rt_uint8_t M33[] ={"USER 8"};
const rt_uint8_t M34[] ={"USER 9"};
const rt_uint8_t M35[] ={"USER 10"};
const rt_uint8_t M36[] ={"NO DATA"};
const rt_uint8_t M37[] ={"USER NAME"};
const rt_uint8_t M38[] ={"SET"};
const rt_uint8_t M39[] ={"SEAT"};
const rt_uint8_t M40[] ={"POSITION"};
const rt_uint8_t M41[] ={"FEMALE"};
const rt_uint8_t M42[] ={"MALE"};
const rt_uint8_t M43[] ={"AGE"};
const rt_uint8_t M44[] ={"WEIGHT"};
const rt_uint8_t M45[] ={"MILES"};
const rt_uint8_t M46[] ={"CAL"};
const rt_uint8_t M47[] ={"RESETDATA?"};
const rt_uint8_t M48[] ={"YES"};
const rt_uint8_t M49[] ={"NO"};
const rt_uint8_t M50[] ={"FAT"};
const rt_uint8_t M51[] ={"BURN"};
const rt_uint8_t M52[] ={"CARDIO"};
const rt_uint8_t M53[] ={"TARGET"};
const rt_uint8_t M54[] ={"METRIC"};
const rt_uint8_t M55[] ={"ENGLISH"};
const rt_uint8_t M56[] ={"SOFTWARE"};
const rt_uint8_t M57[] ={"VERSION"};
const rt_uint8_t M58[] ={"CS"};
const rt_uint8_t M59[] ={"BEEPER"};
const rt_uint8_t M60[] ={"TEST/PRESS"};
const rt_uint8_t M61[] ={"ENTER"};
const rt_uint8_t M62[] ={"DISPLAY"};
const rt_uint8_t M63[] ={"KEYPAD"};
const rt_uint8_t M64[] ={"BZ1"};
const rt_uint8_t M65[] ={"BZ2"};
const rt_uint8_t M66[] ={"BZ3"};
const rt_uint8_t M67[] ={"KEY NUM"};
const rt_uint8_t M68[] ={"EEPROM ERR"};
const rt_uint8_t M69[] ={"TOTAL"};
const rt_uint8_t M70[] ={"BODY"};
const rt_uint8_t M71[] ={"ARMS"};
const rt_uint8_t M72[] ={"LEGS"};
const rt_uint8_t M73[] ={"MAXIMUM"};
const rt_uint8_t M74[] ={"RESISTANCE"};
const rt_uint8_t M75[] ={"START"};
const rt_uint8_t M76[] ={"SETTINGS"};
const rt_uint8_t M77[] ={"USER"};
const rt_uint8_t M78[] ={"/20"};
//FOCUS
const rt_uint8_t M79[] ={"AND PUSH W"};
const rt_uint8_t M80[] ={"ARMS LEGS"};
const rt_uint8_t M81[] ={"PUSH WITH"};
const rt_uint8_t M82[] ={"ARMS"};
const rt_uint8_t M83[] ={"PALMS UP"};
const rt_uint8_t M84[] ={"PALMS DOWN"};
const rt_uint8_t M85[] ={"(BICEPS)"};
const rt_uint8_t M86[] ={"(TRICEPS)"};
const rt_uint8_t M87[] ={"NO ARMS"};
const rt_uint8_t M88[] ={"PUSH WITH"};
const rt_uint8_t M89[] ={"TOES"};
const rt_uint8_t M90[] ={"HEELS"};
const rt_uint8_t M91[] ={"RIGHT LEG"};
const rt_uint8_t M92[] ={"ONLY"};
const rt_uint8_t M93[] ={"PUSE AND"};
const rt_uint8_t M94[] ={"PULL"};
const rt_uint8_t M95[] ={"LEFT LEG"};
//=========
const rt_uint8_t M96[] ={"MAX LEVEL"};
const rt_uint8_t M97[] ={"SEAT LOCK"};
const rt_uint8_t M98[] ={"ACTIVATED"};
const rt_uint8_t M99[] ={"UNLOCK"};
const rt_uint8_t M100[] ={"SEAT?"};
const rt_uint8_t M101[] ={"SEAT LIFT"};
const rt_uint8_t M102[] ={"INSTALL"};
const rt_uint8_t M103[] ={"TIME  H  M"};
const rt_uint8_t M104[] ={"KM"};

static void	F_HundredChange(rt_uint8_t	*byte2,rt_uint8_t	*byte1,rt_uint32_t data)
{
	*byte2 = data / 100;
	*byte1 = data % 100;
}

void	F_showTimeDot(void)
{
	LCDBuffer[0] |= 0x1000; 
}

void	F_showRpmDot(void)
{
	LCDBuffer[1] |= 0x1000; 
}

void	F_showCalDot(void)
{
	LCDBuffer[62] |= 0x1000; 
}

void	F_showResistanceDot(void)
{
	LCDBuffer[0] |= 0x08; 
}

void	F_showCalHrDot(void)
{
	LCDBuffer[1] |= 0x08; 
}

void	F_showHeartRateDot(void)
{
	LCDBuffer[0] |= 0x40000; 
}

void	F_showDistanceDot(void)
{
	LCDBuffer[1] |= 0x40000; 
}

void	F_showTimeClick(void)
{
	LCDBuffer[63] |= 0x1000; 
}

void	F_show_8_Dot(void)
{
	LCDBuffer[0] |= 0x10; 
	LCDBuffer[0] |= 0x20000; 
	LCDBuffer[0] |= 0x4000000; 
	LCDBuffer[1] |= 0x10; 
	LCDBuffer[1] |= 0x20000; 
	LCDBuffer[1] |= 0x4000000; 
	LCDBuffer[62] |= 0x10; 
	LCDBuffer[62] |= 0x20000; 
	LCDBuffer[62] |= 0x4000000;
	LCDBuffer[63] |= 0x10; 
	LCDBuffer[63] |= 0x20000; 
	LCDBuffer[63] |= 0x4000000; 
}

void	F_showNoramal(void)
{
	rt_coordinate_t coordinateTemp1;
	
	coordinateTemp1.x= 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M01,sizeof(M01),LCDBuffer);
	
	coordinateTemp1.x= 24;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M24,sizeof(M24),LCDBuffer);
	
	coordinateTemp1.x= 16;
	coordinateTemp1.y = 3;
	F_ShowMatrixStringLcd(coordinateTemp1,M25,sizeof(M25),LCDBuffer);
	
}

void	F_showMatrixTime(rt_time_data_t TimeData)
{
	rt_coordinate_t coordinateTemp3,coordinateTemp2,coordinateTemp1;
	
	coordinateTemp1.x = 19;
	coordinateTemp1.y = 21;
	F_ShowMatrixStringLcd(coordinateTemp1,M02,sizeof(M02),LCDBuffer);
	
	coordinateTemp3.x = blankVal;
	coordinateTemp3.y = blankVal;
	coordinateTemp2.x = 9;
	coordinateTemp2.y = 7;
	coordinateTemp1.x = 9+9;
	coordinateTemp1.y = 7;
	
	F_ShowMatrixBigNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeH,LCDBuffer);

	coordinateTemp2.x = 9+9+9+3;
	coordinateTemp2.y = 7;
	coordinateTemp1.x = 9+9+9+3+9;
	coordinateTemp1.y = 7;

	F_ShowMatrixBigNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeL,LCDBuffer);

	// 冒號
	F_ShowMatrixLcd(27,0xCC00,16,LCDBuffer);
	F_ShowMatrixLcd(28,0xCC00,16,LCDBuffer);
}

void	F_showMatrixProfileWrokOutTime(rt_time_data_t TimeData)
{
	rt_coordinate_t coordinateTemp3,coordinateTemp2,coordinateTemp1;
	
	coordinateTemp3.x = blankVal;
	coordinateTemp3.y = blankVal;
	coordinateTemp2.x = 11;
	coordinateTemp2.y = 21;
	coordinateTemp1.x = 11+9;
	coordinateTemp1.y = 21;
	
	F_ShowMatrixBigNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeH,LCDBuffer);

	coordinateTemp2.x = 11+9+9+3;
	coordinateTemp2.y = 21;
	coordinateTemp1.x = 11+9+9+3+9;
	coordinateTemp1.y = 21;

	F_ShowMatrixBigNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeL,LCDBuffer);
	
	//帽號
	coordinateTemp1.x = 29;
	coordinateTemp1.y = 21;
	F_ShowMatrixLcdChossReverse(coordinateTemp1,2,12,0x198,LCDBuffer);
	//帽號
}

void	F_showResistance(rt_uint8_t resistance)
{
		F_showResistanceDot();
		if(resistance < 10) {
			F_Show_8_Lcd(blankVal,6,7,ShowNoHiByeVal,resistance,LCDBuffer);
			F_Show_8_LcdDot(6,0x31,LCDBuffer);		//	L
		} else {
			F_Show_8_Lcd(blankVal,6,7,ShowNoHiByeVal,resistance,LCDBuffer);
			F_Show_8_LcdDot(5,0x31,LCDBuffer);		//	L	
		}
}

void	F_showMaxResistance(rt_uint8_t resistance)
{
		if(resistance < 10) {
			F_Show_8_Lcd(blankVal,6,7,ShowNoHiByeVal,resistance,LCDBuffer);
			F_Show_8_LcdDot(6,0x31,LCDBuffer);		//	L
		} else {
			F_Show_8_Lcd(blankVal,6,7,ShowNoHiByeVal,resistance,LCDBuffer);
			F_Show_8_LcdDot(5,0x31,LCDBuffer);		//	L	
		}
}

void	F_show8HearRate(rt_uint8_t HandHeartRate,rt_uint8_t wHeartRate)
{
	rt_uint8_t Temp = 0;
	if(wHeartRate)
	{
		Temp = wHeartRate;
	} else {
		Temp = HandHeartRate;
	}
		if(Temp)
		{
			F_Show_8_Lcd(9,10,11,ShowHiByeVal,Temp,LCDBuffer);
		} else {
			F_Show_8_LcdDot(11,0x7C,LCDBuffer);		//	P
		}
		F_showHeartRateDot();
}

void	F_showHearRateGraph(rt_uint8_t HandHeartRate,rt_uint8_t wHeartRate)
{
	rt_coordinate_t coordinateTemp3,coordinateTemp2,coordinateTemp1;
	rt_uint8_t	adr;
	rt_uint8_t Temp = 0;
	for(adr=6;adr<6+17;adr++)
	F_ShowMatrixLcd(adr,P01[adr-6],32,LCDBuffer);
	
	if(wHeartRate)
	{
		Temp = wHeartRate;
	} else {
		Temp = HandHeartRate;
		}
			if(Temp)
			{
				coordinateTemp3.x = 25;
				coordinateTemp3.y = 9;
				coordinateTemp2.x = 25+9;
				coordinateTemp2.y = 9;
				coordinateTemp1.x = 25+9+9;
				coordinateTemp1.y = 9;
				F_ShowMatrixBigNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,Temp,LCDBuffer);
			}
}

void	F_show8Time(rt_time_data_t TimeData)
{
	F_showTimeDot();
	F_Show_8_Lcd(blankVal,0,1,ShowHiByeVal,TimeData.timeH,LCDBuffer);
	F_Show_8_Lcd(blankVal,2,3,ShowHiByeVal,TimeData.timeL,LCDBuffer);
	F_showTimeClick();
}

void	F_CalChange(rt_uint32_t *Cal)
{
	*Cal = *Cal / 100000;
}

void	F_showCal(rt_uint32_t Cal)
{
	rt_uint8_t byte1,byte2;
	//Cal = Cal / 100000;
	
	F_CalChange(&Cal);
	
	if(Cal >= 100) 
	{
		F_HundredChange(&byte2,&byte1,Cal);
		F_Show_8_Lcd(blankVal,0,1,ShowNoHiByeVal,byte2,LCDBuffer);
		F_Show_8_Lcd(blankVal,2,3,ShowHiByeVal,byte1,LCDBuffer);
	} else {
		F_Show_8_Lcd(blankVal,2,3,ShowNoHiByeVal,Cal,LCDBuffer);
	}
	F_showCalDot();
}

void	F_showDistance(rt_uint32_t DistanceNum,rt_bool_t Unit)
{
	rt_uint8_t byte1,byte2;
	//  DistanceNum  單位是公分
	DistanceNum = DistanceNum / 100;  //轉換單位變公尺
	if(Unit == UintMetricVal) {
		DistanceNum = F_ChangeKmToMile(DistanceNum);  //轉換單位變英哩
	}
	
	if(DistanceNum > 9999) // 顯示限制
		DistanceNum = 9999;

	F_HundredChange(&byte2,&byte1,DistanceNum);
	
	if(byte2>0)
	{
		F_Show_8_Lcd(blankVal,8,9,ShowNoHiByeVal,byte2,LCDBuffer);
	}
	
	F_Show_8_Lcd(blankVal,10,11,ShowHiByeVal,byte1,LCDBuffer);	
	LCDBuffer[63] |= 0x4000000; 
	F_showDistanceDot();
}

void	F_showMatrixCal(rt_uint32_t Cal,rt_uint32_t CalHour)
{
	rt_uint8_t byte1,byte2;
	rt_coordinate_t coordinateTemp3,coordinateTemp2,coordinateTemp1;
	
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 17;
	F_ShowMatrixStringLcd(coordinateTemp1,M03,sizeof(M03),LCDBuffer);
	F_CalChange(&Cal);
	coordinateTemp3.x = blankVal;
	coordinateTemp3.y = blankVal;
	
	if(Cal >= 100) 
	{
		F_HundredChange(&byte2,&byte1,Cal);
		coordinateTemp2.x = 25;
		coordinateTemp2.y = 17;
		coordinateTemp1.x = 25+6;
		coordinateTemp1.y = 17;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,byte2,LCDBuffer);
		coordinateTemp2.x = 25+6+6;
		coordinateTemp2.y = 17;
		coordinateTemp1.x = 25+6+6+6;
		coordinateTemp1.y = 17;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,byte1,LCDBuffer);
	} else {
		coordinateTemp2.x = 25+6+6;
		coordinateTemp2.y = 17;
		coordinateTemp1.x = 25+6+6+6;
		coordinateTemp1.y = 17;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,Cal,LCDBuffer);
	}
	//=======================
	// Cal/Hour
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 8;
	F_ShowMatrixStringLcd(coordinateTemp1,M04,sizeof(M04),LCDBuffer);
	coordinateTemp3.x = blankVal;
	coordinateTemp3.y = blankVal;
	if(CalHour >= 100) 
	{
		F_HundredChange(&byte2,&byte1,CalHour);
		coordinateTemp2.x = 37;
		coordinateTemp2.y = 8;
		coordinateTemp1.x = 37+6;
		coordinateTemp1.y = 8;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,byte2,LCDBuffer);
		coordinateTemp2.x = 37+6+6;
		coordinateTemp2.y = 8;
		coordinateTemp1.x = 37+6+6+6;
		coordinateTemp1.y = 8;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,byte1,LCDBuffer);
	} else {
		coordinateTemp2.x = 37+6+6;
		coordinateTemp2.y = 8;
		coordinateTemp1.x = 37+6+6+6;
		coordinateTemp1.y = 8;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,CalHour,LCDBuffer);
	}
}

void	F_showIncAd(rt_uint8_t IncAdNum)
{
	F_Show_8_Lcd(1,2,3,ShowNoHiByeVal,IncAdNum,LCDBuffer);
}

void	F_showTargetIncAd(rt_uint8_t IncAdNum)
{
	F_Show_8_Lcd(5,6,7,ShowNoHiByeVal,IncAdNum,LCDBuffer);
}

void	F_showEngIncAdr1(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 19;
	coordinateTemp1.y = 21;
	F_ShowMatrixStringLcd(coordinateTemp1,M05,sizeof(M05),LCDBuffer);
}

void	F_showEngIncAdr2(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 19;
	coordinateTemp1.y = 21;
	F_ShowMatrixStringLcd(coordinateTemp1,M06,sizeof(M06),LCDBuffer);
}

void	F_showEngIncOk(void)
{
	rt_coordinate_t coordinateTemp1;
	rt_incline_eeprom_data_t	Temp;
	coordinateTemp1.x = 19;
	coordinateTemp1.y = 21;
	F_ShowMatrixStringLcd(coordinateTemp1,M07,sizeof(M07),LCDBuffer);

	rt_read_incline_eeprom_data(&Temp);
	F_Show_8_Lcd(5,6,7,ShowNoHiByeVal,Temp.incMaxAd,LCDBuffer);
	F_Show_8_Lcd(9,10,11,ShowNoHiByeVal,Temp.incMinAd,LCDBuffer);

}

void	F_showEngIncErr(void)
{
	rt_coordinate_t coordinateTemp1;
	rt_incline_eeprom_data_t	Temp;
	coordinateTemp1.x = 19;
	coordinateTemp1.y = 21;
	F_ShowMatrixStringLcd(coordinateTemp1,M08,sizeof(M08),LCDBuffer);
	
	rt_read_incline_eeprom_data(&Temp);
	F_Show_8_Lcd(5,6,7,ShowNoHiByeVal,Temp.incMaxAd,LCDBuffer);
	F_Show_8_Lcd(9,10,11,ShowNoHiByeVal,Temp.incMinAd,LCDBuffer);
}

void	F_showMatrixProfile(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M09,sizeof(M09),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M09,sizeof(M09),LCDBuffer);
}

void	F_showMatrixManual(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M10,sizeof(M10),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M10,sizeof(M10),LCDBuffer);
}

void	F_showMatrixHeart(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	rt_coordinate_t coordinateTemp1;
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M11,sizeof(M11),LCDBuffer);
		else {
			F_ShowMatrixStringLcdReverse(coordinate,M11,sizeof(M11),LCDBuffer);
			//點黑
			coordinateTemp1.x = 32;
			coordinateTemp1.y = (coordinate.y - 1);
			F_ShowMatrixLcdChossDot(coordinateTemp1,2,9,LCDBuffer);
			//點黑
		}
	coordinateTemp1.x = 35;
	coordinateTemp1.y = coordinate.y;
	if(Dot)
		F_ShowMatrixStringLcd(coordinateTemp1,M12,sizeof(M12),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinateTemp1,M12,sizeof(M12),LCDBuffer);
}

void	F_showMatrixFocus(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M13,sizeof(M13),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M13,sizeof(M13),LCDBuffer);
}

void	F_showMatrixMets(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M14,sizeof(M14),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M14,sizeof(M14),LCDBuffer);
}

void	F_showProfileReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showMatrixProfile(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showMatrixManual(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showMatrixHeart(coordinateTemp1,1);
}

void	F_showManualReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showMatrixProfile(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showMatrixManual(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showMatrixHeart(coordinateTemp1,1);
}

void	F_showHeartReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showMatrixProfile(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showMatrixManual(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showMatrixHeart(coordinateTemp1,0);
}

void	F_showFocusReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showMatrixManual(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showMatrixHeart(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showMatrixFocus(coordinateTemp1,0);
}

void	F_showMetsReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showMatrixHeart(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showMatrixFocus(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showMatrixMets(coordinateTemp1,0);
}

static void	F_showSetUser_1(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M26,sizeof(M26),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M26,sizeof(M26),LCDBuffer);
	}
}

static void	F_showSetUser_2(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M27,sizeof(M27),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M27,sizeof(M27),LCDBuffer);
	}
}

static void	F_showSetUser_3(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M28,sizeof(M28),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M28,sizeof(M28),LCDBuffer);
	}
}

static void	F_showSetUser_4(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M29,sizeof(M29),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M29,sizeof(M29),LCDBuffer);
	}
}

static void	F_showSetUser_5(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M30,sizeof(M30),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M30,sizeof(M30),LCDBuffer);
	}
}

static void	F_showSetUser_6(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M31,sizeof(M31),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M31,sizeof(M31),LCDBuffer);
	}
}

static void	F_showSetUser_7(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M32,sizeof(M32),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M32,sizeof(M32),LCDBuffer);
	}
}

static void	F_showSetUser_8(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M33,sizeof(M33),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M33,sizeof(M33),LCDBuffer);
	}
}

static void	F_showSetUser_9(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M34,sizeof(M34),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M34,sizeof(M34),LCDBuffer);
	}
}

static void	F_showSetUser_10(rt_coordinate_t coordinate,rt_user_name_detection_t userName,rt_uint8_t Dot)
{
	if(userName.User_DetectionFlg) {	
		// Name Data
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,userName.UserName,UserNaumSizeVal+1,LCDBuffer);
	} else {
		if(Dot)
			F_ShowMatrixStringLcd(coordinate,M35,sizeof(M35),LCDBuffer);
			else
				F_ShowMatrixStringLcdReverse(coordinate,M35,sizeof(M35),LCDBuffer);
	}
}

void	F_showUsers_1(rt_user_name_detection_t user_1,rt_user_name_detection_t user_2,rt_user_name_detection_t user_3)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_1(coordinateTemp1,user_1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_2(coordinateTemp1,user_2,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_3(coordinateTemp1,user_3,1);
}

void	F_showUsers_2(rt_user_name_detection_t user_1,rt_user_name_detection_t user_2,rt_user_name_detection_t user_3)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_1(coordinateTemp1,user_1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_2(coordinateTemp1,user_2,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_3(coordinateTemp1,user_3,1);
}

void	F_showUsers_3(rt_user_name_detection_t user_1,rt_user_name_detection_t user_2,rt_user_name_detection_t user_3)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_1(coordinateTemp1,user_1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_2(coordinateTemp1,user_2,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_3(coordinateTemp1,user_3,0);
}

void	F_showUsers_4(rt_user_name_detection_t user_2,rt_user_name_detection_t user_3,rt_user_name_detection_t user_4)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_2(coordinateTemp1,user_2,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_3(coordinateTemp1,user_3,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_4(coordinateTemp1,user_4,0);
}

void	F_showUsers_5(rt_user_name_detection_t user_3,rt_user_name_detection_t user_4,rt_user_name_detection_t user_5)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_3(coordinateTemp1,user_3,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_4(coordinateTemp1,user_4,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_5(coordinateTemp1,user_5,0);
}

void	F_showUsers_6(rt_user_name_detection_t user_4,rt_user_name_detection_t user_5,rt_user_name_detection_t user_6)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_4(coordinateTemp1,user_4,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_5(coordinateTemp1,user_5,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_6(coordinateTemp1,user_6,0);
}

void	F_showUsers_7(rt_user_name_detection_t user_5,rt_user_name_detection_t user_6,rt_user_name_detection_t user_7)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_5(coordinateTemp1,user_5,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_6(coordinateTemp1,user_6,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_7(coordinateTemp1,user_7,0);
}

void	F_showUsers_8(rt_user_name_detection_t user_6,rt_user_name_detection_t user_7,rt_user_name_detection_t user_8)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_6(coordinateTemp1,user_6,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_7(coordinateTemp1,user_7,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_8(coordinateTemp1,user_8,0);
}

void	F_showUsers_9(rt_user_name_detection_t user_7,rt_user_name_detection_t user_8,rt_user_name_detection_t user_9)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_7(coordinateTemp1,user_7,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_8(coordinateTemp1,user_8,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_9(coordinateTemp1,user_9,0);
}

void	F_showUsers_10(rt_user_name_detection_t user_8,rt_user_name_detection_t user_9,rt_user_name_detection_t user_10)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showSetUser_8(coordinateTemp1,user_8,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSetUser_9(coordinateTemp1,user_9,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showSetUser_10(coordinateTemp1,user_10,0);
}

void	F_showRollingHillGraph(void)
{
	rt_coordinate_t coordinateTemp1;
	//rt_uint8_t	adr;
	
	coordinateTemp1.x = 11;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M15,sizeof(M15),LCDBuffer);
	
	coordinateTemp1.x = 19;
	coordinateTemp1.y = 16;
	F_ShowMatrixStringLcd(coordinateTemp1,M16,sizeof(M16),LCDBuffer);
	
	//for(adr = 0; adr < 60 ; adr++) {
	//	F_ShowMatrixLcd(adr,P03[adr],15,LCDBuffer);
	//}
}

void	F_showPeakGraph(void)
{
	rt_coordinate_t coordinateTemp1;
	//rt_uint8_t	adr;
	coordinateTemp1.x = 18;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M17,sizeof(M17),LCDBuffer);
	
	//for(adr = 0; adr < 60 ; adr++) {
	//	F_ShowMatrixLcd(adr,P04[adr],20,LCDBuffer);
	//}
}

void	F_showPlateauGraph(void)
{
	rt_coordinate_t coordinateTemp1;
	//rt_uint8_t	adr;
	coordinateTemp1.x = 10;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M18,sizeof(M18),LCDBuffer);
	//for(adr = 0; adr < 60 ; adr++) {
	//	F_ShowMatrixLcd(adr,P05[adr],20,LCDBuffer);
	//}
}

void	F_showClimbGraph(void)
{
	rt_coordinate_t coordinateTemp1;
	//rt_uint8_t	adr;	
	coordinateTemp1.x = 16;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M19,sizeof(M19),LCDBuffer);
	//for(adr = 0; adr < 60 ; adr++) {
	//	F_ShowMatrixLcd(adr,P06[adr],19,LCDBuffer);
	//}
}

void	F_showInterval_1_Graph(void)
{
	rt_coordinate_t coordinateTemp1;
	//rt_uint8_t	adr;	
	coordinateTemp1.x = 3;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M20,sizeof(M20),LCDBuffer);
	//for(adr = 0; adr < 60 ; adr++) {
	//	F_ShowMatrixLcd(adr,P07[adr],16,LCDBuffer);
	//}
}

void	F_showInterval_2_Graph(void)
{
	rt_coordinate_t coordinateTemp1;
	//rt_uint8_t	adr;	
	coordinateTemp1.x = 3;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M21,sizeof(M21),LCDBuffer);
	//for(adr = 0; adr < 60 ; adr++) {
	//	F_ShowMatrixLcd(adr,P08[adr],17,LCDBuffer);
	//}
}

void	F_showProfileSetLeve(rt_uint8_t Level)
{
	rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
	coordinateTemp1.x = 12;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M22,sizeof(M22),LCDBuffer);
	
	coordinateTemp3.x = blankVal;
	coordinateTemp3.y = blankVal;
	
	coordinateTemp2.x = 44;
	coordinateTemp2.y = 24;
	coordinateTemp1.x = 44+6;
	coordinateTemp1.y = 24;
	
	F_ShowMatrixNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,Level,LCDBuffer);
}

void	F_showProfileSetWorkoutTime(rt_time_data_t TimeData)
{
	rt_coordinate_t coordinateTemp3,coordinateTemp2,coordinateTemp1;
	coordinateTemp1.x = 10;
	coordinateTemp1.y = 24;
	F_ShowMatrixStringLcd(coordinateTemp1,M23,sizeof(M23),LCDBuffer);
	
	coordinateTemp1.x = 18;
	coordinateTemp1.y = 16;
	F_ShowMatrixStringLcd(coordinateTemp1,M02,sizeof(M02),LCDBuffer);
	//==============
	coordinateTemp3. x = blankVal;
	coordinateTemp3.y = blankVal;
	coordinateTemp2.x = 11;
	coordinateTemp2.y = 2;
	coordinateTemp1.x = 11+9;
	coordinateTemp1.y = 2;
	
	F_ShowMatrixBigNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeH,LCDBuffer);

	//帽號
	coordinateTemp1.x = 29;
	coordinateTemp1.y = 1;
	F_ShowMatrixLcdChossReverse(coordinateTemp1,2,14,0x1CCF,LCDBuffer);
	//帽號
	
	coordinateTemp2.x = 32;
	coordinateTemp2.y = 2;
	coordinateTemp1.x = 32+9;
	coordinateTemp1.y = 2;

	F_ShowMatrixBigNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeL,LCDBuffer);
}

void	F_ShowProgfileGraph(rt_uint8_t *LevelData,rt_uint8_t DataSize,rt_uint8_t Mode,rt_uint8_t SegmentsAdr,rt_bool_t FlickerFlg)
{
	rt_uint8_t adr,GraphTemp;
	rt_uint32_t	Graph;
	for(adr = 0; adr < DataSize ; adr++) {
		GraphTemp = *(LevelData + adr);
		switch(GraphTemp) {
			case	1:
				Graph = 0x00001;
				break;
			case	2:
				Graph = 0x00003;
				break;
			case	3:
				Graph = 0x00007;
				break;
			case	4:
				Graph = 0x0000F;
				break;
			case	5:
				Graph = 0x0001F;
				break;
			case	6:
				Graph = 0x0003F;
				break;
			case	7:
				Graph = 0x0007F;
				break;
			case	8:
				Graph = 0x000FF;
				break;
			case	9:
				Graph = 0x001FF;
				break;
			case	10:
				Graph = 0x003FF;
				break;
			case	11:
				Graph = 0x007FF;
				break;
			case	12:
				Graph = 0x00FFF;
				break;
			case	13:
				Graph = 0x01FFF;
				break;
			case	14:
				Graph = 0x03FFF;
				break;
			case	15:
				Graph = 0x07FFF;
				break;
			case	16:
				Graph = 0x0FFFF;
				break;
			case	17:
				Graph = 0x1FFFF;
				break;
			case	18:
				Graph = 0x3FFFF;
				break;
			case	19:
				Graph = 0x7FFFF;
				break;
			case	20:
				Graph = 0xFFFFF;
				break;
		}
		if(Mode == CommonModeVal) {
			F_ShowMatrixLcd(adr,Graph,20,LCDBuffer);
		} else {
			if(SegmentsAdr == adr) {
				// 閃爍 
				if(FlickerFlg)
					F_ShowMatrixLcd(adr,Graph,20,LCDBuffer);
			} else {
				F_ShowMatrixLcd(adr,Graph,20,LCDBuffer);
			}
		}
	}
}

void	F_showNoData(void)
{
	rt_coordinate_t coordinateTemp1;
	
	coordinateTemp1.x = 10;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M36,sizeof(M36),LCDBuffer);
}

#define UserNameAdr			6
void	F_showSetUserName(rt_uint8_t adr,rt_uint8_t *data,rt_uint8_t size)
{
	rt_coordinate_t coordinateTemp1,coordinateTemp2;
	rt_uint8_t i;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 22;
	F_ShowMatrixStringLcd(coordinateTemp1,M37,sizeof(M37),LCDBuffer);
	
	//========
	coordinateTemp1.x = (UserNameAdr * 0);
	coordinateTemp1.y = 9;
	if(adr == 0) {
		coordinateTemp2.x = coordinateTemp1.x;
		coordinateTemp2.y = coordinateTemp1.y - 1;
		F_ShowMatrixLcdChossDot(coordinateTemp2,6,9,LCDBuffer);
		F_ShowMatrixFontLcdReverse(coordinateTemp1,*(data),LCDBuffer);
	} else {
		F_ShowMatrixFontLcd(coordinateTemp1,*(data),LCDBuffer);
	}
	//========
	for(i=1 ; i < UserNaumSizeVal ; i++) {
		coordinateTemp1.x = (UserNameAdr * i);
		coordinateTemp1.y = 9;
		if(adr == i) {
			coordinateTemp2.x = coordinateTemp1.x - 1;
			coordinateTemp2.y = coordinateTemp1.y - 1;
			F_ShowMatrixLcdChossDot(coordinateTemp2,7,9,LCDBuffer);
			F_ShowMatrixFontLcdReverse(coordinateTemp1,*(data + i),LCDBuffer);
		} else {
			F_ShowMatrixFontLcd(coordinateTemp1,*(data + i),LCDBuffer);
		}
	}
}

void	F_showUserName(rt_uint8_t *data,rt_uint8_t size)
{
	rt_coordinate_t coordinateTemp1;
	rt_uint8_t i;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 22;
	F_ShowMatrixStringLcd(coordinateTemp1,M37,sizeof(M37),LCDBuffer);

	for(i=0 ; i < 10 ; i++) {
		coordinateTemp1.x = (UserNameAdr * i);
		coordinateTemp1.y = 9;
		F_ShowMatrixFontLcd(coordinateTemp1,*(data + i),LCDBuffer);
	}	
}

void	F_showSetSeatPosition(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 20;
		coordinateTemp1.y = 23;
		F_ShowMatrixStringLcd(coordinateTemp1,M38,sizeof(M38),LCDBuffer);
		coordinateTemp1.x = 17;
		coordinateTemp1.y = 13;
		F_ShowMatrixStringLcd(coordinateTemp1,M39,sizeof(M39),LCDBuffer);
		coordinateTemp1.x = 6;
		coordinateTemp1.y = 3;
		F_ShowMatrixStringLcd(coordinateTemp1,M40,sizeof(M40),LCDBuffer);
}

static void		F_showYesChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M48,sizeof(M48),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M48,sizeof(M48),LCDBuffer);
}

static void		F_showNoChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M49,sizeof(M49),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M49,sizeof(M49),LCDBuffer);
}
static void	F_showSeatPositionMove(void)
{
		rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
		coordinateTemp1.x = 17;
		coordinateTemp1.y = 23;
		F_ShowMatrixStringLcd(coordinateTemp1,M39,sizeof(M39),LCDBuffer);
		coordinateTemp1.x = 6;
		coordinateTemp1.y = 13;
		F_ShowMatrixStringLcd(coordinateTemp1,M40,sizeof(M40),LCDBuffer);	
	
		coordinateTemp3.x = blankVal;
		coordinateTemp3.y = blankVal;
		coordinateTemp2.x = 6;
		coordinateTemp2.y = 3;
		coordinateTemp1.x = 6+6;
		coordinateTemp1.y = 3;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,rt_inc_read_adr_number(),LCDBuffer);
		coordinateTemp1.x = 6+6+6;
		coordinateTemp1.y = 3;
		F_ShowMatrixStringLcd(coordinateTemp1,M78,sizeof(M78),LCDBuffer);
}

static void	F_ShowSeatLockActivated(void)
{
		rt_coordinate_t coordinateTemp1;
		
		coordinateTemp1.x = 0;
		coordinateTemp1.y = 23;
		F_ShowMatrixStringLcd(coordinateTemp1,M97,sizeof(M97),LCDBuffer);

		coordinateTemp1.x = 0;
		coordinateTemp1.y = 13;
		F_ShowMatrixStringLcd(coordinateTemp1,M98,sizeof(M98),LCDBuffer);
}

static void	F_ShowSeatLock(rt_uint8_t YesNo)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 12;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M99,sizeof(M99),LCDBuffer);
	coordinateTemp1.x = 12;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M100,sizeof(M100),LCDBuffer);
	if(YesNo) {
		// Yes	
		coordinateTemp1.x = 8;
		coordinateTemp1.y = 3;	
		F_showYesChoose(coordinateTemp1,0);
		coordinateTemp1.x = 36;
		coordinateTemp1.y = 3;	
		F_showNoChoose(coordinateTemp1,1);
	} else {
		// No	
		coordinateTemp1.x = 8;
		coordinateTemp1.y = 3;	
		F_showYesChoose(coordinateTemp1,1);
		coordinateTemp1.x = 36;
		coordinateTemp1.y = 3;	
		F_showNoChoose(coordinateTemp1,0);
	}
}

void	F_showSeatPositionStatus(rt_uint8_t event)
{
		switch(event) {
			case	TemporarySeatPositionMoveEventVal:
				F_showSeatPositionMove();
				break;
			case	TemporarySeatPositionUnlockEventVal:
				F_ShowSeatLockActivated();
				break;
			case	TemporarySeatPositionUnlockYesEventVal:
				F_ShowSeatLock(1);
				break;
			case	TemporarySeatPositionUnlockNoEventVal:
				F_ShowSeatLock(0);
				break;
		}
}

void	F_showGender(rt_uint8_t Gender)
{
		rt_coordinate_t coordinateTemp1;

		if(Gender) {
			coordinateTemp1.x = 12;
			coordinateTemp1.y = 18;
			F_ShowMatrixStringLcdReverse(coordinateTemp1,M41,sizeof(M41),LCDBuffer);
			coordinateTemp1.x = 18;
			coordinateTemp1.y = 7;
			F_ShowMatrixStringLcd(coordinateTemp1,M42,sizeof(M42),LCDBuffer);
		} else {
			coordinateTemp1.x = 12;
			coordinateTemp1.y = 18;
			F_ShowMatrixStringLcd(coordinateTemp1,M41,sizeof(M41),LCDBuffer);
			coordinateTemp1.x = 18;
			coordinateTemp1.y = 7;
			F_ShowMatrixStringLcdReverse(coordinateTemp1,M42,sizeof(M42),LCDBuffer);	
		}
}

void	F_showSetAge(rt_uint8_t Age)
{
		rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
		coordinateTemp1.x = 12;
		coordinateTemp1.y = 13;
		F_ShowMatrixStringLcd(coordinateTemp1,M43,sizeof(M43),LCDBuffer);
	
		coordinateTemp3.x = blankVal;
		coordinateTemp3.y = blankVal;
	
		coordinateTemp2.x = 36;
		coordinateTemp2.y = 13;
	
		coordinateTemp1.x = 42;
		coordinateTemp1.y = 13;
	
		F_ShowMatrixNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,Age,LCDBuffer);
}

void	F_showSetWeight(rt_uint16_t Weight)
{
		rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
		coordinateTemp1.x = 13;
		coordinateTemp1.y = 20;
		F_ShowMatrixStringLcd(coordinateTemp1,M44,sizeof(M44),LCDBuffer);
	
		coordinateTemp3.x = 23;
		coordinateTemp3.y = 8;
	
		coordinateTemp2.x = 29;
		coordinateTemp2.y = 8;
	
		coordinateTemp1.x = 35;
		coordinateTemp1.y = 8;
	
		F_ShowMatrixNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,Weight,LCDBuffer);
}

void	F_showTimeMilesCal(rt_time_data_t TimeData,rt_uint16_t	KM,rt_uint32_t	Cal,rt_bool_t UnitFlg)
{
		rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
		coordinateTemp1.x = 0;
		coordinateTemp1.y = 23;
		F_ShowMatrixStringLcd(coordinateTemp1,M103,sizeof(M103),LCDBuffer);
	
		coordinateTemp3.x = blankVal;
		coordinateTemp3.y = blankVal;
		coordinateTemp2.x = 24;
		coordinateTemp2.y = 23;
		coordinateTemp1.x = 24+6;
		coordinateTemp1.y = 23;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeH,LCDBuffer);
		coordinateTemp2.x = 42;
		coordinateTemp2.y = 23;
		coordinateTemp1.x = 42+6;
		coordinateTemp1.y = 23;
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,TimeData.timeL,LCDBuffer);
		
		coordinateTemp1.x = 20;
		coordinateTemp1.y = 13;
	
		if(UnitFlg == UintMetricVal) {
			F_ShowMatrixStringLcd(coordinateTemp1,M104,sizeof(M104),LCDBuffer);
		} else {
			F_ShowMatrixStringLcd(coordinateTemp1,M45,sizeof(M45),LCDBuffer);
		}
		
		coordinateTemp3.x = 0;
		coordinateTemp3.y = 13;
		coordinateTemp2.x = 0+6;
		coordinateTemp2.y = 13;
		coordinateTemp1.x = 0+6+6;
		coordinateTemp1.y = 13;
		//====
		KM = KM / 10; // 公尺 轉 公里
		if(UnitFlg == UintMetricVal) {
			KM = F_ChangeKmToMile(KM);
		}
		if(KM > 999)	
			KM = 999;
		//====
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,KM,LCDBuffer);	
	
		coordinateTemp1.x = 32;
		coordinateTemp1.y = 3;
		F_ShowMatrixStringLcd(coordinateTemp1,M46,sizeof(M46),LCDBuffer);
		
		coordinateTemp3.x = blankVal;
		coordinateTemp3.y = blankVal;
		coordinateTemp2.x = 18;
		coordinateTemp2.y = 3;
		coordinateTemp1.x = 18+6;
		coordinateTemp1.y = 3;
		
		if(Cal > 99) {
			F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,(Cal % 100),LCDBuffer);
			coordinateTemp3.x = 0;
			coordinateTemp3.y = 3;
			coordinateTemp2.x = 0+6;
			coordinateTemp2.y = 3;
			coordinateTemp1.x = 0+6+6;
			coordinateTemp1.y = 3;
			F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,(Cal / 100),LCDBuffer);
		} else {
			F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,Cal,LCDBuffer);	
		}
}

void	F_showResetDataYesNo(rt_uint8_t YesNo)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 0;
		coordinateTemp1.y = 22;
		F_ShowMatrixStringLcd(coordinateTemp1,M47,sizeof(M47),LCDBuffer);
		if(YesNo) {
			// Yes
			coordinateTemp1.x = 6;
			coordinateTemp1.y = 12;
			F_showYesChoose(coordinateTemp1,0);
			coordinateTemp1.x = 9;
			coordinateTemp1.y = 2;
			F_showNoChoose(coordinateTemp1,1);
		} else {
			// No
			coordinateTemp1.x = 6;
			coordinateTemp1.y = 12;
			F_showYesChoose(coordinateTemp1,1);
			coordinateTemp1.x = 9;
			coordinateTemp1.y = 2;
			F_showNoChoose(coordinateTemp1,0);
		}
}

static void		F_showManualFartburnChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) {
		F_ShowMatrixStringLcd(coordinate,M50,sizeof(M50),LCDBuffer);
		coordinate.x = 21;
		F_ShowMatrixStringLcd(coordinate,M51,sizeof(M51),LCDBuffer);
	}
		else {
			F_ShowMatrixStringLcdReverse(coordinate,M50,sizeof(M50),LCDBuffer);	
			coordinate.x = 21;
			F_ShowMatrixStringLcdReverse(coordinate,M51,sizeof(M51),LCDBuffer);	
		}
}

static void		F_showManualCardioChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M52,sizeof(M52),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M52,sizeof(M52),LCDBuffer);	
}

static void		F_showManualTargetChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M53,sizeof(M53),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M53,sizeof(M53),LCDBuffer);	
}

void	F_showFatburn(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showManualFartburnChoose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showManualCardioChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showManualTargetChoose(coordinateTemp1,1);
}

void	F_showCardio(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showManualFartburnChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showManualCardioChoose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showManualTargetChoose(coordinateTemp1,1);
}

void	F_showTarget(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showManualFartburnChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showManualCardioChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showManualTargetChoose(coordinateTemp1,0);
}

void	F_showSetTargetNum(rt_uint8_t target,rt_uint8_t Dot)
{
	rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
	rt_uint8_t Temp;
	rt_uint8_t	adr;
	
	coordinateTemp1.x = 7;
	coordinateTemp1.y = 22;
	F_ShowMatrixStringLcd(coordinateTemp1,M53,sizeof(M53),LCDBuffer);
	
	coordinateTemp1.x = 4;
	coordinateTemp1.y = 5;
	Temp = sizeof(P02) / 2;
	for(adr = 0; adr < Temp ; adr++) {
		F_ShowMatrixLcdChossReverse(coordinateTemp1,1,12,P02[adr],LCDBuffer);
		coordinateTemp1.x++;
	}
	coordinateTemp3.x = 22;
	coordinateTemp3.y = 5;
	coordinateTemp2.x = 22 + 9;
	coordinateTemp2.y = 5;
	coordinateTemp1.x = 22 + 9 + 9;
	coordinateTemp1.y = 5;
	if(Dot) {
		F_ShowMatrixBigNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,target,LCDBuffer);
	} else {
		F_ShowMatrixBigNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,target,LCDBuffer);
	}
}

void	F_ShowUnit(void)
{
	rt_coordinate_t coordinateTemp;
	
	coordinateTemp.x = 10;
	coordinateTemp.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp,M54,sizeof(M54),LCDBuffer);
	coordinateTemp.x = 46;
	coordinateTemp.y = 20;
	F_ShowMatrixFontLcd(coordinateTemp,'/',LCDBuffer);
	coordinateTemp.x = 10;
	coordinateTemp.y = 10;
	F_ShowMatrixStringLcd(coordinateTemp,M55,sizeof(M55),LCDBuffer);
}

void	F_ShowSoftwareVersion(void)
{
	rt_coordinate_t coordinateTemp;
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp,M56,sizeof(M56),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 10;
	F_ShowMatrixStringLcd(coordinateTemp,M57,sizeof(M57),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 0;
	F_ShowMatrixStringLcd(coordinateTemp,M58,sizeof(M58),LCDBuffer);
	
	coordinateTemp.x = 18;
	coordinateTemp.y = 0;
	F_ShowMatrixFontLcd(coordinateTemp,'1',LCDBuffer);
	
	coordinateTemp.x = 24;
	coordinateTemp.y = 0;
	F_ShowMatrixLcdChossDot(coordinateTemp,1,1,LCDBuffer);
	
	coordinateTemp.x = 26;
	coordinateTemp.y = 0;
	F_ShowMatrixFontLcd(coordinateTemp,'0',LCDBuffer);
}

void	F_ShowBeeperTest(void)
{
	rt_coordinate_t coordinateTemp;
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp,M59,sizeof(M59),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 10;
	F_ShowMatrixStringLcd(coordinateTemp,M60,sizeof(M60),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 0;
	F_ShowMatrixStringLcd(coordinateTemp,M61,sizeof(M61),LCDBuffer);
}

void	F_ShowDisplayTest(void)
{
	rt_coordinate_t coordinateTemp;
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp,M62,sizeof(M62),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 10;
	F_ShowMatrixStringLcd(coordinateTemp,M60,sizeof(M60),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 0;
	F_ShowMatrixStringLcd(coordinateTemp,M61,sizeof(M61),LCDBuffer);
}

void	F_ShowKeypedTest(void)
{
	rt_coordinate_t coordinateTemp;
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp,M63,sizeof(M63),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 10;
	F_ShowMatrixStringLcd(coordinateTemp,M60,sizeof(M60),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 0;
	F_ShowMatrixStringLcd(coordinateTemp,M61,sizeof(M61),LCDBuffer);
}

void	F_ShowSeatLiftInstall(void)
{
	rt_coordinate_t coordinateTemp;
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp,M101,sizeof(M101),LCDBuffer);
	
	coordinateTemp.x = 0;
	coordinateTemp.y = 10;
	F_ShowMatrixStringLcd(coordinateTemp,M102,sizeof(M102),LCDBuffer);
}

static void		F_showMetricChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M54,sizeof(M54),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M54,sizeof(M54),LCDBuffer);	
}

static void		F_showEnglishChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M55,sizeof(M55),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M55,sizeof(M55),LCDBuffer);	
}

void	F_ShowChooseMetric(void)
{
	rt_coordinate_t coordinateTemp;
	coordinateTemp.x = 10;
	coordinateTemp.y = 20;
	F_showMetricChoose(coordinateTemp,0);
	coordinateTemp.x = 10;
	coordinateTemp.y = 10;
	F_showEnglishChoose(coordinateTemp,1);
}

void	F_ShowChooseEnglish(void)
{
	rt_coordinate_t coordinateTemp;
	coordinateTemp.x = 10;
	coordinateTemp.y = 20;
	F_showMetricChoose(coordinateTemp,1);
	coordinateTemp.x = 10;
	coordinateTemp.y = 10;
	F_showEnglishChoose(coordinateTemp,0);
}

static void		F_showBz1Choose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M64,sizeof(M64),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M64,sizeof(M64),LCDBuffer);	
}

static void		F_showBz2Choose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M65,sizeof(M65),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M65,sizeof(M65),LCDBuffer);	
}

static void		F_showBz3Choose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M66,sizeof(M66),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M66,sizeof(M66),LCDBuffer);	
}

void	F_ShowChooseBz1(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showBz1Choose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showBz2Choose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showBz3Choose(coordinateTemp1,1);
}

void	F_ShowChooseBz2(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showBz1Choose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showBz2Choose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showBz3Choose(coordinateTemp1,1);
}

void	F_ShowChooseBz3(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showBz1Choose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showBz2Choose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showBz3Choose(coordinateTemp1,0);
}

void	F_ShowKeyNum(rt_uint8_t	Num)
{
		rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_ShowMatrixStringLcd(coordinateTemp1,M67,sizeof(M67),LCDBuffer);
	
		coordinateTemp3.x = blankVal;
		coordinateTemp3.y = blankVal;
	
		coordinateTemp2.x = 44;
		coordinateTemp2.y = 23;
	
		coordinateTemp1.x = 44+6;
		coordinateTemp1.y = 23;
	
		F_ShowMatrixNumProcess(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowHiByeVal,Num,LCDBuffer);
}

void	F_Show_8_DotDisplay(rt_uint8_t	Num)
{
	rt_uint8_t	adr;
		F_showTimeDot();
		F_showRpmDot();
		F_showCalDot();
		F_showResistanceDot();
		F_showCalHrDot();
		F_showHeartRateDot();
		F_showDistanceDot();
		F_showTimeClick();
		F_show_8_Dot();
		for(adr=0 ; adr < 12 ; adr++) {
			F_Show_8_FontLcd(adr,Num,LCDBuffer);
		}
}

void	F_ShowMatrixDotDisplayTest(rt_uint32_t	Num)
{
	rt_uint8_t	adr;
	for(adr=0 ; adr < 60 ; adr++) {
		F_ShowMatrixLcd(adr,Num,32,LCDBuffer);
	}
}

void	F_ShowEepromErr(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 20;
	F_ShowMatrixStringLcd(coordinateTemp1,M68,sizeof(M68),LCDBuffer);
}

static void		F_showTotalBodyChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	rt_coordinate_t coordinateTemp1;
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M69,sizeof(M69),LCDBuffer);
		else {
			F_ShowMatrixStringLcdReverse(coordinate,M69,sizeof(M69),LCDBuffer);
			//點黑
			coordinateTemp1.x = 32;
			coordinateTemp1.y = (coordinate.y - 1);
			F_ShowMatrixLcdChossDot(coordinateTemp1,2,9,LCDBuffer);
			//點黑
		}
	coordinateTemp1.x = 35;
	coordinateTemp1.y = coordinate.y;
	if(Dot)
		F_ShowMatrixStringLcd(coordinateTemp1,M70,sizeof(M70),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinateTemp1,M70,sizeof(M70),LCDBuffer);
		
}

static void		F_showArmsChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M71,sizeof(M71),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M71,sizeof(M71),LCDBuffer);	
}

static void		F_showLegsChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M72,sizeof(M72),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M72,sizeof(M72),LCDBuffer);	
}

void	F_ShowChooseTotalBody(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showTotalBodyChoose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showArmsChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showLegsChoose(coordinateTemp1,1);
}

void	F_ShowChooseArms(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showTotalBodyChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showArmsChoose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showLegsChoose(coordinateTemp1,1);
}

void	F_ShowChooseLegs(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showTotalBodyChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showArmsChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showLegsChoose(coordinateTemp1,0);
}

void	F_ShowMaximumResistanceLevel(rt_uint8_t Level)
{
		rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;;
		coordinateTemp1.x = 8;
		coordinateTemp1.y = 22;
		F_ShowMatrixStringLcd(coordinateTemp1,M73,sizeof(M73),LCDBuffer);
		coordinateTemp1.x = 0;
		coordinateTemp1.y = 13;
		F_ShowMatrixStringLcd(coordinateTemp1,M74,sizeof(M74),LCDBuffer);
		coordinateTemp1.x = 10;
		coordinateTemp1.y = 4;
		F_ShowMatrixStringLcd(coordinateTemp1,M22,sizeof(M22),LCDBuffer);
		coordinateTemp3.x = blankVal;
		coordinateTemp3.y = blankVal;	
		coordinateTemp2.x = 41;
		coordinateTemp2.y = 4;
		coordinateTemp1.x = 41+6;
		coordinateTemp1.y = 4;
		F_ShowMatrixNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,Level,LCDBuffer);
}

static void		F_showStartChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M75,sizeof(M75),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M75,sizeof(M75),LCDBuffer);	
}

static void		F_showSettingsChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	if(Dot) 
		F_ShowMatrixStringLcd(coordinate,M76,sizeof(M76),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinate,M76,sizeof(M76),LCDBuffer);	
}

static void	F_showUserTotalChoose(rt_coordinate_t coordinate,rt_uint8_t Dot)
{
	rt_coordinate_t coordinateTemp1;
	if(Dot)
		F_ShowMatrixStringLcd(coordinate,M77,sizeof(M77),LCDBuffer);
		else {
			F_ShowMatrixStringLcdReverse(coordinate,M77,sizeof(M77),LCDBuffer);
			//點黑
			coordinateTemp1.x = 26;
			coordinateTemp1.y = (coordinate.y - 1);
			F_ShowMatrixLcdChossDot(coordinateTemp1,2,9,LCDBuffer);
			//點黑
		}
	coordinateTemp1.x = 29;
	coordinateTemp1.y = coordinate.y;
	if(Dot)
		F_ShowMatrixStringLcd(coordinateTemp1,M69,sizeof(M69),LCDBuffer);
		else
			F_ShowMatrixStringLcdReverse(coordinateTemp1,M69,sizeof(M69),LCDBuffer);
}

void	F_ShowStartReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showStartChoose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSettingsChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showUserTotalChoose(coordinateTemp1,1);
}

void	F_ShowSettingsReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showStartChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSettingsChoose(coordinateTemp1,0);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showUserTotalChoose(coordinateTemp1,1);
}

void	F_ShowUserTotalReverse(void)
{
		rt_coordinate_t coordinateTemp1;
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 23;
		F_showStartChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 13;
		F_showSettingsChoose(coordinateTemp1,1);
		coordinateTemp1.x = 2;
		coordinateTemp1.y = 3;
		F_showUserTotalChoose(coordinateTemp1,0);
}

static	void	F_ShowHandlesUp(void)
{
	rt_uint8_t	adr;
	for(adr = 0; adr < 11; adr++) {
		F_ShowMatrixLcd(adr,0x03,2,LCDBuffer);
	}
}

static	void	F_ShowHandlesDown(void)
{
	rt_uint8_t	adr;
	for(adr = 13; adr < 28; adr++) {
		F_ShowMatrixLcd(adr,0x03,2,LCDBuffer);
	}
}

static	void	F_ShowFeetOnPedals(void)
{
	rt_uint8_t	adr;
	for(adr = 30; adr < 45; adr++) {
		F_ShowMatrixLcd(adr,0x03,2,LCDBuffer);
	}
}

static	void	F_ShowFeetOnPegs(void)
{
	rt_uint8_t	adr;
	for(adr = 47; adr < 60; adr++) {
		F_ShowMatrixLcd(adr,0x03,2,LCDBuffer);
	}
}

void	F_ShowAndPuseWArmsLegs(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M79,sizeof(M79),LCDBuffer);
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M80,sizeof(M80),LCDBuffer);
}

void	F_ShowAndPuseWithArms(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M81,sizeof(M81),LCDBuffer);
	coordinateTemp1.x = 18;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M82,sizeof(M82),LCDBuffer);
}

void	F_ShowPalmsUpBiceps(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M83,sizeof(M83),LCDBuffer);
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M85,sizeof(M85),LCDBuffer);
}

void	F_ShowPalmsDownTriceps(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M84,sizeof(M84),LCDBuffer);
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M86,sizeof(M86),LCDBuffer);
}

void	F_ShowPushWithToes(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M88,sizeof(M88),LCDBuffer);
	coordinateTemp1.x = 18;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M89,sizeof(M89),LCDBuffer);
}

void	F_ShowPushWithHeels(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M88,sizeof(M88),LCDBuffer);
	coordinateTemp1.x = 12;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M90,sizeof(M90),LCDBuffer);
}

void	F_ShowPushAndPull(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M93,sizeof(M93),LCDBuffer);
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M94,sizeof(M94),LCDBuffer);
}

void	F_ShowRightLegOnly(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M91,sizeof(M91),LCDBuffer);
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M92,sizeof(M92),LCDBuffer);
}

void	F_ShowLeftLegOnly(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M95,sizeof(M95),LCDBuffer);
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 13;
	F_ShowMatrixStringLcd(coordinateTemp1,M92,sizeof(M92),LCDBuffer);
}

void	F_ShowNoArms(void)
{
	rt_coordinate_t coordinateTemp1;
	coordinateTemp1.x = 0;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M87,sizeof(M87),LCDBuffer);
}

void	F_ShowTotalBodyFocus(rt_uint8_t FocusSegment)
{
	FocusSegment = FocusSegment % 8;
		switch(FocusSegment) {
			case	0:
				F_ShowHandlesUp();
				F_ShowFeetOnPedals();	
				F_ShowAndPuseWArmsLegs();
				break;
			case	1:
				F_ShowHandlesUp();
				F_ShowFeetOnPedals();
				F_ShowAndPuseWArmsLegs();
				break;
			case	2:
				F_ShowHandlesUp();
				F_ShowFeetOnPegs();
				F_ShowAndPuseWithArms();
				break;
			case	3:
				F_ShowHandlesUp();
				F_ShowFeetOnPegs();
				F_ShowAndPuseWithArms();
				break;
			case	4:
				F_ShowHandlesDown();
				F_ShowFeetOnPedals();
				F_ShowPalmsUpBiceps();
				break;
			case	5:
				F_ShowHandlesDown();
				F_ShowFeetOnPedals();
				F_ShowPalmsDownTriceps();
				break;
			case	6:
				F_ShowHandlesDown();
				F_ShowFeetOnPegs();
				F_ShowPalmsUpBiceps();
				break;
			case	7:
				F_ShowHandlesDown();
				F_ShowFeetOnPegs();
				F_ShowPalmsDownTriceps();
				break;
		}
}

void	F_ShowArmsFocus(rt_uint8_t FocusSegment)
{
	FocusSegment = FocusSegment % 8;
		switch(FocusSegment) {
			case	0:
				F_ShowHandlesUp();
				F_ShowFeetOnPegs();
				F_ShowAndPuseWithArms();
				break;
			case	1:
				F_ShowHandlesUp();
				F_ShowFeetOnPegs();
				F_ShowAndPuseWithArms();
				break;
			case	2:
				F_ShowHandlesUp();
				F_ShowFeetOnPegs();
				F_ShowAndPuseWithArms();
				break;
			case	3:
				F_ShowHandlesUp();
				F_ShowFeetOnPegs();
				F_ShowAndPuseWithArms();
				break;
			case	4:
				F_ShowHandlesDown();
				F_ShowFeetOnPegs();
				F_ShowPushAndPull();
				break;
			case	5:
				F_ShowHandlesDown();
				F_ShowFeetOnPegs();
				F_ShowPalmsUpBiceps();
				break;
			case	6:
				F_ShowHandlesDown();
				F_ShowFeetOnPegs();
				F_ShowPalmsDownTriceps();
				break;
			case	7:
				F_ShowHandlesDown();
				F_ShowFeetOnPegs();
				F_ShowPalmsDownTriceps();
				break;
		}
}

void	F_ShowLegsFocus(rt_uint8_t FocusSegment)
{
	FocusSegment = FocusSegment % 8;
		switch(FocusSegment) {
			case	0:
				F_ShowFeetOnPedals();
				F_ShowNoArms();
				break;
			case	1:
				F_ShowFeetOnPedals();
				F_ShowPushWithToes();
				break;
			case	2:
				F_ShowFeetOnPedals();
				F_ShowPushWithHeels();
				break;
			case	3:
				F_ShowFeetOnPedals();
				F_ShowPushWithToes();
				break;
			case	4:
				F_ShowFeetOnPedals();
				F_ShowPushWithHeels();
				break;
			case	5:
			F_ShowRightLegOnly();
				break;
			case	6:
				F_ShowLeftLegOnly();
				break;
			case	7:
				F_ShowFeetOnPedals();
				F_ShowPalmsDownTriceps();
				break;
		}
}

void	F_ShowMexLevel(rt_uint8_t MexLevel)
{
	rt_coordinate_t coordinateTemp1,coordinateTemp2,coordinateTemp3;
	coordinateTemp1.x = 2;
	coordinateTemp1.y = 23;
	F_ShowMatrixStringLcd(coordinateTemp1,M96,sizeof(M96),LCDBuffer);
	coordinateTemp3.x = blankVal;
	coordinateTemp3.y = blankVal;
	coordinateTemp2.x = 25;
	coordinateTemp2.y = 13;
	coordinateTemp1.x = 25+6;
	coordinateTemp1.y = 13;
	F_ShowMatrixNumProcessReverse(coordinateTemp3,coordinateTemp2,coordinateTemp1,ShowNoHiByeVal,MexLevel,LCDBuffer);
}

void	F_Show8Rpm(rt_uint16_t Rpm)
{
	F_showRpmDot();
	F_Show_8_Lcd(1,2,3,ShowHiByeVal,Rpm,LCDBuffer);
}
