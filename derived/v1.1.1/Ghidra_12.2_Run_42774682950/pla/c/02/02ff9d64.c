/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff9d64; name: FUN_02ff9d64
 */


long FUN_02ff9d64(long *param_1,short param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = (long *)0x0;
  if (*param_1 != 0) {
    plVar3 = (long *)(*param_1 + (long)param_1);
  }
  if ((int)param_1[1] != 0) {
    lVar2 = (long)(int)param_1[1] << 3;
    do {
      lVar1 = 0;
      if (*plVar3 != 0) {
        lVar1 = *plVar3 + (long)plVar3;
      }
      if ((lVar1 != 0) && (*(short *)(lVar1 + 0x18) == param_2)) {
        return lVar1;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}


