/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0026e89c; name: FUN_0026e89c
 */


void FUN_0026e89c(long param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = *(long **)(param_1 + 0x198);
  while (plVar2 != (long *)(param_1 + 400)) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    plVar2 = *(long **)(param_1 + 0x198);
  }
  FUN_008773a4(param_1 + 8,param_2);
  FUN_00878520(param_1 + 0x50,param_2);
  return;
}


