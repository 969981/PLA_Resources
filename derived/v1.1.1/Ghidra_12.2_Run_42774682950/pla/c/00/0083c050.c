/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083c050; name: FUN_0083c050
 */


undefined8 FUN_0083c050(long param_1)

{
  int iVar1;
  
  if (*(int *)(*(long *)PTR_DAT_04377550 + 0x118) == 1) {
    iVar1 = *(int *)(param_1 + 0x60);
  }
  else {
    FUN_00839e80(*(undefined8 *)(param_1 + 0x58));
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (iVar1 == 0x66) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x60) = 0x66;
  return 1;
}


