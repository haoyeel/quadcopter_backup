/*************************************************************************************************************
圆点博士小四轴飞行器2015+版配套源代码声明:
该源代码仅供参考,圆点博士不对源代码提供任何形式的担保,也不对因使用该源代码而出现的损失负责.
用户可以以学习的目的修改和使用该源代码.
但用户在修改该源代码时,不得移除该部分版权信息，必须保留原版声明.

更多信息，请访问官方网站www.etootle.com, 官方博客:http://weibo.com/xiaosizhou
**************************************************************************************************************/
#include <math.h>
#include <stdlib.h>	 
#include "stm32f10x_it.h"
#include "etootle_bluetooth.h"
//
#define BS004_MOTOR_PWM_M1			GPIO_Pin_9		  //PA9(M1)
#define BS004_MOTOR_PWM_M2			GPIO_Pin_7		//PB7(M2)
#define BS004_MOTOR_PWM_M3			GPIO_Pin_6		//PB6(M3)
#define BS004_MOTOR_PWM_M4			GPIO_Pin_8		//PB8(M4)
#define BS004_MOTOR_PWM_PORT		GPIOC
//
#define BS004_MOTOR_PWM_SYSCLK_DIV	0
#define BS004_MOTOR_PWM_CLK_72MHZ  	1
//
#define BS004_FLY_MAX_OUT 999
#define BS004_FLY_MIN_OUT 15
//
void BS004_Motor_GPIO_Configuration(void);
void BS004_Motor_PWM_Configuration(void);
void BS004_Motor_NVIC_Configuration(void);
//
void BS004_Motor_Interrupt(void);
//
void BS004_Motor_Reset(void);
signed short BS004_Motor_Speed_Scale(float motor_speed_input);




