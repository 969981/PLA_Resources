/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e850cc; name: FUN_02e850cc
 */


undefined8 FUN_02e850cc(long param_1,long param_2,undefined8 param_3,int param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 local_a8 [18];
  
  puVar9 = (undefined8 *)(param_1 + 0x28);
  puVar10 = (undefined8 *)*puVar9;
  if (puVar10 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      puVar13 = (undefined8 *)0x0;
      do {
        plVar11 = (long *)puVar10[2];
        if (((param_4 == 0) || ((int)plVar11[6] == param_4)) &&
           (uVar6 = FUN_02e84f60(plVar11[1],param_3), (uVar6 & 1) == 0)) {
          plVar7 = (long *)plVar11[1];
          sVar4 = *(short *)((long)plVar7 + 0x34);
          if (sVar4 == 0x1820) goto LAB_02e85134;
          local_a8[0] = 0;
          if ((sVar4 == 0x503) || (sVar4 == 0x403)) {
            (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
          }
          plVar7 = DAT_0440a170;
          uVar2 = *(uint *)(plVar11 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar7 + 1);
          if (uVar3 != 0) {
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = uVar2 / uVar3;
            }
            for (lVar8 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar5 * uVar3) * 8); lVar8 != 0;
                lVar8 = *(long *)(lVar8 + 0x68)) {
              if (*(uint *)(lVar8 + 0x4c) == uVar2) {
                *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + -1;
                FUN_02edcd9c(plVar7,uVar2);
                goto LAB_02e851e0;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e851e0:
          puVar14 = (undefined8 *)*puVar10;
          puVar12 = puVar9;
          if (*(undefined8 **)(param_1 + 0x28) != puVar10) {
            puVar12 = puVar13;
          }
          *puVar12 = puVar14;
          if (*(undefined8 **)(param_1 + 0x30) == puVar10) {
            *(undefined8 **)(param_1 + 0x30) = puVar13;
          }
          *puVar10 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar10;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar11[1] + 0x18))();
          (**(code **)(*plVar11 + 8))(plVar11);
          (*DAT_0442d150)(0,plVar11);
        }
        else {
LAB_02e85134:
          puVar14 = (undefined8 *)*puVar10;
          puVar13 = puVar10;
        }
        puVar10 = puVar14;
      } while (puVar14 != (undefined8 *)0x0);
    }
    else {
      puVar13 = (undefined8 *)0x0;
      do {
        while ((plVar11 = (long *)puVar10[2], plVar11[8] != param_2 ||
               (((param_4 != 0 && ((int)plVar11[6] != param_4)) ||
                (uVar6 = FUN_02e84f60(plVar11[1],param_3), (uVar6 & 1) != 0))))) {
LAB_02e852ac:
          puVar14 = (undefined8 *)*puVar10;
          puVar13 = puVar10;
          puVar10 = puVar14;
          if (puVar14 == (undefined8 *)0x0) goto LAB_02e853f4;
        }
        plVar7 = (long *)plVar11[1];
        sVar4 = *(short *)((long)plVar7 + 0x34);
        if (sVar4 == 0x1820) goto LAB_02e852ac;
        local_a8[0] = 0;
        if ((sVar4 == 0x503) || (sVar4 == 0x403)) {
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
        }
        plVar7 = DAT_0440a170;
        uVar2 = *(uint *)(plVar11 + 6);
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar7 + 1);
        if (uVar3 != 0) {
          uVar5 = 0;
          if (uVar3 != 0) {
            uVar5 = uVar2 / uVar3;
          }
          for (lVar8 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar5 * uVar3) * 8); lVar8 != 0;
              lVar8 = *(long *)(lVar8 + 0x68)) {
            if (*(uint *)(lVar8 + 0x4c) == uVar2) {
              *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + -1;
              FUN_02edcd9c(plVar7,uVar2);
              goto LAB_02e85354;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e85354:
        puVar12 = (undefined8 *)*puVar10;
        puVar14 = puVar9;
        if (*(undefined8 **)(param_1 + 0x28) != puVar10) {
          puVar14 = puVar13;
        }
        *puVar14 = puVar12;
        if (*(undefined8 **)(param_1 + 0x30) == puVar10) {
          *(undefined8 **)(param_1 + 0x30) = puVar13;
        }
        *puVar10 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar10;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar11[1] + 0x18))();
        (**(code **)(*plVar11 + 8))(plVar11);
        (*DAT_0442d150)(0,plVar11);
        puVar10 = puVar12;
      } while (puVar12 != (undefined8 *)0x0);
    }
  }
