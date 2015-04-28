################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../23.c \
../infa\ 23sept.c \
../main.c 

OBJS += \
./23.o \
./infa\ 23sept.o \
./main.o 

C_DEPS += \
./23.d \
./infa\ 23sept.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

infa\ 23sept.o: ../infa\ 23sept.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"infa 23sept.d" -MT"infa\ 23sept.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


