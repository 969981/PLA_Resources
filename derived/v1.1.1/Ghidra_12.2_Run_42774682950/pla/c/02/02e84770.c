/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e84770; name: FUN_02e84770
 */


undefined8 FUN_02e84770(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined4 local_a8 [18];
  
  if ((param_4 | 1) == 3) {
    puVar8 = (undefined8 *)(param_1 + 0x28);
    puVar12 = (undefined8 *)*puVar8;
    if (puVar12 != (undefined8 *)0x0) {
      if (param_4 == 2) {
        puVar13 = (undefined8 *)0x0;
        do {
          plVar9 = (long *)puVar12[2];
          if (((long *)plVar9[1] == param_2) &&
             (uVar5 = FUN_02e8e0c4(param_2,param_3,plVar9[8],plVar9), (uVar5 & 1) != 0)) {
            local_a8[0] = 0;
            plVar6 = (long *)plVar9[1];
            if ((*(short *)((long)plVar6 + 0x34) == 0x503) ||
               (*(short *)((long)plVar6 + 0x34) == 0x403)) {
              (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
            }
            plVar6 = DAT_0440a170;
            uVar2 = *(uint *)(plVar9 + 6);
            pMVar1 = (MutexType *)(DAT_0440a170 + 3);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(plVar6 + 1);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
                  lVar7 = *(long *)(lVar7 + 0x68)) {
                if (*(uint *)(lVar7 + 0x4c) == uVar2) {
                  *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + -1;
                  FUN_02edcd9c(plVar6,uVar2);
                  goto LAB_02e849d0;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
LAB_02e849d0:
            puVar11 = (undefined8 *)*puVar12;
            puVar10 = puVar8;
            if (*(undefined8 **)(param_1 + 0x28) != puVar12) {
              puVar10 = puVar13;
            }
            *puVar10 = puVar11;
            if (*(undefined8 **)(param_1 + 0x30) == puVar12) {
              *(undefined8 **)(param_1 + 0x30) = puVar13;
            }
            *puVar12 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 **)(param_1 + 0x38) = puVar12;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
            (**(code **)(*(long *)plVar9[1] + 0x18))();
            (**(code **)(*plVar9 + 8))(plVar9);
            (*DAT_0442d150)(0,plVar9);
            puVar12 = puVar13;
          }
          else {
            puVar11 = (undefined8 *)*puVar12;
          }
          puVar13 = puVar12;
          puVar12 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
      }
      else {
        puVar13 = (undefined8 *)0x0;
        do {
          while( true ) {
            plVar9 = (long *)puVar12[2];
            if ((long *)plVar9[1] != param_2) break;
            local_a8[0] = 0;
            plVar6 = (long *)plVar9[1];
            if ((*(short *)((long)param_2 + 0x34) == 0x503) ||
               (plVar6 = param_2, *(short *)((long)param_2 + 0x34) == 0x403)) {
              (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
            }
            plVar6 = DAT_0440a170;
            uVar2 = *(uint *)(plVar9 + 6);
            pMVar1 = (MutexType *)(DAT_0440a170 + 3);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(plVar6 + 1);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
                  lVar7 = *(long *)(lVar7 + 0x68)) {
                if (*(uint *)(lVar7 + 0x4c) == uVar2) {
                  *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + -1;
                  FUN_02edcd9c(plVar6,uVar2);
                  goto LAB_02e84870;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
LAB_02e84870:
            puVar10 = (undefined8 *)*puVar12;
            puVar11 = puVar8;
            if (*(undefined8 **)(param_1 + 0x28) != puVar12) {
              puVar11 = puVar13;
            }
            *puVar11 = puVar10;
            if (*(undefined8 **)(param_1 + 0x30) == puVar12) {
              *(undefined8 **)(param_1 + 0x30) = puVar13;
            }
            *puVar12 = *(undefined8 *)(param_1 + 0x38);
            *(undefined8 **)(param_1 + 0x38) = puVar12;
            *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
            (**(code **)(*(long *)plVar9[1] + 0x18))();
            (**(code **)(*plVar9 + 8))(plVar9);
            (*DAT_0442d150)(0,plVar9);
            puVar12 = puVar10;
            if (puVar10 == (undefined8 *)0x0) goto LAB_02e84a64;
          }
          puVar11 = (undefined8 *)*puVar12;
          puVar13 = puVar12;
          puVar12 = puVar11;
        } while (puVar11 != (undefined8 *)0x0);
      }
    }
LAB_02e84a64:
    puVar12 = *(undefined8 **)(param_1 + 0x50);
    if (puVar12 != (undefined8 *)0x0) {
      puVar8 = (undefined8 *)0x0;
      do {
        while ((plVar9 = (long *)puVar12[2], (long *)plVar9[1] != param_2 ||
               (uVar5 = FUN_02e8e0c4(param_2,param_3,plVar9[8],plVar9), (uVar5 & 1) == 0))) {
          puVar13 = (undefined8 *)*puVar12;
          puVar8 = puVar12;
          puVar12 = puVar13;
          if (puVar13 == (undefined8 *)0x0) {
            return 1;
          }
        }
        local_a8[0] = 0;
        plVar6 = (long *)plVar9[1];
        if ((*(short *)((long)plVar6 + 0x34) == 0x503) || (*(short *)((long)plVar6 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar6 + 0x58))(plVar6,local_a8);
        }
        plVar6 = DAT_0440a170;
        uVar2 = *(uint *)(plVar9 + 6);
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar6 + 1);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar7 = *(long *)(*plVar6 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar7 != 0;
              lVar7 = *(long *)(lVar7 + 0x68)) {
            if (*(uint *)(lVar7 + 0x4c) == uVar2) {
              *(int *)(lVar7 + 0x24) = *(int *)(lVar7 + 0x24) + -1;
              FUN_02edcd9c(plVar6,uVar2);
              goto LAB_02e84b34;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e84b34:
        puVar11 = (undefined8 *)*puVar12;
        puVar13 = (undefined8 *)(param_1 + 0x50);
        if (*(undefined8 **)(param_1 + 0x50) != puVar12) {
          puVar13 = puVar8;
        }
        *puVar13 = puVar11;
        if (*(undefined8 **)(param_1 + 0x58) == puVar12) {
          *(undefined8 **)(param_1 + 0x58) = puVar8;
        }
        *puVar12 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x60) = puVar12;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar9[1] + 0x18))();
        (**(code **)(*plVar9 + 8))(plVar9);
        (*DAT_0442d150)(0,plVar9);
        puVar12 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
    }
  }
  return 1;
}


