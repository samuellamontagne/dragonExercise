################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Dragon.cpp \
../src/DragonTrainer.cpp \
../src/dragonExercise.cpp 

OBJS += \
./src/Dragon.o \
./src/DragonTrainer.o \
./src/dragonExercise.o 

CPP_DEPS += \
./src/Dragon.d \
./src/DragonTrainer.d \
./src/dragonExercise.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

