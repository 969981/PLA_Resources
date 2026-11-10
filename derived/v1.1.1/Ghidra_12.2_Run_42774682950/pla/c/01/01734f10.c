/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01734f10; name: FUN_01734f10
 */


void FUN_01734f10(undefined8 param_1)

{
  byte *pbVar1;
  undefined1 auStack_58 [32];
  long *local_38;
  undefined8 local_30;
  byte *pbStack_28;
  
  FUN_01734f90(auStack_58);
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_01735370();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  FUN_017355a8(param_1,&local_30,auStack_58);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


