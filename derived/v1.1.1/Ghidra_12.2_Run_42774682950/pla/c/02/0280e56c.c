/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0280e56c; name: FUN_0280e56c
 */


void FUN_0280e56c(long param_1,long *param_2,ulong *param_3,undefined8 *param_4)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x468) + 0xc);
  if (((int)uVar3 < 1) || (iVar4 = *(int *)(*(long *)(param_1 + 0x468) + 0x10), iVar4 < 1)) {
    uVar11 = 0xffffffff;
    iVar14 = 0;
    uVar10 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    uVar12 = 0;
    uVar11 = 0xffffffff;
    do {
      uVar15 = 0;
      iVar16 = iVar4;
      do {
        lVar7 = *(long *)(param_1 + 0x468);
        uVar1 = uVar12;
        uVar5 = uVar15;
        piVar2 = (int *)(lVar7 + 0xc);
        if (*(int *)(lVar7 + 0x1c) != 0) {
          uVar1 = uVar15;
          uVar5 = uVar12;
          piVar2 = (int *)(lVar7 + 0x10);
        }
        plVar8 = (long *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                         (ulong)(uVar1 + *piVar2 * uVar5) * 0x28);
        lVar7 = *plVar8;
        plVar8 = (long *)plVar8[3];
        if (plVar8 == (long *)0x0) {
          lVar9 = *param_2;
        }
        else {
          (**(code **)(*plVar8 + 0x18))(plVar8);
          lVar9 = *param_2;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
        if (lVar7 == lVar9) {
          iVar14 = 0;
          if ((int)uVar3 <= (int)uVar12) goto LAB_0280e704;
          goto LAB_0280e6a4;
        }
        uVar15 = uVar15 + 1;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      uVar12 = uVar12 + 1;
      iVar14 = 0;
      iVar13 = 0;
      uVar10 = 0xffffffff;
    } while (uVar12 != uVar3);
  }
  goto joined_r0x0280e780;
  while (iVar14 = iVar14 + 1, (uVar12 - uVar3) + iVar14 != 0) {
LAB_0280e6a4:
    lVar7 = *(long *)(param_1 + 0x468);
    bVar6 = *(int *)(lVar7 + 0x1c) != 0;
    piVar2 = (int *)(lVar7 + 0xc);
    if (bVar6) {
      piVar2 = (int *)(lVar7 + 0x10);
    }
    uVar1 = uVar12 + iVar14;
    uVar5 = uVar15;
    if (bVar6) {
      uVar1 = uVar15;
      uVar5 = uVar12 + iVar14;
    }
    plVar8 = (long *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                     (ulong)(uVar1 + *piVar2 * uVar5) * 0x28);
    lVar7 = *plVar8;
    plVar8 = (long *)plVar8[3];
    if (plVar8 == (long *)0x0) {
      lVar9 = *param_2;
    }
    else {
      (**(code **)(*plVar8 + 0x18))(plVar8);
      lVar9 = *param_2;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    if (lVar7 != lVar9) goto LAB_0280e704;
  }
  iVar14 = uVar3 - uVar12;
LAB_0280e704:
  if ((int)uVar15 < iVar4) {
    iVar13 = 0;
    do {
      lVar7 = *(long *)(param_1 + 0x468);
      bVar6 = *(int *)(lVar7 + 0x1c) != 0;
      piVar2 = (int *)(lVar7 + 0xc);
      if (bVar6) {
        piVar2 = (int *)(lVar7 + 0x10);
      }
      uVar3 = uVar12;
      uVar1 = uVar15 + iVar13;
      if (bVar6) {
        uVar3 = uVar15 + iVar13;
        uVar1 = uVar12;
      }
      plVar8 = (long *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x20) +
                       (ulong)(uVar3 + *piVar2 * uVar1) * 0x28);
      lVar7 = *plVar8;
      plVar8 = (long *)plVar8[3];
      if (plVar8 == (long *)0x0) {
        lVar9 = *param_2;
      }
      else {
        (**(code **)(*plVar8 + 0x18))(plVar8);
        lVar9 = *param_2;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
      if (lVar7 != lVar9) goto LAB_0280e78c;
      bVar6 = iVar16 + -1 != iVar13;
      iVar13 = iVar13 + 1;
    } while (bVar6);
    uVar11 = (ulong)uVar15;
    uVar10 = (ulong)uVar12;
    iVar13 = iVar16;
  }
  else {
    iVar13 = 0;
LAB_0280e78c:
    uVar11 = (ulong)uVar15;
    uVar10 = (ulong)uVar12;
  }
joined_r0x0280e780:
  if (param_3 != (ulong *)0x0) {
    *param_3 = uVar10 | uVar11 << 0x20;
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = CONCAT44(iVar13,iVar14);
  }
  return;
}


