/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebaa7c; name: FUN_02ebaa7c
 */


void FUN_02ebaa7c(float param_1,undefined8 *param_2,int *param_3,long param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_02ec0ed8(param_2,48000,param_3);
  uVar3 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 1);
  fVar4 = 6.2831855;
  if (*param_3 != 0) {
    fVar4 = 1.0;
  }
  iVar2 = *(int *)((long)param_2 + 0x14);
  fVar5 = param_1 * 0.0027777778 * fVar4;
  if (iVar2 == 1) {
    fVar6 = 0.25;
LAB_02ebab18:
    fVar5 = fVar5 + fVar6;
    fVar6 = fVar5 + fVar4;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar3;
    if (fVar4 <= fVar6) {
      fVar6 = fVar6 - fVar4;
    }
    *(float *)((long)param_2 + 0xc) = fVar6;
LAB_02ebab48:
    fVar4 = 1.0;
  }
  else {
    if (iVar2 == 5) {
      *(undefined4 *)(param_2 + 1) = uVar1;
      *param_2 = uVar3;
      fVar6 = fVar5 + fVar4;
      if (0.0 <= fVar5) {
        fVar6 = fVar5;
      }
      param_2[3] = param_4 * 0x5851f42d4c957f2d + 1;
      if (fVar4 <= fVar6) {
        fVar6 = fVar6 - fVar4;
      }
      goto LAB_02ebab50;
    }
    if (iVar2 == 3) {
      fVar6 = 0.5;
      goto LAB_02ebab18;
    }
    fVar6 = fVar5 + fVar4;
    if (0.0 <= fVar5) {
      fVar6 = fVar5;
    }
    *(undefined4 *)(param_2 + 1) = uVar1;
    *param_2 = uVar3;
    if (fVar4 <= fVar6) {
      fVar6 = fVar6 - fVar4;
    }
    *(float *)((long)param_2 + 0xc) = fVar6;
    if (iVar2 != 0) goto LAB_02ebab48;
    fVar4 = 6.2831855;
  }
  fVar6 = fmodf(fVar6,fVar4);
LAB_02ebab50:
  *(float *)((long)param_2 + 0xc) = fVar6;
  return;
}


