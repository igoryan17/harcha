################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../13okt.c \
../Calc.c \
../alpha_test.c \
../dig_calc.c 

OBJS += \
./13okt.o \
./Calc.o \
./alpha_test.o \
./dig_calc.o 

C_DEPS += \
./13okt.d \
./Calc.d \
./alpha_test.d \
./dig_calc.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


