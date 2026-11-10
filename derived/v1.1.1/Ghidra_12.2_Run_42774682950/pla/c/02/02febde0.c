/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02febde0; name: FUN_02febde0
 */


void FUN_02febde0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  
  uVar8 = *(uint *)(param_1 + 0x44);
  plVar1 = (long *)(param_1 + 0x38);
  iVar14 = (int)((ulong)param_3 >> 0x20);
  if ((int)uVar8 < 1) {
LAB_02fec048:
    uVar12 = (long)(int)uVar8 + 1;
    uVar11 = (uint)uVar12;
joined_r0x02fec054:
    if ((int)uVar11 <= (int)uVar8) goto LAB_02febe74;
LAB_02fec058:
    uVar11 = *(uint *)(param_1 + 0x28);
    uVar15 = (ulong)uVar11;
    lVar13 = *(long *)(param_3 + 0x20);
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar13 + param_3 + 0x20;
    }
    uVar2 = *(uint *)(param_3 + 0x28);
    if ((int)uVar8 < *(int *)(param_1 + 0x40) * 2) {
      FUN_02febb40(plVar1,PTR_PTR_0434a080,uVar8 * 2 + 2);
      uVar8 = *(uint *)(param_1 + 0x44);
    }
    uVar9 = (int)param_3 * -0x61c8864f;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar3 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar9 = iVar14 * -0x61c8864f;
    uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
    uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
    uVar12 = (ulong)(uVar8 & (uVar3 + (uVar3 >> 2) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9));
    lVar10 = *plVar1;
    lVar16 = *(long *)(lVar10 + uVar12 * 0x10);
    if (lVar16 == -1) {
      iVar14 = 1;
    }
    else {
      do {
        if (lVar16 == param_3) {
          iVar14 = 0;
          break;
        }
        uVar12 = (ulong)((int)uVar12 + 1U & uVar8);
        lVar16 = *(long *)(lVar10 + uVar12 * 0x10);
        iVar14 = 1;
      } while (lVar16 != -1);
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + iVar14;
    uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
    *(long *)(lVar10 + uVar12) = param_3;
    *(ulong *)(*(long *)(param_1 + 0x38) + uVar12 + 8) = CONCAT44(uVar2,uVar11) & 0xffffffffffff;
    puVar4 = PTR_PTR_0434a080;
    puVar7 = (uint *)(param_1 + 0x2c);
    uVar9 = *puVar7;
    iVar14 = *(int *)(param_1 + 0x28);
    uVar8 = iVar14 + uVar2;
    if ((int)(uVar9 & 0x3fffffff) < (int)uVar8) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      if (0x3fffffff < (int)uVar8) {
        FUN_032bd0a8(uVar8);
        uVar9 = *puVar7;
      }
      uVar9 = (uVar9 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar9) {
        uVar9 = 0x3fffffff;
      }
      uVar3 = uVar8;
      if ((int)uVar8 <= (int)uVar9) {
        uVar3 = uVar9;
      }
      uVar6 = FUN_032bd1d4(puVar4,uVar3,2,uVar6,iVar14,puVar7);
      *(undefined8 *)(param_1 + 0x20) = uVar6;
    }
    *(uint *)(param_1 + 0x28) = uVar8;
    if (0 < (int)uVar2) {
      uVar5 = FUN_03014350(*(undefined8 *)(param_1 + 0x30),lVar13);
      *(undefined2 *)(*(long *)(param_1 + 0x20) + (long)(int)uVar11 * 2) = uVar5;
      if (uVar2 != 1) {
        uVar12 = 1;
        do {
          lVar13 = lVar13 + 0x18;
          uVar5 = FUN_03014350(*(undefined8 *)(param_1 + 0x30),lVar13);
          iVar14 = (int)uVar12;
          uVar12 = uVar12 + 1;
          *(undefined2 *)(*(long *)(param_1 + 0x20) + (long)(int)(uVar11 + iVar14) * 2) = uVar5;
        } while (uVar2 != uVar12);
      }
    }
  }
  else {
    uVar11 = (int)param_3 * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar2 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = iVar14 * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = uVar8 & (uVar2 + (uVar2 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
    uVar12 = (ulong)uVar11;
    lVar13 = *(long *)(*plVar1 + uVar12 * 0x10);
    if (lVar13 == -1) goto LAB_02fec048;
    if (lVar13 == param_3) goto joined_r0x02fec054;
    do {
      uVar11 = (int)uVar12 + 1U & uVar8;
      uVar12 = (ulong)uVar11;
      lVar13 = *(long *)(*plVar1 + uVar12 * 0x10);
      if (lVar13 == -1) goto LAB_02fec048;
    } while (lVar13 != param_3);
    if ((int)uVar8 < (int)uVar11) goto LAB_02fec058;
LAB_02febe74:
    lVar10 = *plVar1;
    uVar15 = *(ulong *)(lVar10 + ((long)(uVar12 << 0x20) >> 0x1c) + 8);
    lVar13 = *(long *)(param_3 + 0x20);
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = lVar13 + param_3 + 0x20;
    }
    uVar8 = *(uint *)(param_3 + 0x28);
    if (0 < (int)uVar8) {
      uVar5 = FUN_03014350(*(undefined8 *)(param_1 + 0x30),lVar13);
      *(undefined2 *)
       (*(long *)(param_1 + 0x20) +
       (-(uVar15 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar15 & 0xffffffff) << 1)) = uVar5;
      if (uVar8 != 1) {
        lVar10 = uVar15 << 0x20;
        lVar16 = (ulong)uVar8 - 1;
        do {
          lVar10 = lVar10 + 0x100000000;
          lVar13 = lVar13 + 0x18;
          uVar5 = FUN_03014350(*(undefined8 *)(param_1 + 0x30),lVar13);
          lVar16 = lVar16 + -1;
          *(undefined2 *)(*(long *)(param_1 + 0x20) + (lVar10 >> 0x1f)) = uVar5;
        } while (lVar16 != 0);
      }
      lVar10 = *plVar1;
    }
    *(ulong *)(lVar10 + (long)(int)uVar12 * 0x10 + 8) =
         uVar15 & 0xffff000000000000 | uVar15 & 0xffffffff | (ulong)(uVar8 & 0xffff) << 0x20;
  }
  uVar8 = *(uint *)(param_1 + 0x54);
  plVar1 = (long *)(param_1 + 0x48);
  iVar14 = (int)((ulong)param_2 >> 0x20);
  if (0 < (int)uVar8) {
    uVar11 = (int)param_2 * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar2 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = iVar14 * -0x61c8864f;
    uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
    uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
    uVar11 = uVar8 & (uVar2 + (uVar2 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
    uVar12 = (ulong)uVar11;
    lVar13 = *(long *)(*plVar1 + uVar12 * 0x10);
    while (lVar13 != -1) {
      if (lVar13 == param_2) goto joined_r0x02febf84;
      uVar11 = (int)uVar12 + 1U & uVar8;
      uVar12 = (ulong)uVar11;
      lVar13 = *(long *)(*plVar1 + uVar12 * 0x10);
    }
  }
  uVar12 = (long)(int)uVar8 + 1;
  uVar11 = (uint)uVar12;
joined_r0x02febf84:
  if ((int)uVar11 <= (int)uVar8) {
    if (*(long *)(*plVar1 + ((long)(uVar12 << 0x20) >> 0x1c) + 8) == param_3) goto LAB_02febff4;
    FUN_02fec300(param_1,param_2);
    uVar8 = *(uint *)(param_1 + 0x54);
  }
  if ((int)uVar8 < *(int *)(param_1 + 0x50) * 2) {
    FUN_02fec8dc(plVar1,PTR_PTR_0434a080,uVar8 * 2 + 2);
    uVar8 = *(uint *)(param_1 + 0x54);
  }
  uVar11 = (int)param_2 * -0x61c8864f;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  uVar2 = uVar11 >> 0x10 | uVar11 << 0x10;
  uVar11 = iVar14 * -0x61c8864f;
  uVar11 = (uVar11 & 0xff00ff00) >> 8 | (uVar11 & 0xff00ff) << 8;
  uVar11 = uVar11 >> 0x10 | uVar11 << 0x10;
  iVar14 = 1;
  uVar12 = (ulong)(uVar8 & (uVar2 + (uVar2 >> 2) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11));
  lVar10 = *plVar1;
  lVar13 = *(long *)(lVar10 + uVar12 * 0x10);
  while (lVar13 != -1) {
    if (lVar13 == param_2) {
      iVar14 = 0;
      break;
    }
    uVar12 = (ulong)((int)uVar12 + 1U & uVar8);
    lVar13 = *(long *)(lVar10 + uVar12 * 0x10);
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + iVar14;
  uVar12 = -(uVar12 >> 0x1f) & 0xfffffff000000000 | uVar12 << 4;
  *(long *)(lVar10 + uVar12) = param_2;
  *(long *)(*(long *)(param_1 + 0x48) + uVar12 + 8) = param_3;
LAB_02febff4:
  *(int *)(param_2 + 0x40) = (int)uVar15;
  return;
}


