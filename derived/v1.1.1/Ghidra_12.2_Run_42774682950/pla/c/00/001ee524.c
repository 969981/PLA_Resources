/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ee524; name: FUN_001ee524
 */


void FUN_001ee524(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *param_1;
  plVar1 = *(long **)(lVar2 + 0x1a0);
  while (plVar1 != (long *)0x0) {
    *(long *)(lVar2 + 0x1a0) = plVar1[1];
    (**(code **)(*plVar1 + 0x20))(param_1,plVar1);
    FUN_002044d4(plVar1);
    plVar1 = *(long **)(lVar2 + 0x1a0);
  }
  return;
}


