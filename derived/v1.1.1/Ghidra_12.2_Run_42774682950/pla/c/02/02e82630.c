/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e82630; name: FUN_02e82630
 */


void FUN_02e82630(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0) {
    if (DAT_0440a320 != 0) {
      if (param_4 == 0) {
        uVar6 = 0xffffffffffffffff;
      }
      else {
        uVar6 = *(undefined8 *)(param_4 + 0x48);
      }
      FUN_02e79dbc(DAT_0440a320,0,uVar6);
      return;
    }
  }
  else {
    lVar8 = *(long *)(param_2 + 0x18);
    if (lVar8 != 0) {
      if (param_4 == 0) {
        do {
          while (lVar7 = DAT_0440a120, *(short *)(lVar8 + 0x34) != 0x403) {
            if (*(short *)(lVar8 + 0x34) != 0x2103) goto LAB_02e827d4;
            pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
            uVar2 = *(uint *)(lVar8 + 0x30);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(lVar7 + 0xd0);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (plVar5 = *(long **)(*(long *)(lVar7 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                  plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
                if (*(uint *)(plVar5 + 2) == uVar2) {
                  *(int *)((long)plVar5 + 0x14) = *(int *)((long)plVar5 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar1);
                  FUN_02e82630(param_1,plVar5,param_3,0);
                  lVar7 = *plVar5;
                  goto LAB_02e827cc;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 == 0) {
              return;
            }
          }
          plVar5 = (long *)FUN_02e8766c(lVar8);
          if (plVar5 != (long *)0x0) {
            if (DAT_0440a320 != 0) {
              FUN_02e79dbc(DAT_0440a320,(int)plVar5[2],0xffffffffffffffff);
            }
            lVar7 = *plVar5;
LAB_02e827cc:
            (**(code **)(lVar7 + 0x18))(plVar5);
          }
LAB_02e827d4:
          lVar8 = *(long *)(lVar8 + 0x18);
        } while (lVar8 != 0);
      }
      else {
        do {
          while (lVar7 = DAT_0440a120, *(short *)(lVar8 + 0x34) == 0x2103) {
            pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
            uVar2 = *(uint *)(lVar8 + 0x30);
            nn::os::LockMutex(pMVar1);
            uVar3 = *(uint *)(lVar7 + 0xd0);
            if (uVar3 != 0) {
              uVar4 = 0;
              if (uVar3 != 0) {
                uVar4 = uVar2 / uVar3;
              }
              for (plVar5 = *(long **)(*(long *)(lVar7 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
                  plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
                if (*(uint *)(plVar5 + 2) == uVar2) {
                  *(int *)((long)plVar5 + 0x14) = *(int *)((long)plVar5 + 0x14) + 1;
                  nn::os::UnlockMutex(pMVar1);
                  FUN_02e82630(param_1,plVar5,param_3,param_4);
                  lVar7 = *plVar5;
                  goto LAB_02e826a8;
                }
              }
            }
            nn::os::UnlockMutex(pMVar1);
            lVar8 = *(long *)(lVar8 + 0x18);
            if (lVar8 == 0) {
              return;
            }
          }
          if ((*(short *)(lVar8 + 0x34) == 0x403) &&
             (plVar5 = (long *)FUN_02e8766c(lVar8), plVar5 != (long *)0x0)) {
            if (DAT_0440a320 != 0) {
              FUN_02e79dbc(DAT_0440a320,(int)plVar5[2],*(undefined8 *)(param_4 + 0x48));
            }
            lVar7 = *plVar5;
LAB_02e826a8:
            (**(code **)(lVar7 + 0x18))(plVar5);
          }
          lVar8 = *(long *)(lVar8 + 0x18);
        } while (lVar8 != 0);
      }
    }
  }
  return;
}


