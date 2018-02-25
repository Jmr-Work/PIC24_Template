################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include bsp/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: Base

# Tool invocations
Base: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Cross GCC Linker'
	mingw32-gcc  -o "Base" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '
	$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(EXECUTABLES)$(OBJS)$(C_DEPS) Base
	-@echo ' '

post-build:
	-cp -rt D:\Documents\MyWorkspaces\Ref\PIC24F\Base.X\project\cdt\..\..\out\cdt D:\Documents\MyWorkspaces\Ref\PIC24F\Base.X\project\cdt\Debug
	-@echo ' '

.PHONY: all clean dependents post-build

-include ../makefile.targets
