/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9c0e4; name: FUN_02e9c0e4
 */


void FUN_02e9c0e4(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = DAT_0440a120;
  plVar7 = *(long **)(param_1 + 0x138);
  if (plVar7 == (long *)0x0) {
    uVar2 = *(uint *)(param_1 + 0x124);
    if (uVar2 != 0) {
      pMVar1 = (MutexType *)(DAT_0440a120 + 0x150);
      nn::os::LockMutex(pMVar1);
      uVar3 = *(uint *)(lVar6 + 0x178);
      if (uVar3 != 0) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar2 / uVar3;
        }
        for (plVar7 = *(long **)(*(long *)(lVar6 + 0x170) + (ulong)(uVar2 - uVar5 * uVar3) * 8);
            plVar7 != (long *)0x0; plVar7 = (long *)plVar7[1]) {
          if (*(uint *)(plVar7 + 2) == uVar2) {
            *(int *)((long)plVar7 + 0x14) = *(int *)((long)plVar7 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar1);
            *(long **)(param_1 + 0x138) = plVar7;
            iVar4 = (int)plVar7[0x1d];
            goto joined_r0x02e9c1ac;
          }
        }
      }
      nn::os::UnlockMutex(pMVar1);
      goto LAB_02e9c1fc;
    }
  }
  else {
    iVar4 = (int)plVar7[0x1d];
joined_r0x02e9c1ac:
    if (iVar4 != 0) {
      lVar6 = plVar7[0x1c];
      do {
        FUN_02ee0bfc(DAT_0440a160,param_1,*(undefined4 *)(lVar6 + 0xc));
        lVar6 = lVar6 + 0x30;
      } while (lVar6 != plVar7[0x1c] + (ulong)*(uint *)(plVar7 + 0x1d) * 0x30);
      plVar7 = *(long **)(param_1 + 0x138);
    }
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x18))(plVar7);
LAB_02e9c1fc:
      *(undefined8 *)(param_1 + 0x138) = 0;
      lVar6 = *(long *)(param_1 + 0x160);
      goto joined_r0x02e9c204;
    }
  }
  lVar6 = *(long *)(param_1 + 0x160);
joined_r0x02e9c204:
  if (lVar6 != 0) {
    (*DAT_0442d150)(5);
    *(undefined8 *)(param_1 + 0x160) = 0;
  }
  *(ushort *)(param_1 + 0x180) = *(ushort *)(param_1 + 0x180) | 0x20;
  return;
}


