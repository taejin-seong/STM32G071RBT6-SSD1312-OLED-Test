################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../src/bsp/startup/startup_stm32g071rbtx.s 

OBJS += \
./src/bsp/startup/startup_stm32g071rbtx.o 

S_DEPS += \
./src/bsp/startup/startup_stm32g071rbtx.d 


# Each subdirectory must supply rules for building sources it contributes
src/bsp/startup/startup_stm32g071rbtx.o: ../src/bsp/startup/startup_stm32g071rbtx.s src/bsp/startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m0plus -g3 -c -x assembler-with-cpp -MMD -MP -MF"src/bsp/startup/startup_stm32g071rbtx.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@" "$<"

