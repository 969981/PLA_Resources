/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e83e20; name: FUN_02e83e20
 */


undefined8 FUN_02e83e20(long param_1,long *param_2,long param_3,int param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long lVar13;
  undefined4 local_a8 [18];
  
  plVar12 = *(long **)(param_1 + 0x28);
  if (plVar12 != (long *)0x0) {
    plVar10 = (long *)0x0;
    do {
      plVar11 = (long *)plVar12[2];
      lVar13 = plVar11[1];
      plVar6 = (long *)FUN_02e8766c(lVar13);
      if (param_2 == (long *)0x0) {
LAB_02e83ee4:
        if ((((param_3 != 0) && (plVar11[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar11[6] != param_4)))) ||
           ((sVar4 = *(short *)(lVar13 + 0x34), sVar4 != 0x403 &&
            ((sVar4 != 0x503 ||
             (uVar7 = FUN_02e8e0c4(plVar11[1],param_2,plVar11[8],plVar11), (uVar7 & 1) == 0))))))
        goto LAB_02e83ec0;
        local_a8[0] = 0;
        plVar9 = (long *)plVar11[1];
        if ((*(short *)((long)plVar9 + 0x34) == 0x503) || (*(short *)((long)plVar9 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar9 + 0x58))(plVar9,local_a8);
        }
        plVar9 = DAT_0440a170;
        uVar2 = *(uint *)(plVar11 + 6);
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar9 + 1);
        if (uVar3 != 0) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar2 / uVar3;
          }
          for (lVar13 = *(long *)(*plVar9 + (ulong)(uVar2 - uVar5 * uVar3) * 8); lVar13 != 0;
              lVar13 = *(long *)(lVar13 + 0x68)) {
            if (*(uint *)(lVar13 + 0x4c) == uVar2) {
              *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) + -1;
              FUN_02edcd9c(plVar9,uVar2);
              goto LAB_02e83fa8;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e83fa8:
        plVar8 = (long *)*plVar12;
        plVar9 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar12) {
          plVar9 = plVar10;
        }
        *plVar9 = (long)plVar8;
        if (*(long **)(param_1 + 0x30) == plVar12) {
          *(long **)(param_1 + 0x30) = plVar10;
        }
        *plVar12 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar12;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar11[1] + 0x18))();
        (**(code **)(*plVar11 + 8))(plVar11);
        (*DAT_0442d150)(0,plVar11);
      }
      else {
        if (plVar6 != (long *)0x0) {
          if (plVar6 == param_2) goto LAB_02e83ee4;
          plVar8 = (long *)plVar6[0x11];
          for (plVar9 = (long *)plVar6[0x10]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0x10])
          {
            if (plVar9 == param_2) goto LAB_02e83ee4;
            if (plVar8 == (long *)0x0) {
              plVar8 = (long *)plVar9[0x11];
            }
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x11]) {
            if (plVar8 == param_2) goto LAB_02e83ee4;
          }
        }
LAB_02e83ec0:
        plVar8 = (long *)*plVar12;
        plVar10 = plVar12;
      }
      plVar12 = plVar8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    } while (plVar12 != (long *)0x0);
  }
  plVar12 = *(long **)(param_1 + 0x50);
  if (plVar12 != (long *)0x0) {
    plVar10 = (long *)0x0;
    do {
      plVar11 = (long *)plVar12[2];
      lVar13 = plVar11[1];
      plVar6 = (long *)FUN_02e8766c(lVar13);
      if (param_2 == (long *)0x0) {
LAB_02e840d0:
        if ((((param_3 != 0) && (plVar11[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar11[6] != param_4)))) ||
           ((*(short *)(lVar13 + 0x34) != 0x503 ||
            (uVar7 = FUN_02e8e0c4(plVar11[1],param_2,plVar11[8],plVar11), (uVar7 & 1) == 0))))
        goto LAB_02e840ac;
        local_a8[0] = 0;
        plVar9 = (long *)plVar11[1];
        if ((*(short *)((long)plVar9 + 0x34) == 0x503) || (*(short *)((long)plVar9 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar9 + 0x58))(plVar9,local_a8);
        }
        plVar9 = DAT_0440a170;
        uVar2 = *(uint *)(plVar11 + 6);
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar9 + 1);
        if (uVar3 != 0) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar2 / uVar3;
          }
          for (lVar13 = *(long *)(*plVar9 + (ulong)(uVar2 - uVar5 * uVar3) * 8); lVar13 != 0;
              lVar13 = *(long *)(lVar13 + 0x68)) {
            if (*(uint *)(lVar13 + 0x4c) == uVar2) {
              *(int *)(lVar13 + 0x24) = *(int *)(lVar13 + 0x24) + -1;
              FUN_02edcd9c(plVar9,uVar2);
              goto LAB_02e8418c;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e8418c:
        plVar8 = (long *)*plVar12;
        plVar9 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar12) {
          plVar9 = plVar10;
        }
        *plVar9 = (long)plVar8;
        if (*(long **)(param_1 + 0x58) == plVar12) {
          *(long **)(param_1 + 0x58) = plVar10;
        }
        *plVar12 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar12;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar11[1] + 0x18))();
        (**(code **)(*plVar11 + 8))(plVar11);
        (*DAT_0442d150)(0,plVar11);
      }
      else {
        if (plVar6 != (long *)0x0) {
          if (plVar6 == param_2) goto LAB_02e840d0;
          plVar8 = (long *)plVar6[0x11];
          for (plVar9 = (long *)plVar6[0x10]; plVar9 != (long *)0x0; plVar9 = (long *)plVar9[0x10])
          {
            if (plVar9 == param_2) goto LAB_02e840d0;
            if (plVar8 == (long *)0x0) {
              plVar8 = (long *)plVar9[0x11];
            }
          }
          for (; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x11]) {
            if (plVar8 == param_2) goto LAB_02e840d0;
          }
        }
LAB_02e840ac:
        plVar8 = (long *)*plVar12;
        plVar10 = plVar12;
      }
      plVar12 = plVar8;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    } while (plVar12 != (long *)0x0);
  }
  return 1;
}


