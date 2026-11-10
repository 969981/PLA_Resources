/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e0d20; name: FUN_001e0d20
 */


void FUN_001e0d20(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *param_1;
  if (0 < (int)param_1[4]) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_001e381c(lVar1 + lVar2,param_1);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x20;
      lVar1 = *param_1;
    } while (lVar3 < (int)param_1[4]);
  }
  FUN_002044d4();
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}


