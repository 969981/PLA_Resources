/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0303f910; name: FUN_0303f910
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0303f910(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  MutexType *pMVar11;
  long lVar12;
  long *plVar13;
  int iVar14;
  
  pMVar11 = *(MutexType **)(param_1 + 0x48);
  lVar12 = *(long *)(param_2 + 0x78);
  nn::os::LockMutex(pMVar11);
  uVar5 = *(uint *)(param_1 + 0x24);
  plVar1 = (long *)(param_1 + 0x18);
  iVar14 = (int)((ulong)lVar12 >> 0x20);
  if (0 < (int)uVar5) {
    uVar6 = (int)lVar12 * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar3 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = iVar14 * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = (uVar3 + (uVar3 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6) & uVar5;
    uVar7 = (ulong)uVar6;
    lVar9 = *(long *)(*plVar1 + uVar7 * 0x10);
    while (lVar9 != -1) {
      if (lVar9 == lVar12) goto joined_r0x0303fbbc;
      uVar6 = (int)uVar7 + 1U & uVar5;
      uVar7 = (ulong)uVar6;
      lVar9 = *(long *)(*plVar1 + uVar7 * 0x10);
    }
  }
  uVar7 = (long)(int)uVar5 + 1;
  uVar6 = (uint)uVar7;
joined_r0x0303fbbc:
  if ((int)uVar5 < (int)uVar6) {
    if (*(int *)(param_1 + 0x30) == 0) {
      lVar9 = tpidr_el0;
      lVar10 = *(long *)(lVar9 + 0x38d490);
      if (lVar10 == 0) {
        lVar10 = FUN_0333d16c(0,1);
        *(long *)(lVar9 + 0x38d490) = lVar10;
      }
      plVar13 = *(long **)(*(long *)(lVar10 + 8) + 0x58);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,0x30,0);
      plVar13[2] = 0;
      plVar13[3] = -0x8000000000000000;
      *(undefined4 *)(plVar13 + 4) = 0;
      *(undefined1 *)(plVar13 + 5) = 0;
      *plVar13 = param_1;
      plVar13[1] = 0;
      iVar4 = *(int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar4 + 1;
      *(int *)((long)plVar13 + 0x2c) = iVar4;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x30) + -1;
      plVar13 = *(long **)(*(long *)(param_1 + 0x28) + (long)iVar4 * 8);
      *(int *)(param_1 + 0x30) = iVar4;
    }
    plVar13[1] = lVar12;
    lVar9 = (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(lVar12 + 0x18) * 0x200 + 0x48))(lVar12);
    FUN_030405b0(lVar9,plVar13,&LAB_03040688,0);
    FUN_03040778(lVar9 + 8,plVar13,&LAB_03040850,0);
    uVar5 = *(uint *)(param_1 + 0x24);
    if ((int)uVar5 < *(int *)(param_1 + 0x20) * 2) {
      FUN_02fec8dc(plVar1,PTR_PTR_0434a080,uVar5 * 2 + 2);
      uVar5 = *(uint *)(param_1 + 0x24);
    }
    uVar6 = (int)lVar12 * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar3 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar6 = iVar14 * -0x61c8864f;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
    uVar7 = (ulong)(uVar5 & (uVar3 + (uVar3 >> 2) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6));
    lVar9 = *plVar1;
    lVar10 = *(long *)(lVar9 + uVar7 * 0x10);
    if (lVar10 == -1) {
      iVar14 = 1;
    }
    else {
      do {
        if (lVar10 == lVar12) {
          iVar14 = 0;
          break;
        }
        uVar7 = (ulong)((int)uVar7 + 1U & uVar5);
        lVar10 = *(long *)(lVar9 + uVar7 * 0x10);
        iVar14 = 1;
      } while (lVar10 != -1);
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + iVar14;
    uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
    *(long *)(lVar9 + uVar7) = lVar12;
    *(long **)(*(long *)(param_1 + 0x18) + uVar7 + 8) = plVar13;
  }
  else {
    plVar13 = *(long **)(*plVar1 + ((long)(uVar7 << 0x20) >> 0x1c) + 8);
  }
  iVar14 = (int)plVar13[3];
  iVar4 = *(int *)(param_2 + 0x50);
  if (iVar14 <= (int)plVar13[4] * 2) {
    FUN_03040da8(plVar13 + 2,iVar14 << 1);
    iVar14 = (int)plVar13[3];
  }
  uVar5 = (iVar4 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar4 * -0x61c8864f & 0xff00ffU) << 8;
  uVar5 = iVar14 - 1U & (uVar5 >> 0x10 | uVar5 << 0x10);
  lVar12 = plVar13[2];
  piVar8 = (int *)(lVar12 + (long)(int)uVar5 * 4);
  if (*piVar8 == -1) {
    iVar14 = 1;
  }
  else if (*piVar8 == iVar4) {
    iVar14 = 0;
  }
  else {
    do {
      uVar5 = uVar5 + 1 & iVar14 - 1U;
      iVar2 = *(int *)(lVar12 + (long)(int)uVar5 * 4);
      if (iVar2 == -1) {
        iVar14 = 1;
        goto LAB_0303fc5c;
      }
    } while (iVar2 != iVar4);
    iVar14 = 0;
LAB_0303fc5c:
    piVar8 = (int *)(lVar12 + (long)(int)uVar5 * 4);
  }
  *(int *)(plVar13 + 4) = (int)plVar13[4] + iVar14;
  *piVar8 = iVar4;
  nn::os::UnlockMutex(pMVar11);
  return;
}


