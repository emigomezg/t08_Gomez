#ifndef WM8731_CODEC_H_
#define WM8731_CODEC_H_

#include "i2c_rtos.h"
#include "fsl_clock.h"
#include "fsl_port.h"
#include "stdint.h"
#include "FreeRTOS.h"
#include "semphr.h"
#include "task.h"

#define WM8731_SLAVE_ADDRESS				0x1A
#define WM8731_CODEC_LEFT_IN				0x00
#define WM8731_CODEC_RIGHT_IN				0x01
#define WM8731_CODEC_LEFT_OUT				0x02
#define WM8731_CODEC_RIGHT_OUT 				0x03
#define WM8731_CODEC_ANALOG					0x04
#define WM8731_CODEC_INTERFACE_FORMAT     	0x07
#define WM8731_CODEC_SAMPLING_CONTROL    	0x08
#define WM8731_CODEC_POWER_DOWN				0x0C
#define WM8731_CODEC_RESET_REGISTER	   		0x0F
#define WM8731_CODEC_CODEC_ENABLE			0x12

freertos_i2c_flag_t wm8731_init(void);

#endif
