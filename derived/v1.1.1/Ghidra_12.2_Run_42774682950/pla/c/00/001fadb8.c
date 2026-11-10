/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fadb8; name: FUN_001fadb8
 */


long * FUN_001fadb8(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)FUN_00204504(0x58,1);
  if (plVar1 == (long *)0x0) {
    return (long *)0x0;
  }
  if (*param_1 == 0) {
LAB_001fadf0:
    if (param_1[1] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[1] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[2] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[2] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[3] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[3] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[4] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[4] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[5] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[5] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[6] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[6] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[7] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[7] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    if (param_1[8] != 0) {
      lVar2 = FUN_002044f4();
      plVar1[8] = lVar2;
      if (lVar2 == 0) goto LAB_001fae9c;
    }
    plVar1[10] = param_1[10];
  }
  else {
    lVar2 = FUN_002044f4();
    *plVar1 = lVar2;
    if (lVar2 != 0) goto LAB_001fadf0;
LAB_001fae9c:
    FUN_001fad50(plVar1);
    FUN_002044d4(plVar1);
    plVar1 = (long *)0x0;
  }
  return plVar1;
}


