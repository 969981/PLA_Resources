/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec9d0; name: FUN_007ec9d0
 */


long FUN_007ec9d0(undefined8 param_1,short *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_2 != (short *)0x0) && (param_3 != 0)) {
    if (param_3 == 2) {
      if (*param_2 == 0) {
        return 0;
      }
      lVar2 = 0;
      do {
        lVar1 = lVar2 + 2;
        lVar2 = lVar2 + 2;
      } while (*(short *)((long)param_2 + lVar1) != 0);
    }
    else {
      if ((char)*param_2 == '\0') {
        return 0;
      }
      lVar2 = 0;
      do {
        lVar1 = lVar2 + 1;
        lVar2 = lVar2 + 1;
      } while (*(char *)((long)param_2 + lVar1) != '\0');
    }
  }
  return lVar2;
}


