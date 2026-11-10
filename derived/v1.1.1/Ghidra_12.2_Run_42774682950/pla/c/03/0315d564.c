/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315d564; name: FUN_0315d564
 */


void FUN_0315d564(long param_1,int *param_2,long *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  undefined1 *puVar12;
  
  nn::os::LockMutex((MutexType *)&DAT_04434b70);
  if (*(int *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) == -1) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    puVar6 = PTR_PTR_0434a080;
    lVar5 = param_3[1];
    iVar4 = *(int *)(param_1 + 0x40);
    uVar1 = (int)lVar5 + iVar4 + 1;
    puVar8 = (uint *)(param_1 + 0x44);
    uVar9 = *puVar8;
    lVar7 = *(long *)(param_1 + 0x38);
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar1) {
      if (0x3fffffff < (int)uVar1) {
        FUN_032bd0a8(uVar1);
        uVar9 = *puVar8;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar1;
      if ((int)uVar1 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      lVar7 = FUN_032bd1d4(puVar6,uVar3,1,lVar7,iVar4,puVar8);
      *(long *)(param_1 + 0x38) = lVar7;
    }
    *(uint *)(param_1 + 0x40) = uVar1;
    uVar1 = *(uint *)(param_3 + 1);
    puVar2 = (undefined1 *)(lVar7 + iVar4);
    if (0 < (int)uVar1) {
      pfVar11 = (float *)*param_3;
      *puVar2 = (char)(int)((*pfVar11 - *(float *)(param_1 + 0x1c)) * *(float *)(param_1 + 0x24));
      if ((uVar1 != 1) &&
         (puVar2[1] = (char)(int)((pfVar11[1] - *(float *)(param_1 + 0x1c)) *
                                 *(float *)(param_1 + 0x24)), uVar1 != 2)) {
        lVar10 = (ulong)uVar1 - 2;
        pfVar11 = pfVar11 + 2;
        puVar12 = (undefined1 *)(iVar4 + lVar7 + 2);
        do {
          lVar10 = lVar10 + -1;
          *puVar12 = (char)(int)((*pfVar11 - *(float *)(param_1 + 0x1c)) *
                                *(float *)(param_1 + 0x24));
          pfVar11 = pfVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar10 != 0);
      }
    }
    puVar2[(int)lVar5] = 0xff;
  }
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     (*param_2 == *(int *)(param_1 + 0x70))) {
    lVar5 = (long)*param_2 + 1;
    do {
      while( true ) {
        lVar7 = lVar5;
        if (*(int *)(param_1 + 0x30) <= lVar7) goto LAB_0315d710;
        if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) break;
        lVar5 = lVar7 + 1;
      }
      lVar5 = lVar7 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x28) + lVar7 * 4) != -1);
LAB_0315d710:
    *(int *)(param_1 + 0x70) = (int)lVar7;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_04434b70);
  return;
}


