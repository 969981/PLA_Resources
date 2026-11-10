/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318acbc; name: FUN_0318acbc
 */


void FUN_0318acbc(long param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long local_38;
  undefined4 *puStack_30;
  undefined4 local_28 [2];
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_02898b44();
  }
  local_28[0] = *param_2;
  FUN_0318fa44(uVar1,local_28);
  local_38 = param_1;
  puStack_30 = param_2;
  FUN_0318ad24(param_1,&local_38);
  return;
}


