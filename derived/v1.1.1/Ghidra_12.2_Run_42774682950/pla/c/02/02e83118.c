/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e83118; name: FUN_02e83118
 */


undefined8 FUN_02e83118(long param_1,long *param_2,long param_3,int param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined4 local_a8 [18];
  
  plVar11 = *(long **)(param_1 + 0x28);
  if (plVar11 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      plVar9 = (long *)plVar11[2];
      lVar10 = plVar9[1];
      plVar5 = (long *)FUN_02e8766c(lVar10);
      if (param_2 == (long *)0x0) {
LAB_02e831d8:
        if ((((param_3 != 0) && (plVar9[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar9[6] != param_4)))) ||
           (*(short *)(lVar10 + 0x34) == 0x1820)) goto LAB_02e831b0;
        local_a8[0] = 0;
        plVar7 = (long *)plVar9[1];
        if ((*(short *)((long)plVar7 + 0x34) == 0x503) || (*(short *)((long)plVar7 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
        }
        plVar7 = DAT_0440a170;
        uVar2 = *(uint *)(plVar9 + 6);
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar7 + 1);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar10 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar10 != 0;
              lVar10 = *(long *)(lVar10 + 0x68)) {
            if (*(uint *)(lVar10 + 0x4c) == uVar2) {
              *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + -1;
              FUN_02edcd9c(plVar7,uVar2);
              goto LAB_02e8327c;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e8327c:
        plVar6 = (long *)*plVar11;
        plVar7 = (long *)(param_1 + 0x28);
        if (*(long **)(param_1 + 0x28) != plVar11) {
          plVar7 = plVar8;
        }
        *plVar7 = (long)plVar6;
        if (*(long **)(param_1 + 0x30) == plVar11) {
          *(long **)(param_1 + 0x30) = plVar8;
        }
        *plVar11 = *(long *)(param_1 + 0x38);
        *(long **)(param_1 + 0x38) = plVar11;
        *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + -1;
        (**(code **)(*(long *)plVar9[1] + 0x18))();
        (**(code **)(*plVar9 + 8))(plVar9);
        (*DAT_0442d150)(0,plVar9);
      }
      else {
        if (plVar5 != (long *)0x0) {
          if (plVar5 == param_2) goto LAB_02e831d8;
          plVar6 = (long *)plVar5[0x11];
          for (plVar7 = (long *)plVar5[0x10]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x10])
          {
            if (plVar7 == param_2) goto LAB_02e831d8;
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)plVar7[0x11];
            }
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x11]) {
            if (plVar6 == param_2) goto LAB_02e831d8;
          }
        }
LAB_02e831b0:
        plVar6 = (long *)*plVar11;
        plVar8 = plVar11;
      }
      plVar11 = plVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    } while (plVar11 != (long *)0x0);
  }
  plVar11 = *(long **)(param_1 + 0x50);
  if (plVar11 != (long *)0x0) {
    plVar8 = (long *)0x0;
    do {
      plVar9 = (long *)plVar11[2];
      lVar10 = plVar9[1];
      plVar5 = (long *)FUN_02e8766c(lVar10);
      if (param_2 == (long *)0x0) {
LAB_02e833dc:
        if ((((param_3 != 0) && (plVar9[8] != param_3)) ||
            ((param_4 != 0 && ((int)plVar9[6] != param_4)))) ||
           (*(short *)(lVar10 + 0x34) == 0x1820)) goto LAB_02e833b4;
        local_a8[0] = 0;
        plVar7 = (long *)plVar9[1];
        if ((*(short *)((long)plVar7 + 0x34) == 0x503) || (*(short *)((long)plVar7 + 0x34) == 0x403)
           ) {
          (**(code **)(*plVar7 + 0x58))(plVar7,local_a8);
        }
        plVar7 = DAT_0440a170;
        uVar2 = *(uint *)(plVar9 + 6);
        pMVar1 = (MutexType *)(DAT_0440a170 + 3);
        nn::os::LockMutex(pMVar1);
        uVar3 = *(uint *)(plVar7 + 1);
        if (uVar3 != 0) {
          uVar4 = 0;
          if (uVar3 != 0) {
            uVar4 = uVar2 / uVar3;
          }
          for (lVar10 = *(long *)(*plVar7 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar10 != 0;
              lVar10 = *(long *)(lVar10 + 0x68)) {
            if (*(uint *)(lVar10 + 0x4c) == uVar2) {
              *(int *)(lVar10 + 0x24) = *(int *)(lVar10 + 0x24) + -1;
              FUN_02edcd9c(plVar7,uVar2);
              goto LAB_02e83494;
            }
          }
        }
        nn::os::UnlockMutex(pMVar1);
LAB_02e83494:
        plVar6 = (long *)*plVar11;
        plVar7 = (long *)(param_1 + 0x50);
        if (*(long **)(param_1 + 0x50) != plVar11) {
          plVar7 = plVar8;
        }
        *plVar7 = (long)plVar6;
        if (*(long **)(param_1 + 0x58) == plVar11) {
          *(long **)(param_1 + 0x58) = plVar8;
        }
        *plVar11 = *(long *)(param_1 + 0x60);
        *(long **)(param_1 + 0x60) = plVar11;
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
        (**(code **)(*(long *)plVar9[1] + 0x18))();
        (**(code **)(*plVar9 + 8))(plVar9);
        (*DAT_0442d150)(0,plVar9);
      }
      else {
        if (plVar5 != (long *)0x0) {
          if (plVar5 == param_2) goto LAB_02e833dc;
          plVar6 = (long *)plVar5[0x11];
          for (plVar7 = (long *)plVar5[0x10]; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x10])
          {
            if (plVar7 == param_2) goto LAB_02e833dc;
            if (plVar6 == (long *)0x0) {
              plVar6 = (long *)plVar7[0x11];
            }
          }
          for (; plVar6 != (long *)0x0; plVar6 = (long *)plVar6[0x11]) {
            if (plVar6 == param_2) goto LAB_02e833dc;
          }
        }
LAB_02e833b4:
        plVar6 = (long *)*plVar11;
        plVar8 = plVar11;
      }
      plVar11 = plVar6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    } while (plVar11 != (long *)0x0);
  }
  return 1;
}


