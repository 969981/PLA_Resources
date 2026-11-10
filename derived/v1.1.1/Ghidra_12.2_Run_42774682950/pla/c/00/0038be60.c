/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038be60; name: FUN_0038be60
 */


void FUN_0038be60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + 0x18);
  lVar1 = FUN_00346ae8(param_3);
  if (lVar2 != lVar1) {
    FUN_0038b930(*param_1,param_3,"AddEnum",param_4);
  }
  FUN_0038bec8(param_1,param_2,param_3,*(undefined4 *)(param_4 + 0x10));
  return;
}


