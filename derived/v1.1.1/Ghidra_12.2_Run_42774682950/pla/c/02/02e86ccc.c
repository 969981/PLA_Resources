/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e86ccc; name: FUN_02e86ccc
 */


int FUN_02e86ccc(undefined8 *param_1)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  pMVar1 = (MutexType *)(DAT_0440a120 + 0xe0);
  nn::os::LockMutex(pMVar1);
  iVar5 = *(int *)((long)param_1 + 0x14) + -1;
  *(int *)((long)param_1 + 0x14) = iVar5;
  lVar7 = DAT_0440a120;
  if (iVar5 == 0) {
    uVar3 = *(uint *)(param_1 + 2);
    if (uVar3 != 0) {
      pMVar2 = (MutexType *)(DAT_0440a120 + 0xe0);
      nn::os::LockMutex(pMVar2);
      uVar4 = *(uint *)(lVar7 + 0x108);
      if (uVar4 != 0) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        plVar10 = (long *)(*(long *)(lVar7 + 0x100) + (ulong)(uVar3 - uVar6 * uVar4) * 8);
        lVar8 = *plVar10;
        if (lVar8 != 0) {
          if (*(uint *)(lVar8 + 0x10) != uVar3) {
            do {
              lVar9 = lVar8;
              lVar8 = *(long *)(lVar9 + 8);
              if (lVar8 == 0) goto LAB_02e86dac;
            } while (*(uint *)(lVar8 + 0x10) != uVar3);
            plVar10 = (long *)(lVar9 + 8);
          }
          *plVar10 = *(long *)(lVar8 + 8);
          *(int *)(lVar7 + 0x110) = *(int *)(lVar7 + 0x110) + -1;
        }
      }
LAB_02e86dac:
      nn::os::UnlockMutex(pMVar2);
      *(undefined4 *)(param_1 + 2) = 0;
    }
    (**(code **)*param_1)(param_1);
    (*DAT_0442d150)(1,param_1);
  }
  nn::os::UnlockMutex(pMVar1);
  return iVar5;
}


