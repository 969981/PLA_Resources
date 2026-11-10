/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f85e4; name: FUN_001f85e4
 */


long * FUN_001f85e4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = FUN_002044f4(param_2);
  if (lVar1 != 0) {
    plVar2 = (long *)FUN_002044c4(0x10);
    if (plVar2 != (long *)0x0) {
      *plVar2 = lVar1;
      plVar2[1] = 0;
      if (param_1 != (long *)0x0) {
        plVar4 = param_1;
        do {
          plVar3 = plVar4;
          plVar4 = (long *)plVar3[1];
        } while (plVar4 != (long *)0x0);
        plVar3[1] = (long)plVar2;
        plVar2 = param_1;
      }
      if (plVar2 != (long *)0x0) {
        return plVar2;
      }
    }
    FUN_002044d4(lVar1);
  }
  return (long *)0x0;
}