LAB_02e853f4:
  puVar9 = (undefined8 *)(param_1 + 0x50);
  puVar10 = (undefined8 *)*puVar9;
  if (puVar10 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      puVar13 = (undefined8 *)0x0;
      do {
        plVar11 = (long *)puVar10[2];
        if (((param_4 == 0) || ((int)plVar11[6] == param_4)) &&
           (uVar6 = FUN_02e84f60(plVar11[1],param_3), (uVar6 & 1) == 0)) {
          plVar7 = (long *)plVar11[1];
          sVar4 = *(short *)((long)plVar7 + 0x34);
          if (sVar4 == 0x1820) goto LAB_02e85428;
          local_a8[0] = 0;
          if ((sVar4 == 0x503) || (sVar4 == 0x403)) {
            (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
          }
          plVar7 = DAT_0440a170;
          uVar2 = *(uint *)(plVar11 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar7 + 1);
          if (uVar3 != 0) {
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = uVar2 / uVar3;
            }
            for (lVar8 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar5 * uVar3) * 8); lVar8 != 0;
                lVar8 = *(long *)(lVar8 + 0x68)) {
              if (*(uint *)(lVar8 + 0x4c) == uVar2) {
                *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + -1;
                FUN_02edcd9c(plVar7,uVar2);
                goto LAB_02e854d0;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e854d0:
          puVar14 = (undefined8 *)*puVar10;
          puVar12 = puVar9;
          if (*(undefined8 **)(param_1 + 0x50) != puVar10) {
            puVar12 = puVar13;
          }
          *puVar12 = puVar14;
          if (*(undefined8 **)(param_1 + 0x58) == puVar10) {
            *(undefined8 **)(param_1 + 0x58) = puVar13;
          }
          *puVar10 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar10;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar11[1] + 0x18))();
          (**(code **)(*plVar11 + 8))(plVar11);
          (*DAT_0442d150)(0,plVar11);
        }
        else {
LAB_02e85428:
          puVar14 = (undefined8 *)*puVar10;
          puVar13 = puVar10;
        }
        puVar10 = puVar14;
      } while (puVar14 != (undefined8 *)0x0);
    }
    else {
      puVar13 = (undefined8 *)0x0;
      do {
        while ((puVar14 = puVar10, plVar11 = (long *)puVar14[2], plVar11[8] == param_2 &&
               (((param_4 == 0 || ((int)plVar11[6] == param_4)) &&
                (uVar6 = FUN_02e84f60(plVar11[1],param_3), (uVar6 & 1) == 0))))) {
          plVar7 = (long *)plVar11[1];
          sVar4 = *(short *)((long)plVar7 + 0x34);
          if (sVar4 == 0x1820) break;
          local_a8[0] = 0;
          if ((sVar4 == 0x503) || (sVar4 == 0x403)) {
            (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
          }
          plVar7 = DAT_0440a170;
          uVar2 = *(uint *)(plVar11 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar7 + 1);
          if (uVar3 != 0) {
            uVar5 = 0;
            if (uVar3 != 0) {
              uVar5 = uVar2 / uVar3;
            }
            for (lVar8 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar5 * uVar3) * 8); lVar8 != 0;
                lVar8 = *(long *)(lVar8 + 0x68)) {
              if (*(uint *)(lVar8 + 0x4c) == uVar2) {
                *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + -1;
                FUN_02edcd9c(plVar7,uVar2);
                goto LAB_02e8563c;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e8563c:
          puVar10 = (undefined8 *)*puVar14;
          puVar12 = puVar9;
          if (*(undefined8 **)(param_1 + 0x50) != puVar14) {
            puVar12 = puVar13;
          }
          *puVar12 = puVar10;
          if (*(undefined8 **)(param_1 + 0x58) == puVar14) {
            *(undefined8 **)(param_1 + 0x58) = puVar13;
          }
          *puVar14 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar14;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar11[1] + 0x18))();
          (**(code **)(*plVar11 + 8))(plVar11);
          (*DAT_0442d150)(0,plVar11);
          if (puVar10 == (undefined8 *)0x0) {
            return 1;
          }
        }
        puVar10 = (undefined8 *)*puVar14;
        puVar13 = puVar14;
      } while ((undefined8 *)*puVar14 != (undefined8 *)0x0);
    }
  }
  return 1;
}


