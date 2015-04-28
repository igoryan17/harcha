################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../28okt.c \
../2dec.c \
../Proxy_SOCKS4.c \
../Zachet.c \
../fan.c \
../reciever.c \
../sender.c \
../test.c 

OBJS += \
./28okt.o \
./2dec.o \
./Proxy_SOCKS4.o \
./Zachet.o \
./fan.o \
./reciever.o \
./sender.o \
./test.o 

C_DEPS += \
./28okt.d \
./2dec.d \
./Proxy_SOCKS4.d \
./Zachet.d \
./fan.d \
./reciever.d \
./sender.d \
./test.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


