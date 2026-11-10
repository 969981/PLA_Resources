/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0315d2e4; name: FUN_0315d2e4
 */


void FUN_0315d2e4(long param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  uint *puVar11;
  long lVar12;
  
  nn::os::LockMutex((MutexType *)&DAT_04434b70);
  if (*(int *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) == -1) {
    *(undefined4 *)(*(long *)(param_1 + 0x28) + (long)*param_2 * 4) =
         *(undefined4 *)(param_1 + 0x40);
    puVar4 = PTR_PTR_0434a080;
    puVar7 = (undefined1 *)*param_3;
    iVar2 = *(int *)(param_3 + 1);
    iVar3 = *(int *)(param_1 + 0x40);
    puVar11 = (uint *)(param_1 + 0x44);
    uVar8 = *puVar11;
    lVar12 = *(long *)(param_1 + 0x38);
    uVar10 = iVar3 + iVar2;
    if ((int)(uVar8 & 0x3fffffff) < (int)uVar10) {
      if (0x3fffffff < (int)uVar10) {
        FUN_032bd0a8(uVar10);
        uVar8 = *puVar11;
      }
      uVar8 = (uVar8 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar8) {
        uVar8 = 0x3fffffff;
      }
      uVar5 = uVar10;
      if ((int)uVar10 <= (int)uVar8) {
        uVar5 = uVar8;
      }
      lVar12 = FUN_032bd1d4(puVar4,uVar5,1,lVar12,iVar3,puVar11);
      *(long *)(param_1 + 0x38) = lVar12;
    }
    if (iVar2 != 0) {
      puVar9 = (undefined1 *)(lVar12 + iVar3);
      *puVar9 = *puVar7;
      if ((iVar2 != 1) && (puVar9[1] = puVar7[1], iVar2 != 2)) {
        lVar6 = (long)iVar2 + -2;
        puVar7 = puVar7 + 2;
        puVar9 = (undefined1 *)(iVar3 + lVar12 + 2);
        do {
          lVar6 = lVar6 + -1;
          *puVar9 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar9 = puVar9 + 1;
        } while (lVar6 != 0);
      }
      lVar12 = *(long *)(param_1 + 0x38);
    }
    uVar5 = *(uint *)(param_1 + 0x44);
    uVar8 = uVar10 + 1;
    *(uint *)(param_1 + 0x40) = uVar10;
    if ((int)(uVar5 & 0x3fffffff) <= (int)uVar10) {
      if (0x3ffffffe < (int)uVar10) {
        FUN_032bd0a8(uVar8);
        uVar5 = *puVar11;
      }
      uVar5 = (uVar5 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar5) {
        uVar5 = 0x3fffffff;
      }
      uVar1 = uVar8;
      if ((int)uVar8 <= (int)uVar5) {
        uVar1 = uVar5;
      }
      lVar12 = FUN_032bd1d4(puVar4,uVar1,1,lVar12,uVar10,puVar11);
      uVar10 = *(uint *)(param_1 + 0x40);
      *(long *)(param_1 + 0x38) = lVar12;
    }
    *(undefined1 *)(lVar12 + (int)uVar10) = 0xff;
    *(uint *)(param_1 + 0x40) = uVar8;
  }
  if ((*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) &&
     (*param_2 == *(int *)(param_1 + 0x70))) {
    lVar12 = (long)*param_2 + 1;
    do {
      while( true ) {
        lVar6 = lVar12;
        if (*(int *)(param_1 + 0x30) <= lVar6) goto LAB_0315d474;
        if (*(float *)(param_1 + 0x1c) + 0.001 < *(float *)(param_1 + 0x18)) break;
        lVar12 = lVar6 + 1;
      }
      lVar12 = lVar6 + 1;
    } while (*(int *)(*(long *)(param_1 + 0x28) + lVar6 * 4) != -1);
LAB_0315d474:
    *(int *)(param_1 + 0x70) = (int)lVar6;
  }
  nn::os::UnlockMutex((MutexType *)&DAT_04434b70);
  return;
}


