/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fec300; name: FUN_02fec300
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fec300(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  uVar1 = *(uint *)(param_1 + 0x54);
  plVar5 = (long *)(param_1 + 0x48);
  if (0 < (int)uVar1) {
    uVar3 = (int)param_2 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (int)((ulong)param_2 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = uVar1 & (uVar2 + (uVar2 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3);
    uVar4 = (ulong)uVar3;
    lVar7 = *(long *)(*plVar5 + uVar4 * 0x10);
    while (lVar7 != -1) {
      if (lVar7 == param_2) goto joined_r0x02fec55c;
      uVar3 = (int)uVar4 + 1U & uVar1;
      uVar4 = (ulong)uVar3;
      lVar7 = *(long *)(*plVar5 + uVar4 * 0x10);
    }
  }
  uVar4 = (long)(int)uVar1 + 1;
  uVar3 = (uint)uVar4;
joined_r0x02fec55c:
  if ((int)uVar1 < (int)uVar3) goto LAB_02fec4f0;
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + ((long)(uVar4 << 0x20) >> 0x1c) + 8);
  FUN_02fecac8(plVar5);
  iVar11 = *(int *)(param_1 + 0x54);
  if (-1 < iVar11) {
    plVar5 = (long *)*plVar5;
    uVar4 = 0;
    plVar8 = plVar5;
    do {
      if (*plVar8 != -1) break;
      uVar4 = uVar4 + 1;
      plVar8 = plVar8 + 2;
    } while ((long)iVar11 + 1U != uVar4);
    if ((int)uVar4 <= iVar11) {
      uVar4 = uVar4 & 0xffffffff;
      do {
        if (*(long *)((long)plVar5 + ((long)(uVar4 << 0x20) >> 0x1c) + 8) == lVar7)
        goto LAB_02fec4f0;
        iVar10 = (int)uVar4;
        lVar9 = (long)iVar10 + -1;
        lVar13 = (long)iVar10 << 0x20;
        plVar8 = plVar5 + (long)iVar10 * 2 + 2;
        do {
          lVar13 = lVar13 + 0x100000000;
          lVar9 = lVar9 + 1;
          if (iVar11 <= lVar9) break;
          lVar14 = *plVar8;
          plVar8 = plVar8 + 2;
        } while (lVar14 == -1);
        uVar4 = lVar13 >> 0x20;
      } while ((int)((ulong)lVar13 >> 0x20) <= iVar11);
    }
  }
  uVar1 = *(uint *)(param_1 + 0x44);
  if ((int)uVar1 < 1) {
    lVar13 = *(long *)(param_1 + 0x38);
LAB_02fec578:
    uVar4 = (long)(int)uVar1 + 1;
  }
  else {
    uVar3 = (int)lVar7 * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar2 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar3 = (int)((ulong)lVar7 >> 0x20) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar4 = (ulong)(uVar1 & (uVar2 + (uVar2 >> 2) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3));
    lVar13 = *(long *)(param_1 + 0x38);
    lVar9 = *(long *)(lVar13 + uVar4 * 0x10);
    if (lVar9 == -1) goto LAB_02fec578;
    if (lVar9 != lVar7) {
      do {
        uVar4 = (ulong)((int)uVar4 + 1U & uVar1);
        lVar9 = *(long *)(lVar13 + uVar4 * 0x10);
        if (lVar9 == -1) goto LAB_02fec578;
      } while (lVar9 != lVar7);
    }
  }
  uVar6 = *(ulong *)(lVar13 + ((long)(uVar4 << 0x20) >> 0x1c) + 8);
  uVar12 = uVar6 >> 0x20 & 0xffff;
  iVar11 = (int)uVar12;
  if (iVar11 != 0) {
    *(undefined2 *)
     (*(long *)(param_1 + 0x20) +
     (-(uVar6 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar6 & 0xffffffff) << 1)) = 0xffff;
    if (iVar11 != 1) {
      lVar7 = uVar6 << 0x20;
      lVar13 = uVar12 - 1;
      do {
        lVar7 = lVar7 + 0x100000000;
        lVar13 = lVar13 + -1;
        *(undefined2 *)(*(long *)(param_1 + 0x20) + (lVar7 >> 0x1f)) = 0xffff;
      } while (lVar13 != 0);
    }
    lVar13 = *(long *)(param_1 + 0x38);
  }
  *(ulong *)(lVar13 + (long)(int)uVar4 * 0x10 + 8) = uVar6 & 0xffff0000ffffffff;
LAB_02fec4f0:
  *(undefined4 *)(param_2 + 0x40) = 0xffffffff;
  return;
}


