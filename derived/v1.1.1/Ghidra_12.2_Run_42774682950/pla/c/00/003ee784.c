/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ee784; name: FUN_003ee784
 */


void FUN_003ee784(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = param_1[1];
    if (lVar1 == lVar2) {
      lVar1 = lVar2;
    }
    else {
      do {
        lVar1 = lVar1 + -0x50;
        FUN_003ee5f8(lVar1);
      } while (lVar2 != lVar1);
      lVar1 = *param_1;
    }
    param_1[1] = lVar2;
    FUN_002e2ea0(PTR_LAB_04373088,lVar1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  lVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = lVar2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


