/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e824b4; name: FUN_02e824b4
 */


void FUN_02e824b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_2 + 0x18);
  do {
    if (lVar8 == 0) {
      return;
    }
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
        for (plVar6 = *(long **)(*(long *)(lVar7 + 200) + (ulong)(uVar2 - uVar4 * uVar3) * 8);
            plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
          if (*(uint *)(plVar6 + 2) == uVar2) {
            *(int *)((long)plVar6 + 0x14) = *(int *)((long)plVar6 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            FUN_02e824b4(param_1,plVar6,param_3,param_4);
            lVar7 = *plVar6;
            goto LAB_02e82520;
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
       (plVar6 = (long *)FUN_02e8766c(lVar8), plVar6 != (long *)0x0)) {
      iVar5 = (**(code **)(*plVar6 + 0x88))();
      if (iVar5 - 2U < 4) {
        FUN_02e825f8(plVar6,param_4,param_3);
      }
      lVar7 = *plVar6;
LAB_02e82520:
      (**(code **)(lVar7 + 0x18))(plVar6);
    }
    lVar8 = *(long *)(lVar8 + 0x18);
  } while( true );
}


