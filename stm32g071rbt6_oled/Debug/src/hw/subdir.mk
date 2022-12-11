################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/hw/hw.c 

OBJS += \
./src/hw/hw.o 

C_DEPS += \
./src/hw/hw.d 


# Each subdirectory must supply rules for building sources it contributes
src/hw/hw.o: ../src/hw/hw.c src/hw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/configuration" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/hw/hw.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

