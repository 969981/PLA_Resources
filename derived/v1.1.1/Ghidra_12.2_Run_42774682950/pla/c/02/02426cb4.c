/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02426cb4; name: FUN_02426cb4
 */


void FUN_02426cb4(long param_1,long *param_2)

{
  long *plVar2;
  long *plVar1;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar1 = *(long **)(param_1 + 8);
    do {
      plVar2 = plVar1 + -2;
      if ((*plVar2 != 0) && ((int)plVar1[-1] != -2)) {
        FUN_00155150(*plVar2,0xfff0b9d8);
      }
      plVar1 = plVar2;
    } while (param_2 != plVar2);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


