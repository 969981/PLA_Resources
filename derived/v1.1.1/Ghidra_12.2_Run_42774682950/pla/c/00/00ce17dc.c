/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce17dc; name: FUN_00ce17dc
 */


void FUN_00ce17dc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1f0);
  if (lVar1 != *(long *)(param_1 + 0x1f8)) {
    do {
      if (*(long *)(param_2 + 0x10) == *(long *)(lVar1 + 0x10)) {
        return;
      }
      lVar1 = lVar1 + 0x20;
    } while (*(long *)(param_1 + 0x1f8) != lVar1);
  }
  FUN_00ce1788(param_1 + 0x1f0);
  return;
}


