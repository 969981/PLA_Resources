/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0155f1c8; name: FUN_0155f1c8
 */


void FUN_0155f1c8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x3b0);
  if ((((*(long *)(lVar1 + 0x7f0) == param_2) || (*(long *)(lVar1 + 0x7f8) == param_2)) ||
      (*(long *)(lVar1 + 0x800) == param_2)) ||
     ((*(long *)(lVar1 + 0x808) == param_2 || (*(long *)(lVar1 + 0x810) == param_2)))) {
    FUN_01585d28();
    return;
  }
  return;
}


