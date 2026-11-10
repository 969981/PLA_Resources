/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00865c98; name: FUN_00865c98
 */


void FUN_00865c98(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x1410);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_0086a334(*(undefined8 *)(param_1 + 0x1410));
  }
  plVar1 = *(long **)(param_1 + 0x1418);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x10))(plVar1,0);
    FUN_0086b9b4(*(undefined8 *)(param_1 + 0x1418));
  }
  FUN_0085aab4(param_1);
  return;
}


