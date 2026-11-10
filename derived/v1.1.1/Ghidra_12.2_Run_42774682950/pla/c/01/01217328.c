/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01217328; name: FUN_01217328
 */


void FUN_01217328(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_012174d4(param_1);
  }
  local_40 = 0x4f97f5597cb45d92;
  pcStack_38 = "InputMultiFree";
  local_30 = 0xe;
  local_28 = (long *)0x0;
  FUN_00d4d788(param_1,&local_40,uVar1 & 1);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


