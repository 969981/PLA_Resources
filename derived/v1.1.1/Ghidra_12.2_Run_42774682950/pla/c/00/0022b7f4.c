/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022b7f4; name: FUN_0022b7f4
 */


void FUN_0022b7f4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  while ((long *)(param_1 + 8) != plVar1) {
    plVar3 = (long *)plVar1[1];
    if ((long *)(param_1 + 8) != plVar1) {
      lVar2 = *plVar3;
      *(long **)(*plVar1 + 8) = plVar3;
      *plVar3 = *plVar1;
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
    }
    FUN_00232674();
    plVar1 = plVar3;
  }
  return;
}


