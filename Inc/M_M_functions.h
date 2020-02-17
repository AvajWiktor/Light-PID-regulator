#include "i2c-lcd.h"
#include "tim.h"
#include "arm_math.h"
#include "math_helper.h"
#include "bh1750.h"
#include "stdio.h"
#include "string.h"

void SetValue(int in, int out, arm_pid_instance_f32 * PID_INSTANCE);
int ReadData();
void RefreshLCD(int in, int out);
