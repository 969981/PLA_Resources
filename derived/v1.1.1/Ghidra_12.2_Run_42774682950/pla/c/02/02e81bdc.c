/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e81bdc; name: FUN_02e81bdc
 */


void FUN_02e81bdc(long param_1,int param_2,int param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined4 local_a8 [18];
  
  puVar7 = (undefined8 *)(param_1 + 0x28);
  puVar11 = (undefined8 *)*puVar7;
  if (puVar11 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar12 = (undefined8 *)0x0;
      do {
        while( true ) {
          plVar8 = (long *)puVar11[2];
          plVar5 = (long *)plVar8[1];
          if ((int)plVar5[2] != param_2) break;
          local_a8[0] = 0;
          if ((*(short *)((long)plVar5 + 0x34) == 0x503) ||
             (*(short *)((long)plVar5 + 0x34) == 0x403)) {
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          plVar5 = DAT_0440a170;
          uVar2 = *(uint *)(plVar8 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar5 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar6 != 0;
                lVar6 = *(long *)(lVar6 + 0x68)) {
              if (*(uint *)(lVar6 + 0x4c) == uVar2) {
                *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
                FUN_02edcd9c(plVar5,uVar2);
                goto LAB_02e81e18;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e81e18:
          puVar9 = (undefined8 *)*puVar11;
          puVar10 = puVar7;
          if (*(undefined8 **)(param_1 + 0x28) != puVar11) {
            puVar10 = puVar12;
          }
          *puVar10 = puVar9;
          if (*(undefined8 **)(param_1 + 0x30) == puVar11) {
            *(undefined8 **)(param_1 + 0x30) = puVar12;
          }
          *puVar11 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar11;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar8[1] + 0x18))();
          (**(code **)(*plVar8 + 8))(plVar8);
          (*DAT_0442d150)(0,plVar8);
          puVar11 = puVar9;
          if (puVar9 == (undefined8 *)0x0) goto LAB_02e81eb4;
        }
        puVar10 = (undefined8 *)*puVar11;
        puVar12 = puVar11;
        puVar11 = puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    else {
      puVar12 = (undefined8 *)0x0;
      do {
        plVar8 = (long *)puVar11[2];
        plVar5 = (long *)plVar8[1];
        if (((int)plVar5[2] == param_2) && ((int)plVar8[6] == param_3)) {
          local_a8[0] = 0;
          if ((*(short *)((long)plVar5 + 0x34) == 0x503) ||
             (*(short *)((long)plVar5 + 0x34) == 0x403)) {
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          plVar5 = DAT_0440a170;
          uVar2 = *(uint *)(plVar8 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar5 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar6 != 0;
                lVar6 = *(long *)(lVar6 + 0x68)) {
              if (*(uint *)(lVar6 + 0x4c) == uVar2) {
                *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
                FUN_02edcd9c(plVar5,uVar2);
                goto LAB_02e81cdc;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e81cdc:
          puVar10 = (undefined8 *)*puVar11;
          puVar9 = puVar7;
          if (*(undefined8 **)(param_1 + 0x28) != puVar11) {
            puVar9 = puVar12;
          }
          *puVar9 = puVar10;
          if (*(undefined8 **)(param_1 + 0x30) == puVar11) {
            *(undefined8 **)(param_1 + 0x30) = puVar12;
          }
          *puVar11 = *(undefined8 *)(param_1 + 0x38);
          *(undefined8 **)(param_1 + 0x38) = puVar11;
          *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
          (**(code **)(*(long *)plVar8[1] + 0x18))();
          (**(code **)(*plVar8 + 8))(plVar8);
          (*DAT_0442d150)(0,plVar8);
        }
        else {
          puVar10 = (undefined8 *)*puVar11;
          puVar12 = puVar11;
        }
        puVar11 = puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
  }
LAB_02e81eb4:
  puVar7 = (undefined8 *)(param_1 + 0x50);
  puVar11 = (undefined8 *)*puVar7;
  if (puVar11 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar12 = (undefined8 *)0x0;
      do {
        while( true ) {
          plVar8 = (long *)puVar11[2];
          plVar5 = (long *)plVar8[1];
          if ((int)plVar5[2] != param_2) break;
          local_a8[0] = 0;
          if ((*(short *)((long)plVar5 + 0x34) == 0x503) ||
             (*(short *)((long)plVar5 + 0x34) == 0x403)) {
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          plVar5 = DAT_0440a170;
          uVar2 = *(uint *)(plVar8 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar5 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar6 != 0;
                lVar6 = *(long *)(lVar6 + 0x68)) {
              if (*(uint *)(lVar6 + 0x4c) == uVar2) {
                *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
                FUN_02edcd9c(plVar5,uVar2);
                goto LAB_02e820bc;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e820bc:
          puVar9 = (undefined8 *)*puVar11;
          puVar10 = puVar7;
          if (*(undefined8 **)(param_1 + 0x50) != puVar11) {
            puVar10 = puVar12;
          }
          *puVar10 = puVar9;
          if (*(undefined8 **)(param_1 + 0x58) == puVar11) {
            *(undefined8 **)(param_1 + 0x58) = puVar12;
          }
          *puVar11 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar11;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar8[1] + 0x18))();
          (**(code **)(*plVar8 + 8))(plVar8);
          (*DAT_0442d150)(0,plVar8);
          puVar11 = puVar9;
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
        }
        puVar10 = (undefined8 *)*puVar11;
        puVar12 = puVar11;
        puVar11 = puVar10;
      } while (puVar10 != (undefined8 *)0x0);
    }
    else {
      puVar12 = (undefined8 *)0x0;
      do {
        while( true ) {
          puVar10 = puVar11;
          plVar8 = (long *)puVar10[2];
          plVar5 = (long *)plVar8[1];
          if (((int)plVar5[2] != param_2) || ((int)plVar8[6] != param_3)) break;
          local_a8[0] = 0;
          if ((*(short *)((long)plVar5 + 0x34) == 0x503) ||
             (*(short *)((long)plVar5 + 0x34) == 0x403)) {
            (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
          }
          plVar5 = DAT_0440a170;
          uVar2 = *(uint *)(plVar8 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar5 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar6 = *(long *)(*plVar5 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar6 != 0;
                lVar6 = *(long *)(lVar6 + 0x68)) {
              if (*(uint *)(lVar6 + 0x4c) == uVar2) {
                *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
                FUN_02edcd9c(plVar5,uVar2);
                goto LAB_02e81f84;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e81f84:
          puVar11 = (undefined8 *)*puVar10;
          puVar9 = puVar7;
          if (*(undefined8 **)(param_1 + 0x50) != puVar10) {
            puVar9 = puVar12;
          }
          *puVar9 = puVar11;
          if (*(undefined8 **)(param_1 + 0x58) == puVar10) {
            *(undefined8 **)(param_1 + 0x58) = puVar12;
          }
          *puVar10 = *(undefined8 *)(param_1 + 0x60);
          *(undefined8 **)(param_1 + 0x60) = puVar10;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar8[1] + 0x18))();
          (**(code **)(*plVar8 + 8))(plVar8);
          (*DAT_0442d150)(0,plVar8);
          if (puVar11 == (undefined8 *)0x0) {
            return;
          }
        }
        puVar11 = (undefined8 *)*puVar10;
        puVar12 = puVar10;
      } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
    }
  }
  return;
}


