/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6d50; name: FUN_02ec6d50
 */


void FUN_02ec6d50(long *param_1,ulong *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int *piVar2;
  long *plVar3;
  
  *param_4 = 0;
  *param_3 = 0;
  param_1 = (long *)*param_1;
  if (param_1 != (long *)0x0) {
    lVar1 = param_1[1];
    while( true ) {
      if ((lVar1 != 0) && ((int)param_1[3] != 0)) {
        lVar1 = param_1[2];
        do {
          if ((1L << ((ulong)*(uint *)(lVar1 + 8) & 0x3f) & *param_2) != 0) {
            plVar3 = *(long **)(param_1[1] + 0x60);
            if (((plVar3 == (long *)0x0) || (*(int *)(param_1[1] + 0x88) == 0)) ||
               (piVar2 = param_3, *plVar3 == 0)) {
              piVar2 = param_4;
            }
            *piVar2 = *piVar2 + 1;
          }
          lVar1 = lVar1 + 0xc;
        } while (lVar1 != param_1[2] + (ulong)*(uint *)(param_1 + 3) * 0xc);
      }
      param_1 = (long *)*param_1;
      if (param_1 == (long *)0x0) break;
      lVar1 = param_1[1];
    }
  }
  return;
}


