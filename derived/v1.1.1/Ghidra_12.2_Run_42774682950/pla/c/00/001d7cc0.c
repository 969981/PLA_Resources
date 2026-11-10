/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d7cc0; name: FUN_001d7cc0
 */


undefined8 FUN_001d7cc0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long local_40;
  long lStack_38;
  long local_30;
  long lStack_28;
  undefined4 local_20;
  long local_18;
  
  if ((int)param_1[1] == 0) {
    return 0;
  }
  lStack_38 = param_1[3];
  local_40 = param_1[2];
  lStack_28 = param_1[5];
  local_30 = param_1[4];
  local_20 = 0;
  local_18 = *param_1 + (long)param_1;
  uVar1 = FUN_001d7d20(param_1,&local_40,param_2);
  return uVar1;
}


