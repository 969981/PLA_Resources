/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed47e4; name: FUN_02ed47e4
 */


int FUN_02ed47e4(long *param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  pMVar1 = DAT_0440a120;
  if ((*(uint *)((long)param_1 + 0xaa) & 0x20000) != 0) {
    pMVar1 = DAT_0440a120 + 0x38;
  }
  nn::os::LockMutex(pMVar1);
  iVar5 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar5;
  if (iVar5 != 0) goto LAB_02ed482c;
  uVar3 = *(uint *)(param_1 + 2);
  pMVar2 = DAT_0440a120;
  if ((*(byte *)((long)param_1 + 0xac) & 2) != 0) {
    pMVar2 = DAT_0440a120 + 0x38;
  }
  nn::os::LockMutex(pMVar2);
  uVar4 = *(uint *)(pMVar2 + 0x28);
  if (uVar4 != 0) {
    uVar6 = 0;
    if (uVar4 != 0) {
      uVar6 = uVar3 / uVar4;
    }
    plVar7 = (long *)(*(long *)(pMVar2 + 0x20) + (ulong)(uVar3 - uVar6 * uVar4) * 8);
    lVar8 = *plVar7;
    if (lVar8 != 0) {
      if (*(uint *)(lVar8 + 0x10) != uVar3) {
        do {
          lVar9 = lVar8;
          lVar8 = *(long *)(lVar9 + 8);
          if (lVar8 == 0) goto LAB_02ed48b4;
        } while (*(uint *)(lVar8 + 0x10) != uVar3);
        plVar7 = (long *)(lVar9 + 8);
      }
      *plVar7 = *(long *)(lVar8 + 8);
      *(int *)(pMVar2 + 0x30) = *(int *)(pMVar2 + 0x30) + -1;
    }
  }
LAB_02ed48b4:
  nn::os::UnlockMutex(pMVar2);
  (**(code **)(*param_1 + 0x30))(param_1);
  if (param_1[0xf] == 0) {
LAB_02ed48f8:
    plVar7 = (long *)param_1[0x10];
  }
  else {
    lVar8 = param_1[0x10];
    if (((((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x78), lVar9 == 0)) ||
         (0 < *(short *)(lVar9 + 0x90))) ||
        ((0 < *(short *)(lVar9 + 0x94) || (*(short *)(lVar9 + 0x88) != 0)))) ||
       ((*(short *)(lVar9 + 0x8a) != 0 ||
        ((*(long *)(lVar9 + 0x10) != 0 || (*(int *)(lVar9 + 8) != 0)))))) {
      lVar8 = param_1[0x11];
    }
    else {
      if ((*(byte *)(lVar9 + 0x98) >> 1 & 1) == 0) {
LAB_02ed4974:
        if (*(long *)(lVar8 + 0x80) != 0) {
          FUN_02ed5a4c();
        }
        if (*(long *)(lVar8 + 0x88) != 0) {
          FUN_02ed5a4c();
        }
      }
      else {
        puVar12 = &DAT_0440ad60;
        plVar7 = &DAT_0440ad60;
        lVar11 = 0;
        do {
          lVar10 = lVar11;
          lVar11 = *plVar7;
          plVar7 = (long *)(lVar11 + 0x40);
        } while (lVar11 != 0 && lVar8 != lVar11);
        if (lVar11 != 0) {
          if (DAT_0440ad60 != lVar11) {
            puVar12 = (undefined8 *)(lVar10 + 0x40);
          }
          *puVar12 = *(undefined8 *)(lVar11 + 0x40);
          if (DAT_0440ad58 == lVar11) {
            DAT_0440ad58 = lVar10;
          }
          DAT_0440ad50 = DAT_0440ad50 + -1;
          lVar9 = *(long *)(lVar8 + 0x78);
        }
        if (lVar9 != 0) goto LAB_02ed4974;
      }
      FUN_02ed5b5c(&DAT_0440a928,*(undefined8 *)(lVar8 + 0x78));
      *(undefined8 *)(lVar8 + 0x78) = 0;
      lVar8 = param_1[0x11];
    }
    if ((((lVar8 == 0) || (lVar9 = *(long *)(lVar8 + 0x78), lVar9 == 0)) ||
        (0 < *(short *)(lVar9 + 0x90))) ||
       (((0 < *(short *)(lVar9 + 0x94) || (*(short *)(lVar9 + 0x88) != 0)) ||
        ((*(short *)(lVar9 + 0x8a) != 0 ||
         ((*(long *)(lVar9 + 0x10) != 0 || (*(int *)(lVar9 + 8) != 0)))))))) goto LAB_02ed48f8;
    if ((*(byte *)(lVar9 + 0x98) >> 1 & 1) == 0) {
LAB_02ed49ec:
      if (*(long *)(lVar8 + 0x80) != 0) {
        FUN_02ed5a4c();
      }
      if (*(long *)(lVar8 + 0x88) != 0) {
        FUN_02ed5a4c();
      }
    }
    else {
      puVar12 = &DAT_0440ad60;
      plVar7 = &DAT_0440ad60;
      lVar11 = 0;
      do {
        lVar10 = lVar11;
        lVar11 = *plVar7;
        plVar7 = (long *)(lVar11 + 0x40);
      } while (lVar11 != 0 && lVar8 != lVar11);
      if (lVar11 != 0) {
        if (DAT_0440ad60 != lVar11) {
          puVar12 = (undefined8 *)(lVar10 + 0x40);
        }
        *puVar12 = *(undefined8 *)(lVar11 + 0x40);
        if (DAT_0440ad58 == lVar11) {
          DAT_0440ad58 = lVar10;
        }
        DAT_0440ad50 = DAT_0440ad50 + -1;
        lVar9 = *(long *)(lVar8 + 0x78);
      }
      if (lVar9 != 0) goto LAB_02ed49ec;
    }
    FUN_02ed5b5c(&DAT_0440a928,*(undefined8 *)(lVar8 + 0x78));
    *(undefined8 *)(lVar8 + 0x78) = 0;
    plVar7 = (long *)param_1[0x10];
  }
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7,param_1);
  }
  plVar7 = (long *)param_1[0x11];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x60))(plVar7,param_1);
  }
  (**(code **)*param_1)(param_1);
  (*DAT_0442d150)(2,param_1);
LAB_02ed482c:
  nn::os::UnlockMutex(pMVar1);
  return iVar5;
}


