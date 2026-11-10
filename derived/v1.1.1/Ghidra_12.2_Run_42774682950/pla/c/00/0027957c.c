/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027957c; name: FUN_0027957c
 */


long FUN_0027957c(long param_1,long param_2)

{
  uint *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar3 = *(long *)(param_1 + 0x90);
  while( true ) {
    if (lVar3 != 0) {
      plVar4 = *(long **)(param_1 + 0xb8);
      while (plVar4 != (long *)0x0) {
        if (*plVar4 == param_2) {
          return lVar3;
        }
        puVar1 = (uint *)(plVar4 + 1);
        plVar2 = (long *)((long)plVar4 + (ulong)*puVar1);
        plVar4 = (long *)0x0;
        if (*puVar1 != 0) {
          plVar4 = plVar2;
        }
        lVar3 = lVar3 + 0x90;
      }
    }
    param_1 = *(long *)(param_1 + 0x4a8);
    if (param_1 == 0) break;
    lVar3 = *(long *)(param_1 + 0x90);
  }
  return 0;
}


