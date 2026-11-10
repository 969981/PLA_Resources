/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5d6c0; name: FUN_01f5d6c0
 */


void FUN_01f5d6c0(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xd0);
  if (plVar1 != *(long **)(param_1 + 0xd8)) {
    do {
      if (*param_2 == *plVar1) {
        FUN_01f5d558();
        return;
      }
      plVar1 = plVar1 + 2;
    } while (*(long **)(param_1 + 0xd8) != plVar1);
  }
  return;
}


