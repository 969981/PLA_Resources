/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d4d970; name: FUN_00d4d970
 */


void FUN_00d4d970(long *param_1,uint param_2)

{
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = 0x946624ac790be4c8;
  pcStack_38 = "InputChangeSelectMode";
  local_30 = 0x15;
  uStack_28 = 0;
  FUN_00d4d788(param_1,&local_40,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00d4d9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1,param_2 & 1);
  return;
}


