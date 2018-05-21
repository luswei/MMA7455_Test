/*
 * MMA7455.c
 *
 *  Created on: May 19, 2018
 *      Author: Jake Moomaw
 */

#include "stm32l4xx_hal.h"
#include "MMA7455.h"


void JSC_MMA7455_Init_2G()
{
	uint8_t init_byte = JSC_MMA7455_2g_init_byte;
	HAL_I2C_Mem_Write(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_init_reg, 1, &init_byte, 1, 10000);
}
void JSC_MMA7455_Init_4G()
{
	uint8_t init_byte = JSC_MMA7455_4g_init_byte;
	HAL_I2C_Mem_Write(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_init_reg, 1, &init_byte, 1, 10000);
}
void JSC_MMA7455_Init_8G()
{
	uint8_t init_byte = JSC_MMA7455_8g_init_byte;
	HAL_I2C_Mem_Write(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_init_reg, 1, &init_byte, 1, 10000);
}
int8_t JSC_MMA7455_Read_8Bit_X(void)
{
	uint8_t JSC_8bit_xval;
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_x_reg, 1, &JSC_8bit_xval, 1, 10000);
	int8_t JSC_signed_xval = JSC_8bit_xval;
	return JSC_signed_xval;
}
int8_t JSC_MMA7455_Read_8Bit_Y(void)
{
	uint8_t JSC_8bit_yval;
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_y_reg, 1, &JSC_8bit_yval, 1, 10000);
	int8_t JSC_signed_yval = JSC_8bit_yval;
	return JSC_signed_yval;
}
int8_t JSC_MMA7455_Read_8Bit_Z(void)
{
	uint8_t JSC_8bit_zval;
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_8bit_z_reg, 1, &JSC_8bit_zval, 1, 10000);
	int8_t JSC_signed_zval = JSC_8bit_zval;
	return JSC_signed_zval;
}
int16_t JSC_MMA7455_Read_10Bit_X(void)
{
	uint8_t JSC_10bit_xval_low;
	uint8_t JSC_10bit_xval_high;
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_x_reg_low, 1, &JSC_10bit_xval_low, 1, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_x_reg_low, 1, &JSC_10bit_xval_high, 1, 10000);
	int16_t JSC_10bit_xval = ((int16_t)JSC_10bit_xval_high << 8) | JSC_10bit_xval_low;
	return JSC_10bit_xval;
}
int16_t JSC_MMA7455_Read_10Bit_Y(void)
{
	uint8_t JSC_10bit_yval_low;
	uint8_t JSC_10bit_yval_high;
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_y_reg_low, 1, &JSC_10bit_yval_low, 1, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_y_reg_low, 1, &JSC_10bit_yval_high, 1, 10000);
	int16_t JSC_10bit_yval = ((int16_t)JSC_10bit_yval_high << 8) | JSC_10bit_yval_low;
	return JSC_10bit_yval;
}
int16_t JSC_MMA7455_Read_10Bit_Z(void)
{
	uint8_t JSC_10bit_zval_low;
	uint8_t JSC_10bit_zval_high;
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_z_reg_low, 1, &JSC_10bit_zval_low, 1, 10000);
	HAL_I2C_Mem_Read(&hi2c1, JSC_MMA7455_I2C_ADDRESS, JSC_MMA7455_10bit_z_reg_low, 1, &JSC_10bit_zval_high, 1, 10000);
	int16_t JSC_10bit_zval = ((int16_t)JSC_10bit_zval_high << 8) | JSC_10bit_zval_low;
	return JSC_10bit_zval;
}
