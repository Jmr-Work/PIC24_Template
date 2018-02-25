################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../bsp/cdt.c \
D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/bsp/interrupt_manager.c \
D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/bsp/mcc.c \
D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/bsp/pin_manager.c 

OBJS += \
./bsp/cdt.o \
./bsp/interrupt_manager.o \
./bsp/mcc.o \
./bsp/pin_manager.o 

C_DEPS += \
./bsp/cdt.d \
./bsp/interrupt_manager.d \
./bsp/mcc.d \
./bsp/pin_manager.d 


# Each subdirectory must supply rules for building sources it contributes
bsp/%.o: ../bsp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	mingw32-gcc -D__PIC24FJ256GA705__ -D_COMPILE_WITH_ECLIPSE_ -I"D:\Software\Microchip\xc16\v1.33\support\generic\h" -I"D:\Software\Microchip\xc16\v1.33\support\PIC24F\h" -I"D:\Documents\MyWorkspaces\Ref\PIC24F\Base.X\project\cdt" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

bsp/interrupt_manager.o: D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/bsp/interrupt_manager.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	mingw32-gcc -D__PIC24FJ256GA705__ -D_COMPILE_WITH_ECLIPSE_ -I"D:\Software\Microchip\xc16\v1.33\support\generic\h" -I"D:\Software\Microchip\xc16\v1.33\support\PIC24F\h" -I"D:\Documents\MyWorkspaces\Ref\PIC24F\Base.X\project\cdt" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

bsp/mcc.o: D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/bsp/mcc.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	mingw32-gcc -D__PIC24FJ256GA705__ -D_COMPILE_WITH_ECLIPSE_ -I"D:\Software\Microchip\xc16\v1.33\support\generic\h" -I"D:\Software\Microchip\xc16\v1.33\support\PIC24F\h" -I"D:\Documents\MyWorkspaces\Ref\PIC24F\Base.X\project\cdt" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

bsp/pin_manager.o: D:/Documents/MyWorkspaces/Ref/PIC24F/Base.X/bsp/pin_manager.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	mingw32-gcc -D__PIC24FJ256GA705__ -D_COMPILE_WITH_ECLIPSE_ -I"D:\Software\Microchip\xc16\v1.33\support\generic\h" -I"D:\Software\Microchip\xc16\v1.33\support\PIC24F\h" -I"D:\Documents\MyWorkspaces\Ref\PIC24F\Base.X\project\cdt" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


