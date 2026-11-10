/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6b230; name: FUN_02e6b230
 */


void FUN_02e6b230(long *param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  
  (**(code **)(*param_1 + 0xf8))();
  bVar3 = *(byte *)(param_1 + 0x18);
  uVar4 = (uint)bVar3;
  if ((uint)bVar3 < *(uint *)(param_1 + 0x15)) {
    plVar12 = param_1 + 0x17;
    plVar9 = (long *)*plVar12;
    if (bVar3 == 0) {
      plVar13 = (long *)0x0;
    }
    else {
      do {
        plVar13 = plVar9;
        plVar9 = (long *)*plVar13;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    lVar6 = param_1[10];
    nn::os::LockMutex((MutexType *)(lVar6 + 0x1e8));
    if (plVar9 != (long *)0x0) {
      plVar11 = (long *)*plVar9;
      plVar10 = plVar12;
      if ((long *)param_1[0x17] != plVar9) {
        plVar10 = plVar13;
      }
      *plVar10 = (long)plVar11;
      if ((long *)param_1[0x16] == plVar9) {
        param_1[0x16] = (long)plVar13;
      }
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      lVar8 = *(long *)plVar9[1];
      uVar4 = *(uint *)((long *)plVar9[1] + 3);
      uVar2 = *(uint *)(param_1 + 0x12);
      uVar1 = lVar8 + (ulong)*(uint *)(plVar9 + 2);
      iVar5 = uVar2 - (int)uVar1;
      if (uVar2 <= uVar1 || lVar8 + (ulong)uVar4 <= (ulong)uVar2) {
        iVar5 = uVar4 - *(uint *)(plVar9 + 2);
      }
      *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar5;
      lVar7 = param_1[10];
      lVar8 = plVar9[1];
      plVar9[1] = 0;
      if (lVar8 != 0) {
        FUN_02e6d800(lVar7 + 0x2a8);
      }
      (*DAT_0442d150)(7,plVar9);
      if (plVar11 != (long *)0x0) {
        plVar10 = (long *)*plVar11;
        plVar9 = plVar12;
        if ((long *)param_1[0x17] != plVar11) {
          plVar9 = plVar13;
        }
        *plVar9 = (long)plVar10;
        if ((long *)param_1[0x16] == plVar11) {
          param_1[0x16] = (long)plVar13;
        }
        *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
        lVar8 = *(long *)plVar11[1];
        uVar4 = *(uint *)(param_1 + 0x12);
        uVar2 = *(uint *)((long *)plVar11[1] + 3);
        uVar1 = lVar8 + (ulong)*(uint *)(plVar11 + 2);
        if ((uVar1 < uVar4) && ((ulong)uVar4 < lVar8 + (ulong)uVar2)) {
          iVar5 = uVar4 - (int)uVar1;
        }
        else {
          iVar5 = uVar2 - *(uint *)(plVar11 + 2);
        }
        *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar5;
        lVar7 = param_1[10];
        lVar8 = plVar11[1];
        plVar11[1] = 0;
        if (lVar8 != 0) {
          FUN_02e6d800(lVar7 + 0x2a8);
        }
        (*DAT_0442d150)(7,plVar11);
        while (plVar10 != (long *)0x0) {
          plVar11 = (long *)*plVar10;
          plVar9 = plVar12;
          if ((long *)param_1[0x17] != plVar10) {
            plVar9 = plVar13;
          }
          *plVar9 = (long)plVar11;
          if ((long *)param_1[0x16] == plVar10) {
            param_1[0x16] = (long)plVar13;
          }
          *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
          lVar8 = *(long *)plVar10[1];
          uVar4 = *(uint *)((long *)plVar10[1] + 3);
          uVar2 = *(uint *)(param_1 + 0x12);
          uVar1 = lVar8 + (ulong)*(uint *)(plVar10 + 2);
          iVar5 = uVar4 - *(uint *)(plVar10 + 2);
          if (uVar1 < uVar2 && (ulong)uVar2 < lVar8 + (ulong)uVar4) {
            iVar5 = uVar2 - (int)uVar1;
          }
          *(int *)(param_1 + 0x13) = (int)param_1[0x13] - iVar5;
          lVar7 = param_1[10];
          lVar8 = plVar10[1];
          plVar10[1] = 0;
          if (lVar8 != 0) {
            FUN_02e6d800(lVar7 + 0x2a8);
          }
          (*DAT_0442d150)(7,plVar10);
          plVar10 = plVar11;
        }
      }
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x1e8));
  }
  FUN_02e6ba60(param_1);
  return;
}


