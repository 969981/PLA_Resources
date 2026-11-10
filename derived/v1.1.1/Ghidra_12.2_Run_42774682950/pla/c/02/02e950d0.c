/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e950d0; name: FUN_02e950d0
 */


void FUN_02e950d0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong *puVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  ulong auStack_450 [128];
  
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar3 = *(uint *)(param_1 + 0xb8);
  if ((uVar3 == 0) || (uVar4 = *(uint *)(param_1 + 0xb0), uVar4 == 0)) {
LAB_02e95280:
    nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
    return;
  }
  puVar7 = *(undefined8 **)(param_1 + 0xa8);
  puVar9 = (ulong *)*puVar7;
  if (puVar9 == (ulong *)0x0) {
    uVar8 = 0;
    do {
      if (uVar4 - 1 == uVar8) goto LAB_02e95280;
      uVar8 = uVar8 + 1;
      puVar9 = (ulong *)puVar7[uVar8 & 0xffffffff];
    } while (puVar9 == (ulong *)0x0);
  }
  else {
    uVar8 = 0;
  }
  iVar10 = 0;
  iVar5 = (int)puVar9[0xe];
  do {
    if (iVar5 == 0) {
      puVar9 = (ulong *)puVar9[2];
    }
    else {
      uVar2 = puVar9[1];
      lVar11 = (long)iVar10;
      iVar10 = iVar10 + 1;
      auStack_450[(ulong)uVar3 * -2 + lVar11 * 2 + 0x80] = *puVar9;
      (auStack_450 + (ulong)uVar3 * -2 + lVar11 * 2 + 0x80)[1] = uVar2;
      puVar9 = (ulong *)puVar9[2];
    }
    while (puVar9 == (ulong *)0x0) {
      uVar1 = (int)uVar8 + 1;
      uVar8 = (ulong)uVar1;
      if (uVar4 <= uVar1) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        if (iVar10 < 1) {
          return;
        }
        lVar11 = (long)iVar10;
        goto LAB_02e95190;
      }
      puVar9 = (ulong *)puVar7[uVar1];
    }
    iVar5 = (int)puVar9[0xe];
  } while( true );
LAB_02e95190:
  lVar11 = lVar11 + -1;
  uVar8 = auStack_450[(ulong)uVar3 * -2 + lVar11 * 2 + 0x80];
  uVar2 = (auStack_450 + (ulong)uVar3 * -2 + lVar11 * 2 + 0x80)[1];
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  nn::os::LockMutex((MutexType *)&DAT_0440a350);
  uVar4 = *(uint *)(param_1 + 0xb0);
  if (uVar4 != 0) {
    iVar10 = (int)uVar8;
    uVar1 = (int)uVar2 + iVar10;
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar1 / uVar4;
    }
    for (piVar12 = *(int **)(*(long *)(param_1 + 0xa8) + (ulong)(uVar1 - uVar6 * uVar4) * 8);
        piVar12 != (int *)0x0; piVar12 = *(int **)(piVar12 + 4)) {
      if ((*piVar12 == iVar10) && (*(ulong *)(piVar12 + 2) == uVar2)) {
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        if (piVar12[0x1c] == 0) goto LAB_02e951d4;
        nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
        FUN_02e94c9c(param_1,uVar8 & 0xffffffff,1,1);
        goto joined_r0x02e95240;
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
LAB_02e951d4:
  nn::os::UnlockMutex((MutexType *)&DAT_0440a350);
joined_r0x02e95240:
  if (lVar11 < 1) {
    return;
  }
  goto LAB_02e95190;
}


