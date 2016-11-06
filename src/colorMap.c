/*
 * colorMap.c
 *
 * Created: 8/13/2013 10:01:48 AM
 *  Author: Michael
 *
 * DJTT - MIDI Fighter Twister - Embedded Software License
 * Copyright (c) 2016: DJ Tech Tools
 * Permission is hereby granted, free of charge, to any person owning or possessing 
 * a DJ Tech-Tools MIDI Fighter Twister Hardware Device to view and modify this source 
 * code for personal use. Person may not publish, distribute, sublicense, or sell 
 * the source code (modified or un-modified). Person may not use this source code 
 * or any diminutive works for commercial purposes. The permission to use this source 
 * code is also subject to the following conditions:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, 
 * INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,  FITNESS FOR A 
 * PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION 
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE 
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */ 

#include <colorMap.h>

// Color maps are stored in Blue Green Red format
const uint8_t colorMap7[128][3] PROGMEM = { {0, 0, 0},	// 0
					{255, 0, 0},	// 1 - Blue
					{255, 21, 0},	// 2 - Blue (Green Rising)
					{255, 34, 0},
					{255, 46, 0},
					{255, 59, 0},
					{255, 68, 0},
					{255, 80, 0},
					{255, 93, 0},
					{255, 106, 0},
					{255, 119, 0},
					{255, 127, 0},
					{255, 140, 0},
					{255, 153, 0},
					{255, 165, 0},
					{255, 178, 0},
					{255, 191, 0},
					{255, 199, 0},
					{255, 212, 0},
					{255, 225, 0},
					{255, 238, 0},
					{255, 250, 0},	// 21 - End of Blue's Reign 
					{250, 255, 0},  // 22 - Green (Blue Fading)
					{237, 255, 0},
					{225, 255, 0},
					{212, 255, 0},
					{199, 255, 0},
					{191, 255, 0},
					{178, 255, 0},
					{165, 255, 0},
					{153, 255, 0},
					{140, 255, 0},
					{127, 255, 0},
					{119, 255, 0},
					{106, 255, 0},
					{93, 255, 0},
					{80, 255, 0},
					{67, 255, 0},
					{59, 255, 0},
					{46, 255, 0},
					{33, 255, 0},
					{21, 255, 0},
					{8, 255, 0},
					{0, 255, 0},	// 43 - Green
					{0, 255, 12},	// 44 - Green/ Red Rising
					{0, 255, 25},
					{0, 255, 38},
					{0, 255, 51},
					{0, 255, 63},
					{0, 255, 72},
					{0, 255, 84},
					{0, 255, 97},
					{0, 255, 110},
					{0, 255, 123},
					{0, 255, 131},
					{0, 255, 144},
					{0, 255, 157},
					{0, 255, 170},
					{0, 255, 182},
					{0, 255, 191},
					{0, 255, 203},
					{0, 255, 216},
					{0, 255, 229},
					{0, 255, 242},
					{0, 255, 255},	// 64 - Green + Red (Yellow)
					{0, 246, 255},	// 65 - Red, Green Fading
					{0, 233, 255},
					{0, 220, 255},
					{0, 208, 255},
					{0, 195, 255},
					{0, 187, 255},
					{0, 174, 255},
					{0, 161, 255},
					{0, 148, 255},
					{0, 135, 255},
					{0, 127, 255},
					{0, 114, 255},
					{0, 102, 255},
					{0, 89, 255},
					{0, 76, 255},
					{0, 63, 255},
					{0, 55, 255},
					{0, 42, 255},
					{0, 29, 255},
					{0, 16, 255},
					{0, 4, 255},	// 85 - End Red/Green Fading
					{4, 0, 255},	// 86 - Red/ Blue Rising
					{16, 0, 255},
					{29, 0, 255},
					{42, 0, 255},
					{55, 0, 255},
					{63, 0, 255},
					{76, 0, 255},
					{89, 0, 255},
					{102, 0, 255},
					{114, 0, 255},
					{127, 0, 255},
					{135, 0, 255},
					{148, 0, 255},
					{161, 0, 255},
					{174, 0, 255},
					{186, 0, 255},
					{195, 0, 255},
					{208, 0, 255},
					{221, 0, 255},
					{233, 0, 255},
					{246, 0, 255},
					{255, 0, 255},	// 107 - Blue + Red
					{255, 0, 242},	// 108 - Blue/ Red Fading
					{255, 0, 229},
					{255, 0, 216},
					{255, 0, 204},
					{255, 0, 191},
					{255, 0, 182},
					{255, 0, 169},
					{255, 0, 157},
					{255, 0, 144},
					{255, 0, 131},
					{255, 0, 123},
					{255, 0, 110},
					{255, 0, 97},
					{255, 0, 85},
					{255, 0, 72},
					{255, 0, 63},
					{255, 0, 50},
					{255, 0, 38},
					{255, 0, 25},	// 126 - Blue-ish
					{225, 240, 240}	// 127 - White ?
};

/* Exponential look up table (e^(n*.0381)) for brightness curves  */
const uint8_t brightnessMap[128] PROGMEM = 	{1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,
						2,2,2,2,2,2,2,2,3,3,3,3,3,3,3,3,4,
						4,4,4,4,4,4,5,5,5,5,5,6,6,6,6,6,7,
						7,7,8,8,8,8,9,9,9,10,10,11,11,11,12,
						12,13,13,14,14,15,16,16,17,17,18,19,
						20,20,21,22,23,24,25,25,26,28,29,30,
						31,32,33,35,36,37,39,40,42,43,45,47,
						49,51,53,55,57,59,61,64,66,69,71,74,
						77,80,83,86,90,93,97,100,104,108,113,
						117,122,127};
											
/* 32 Value exponential (e^(n*0.1515)) look up table for MIDI in control of RGB brightness */											
const uint8_t animationBrightnessMap[32] PROGMEM = 	{1,1,2,2,2,2,3,3,4,5,5,6,7,8,
							10,11,13,15,18,21,24,28,33,
							38,44,51,60,70,81,94,110,127};