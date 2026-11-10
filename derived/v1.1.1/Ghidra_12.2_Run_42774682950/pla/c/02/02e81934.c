/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e81934; name: FUN_02e81934
 */


void FUN_02e81934(long param_1,long param_2,undefined8 param_3)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x18);
  do {
    if (lVar7 == 0) {
      return;
    }
    while (lVar5 = DAT_0440a120, *(short *)(lVar7 + 0x34) == 0x2103) {
      pMVar1 = (MutexType *)(DAT_0440a120 + 0xa8);
      uVar2 = *(uint *)(lVar7 + 0x30);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar5 + 0xd0);
      if (uVar3 != 0) {
        uVar4 = 0;
        if (uVar3 != 0) {
          uVar4 = uVar2 / uVar3;
        }
        for (plVar6 = *(long **)(*(long *)(lVar5 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
          if (*(uint *)(plVar6 + 2) == uVar2) {
            *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            FUN_02e81934(plVar6,param_2,param_3);
            (**(code **)(*plVar6 + 0x18))(plVar6);
            goto LAB_02e81a64;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
LAB_02e81a64:
      switch(*(undefined4 *)(param_2 + 0x14)) {
      case 0:
      case 3:
        FUN_02e81bdc(DAT_0440a128,*(undefined4 *)(lVar7 + 0x10),*(undefined4 *)(param_2 + 0x20));
        lVar7 = *(long *)(lVar7 + 0x18);
        break;
      case 1:
        FUN_02e8217c(DAT_0440a128,*(undefined4 *)(lVar7 + 0x10),*(undefined4 *)(param_2 + 0x20));
        lVar7 = *(long *)(lVar7 + 0x18);
        break;
      case 2:
        FUN_02e8233c(DAT_0440a128,*(undefined4 *)(lVar7 + 0x10),*(undefined4 *)(param_2 + 0x20));
      default:
switchD_02e81a7c_default:
        lVar7 = *(long *)(lVar7 + 0x18);
      }
      if (lVar7 == 0) {
        return;
      }
    }
    if (*(short *)(lVar7 + 0x34) != 0x403) goto LAB_02e81a64;
    plVar6 = (long *)FUN_02e8766c(lVar7);
    if (plVar6 == (long *)0x0) goto switchD_02e81a7c_default;
    FUN_02e81ad0(plVar6,param_3,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
                 *(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar7 = *(long *)(lVar7 + 0x18);
  } while( true );
}


