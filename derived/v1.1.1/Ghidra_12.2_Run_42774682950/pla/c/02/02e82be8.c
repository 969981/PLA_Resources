/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e82be8; name: FUN_02e82be8
 */


void FUN_02e82be8(long param_1,int param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined4 local_a8 [18];
  
  puVar11 = *(undefined8 **)(param_1 + 0x28);
  if (puVar11 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      while (plVar7 = (long *)puVar11[2], (int)plVar7[6] == param_2) {
        local_a8[0] = 0;
        plVar5 = (long *)plVar7[1];
        if ((*(short *)((long)plVar5 + 0x34) == 0x503) || (*(short *)((long)plVar5 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
        }
        plVar5 = DAT_0440a170;
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        uVar2 = *(uint *)(plVar7 + 6);
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
              goto LAB_02e82cec;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e82cec:
        puVar9 = (undefined8 *)*puVar11;
        puVar8 = (undefined8 *)(param_1 + 0x28);
        if (*(undefined8 **)(param_1 + 0x28) != puVar11) {
          puVar8 = puVar10;
        }
        *puVar8 = puVar9;
        if (*(undefined8 **)(param_1 + 0x30) == puVar11) {
          *(undefined8 **)(param_1 + 0x30) = puVar10;
        }
        *puVar11 = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar11;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        (**(code **)(*plVar7 + 8))(plVar7);
        (*DAT_0442d150)(0,plVar7);
        puVar11 = puVar9;
        if (puVar9 == (undefined8 *)0x0) goto LAB_02e82c48;
      }
      puVar8 = (undefined8 *)*puVar11;
      puVar10 = puVar11;
      puVar11 = puVar8;
    } while (puVar8 != (undefined8 *)0x0);
  }
LAB_02e82c48:
  puVar11 = *(undefined8 **)(param_1 + 0x50);
  if (puVar11 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)0x0;
    do {
      while (puVar8 = puVar11, plVar7 = (long *)puVar8[2], (int)plVar7[6] == param_2) {
        local_a8[0] = 0;
        plVar5 = (long *)plVar7[1];
        if ((*(short *)((long)plVar5 + 0x34) == 0x503) || (*(short *)((long)plVar5 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar5 + 0x58))(plVar5,local_a8);
        }
        plVar5 = DAT_0440a170;
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        uVar2 = *(uint *)(plVar7 + 6);
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
              goto LAB_02e82e18;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e82e18:
        puVar11 = (undefined8 *)*puVar8;
        puVar9 = (undefined8 *)(param_1 + 0x50);
        if (*(undefined8 **)(param_1 + 0x50) != puVar8) {
          puVar9 = puVar10;
        }
        *puVar9 = puVar11;
        if (*(undefined8 **)(param_1 + 0x58) == puVar8) {
          *(undefined8 **)(param_1 + 0x58) = puVar10;
        }
        *puVar8 = *(undefined8 *)(param_1 + 0x60);
        *(undefined8 **)(param_1 + 0x60) = puVar8;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar7[1] + 0x18))();
        (**(code **)(*plVar7 + 8))(plVar7);
        (*DAT_0442d150)(0,plVar7);
        if (puVar11 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar11 = (undefined8 *)*puVar8;
      puVar10 = puVar8;
    } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
  }
  return;
}


