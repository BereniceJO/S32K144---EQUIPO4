################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/S32/S32DS/software/S32SDK_S32K1XX_RTM_4.0.2/platform/drivers/src/clock/S32K1xx/clock_S32K1xx.c 

OBJS += \
./SDK/platform/drivers/src/clock/S32K1xx/clock_S32K1xx.o 

C_DEPS += \
./SDK/platform/drivers/src/clock/S32K1xx/clock_S32K1xx.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/clock/S32K1xx/clock_S32K1xx.o: D:/S32/S32DS/software/S32SDK_S32K1XX_RTM_4.0.2/platform/drivers/src/clock/S32K1xx/clock_S32K1xx.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/platform/drivers/src/clock/S32K1xx/clock_S32K1xx.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


