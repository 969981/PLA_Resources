/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea2558; name: FUN_02ea2558
 */


void FUN_02ea2558(long param_1)

{
  MutexType *pMVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  plVar8 = *(long **)(param_1 + 0xf8);
  do {
    if (plVar8 == (long *)0x0) {
      return;
    }
    while( true ) {
      lVar6 = DAT_0440a120;
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x38);
      uVar3 = *(uint *)(plVar8 + 1);
      nn::os::LockMutex(pMVar1);
      uVar4 = *(uint *)(lVar6 + 0x60);
      if (uVar4 == 0) break;
      uVar5 = 0;
      if (uVar4 != 0) {
        uVar5 = uVar3 / uVar4;
      }
      plVar7 = *(long **)(*(long *)(lVar6 + 0x58) + (ulong)(uVar3 - uVar5 * uVar4) * 8);
      while( true ) {
        if (plVar7 == (long *)0x0) goto LAB_02ea2664;
        if (*(uint *)(plVar7 + 2) == uVar3) break;
        plVar7 = (long *)plVar7[1];
      }
      *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
      nn::os::UnlockMutex(pMVar1);
      bVar2 = *(byte *)(param_1 + 0x184) & 7;
      if (bVar2 == 1) {
        FUN_02ea20d4(*(undefined4 *)((long)plVar8 + 0xc),plVar7,*(undefined4 *)(param_1 + 0x10),
                     (int)plVar8[2],(int)plVar8[3],*(undefined4 *)((long)plVar8 + 0x1c));
      }
      else if ((*(byte *)(param_1 + 0x184) & 7) == 0) {
        FUN_02ea2330(plVar7,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)((long)plVar8 + 0x14),
                     (int)plVar8[3],*(undefined4 *)((long)plVar8 + 0x1c));
      }
      else if (bVar2 == 2) {
        FUN_02ea2440(plVar7,*(undefined4 *)(param_1 + 0x10));
      }
      (**(code **)(*plVar7 + 0x18))(plVar7);
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        return;
      }
    }
LAB_02ea2664:
    nn::os::UnlockMutex(pMVar1);
    plVar8 = (long *)*plVar8;
  } while( true );
}


