/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ffc24; name: FUN_012ffc24
 */


bool FUN_012ffc24(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38;
  lVar1 = *(long *)(lVar2 + 0x1650);
  lVar2 = *(long *)(lVar2 + 0x1658);
  if (lVar1 == lVar2) {
    return false;
  }
  return (ulong)*(uint *)(param_1 + 0x1f80) < (ulong)((lVar2 - lVar1 >> 4) * -0x5555555555555555);
}


