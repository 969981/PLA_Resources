/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e94d58; name: FUN_02e94d58
 */


void FUN_02e94d58(undefined8 param_1,long param_2)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x18);
  lVar6 = DAT_0440a120;
joined_r0x02e94d74:
  do {
    while( true ) {
      lVar5 = lVar8;
      if (lVar5 == 0) {
        DAT_0440a120 = lVar6;
        return;
      }
      lVar8 = *(long *)(lVar5 + 0x18);
      DAT_0440a120 = lVar6;
      if (*(short *)(lVar5 + 0x34) == 0x2103) break;
      if (*(short *)(lVar5 + 0x34) == 0x403) {
        FUN_02ed53a8(*(undefined4 *)(lVar5 + 0x30));
        FUN_02e94c9c(param_1,*(undefined4 *)(lVar5 + 0x38),0,0);
        lVar6 = DAT_0440a120;
      }
    }
    uVar2 = *(uint *)(lVar5 + 0x30);
    pMVar1 = (MutexType *)(lVar6 + 0xa8);
    nn::os::LockMutex(pMVar1);
    uVar3 = *(uint *)(lVar6 + 0xd0);
    if (uVar3 != 0) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = uVar2 / uVar3;
      }
      for (plVar7 = *(long **)(*(long *)(lVar6 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
          plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
        if (*(uint *)(plVar7 + 2) == uVar2) {
          *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar1);
          FUN_02e94d58(param_1,plVar7);
          (**(code **)(*plVar7 + 0x18))(plVar7);
          lVar6 = DAT_0440a120;
          goto joined_r0x02e94d74;
        }
      }
    }
    nn::os::UnlockMutex(pMVar1);
    lVar6 = DAT_0440a120;
  } while( true );
}


