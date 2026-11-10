/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e545e4; name: FUN_02e545e4
 */


long FUN_02e545e4(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x30) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x30) << 3;
    plVar1 = *(long **)(param_1 + 0x28);
    do {
      if (*(long *)(*plVar1 + 0x40) != param_2) {
        return *plVar1;
      }
      lVar2 = lVar2 + -8;
      plVar1 = plVar1 + 1;
    } while (lVar2 != 0);
  }
  return 0;
}


