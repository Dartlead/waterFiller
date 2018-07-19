################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
board_sleep.obj: ../board_sleep.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="board_sleep.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

button.obj: ../button.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="button.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

build-588714049:
	@$(MAKE) --no-print-directory -Onone -f subdir_rules.mk build-588714049-inproc

build-588714049-inproc: ../empty.syscfg
	@echo 'Building file: "$<"'
	@echo 'Invoking: System Configuration Tool'
	"/Applications/ti/ccsv8/tools/node/node" "/Applications/ti/ccsv8/utils/sysconfig/cli/cli.js" -o "." -b "/ti/boards/.meta/CC3220S_LAUNCHXL" -s "/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/.metadata/sdk.json" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

Board.c: build-588714049 ../empty.syscfg
Board.h: build-588714049

Board.obj: ./Board.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="Board.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

main_tirtos.obj: ../main_tirtos.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="main_tirtos.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

on_board_functionality.obj: ../on_board_functionality.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="on_board_functionality.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

should_not_happen.obj: ../should_not_happen.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="should_not_happen.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

state.obj: ../state.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="state.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

utility.obj: ../utility.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="utility.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

water.obj: ../water.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="water.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '

waterFiller.obj: ../waterFiller.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: ARM Compiler'
	"/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=vfplib -me --include_path="/Applications/ti/Workspace/waterFiller" --include_path="/Applications/ti/Workspace/waterFiller/Debug" --include_path="/Applications/ti/simplelink_cc32xx_sdk_2_20_00_10/source/ti/posix/ccs" --include_path="/Applications/ti/ccsv8/tools/compiler/ti-cgt-arm_18.1.2.LTS/include" -g --diag_warning=225 --diag_warning=255 --diag_wrap=off --display_error_number --gen_func_subsections=on --preproc_with_compile --preproc_dependency="waterFiller.d_raw" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


