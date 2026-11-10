/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c90d14; name: FUN_02c90d14
 */


undefined8 FUN_02c90d14(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x2e8) + 0xe8);
  if ((lVar2 == 0) || (*(int *)(*(long *)(param_1 + 0x2e8) + 0xf0) != *(int *)(lVar2 + 0x2c))) {
    return 0;
  }
  uVar1 = FUN_002669c8();
  return uVar1;
}


