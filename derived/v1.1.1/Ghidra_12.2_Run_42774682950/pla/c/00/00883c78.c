/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00883c78; name: FUN_00883c78
 */


bool FUN_00883c78(long param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_02948360(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98));
  if (iVar2 == 0) {
    bVar1 = true;
  }
  else {
    iVar2 = FUN_02948360(*(undefined8 *)(*(long *)(param_1 + 0x2b68) + 0x98));
    bVar1 = iVar2 == 2;
  }
  return bVar1;
}


