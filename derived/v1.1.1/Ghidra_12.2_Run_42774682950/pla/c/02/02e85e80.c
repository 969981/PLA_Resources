/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e85e80; name: FUN_02e85e80
 */


void FUN_02e85e80(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  undefined4 local_a8 [18];
  
  plVar10 = *(long **)(param_1 + 0x50);
  if (plVar10 != (long *)0x0) {
    if (param_2 == (long *)0x0) {
      do {
        plVar11 = (long *)FUN_02e8766c(*(undefined8 *)(plVar10[2] + 8));
        plVar10 = (long *)*plVar10;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x18))();
        }
      } while (plVar10 != (long *)0x0);
    }
    else {
      plVar11 = (long *)0x0;
      do {
        plVar9 = (long *)plVar10[2];
        plVar5 = (long *)FUN_02e8766c(plVar9[1]);
        if (plVar5 == (long *)0x0) {
LAB_02e85f14:
          plVar8 = (long *)*plVar10;
          plVar11 = plVar10;
        }
        else {
          if (plVar5 != param_2) {
            plVar7 = (long *)plVar5[0x11];
            for (plVar8 = (long *)plVar5[0x10]; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[0x10]
                ) {
              if (plVar8 == param_2) goto LAB_02e85f3c;
              if (plVar7 == (long *)0x0) {
                plVar7 = (long *)plVar8[0x11];
              }
            }
            for (; plVar7 != (long *)0x0; plVar7 = (long *)plVar7[0x11]) {
              if (plVar7 == param_2) goto LAB_02e85f3c;
            }
            goto LAB_02e85f14;
          }
LAB_02e85f3c:
          local_a8[0] = 0;
          plVar8 = (long *)plVar9[1];
          if ((*(short *)((long)plVar8 + 0x34) == 0x503) ||
             (*(short *)((long)plVar8 + 0x34) == 0x403)) {
            (**(code **)(*plVar8 + 0x58))(plVar8,local_a8);
          }
          plVar8 = DAT_0440a170;
          uVar2 = *(uint *)(plVar9 + 6);
          pMVar1 = (MutexType *)(DAT_0440a170 + 3);
          nn::os::LockMutex(pMVar1);
          uVar3 = *(uint *)(plVar8 + 1);
          if (uVar3 != 0) {
            uVar4 = 0;
            if (uVar3 != 0) {
              uVar4 = uVar2 / uVar3;
            }
            for (lVar6 = *(long *)(*plVar8 + (ulong)(uVar2 - uVar4 * uVar3) * 8); lVar6 != 0;
                lVar6 = *(long *)(lVar6 + 0x68)) {
              if (*(uint *)(lVar6 + 0x4c) == uVar2) {
                *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + -1;
                FUN_02edcd9c(plVar8,uVar2);
                goto LAB_02e85fb8;
              }
            }
          }
          nn::os::UnlockMutex(pMVar1);
LAB_02e85fb8:
          plVar8 = (long *)*plVar10;
          plVar7 = (long *)(param_1 + 0x50);
          if (*(long **)(param_1 + 0x50) != plVar10) {
            plVar7 = plVar11;
          }
          *plVar7 = (long)plVar8;
          if (*(long **)(param_1 + 0x58) == plVar10) {
            *(long **)(param_1 + 0x58) = plVar11;
          }
          *plVar10 = *(long *)(param_1 + 0x60);
          *(long **)(param_1 + 0x60) = plVar10;
          *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
          (**(code **)(*(long *)plVar9[1] + 0x18))();
          (**(code **)(*plVar9 + 8))(plVar9);
          (*DAT_0442d150)(0,plVar9);
        }
        plVar10 = plVar8;
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      } while (plVar10 != (long *)0x0);
    }
  }
  return;
}


