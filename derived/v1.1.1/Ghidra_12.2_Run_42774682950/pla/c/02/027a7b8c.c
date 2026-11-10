/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a7b8c; name: FUN_027a7b8c
 */


void FUN_027a7b8c(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 local_60 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long *plStack_38;
  
  local_50 = *param_3;
  local_48 = param_3[1];
  local_40 = param_3[2];
  plVar1 = (long *)param_3[3];
  plStack_38 = plVar1;
  if (plVar1 == (long *)0x0) {
    local_60[0] = 1;
    local_58 = 0x2000;
    FUN_027a80bc(param_1,param_2,&local_50,local_60,param_4);
    return;
  }
  (**(code **)(*plVar1 + 0x18))(plVar1);
  local_60[0] = 1;
  local_58 = 0x2000;
  FUN_027a80bc(param_1,param_2,&local_50,local_60,param_4);
                    /* WARNING: Could not recover jumptable at 0x027a7c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}


