/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0079f8c4; name: FUN_0079f8c4
 */


void FUN_0079f8c4(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    plVar1 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    if (plVar1 == (long *)0x0) {
      return;
    }
    plVar1[1] = 0;
    plVar1[2] = 0;
  }
  else {
    if (*(long *)(param_1 + 0x70) != 0) {
      FUN_0032cf88(param_1,0,0x20);
    }
    plVar1 = (long *)FUN_0032cea0(param_1,0x20);
    plVar1[1] = param_1;
    plVar1[2] = 0;
  }
  *(undefined4 *)(plVar1 + 3) = 0;
  *plVar1 = (long)(PTR_DAT_04376f48 + 0x10);
  return;
}


