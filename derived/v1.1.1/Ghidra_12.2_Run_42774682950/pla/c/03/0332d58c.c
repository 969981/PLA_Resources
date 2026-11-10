/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332d58c; name: FUN_0332d58c
 */


undefined8 FUN_0332d58c(MutexType *param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  short sVar2;
  long lVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  undefined1 uStack_160;
  byte local_15f;
  
  lVar10 = (long)DAT_0444b580;
  lVar12 = tpidr_el0;
  lVar3 = *(long *)(lVar12 + 0x38d490);
  if (lVar3 == 0) {
    lVar3 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar3;
  }
  if (*(int *)(lVar3 + lVar10 * 8 + 0x18) == 0) {
    iVar5 = *(int *)(param_1 + 0x68);
  }
  else {
    lVar10 = (long)DAT_0444b580;
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar3;
    }
    iVar5 = (int)*(char *)(*(long *)(param_1 + 0x130) + (long)*(int *)(lVar3 + lVar10 * 8 + 0x18));
  }
  lVar10 = (long)iVar5 * 0x16 + 0xbc;
  while (uVar11 = (ulong)(char)param_1[lVar10], -1 < (long)uVar11) {
    piVar13 = (int *)(param_2 + uVar11 * 0x18 + 0x4c);
    iVar5 = *piVar13;
    lVar10 = lVar10 + 1;
    if (iVar5 != 0) {
      lVar12 = param_2 + uVar11 * 0x18;
      iVar6 = *(int *)(lVar12 + 0x44);
      memcpy(&uStack_160,(void *)(*(long *)(lVar12 + 0x38) + (long)iVar6 * 0x100),0xf6);
      iVar1 = 0;
      if (iVar6 + 1 != *(int *)(lVar12 + 0x40)) {
        iVar1 = iVar6 + 1;
      }
      *(int *)(lVar12 + 0x44) = iVar1;
      *piVar13 = iVar5 + -1;
      iVar5 = (**(code **)(param_1 + 0x28))(param_1,param_2,&uStack_160,param_3);
      if (iVar5 == 1) {
        FUN_0332d480((long *)(lVar12 + 0x38),&uStack_160);
        FUN_0332d444(param_1,uVar11 & 0xffffffff,param_2);
      }
      *(short *)(param_2 + (ulong)local_15f * 2) = *(short *)(param_2 + (ulong)local_15f * 2) + 1;
      nn::os::UnlockMutex(param_1);
      return 0;
    }
  }
  iVar5 = *(int *)(param_1 + 0x60);
  uVar11 = (ulong)iVar5;
  iVar1 = *(int *)(param_1 + 100);
  if (iVar5 < iVar1) {
    if (~uVar11 + (long)iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = 0;
      piVar13 = (int *)(param_2 + uVar11 * 0x18 + 100);
      do {
        uVar11 = uVar11 + 2;
        iVar6 = *piVar13 + piVar13[-6] + iVar6;
        piVar13 = piVar13 + 0xc;
      } while ((long)iVar1 - ((ulong)(uint)(iVar1 - iVar5) & 1) != uVar11);
    }
    if ((iVar1 - iVar5 & 1U) != 0) {
      iVar6 = *(int *)(param_2 + uVar11 * 0x18 + 0x4c) + iVar6;
    }
    if (iVar6 != 0) goto LAB_0332d7cc;
  }
  if (*(int *)(param_1 + 0x38) < 1) {
    uVar9 = 0;
  }
  else {
    lVar10 = 0;
    uVar9 = 0;
    do {
      uVar7 = (uint)lVar10;
      if (*(short *)(param_2 + lVar10 * 2) < 1) {
        uVar8 = (uint)(*(int *)(param_2 + (long)(int)(uVar7 + *(int *)(param_1 + 0x44)) * 0x18 +
                               0x4c) != 0);
      }
      else {
        uVar8 = 1;
      }
      lVar10 = lVar10 + 1;
      uVar9 = uVar8 << (ulong)(uVar7 & 0x1f) | uVar9;
    } while (*(int *)(param_1 + 0x38) != lVar10);
  }
  if ((*(uint *)(param_2 + 0x20) & uVar9) == 0) {
    lVar10 = (long)DAT_0444b580;
    if (lVar3 == 0) {
      lVar3 = FUN_0333d16c(0,1);
      *(long *)(lVar12 + 0x38d490) = lVar3;
    }
    if (*(int *)(lVar3 + lVar10 * 8 + 0x18) != 0) {
      psVar4 = (short *)(param_2 + (long)**(char **)(param_1 + 0x130) * 2 + 0x2a);
      sVar2 = *psVar4;
      if (sVar2 != 0) {
        *psVar4 = sVar2 + -1;
        nn::os::ReleaseSemaphore
                  (*(SemaphoreType **)(param_1 + (long)**(char **)(param_1 + 0x130) * 8 + 0x90),1);
      }
      goto joined_r0x0332d8c8;
    }
    if (uVar9 != 0) goto LAB_0332d8e4;
  }
  else {
joined_r0x0332d8c8:
    if ((uVar9 != 0) || (*(int *)(param_2 + 0x24) == 1)) {
LAB_0332d7cc:
      lVar10 = (long)DAT_0444b580;
      lVar3 = *(long *)(lVar12 + 0x38d490);
      if (lVar3 == 0) {
        lVar3 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar3;
      }
      lVar3 = (long)*(char *)(*(long *)(param_1 + 0x130) + (long)*(int *)(lVar3 + lVar10 * 8 + 0x18)
                             );
      param_2 = param_2 + lVar3 * 2;
      *(short *)(param_2 + 0x2a) = *(short *)(param_2 + 0x2a) + 1;
      nn::os::UnlockMutex(param_1);
      if (*(long *)(lVar12 + 0x38d490) == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar10;
        lVar10 = *(long *)(lVar10 + 0x10);
      }
      else {
        lVar10 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
      }
      if (lVar10 != 0) {
        FUN_032d5af0(lVar10,"TtNoJobAvailable",0x10);
      }
      nn::os::AcquireSemaphore(*(SemaphoreType **)(param_1 + lVar3 * 8 + 0x90));
      if (*(long *)(lVar12 + 0x38d490) == 0) {
        lVar3 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar3;
        lVar12 = *(long *)(lVar3 + 0x10);
      }
      else {
        lVar12 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
      }
      if (lVar12 != 0) {
        FUN_032d5b34(lVar12,&DAT_0390f40e);
      }
      return 0xffffffff;
    }
  }
  FUN_0332d504(param_1,param_2);
LAB_0332d8e4:
  nn::os::UnlockMutex(param_1);
  return 2;
}


