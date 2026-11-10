/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e97894; name: FUN_02e97894
 */


void FUN_02e97894(long *param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  long lVar5;
  float fVar6;
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar3 = *(uint *)(param_1 + 1);
  if (uVar3 != 0) {
    uVar1 = (int)param_2 + (int)param_3;
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar1 / uVar3;
    }
    for (piVar4 = *(int **)(*param_1 + (ulong)(uVar1 - uVar2 * uVar3) * 8); piVar4 != (int *)0x0;
        piVar4 = *(int **)(piVar4 + 4)) {
      if ((*piVar4 == (int)param_2) && (*(long *)(piVar4 + 2) == param_3)) goto LAB_02e97940;
    }
  }
  *param_4 = param_2;
  param_4[1] = param_3;
  uVar3 = *(uint *)(param_1 + 1);
  if ((uVar3 == 0) || (fVar6 = (float)NEON_ucvtf((int)param_1[2]), 0.9 < fVar6 / (float)uVar3)) {
    FUN_02e97ba4(param_1);
    uVar3 = *(uint *)(param_1 + 1);
    if (uVar3 == 0) goto LAB_02e97940;
    param_2 = *param_4;
    param_3 = param_4[1];
  }
  uVar1 = (int)param_2 + (int)param_3;
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar1 / uVar3;
  }
  lVar5 = (ulong)(uVar1 - uVar2 * uVar3) * 8;
  param_4[2] = *(undefined8 *)(*param_1 + lVar5);
  *(undefined8 **)(*param_1 + lVar5) = param_4;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
LAB_02e97940:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
  return;
}


