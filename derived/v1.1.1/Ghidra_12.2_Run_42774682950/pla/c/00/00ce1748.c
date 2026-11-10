/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce1748; name: FUN_00ce1748
 */


undefined8 FUN_00ce1748(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f0);
  if (lVar1 == *(long *)(param_1 + 0x1f8)) {
    return 0;
  }
  do {
    if (*param_2 == *(long *)(lVar1 + 0x10)) {
      return 1;
    }
    lVar1 = lVar1 + 0x20;
  } while (*(long *)(param_1 + 0x1f8) != lVar1);
  return 0;
}


