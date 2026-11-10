/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02289b40; name: FUN_02289b40
 */


void FUN_02289b40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  undefined1 auStack_e0 [24];
  long *local_c8;
  long *local_48;
  undefined8 local_30;
  byte *pbStack_28;
  
  local_30 = 0;
  FUN_02289bd8(auStack_e0,param_1,&local_30,param_2,param_3);
  FUN_0014ff10(param_1,0);
  pbVar1 = (byte *)FUN_0214d94c();
  pbStack_28 = *(byte **)(pbVar1 + 0x10);
  if ((*pbVar1 & 1) == 0) {
    pbStack_28 = pbVar1 + 1;
  }
  local_30 = param_1;
  FUN_02289c44(param_1,&local_30,auStack_e0);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (local_c8 != (long *)0x0) {
    (**(code **)(*local_c8 + 0x20))();
  }
  return;
}


