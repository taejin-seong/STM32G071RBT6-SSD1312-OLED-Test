################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/hw/dirver/gpio.c \
../src/hw/dirver/i2c.c \
../src/hw/dirver/ssd1312_command.c \
../src/hw/dirver/ssd1312_draw.c 

OBJS += \
./src/hw/dirver/gpio.o \
./src/hw/dirver/i2c.o \
./src/hw/dirver/ssd1312_command.o \
./src/hw/dirver/ssd1312_draw.o 

C_DEPS += \
./src/hw/dirver/gpio.d \
./src/hw/dirver/i2c.d \
./src/hw/dirver/ssd1312_command.d \
./src/hw/dirver/ssd1312_draw.d 


# Each subdirectory must supply rules for building sources it contributes
src/hw/dirver/gpio.o: ../src/hw/dirver/gpio.c src/hw/dirver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/configuration" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/dirver/gpio.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/dirver/i2c.o: ../src/hw/dirver/i2c.c src/hw/dirver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/configuration" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/dirver/i2c.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/dirver/ssd1312_command.o: ../src/hw/dirver/ssd1312_command.c src/hw/dirver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/configuration" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/dirver/ssd1312_command.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/hw/dirver/ssd1312_draw.o: ../src/hw/dirver/ssd1312_draw.c src/hw/dirver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/configuration" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/dirver/ssd1312_draw.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

