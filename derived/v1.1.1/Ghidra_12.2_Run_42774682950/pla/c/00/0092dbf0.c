/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092dbf0; name: FUN_0092dbf0
 */


void FUN_0092dbf0(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_0092dcd0();
  lVar3 = *param_2;
  *param_2 = 0;
  lVar2 = *param_1;
  *param_1 = lVar3;
  if (lVar2 != 0) {
    FUN_0092decc(param_1 + 1);
  }
  param_1[1] = param_2[1];
  lVar5 = param_2[4];
  lVar2 = param_2[2];
  lVar3 = param_2[3];
  param_2[1] = 0;
  *(int *)(param_1 + 5) = (int)param_2[5];
  param_1[2] = lVar2;
  param_1[3] = lVar3;
  param_1[4] = lVar5;
  lVar5 = param_2[9];
  lVar2 = param_2[7];
  lVar3 = param_2[8];
  *(int *)(param_1 + 10) = (int)param_2[10];
  param_1[8] = lVar3;
  param_1[9] = lVar5;
  param_1[7] = lVar2;
  lVar3 = param_2[0xb];
  param_1[0xb] = lVar3;
  *(int *)(param_1 + 0xc) = (int)param_2[0xc];
  lVar2 = param_2[6];
  param_1[6] = lVar2;
  if (lVar3 != 0) {
    uVar6 = param_1[1];
    uVar4 = *(ulong *)(lVar2 + 8);
    if ((uVar6 & uVar6 - 1) == 0) {
      uVar4 = uVar6 - 1 & uVar4;
    }
    else if (uVar6 <= uVar4) {
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = uVar4 / uVar6;
      }
      uVar4 = uVar4 - uVar1 * uVar6;
    }
    *(long **)(*param_1 + uVar4 * 8) = param_1 + 6;
    param_2[6] = 0;
    param_2[0xb] = 0;
  }
  return;
}


