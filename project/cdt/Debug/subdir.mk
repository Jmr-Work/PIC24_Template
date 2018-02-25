################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/main.c 

OBJS += \
./main.o 

C_DEPS += \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
main.o: D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	mingw32-gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


