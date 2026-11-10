/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085e854; name: FUN_0085e854
 */


long * FUN_0085e854(ushort *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1 + 0xc) != -1) && ((ulong)*param_1 != 0)) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 4) + uVar2 * 8);
      if (*plVar1 == *(long *)(param_1 + 0xc)) {
        return plVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_1);
  }
  return (long *)0x0;
}


