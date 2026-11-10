/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00983f98; name: FUN_00983f98
 */


long * FUN_00983f98(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar3 = *(long **)(param_1 + 0xa8);
    plVar1 = (long *)PTR_DAT_04379c88;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 0x58);
    }
    lVar4 = *(long *)(param_1 + 0xb0) << 5;
    do {
      plVar5 = (long *)*plVar3;
      plVar2 = (long *)PTR_DAT_04379c88;
      if (*plVar5 != 0) {
        plVar2 = (long *)(*plVar5 + 0x58);
      }
      if (*plVar2 == *plVar1) {
        plVar3 = (long *)0x0;
        if (plVar5 != (long *)0x0) {
          plVar3 = plVar5 + 0xe;
        }
        return plVar3;
      }
      plVar3 = plVar3 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return (long *)0x0;
}


