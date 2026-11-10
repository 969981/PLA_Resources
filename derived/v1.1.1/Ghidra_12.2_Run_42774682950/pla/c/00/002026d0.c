/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002026d0; name: FUN_002026d0
 */


long * FUN_002026d0(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_002044c4(0x10);
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_002044c4(*(undefined4 *)(param_1 + 3));
    plVar1[1] = lVar2;
    if (lVar2 == 0) {
      FUN_002044d4(plVar1);
      plVar1 = (long *)0x0;
    }
    else {
      *plVar1 = (long)param_1;
      (*(code *)*param_1)();
    }
  }
  return plVar1;
}


