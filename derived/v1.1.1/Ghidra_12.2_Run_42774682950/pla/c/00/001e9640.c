/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e9640; name: FUN_001e9640
 */


void FUN_001e9640(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x40);
  if (plVar1 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  if (*(int *)(lVar2 + 0x60) != 2) {
    *(undefined4 *)(lVar2 + 0x60) = 2;
    FUN_001fa4dc(lVar2);
  }
  FUN_001e3790((long *)(param_1 + 0x40),plVar1,0);
  FUN_001e6b54(lVar2,0,6);
  return;
}


