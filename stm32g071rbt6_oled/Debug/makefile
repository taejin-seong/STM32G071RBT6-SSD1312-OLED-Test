################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/lib/stm32g071rbt6_oled_cube/Drivers/STM32G0xx_HAL_Driver/Src/subdir.mk
-include src/hw/dirver/subdir.mk
-include src/hw/subdir.mk
-include src/bsp/startup/subdir.mk
-include src/bsp/subdir.mk
-include src/ap/subdir.mk
-include src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

OPTIONAL_TOOL_DEPS := \
$(wildcard ../makefile.defs) \
$(wildcard ../makefile.init) \
$(wildcard ../makefile.targets) \


BUILD_ARTIFACT_NAME := stm32g071rbt6_oled
BUILD_ARTIFACT_EXTENSION := elf
BUILD_ARTIFACT_PREFIX := 
BUILD_ARTIFACT := $(BUILD_ARTIFACT_PREFIX)$(BUILD_ARTIFACT_NAME).$(BUILD_ARTIFACT_EXTENSION)

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
stm32g071rbt6_oled.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
stm32g071rbt6_oled.list \

OBJCOPY_HEX += \
stm32g071rbt6_oled.hex \

OBJCOPY_BIN += \
stm32g071rbt6_oled.bin \


# All Target
all: main-build

# Main-build Target
main-build: stm32g071rbt6_oled.elf secondary-outputs

# Tool invocations
stm32g071rbt6_oled.elf: $(OBJS) $(USER_OBJS) C:\Users\user\Desktop\STM32G071RBT6_OLED\stm32g071rbt6_oled\src\bsp\ldscript\STM32G071RBTX_FLASH.ld makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-gcc -o "stm32g071rbt6_oled.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m0plus -T"C:\Users\user\Desktop\STM32G071RBT6_OLED\stm32g071rbt6_oled\src\bsp\ldscript\STM32G071RBTX_FLASH.ld" --specs=nosys.specs -Wl,-Map="stm32g071rbt6_oled.map" -Wl,--gc-sections -static --specs=nano.specs -mfloat-abi=soft -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

stm32g071rbt6_oled.list: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "stm32g071rbt6_oled.list"
	@echo 'Finished building: $@'
	@echo ' '

stm32g071rbt6_oled.hex: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O ihex $(EXECUTABLES) "stm32g071rbt6_oled.hex"
	@echo 'Finished building: $@'
	@echo ' '

stm32g071rbt6_oled.bin: $(EXECUTABLES) makefile objects.list $(OPTIONAL_TOOL_DEPS)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "stm32g071rbt6_oled.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_HEX) $(OBJCOPY_BIN)

fail-specified-linker-script-missing:
	@echo 'Error: Cannot find the specified linker script. Check the linker settings in the build configuration.'
	@exit 2

warn-no-linker-script-specified:
	@echo 'Warning: No linker script specified. Check the linker settings in the build configuration.'

.PHONY: all clean dependents fail-specified-linker-script-missing warn-no-linker-script-specified
.SECONDARY:

-include ../makefile.targets
