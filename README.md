# MMA7455_Test

I just picked up a NUCLEO board to learn about the STM32 platform.  The only I2C sensor that I had kicking around was an old Parallax MMA7445 3-axis accelerometer, so I figured that I'd start with that.  I've got a SPI SD card reader and a GPS that communicates over UART so I can hit all three of the major busses.

Included in this project is 4ilo's SSD1306 driver, which can be found at https://github.com/4ilo/ssd1306-stm32HAL and is released under the MIT license.

The bulk of the code was generated with STI's STMCubeMX and their copyright information is included in all of the files generated by it.

All other code is under the following license:

This is free and unencumbered software released into the public domain.

Anyone is free to copy, modify, publish, use, compile, sell, or
distribute this software, either in source code form or as a compiled
binary, for any purpose, commercial or non-commercial, and by any
means.  It would be nice if you let me know that you're using it, but
not necessary.

In jurisdictions that recognize copyright laws, the author
of this software dedicate any and all copyright interest in the
software to the public domain. 

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
OTHER DEALINGS IN THE SOFTWARE.
