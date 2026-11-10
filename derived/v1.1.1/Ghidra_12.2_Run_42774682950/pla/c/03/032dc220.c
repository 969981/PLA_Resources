/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032dc220; name: FUN_032dc220
 */


void FUN_032dc220(long param_1,ulong *param_2,int param_3)

{
  MutexType *pMVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar4 = DAT_0444a230;
  pMVar1 = (MutexType *)(DAT_0444a230 + 0xc0);
  nn::os::LockMutex(pMVar1);
  iVar3 = FUN_032dec64(lVar4 + 0x38,param_2);
  lVar4 = *(long *)(lVar4 + 0x38);
  while( true ) {
    uVar5 = (uint)*param_2;
    if ((uVar5 >> 0x14 & 1) != 0) {
      uVar6 = 0;
      if (param_2 != (ulong *)0x0) {
        uVar5 = (uVar5 & 0xfffff) - (uVar5 >> 1 & 0x55555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar6 = (ulong)(ushort)param_2[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >>
                                              0x18) + 2];
      }
      goto LAB_032dc2d8;
    }
    if ((*param_2 & 1) != 0) break;
    param_2 = (ulong *)param_2[1];
    if (param_2 == (ulong *)0x0) {
      uVar6 = 0;
LAB_032dc2d8:
      iVar7 = -1;
      if (*(int *)(lVar4 + (long)iVar3 * 0x18 + 0x10) != 0) {
        iVar7 = iVar3;
      }
      if ((-1 < iVar7) && (0 < param_3)) {
        lVar4 = lVar4 + (long)iVar7 * 0x18;
        iVar3 = *(int *)(lVar4 + 0x10);
        if (0 < iVar3) {
          lVar4 = *(long *)(lVar4 + 8);
          lVar9 = (long)iVar3 + -1;
          plVar2 = (long *)(lVar4 + lVar9 * 0x10);
          iVar7 = 0;
          do {
            (*(code *)plVar2[1])(*plVar2 + param_1);
            if (0 < lVar9) {
              lVar8 = lVar9;
              plVar10 = (long *)(lVar4 + (long)iVar3 * 0x10 + -0x20);
              do {
                lVar8 = lVar8 + -1;
                (*(code *)plVar10[1])(*plVar10 + param_1);
                plVar10 = plVar10 + -2;
              } while (0 < lVar8);
            }
            iVar7 = iVar7 + 1;
            param_1 = uVar6 + param_1;
          } while (iVar7 != param_3);
        }
      }
      nn::os::UnlockMutex(pMVar1);
      return;
    }
  }
  uVar6 = 0;
  goto LAB_032dc2d8;
}


