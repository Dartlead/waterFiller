################################################################################
# Automatically-generated file. Do not edit!
################################################################################

CG_TOOL_ROOT := /Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS

GEN_OPTS += /Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug/configPkg/compiler.opt
GEN_OPTS__FLAG := --cmd_file="/Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug/configPkg/compiler.opt"
GEN_CMDS += /Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug/configPkg/linker.cmd
GEN_CMDS__FLAG := -l"/Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug/configPkg/linker.cmd"

ORDERED_OBJS += \
"./big_red_button.obj" \
"./board_sleep.obj" \
"./Board.obj" \
"./error_responses.obj" \
"./main_tirtos.obj" \
"./on_board_functionality.obj" \
"./state_machine_control.obj" \
"./utility.obj" \
"./waterFiller.obj" \
"./water_dispensing_control.obj" \
"../CC3220S_LAUNCHXL_TIRTOS.cmd" \
-l"ti/display/lib/display.aem4" \
-l"ti/grlib/lib/ccs/m4/grlib.a" \
-l"third_party/spiffs/lib/ccs/m4/spiffs.a" \
-l"ti/drivers/lib/drivers_cc32xx.aem4" \
-l"third_party/fatfs/lib/ccs/m4/fatfs.a" \
-l"ti/dpl/lib/dpl_cc32xx.aem4" \
$(GEN_CMDS__FLAG) \
-l"ti/devices/cc32xx/driverlib/ccs/Release/driverlib.a" \
-llibc.a \

-include ../makefile.init

RM := rm -rf
RMDIR := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include subdir_vars.mk
-include subdir_rules.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C55_DEPS)),)
-include $(C55_DEPS)
endif
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif
ifneq ($(strip $(S67_DEPS)),)
-include $(S67_DEPS)
endif
ifneq ($(strip $(S62_DEPS)),)
-include $(S62_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(OPT_DEPS)),)
-include $(OPT_DEPS)
endif
ifneq ($(strip $(C??_DEPS)),)
-include $(C??_DEPS)
endif
ifneq ($(strip $(ASM_UPPER_DEPS)),)
-include $(ASM_UPPER_DEPS)
endif
ifneq ($(strip $(S??_DEPS)),)
-include $(S??_DEPS)
endif
ifneq ($(strip $(C64_DEPS)),)
-include $(C64_DEPS)
endif
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif
ifneq ($(strip $(S64_DEPS)),)
-include $(S64_DEPS)
endif
ifneq ($(strip $(INO_DEPS)),)
-include $(INO_DEPS)
endif
ifneq ($(strip $(CLA_DEPS)),)
-include $(CLA_DEPS)
endif
ifneq ($(strip $(S55_DEPS)),)
-include $(S55_DEPS)
endif
ifneq ($(strip $(SV7A_DEPS)),)
-include $(SV7A_DEPS)
endif
ifneq ($(strip $(C62_DEPS)),)
-include $(C62_DEPS)
endif
ifneq ($(strip $(C67_DEPS)),)
-include $(C67_DEPS)
endif
ifneq ($(strip $(PDE_DEPS)),)
-include $(PDE_DEPS)
endif
ifneq ($(strip $(K_DEPS)),)
-include $(K_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif
ifneq ($(strip $(C43_DEPS)),)
-include $(C43_DEPS)
endif
ifneq ($(strip $(S43_DEPS)),)
-include $(S43_DEPS)
endif
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif
ifneq ($(strip $(SA_DEPS)),)
-include $(SA_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXE_OUTPUTS += \
waterFiller.out \

EXE_OUTPUTS__QUOTED += \
"waterFiller.out" \

BIN_OUTPUTS += \
waterFiller.bin \

BIN_OUTPUTS__QUOTED += \
"waterFiller.bin" \


# All Target
all: $(OBJS) $(CMD_SRCS) $(GEN_CMDS)
	@$(MAKE) --no-print-directory -Onone "waterFiller.out"

dependents:
	-cd /Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug && $(MAKE) all

# Tool invocations
waterFiller.out: $(OBJS) $(CMD_SRCS) $(GEN_CMDS) /Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug/tirtos_builds_CC3220S_LAUNCHXL_release_ccs.lib
	@echo 'Building target: "$@"'
	@echo 'Invoking: ARM Linker'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on -z -m"waterFiller.map" -i"/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source" -i"/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/kernel/tirtos/packages" -i"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/lib" --diag_wrap=off --display_error_number --warn_sections --xml_link_info="waterFiller_linkInfo.xml" --rom_model -o "waterFiller.out" $(ORDERED_OBJS)
	@echo 'Finished building target: "$@"'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

waterFiller.bin: $(EXE_OUTPUTS)
	@echo 'Building files: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo 'Invoking: ARM Hex Utility'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armhex"  -o "waterFiller.bin" $(EXE_OUTPUTS__QUOTED)
	@echo 'Finished building: $(strip $(EXE_OUTPUTS__QUOTED))'
	@echo ' '
	@$(MAKE) --no-print-directory post-build

# Other Targets
clean:
	-$(RM) $(BIN_OUTPUTS__QUOTED)$(GEN_FILES__QUOTED)$(EXE_OUTPUTS__QUOTED)$(GEN_HDRS__QUOTED)
	-$(RM) "big_red_button.obj" "board_sleep.obj" "Board.obj" "error_responses.obj" "main_tirtos.obj" "on_board_functionality.obj" "state_machine_control.obj" "utility.obj" "waterFiller.obj" "water_dispensing_control.obj" 
	-$(RM) "big_red_button.d" "board_sleep.d" "Board.d" "error_responses.d" "main_tirtos.d" "on_board_functionality.d" "state_machine_control.d" "utility.d" "waterFiller.d" "water_dispensing_control.d" 
	-@echo 'Finished clean'
	-@echo ' '

post-build:
	-/Applications/ti/ccsv8/utils/tiobj2bin/tiobj2bin waterFiller.out waterFiller.bin /Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armofd /Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armhex /Applications/ti/ccsv8/utils/tiobj2bin/mkhex4bin
	-@echo ' '

.PHONY: all clean dependents
.SECONDARY:
/Applications/ti/Workspace/tirtos_builds_CC3220S_LAUNCHXL_release_ccs/Debug/tirtos_builds_CC3220S_LAUNCHXL_release_ccs.lib:

-include ../makefile.targets

