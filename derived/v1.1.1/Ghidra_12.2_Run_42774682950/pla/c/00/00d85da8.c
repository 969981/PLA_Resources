/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d85da8; name: FUN_00d85da8
 */


void FUN_00d85da8(long param_1,long *param_2)

{
  long lVar1;
  long *plVar3;
  long *plVar2;
  
  if (*(long **)(param_1 + 8) != param_2) {
    plVar2 = *(long **)(param_1 + 8);
    do {
      plVar3 = plVar2 + -4;
      lVar1 = *plVar3;
      *plVar3 = 0;
      if (lVar1 != 0) {
        FUN_00d85e08(plVar2 + -3);
      }
      plVar2 = plVar3;
    } while (param_2 != plVar3);
  }
  *(long **)(param_1 + 8) = param_2;
  return;
}


