/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5d68c; name: FUN_01f5d68c
 */


void FUN_01f5d68c(long param_1,long *param_2)

{
  long *plVar2;
  long *plVar1;
  
  if (*(long **)(param_1 + 0xd0) != *(long **)(param_1 + 0xd8)) {
    plVar1 = *(long **)(param_1 + 0xd0);
    do {
      plVar2 = plVar1 + 2;
      if (*param_2 == *plVar1) {
        return;
      }
      plVar1 = plVar2;
    } while (*(long **)(param_1 + 0xd8) != plVar2);
  }
  FUN_01f5d4cc();
  return;
}


