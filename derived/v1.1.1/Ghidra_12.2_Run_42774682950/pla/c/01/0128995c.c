/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0128995c; name: FUN_0128995c
 */


void FUN_0128995c(undefined8 param_1,uint param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0xf35a5eb43c687524;
  pcStack_38 = "InputMultiSelect";
  local_30 = 0x10;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,param_2 & 1);
  local_40 = 0x5619d56b81557fff;
  pcStack_38 = "InputMultiSelectAll";
  local_30 = 0x13;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,param_2 & 1);
  return;
}


