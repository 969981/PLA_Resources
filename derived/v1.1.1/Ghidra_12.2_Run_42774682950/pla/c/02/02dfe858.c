/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfe858; name: FUN_02dfe858
 */


void FUN_02dfe858(long param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x380);
  if (iVar1 == 1) {
    FUN_02dff2fc(param_1 + 0x280,param_3,param_2);
    return;
  }
  if (iVar1 == 2) {
    FUN_02dff3d0();
    return;
  }
  if (iVar1 == 3) {
    FUN_02dff43c();
    return;
  }
  FUN_02dff52c();
  return;
}


