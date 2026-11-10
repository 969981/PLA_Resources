/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6054; name: FUN_02ec6054
 */


void FUN_02ec6054(long param_1)

{
  uint uVar1;
  MutexType *pMVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long lVar9;
  
  FUN_02ec21d0(*(undefined8 *)(param_1 + 0x18),DAT_042ab268);
  pMVar2 = (MutexType *)(DAT_0440a120 + 0x188);
  nn::os::LockMutex(pMVar2);
  lVar6 = DAT_0440a120;
  if (*(int *)(DAT_0440a120 + 0x1b0) != 0) {
    lVar5 = **(long **)(DAT_0440a120 + 0x1a8);
    if (lVar5 == 0) {
      uVar8 = 0;
      do {
        if (*(int *)(DAT_0440a120 + 0x1b0) - 1 == uVar8) goto LAB_02ec6118;
        uVar8 = uVar8 + 1;
        lVar5 = (*(long **)(DAT_0440a120 + 0x1a8))[uVar8 & 0xffffffff];
      } while (lVar5 == 0);
    }
    else {
      uVar8 = 0;
    }
    do {
      do {
        FUN_02eba4e8(lVar5);
        lVar5 = *(long *)(lVar5 + 8);
      } while (lVar5 != 0);
      do {
        uVar1 = (int)uVar8 + 1;
        uVar8 = (ulong)uVar1;
        if (*(uint *)(lVar6 + 0x1b0) <= uVar1) goto LAB_02ec6118;
        lVar5 = *(long *)(*(long *)(lVar6 + 0x1a8) + (ulong)uVar1 * 8);
      } while (lVar5 == 0);
    } while( true );
  }
LAB_02ec6118:
  nn::os::UnlockMutex(pMVar2);
  piVar7 = *(int **)(param_1 + 0x18);
  lVar6 = *(long *)(piVar7 + 4);
  if (lVar6 != 0) {
    lVar5 = 0;
    lVar9 = 0;
    do {
      uVar8 = FUN_02ec1600(lVar6);
      lVar4 = *(long *)(lVar6 + 8);
      if ((uVar8 & 1) == 0) {
        lVar9 = lVar6;
      }
      else {
        plVar3 = (long *)(piVar7 + 4);
        if (*(long *)(piVar7 + 4) != lVar6) {
          plVar3 = (long *)(lVar9 + 8);
        }
        *plVar3 = lVar4;
        if (*(long *)(piVar7 + 2) == lVar6) {
          *(long *)(piVar7 + 2) = lVar9;
        }
        *piVar7 = *piVar7 + -1;
        *(long *)(lVar6 + 8) = lVar5;
        lVar5 = lVar6;
      }
      lVar6 = lVar4;
    } while (lVar4 != 0);
    while (lVar5 != 0) {
      lVar6 = *(long *)(lVar5 + 8);
      FUN_02ec10a4(lVar5);
      FUN_02eb939c(lVar5);
      lVar5 = lVar6;
    }
  }
  return;
}


