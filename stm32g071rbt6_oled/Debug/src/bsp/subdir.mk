################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/bsp/bsp.c \
../src/bsp/stm32g0xx_hal_msp.c \
../src/bsp/stm32g0xx_it.c \
../src/bsp/syscalls.c \
../src/bsp/sysmem.c \
../src/bsp/system_stm32g0xx.c 

OBJS += \
./src/bsp/bsp.o \
./src/bsp/stm32g0xx_hal_msp.o \
./src/bsp/stm32g0xx_it.o \
./src/bsp/syscalls.o \
./src/bsp/sysmem.o \
./src/bsp/system_stm32g0xx.o 

C_DEPS += \
./src/bsp/bsp.d \
./src/bsp/stm32g0xx_hal_msp.d \
./src/bsp/stm32g0xx_it.d \
./src/bsp/syscalls.d \
./src/bsp/sysmem.d \
./src/bsp/system_stm32g0xx.d 


# Each subdirectory must supply rules for building sources it contributes
src/bsp/bsp.o: ../src/bsp/bsp.c src/bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/bsp/bsp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/bsp/stm32g0xx_hal_msp.o: ../src/bsp/stm32g0xx_hal_msp.c src/bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/bsp/stm32g0xx_hal_msp.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/bsp/stm32g0xx_it.o: ../src/bsp/stm32g0xx_it.c src/bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/bsp/stm32g0xx_it.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/bsp/syscalls.o: ../src/bsp/syscalls.c src/bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/bsp/syscalls.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/bsp/sysmem.o: ../src/bsp/sysmem.c src/bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/bsp/sysmem.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
src/bsp/system_stm32g0xx.o: ../src/bsp/system_stm32g0xx.c src/bsp/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DSTM32G071xx -c -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/ap" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/bsp" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/common/include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/hw/dirver" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Device/ST/STM32G0xx/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/CMSIS/Include" -I"C:/Users/user/Desktop/STM32G071RBT6_OLED/stm32g071rbt6_oled/src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"src/bsp/system_stm32g0xx.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

