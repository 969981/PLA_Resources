/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dd1dc; name: FUN_001dd1dc
 */


void FUN_001dd1dc(long param_1)

{
  long *plVar1;
  long lVar2;
  
  if (param_1 == 0) {
    return;
  }
  FUN_002044d4(*(undefined8 *)(param_1 + 0x800));
  lVar2 = 0;
  do {
    plVar1 = *(long **)(param_1 + lVar2 * 8);
    while (plVar1 != (long *)0x0) {
      plVar1 = (long *)*plVar1;
      FUN_001dce58();
    }
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x100);
  FUN_002044d4(param_1);
  return;
}


