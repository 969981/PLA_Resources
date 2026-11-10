/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03261660; name: FUN_03261660
 */


void FUN_03261660(long param_1,uint param_2,ulong param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  ulong uVar13;
  
  iVar5 = (int)param_3;
  if (iVar5 == 0) {
    return;
  }
  uVar2 = param_2 - iVar5;
  if (uVar2 == 0) {
    return;
  }
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  lVar6 = *(long *)(lVar6 + 8);
  uVar13 = (ulong)(int)(param_2 * 4 + 0x7f & 0xffffff80);
  if (uVar13 <= *(ulong *)(lVar6 + 0x10)) {
    lVar4 = *(long *)(lVar6 + 0x18);
    if (lVar4 + uVar13 <= *(ulong *)(lVar6 + 0x20)) {
      *(ulong *)(lVar6 + 0x18) = lVar4 + uVar13;
      goto joined_r0x03261948;
    }
  }
  lVar4 = FUN_032ce670(lVar6,uVar13);
joined_r0x03261948:
  if ((0 < (int)param_2) && (lVar4 != param_1)) {
    uVar9 = (ulong)param_2;
    uVar7 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar6 = 0;
    }
    else {
      lVar6 = 0;
      puVar8 = (undefined4 *)(param_1 + 8);
      puVar11 = (undefined4 *)(lVar4 + 8);
      do {
        puVar11[-2] = puVar8[-2];
        puVar11[-1] = puVar8[-1];
        *puVar11 = *puVar8;
        puVar1 = puVar8 + 1;
        lVar6 = lVar6 + 4;
        puVar8 = puVar8 + 4;
        puVar11[1] = *puVar1;
        puVar11 = puVar11 + 4;
      } while (uVar9 - uVar7 != lVar6);
    }
    if ((param_2 & 3) != 0) {
      puVar8 = (undefined4 *)(lVar4 + lVar6 * 4);
      puVar11 = (undefined4 *)(param_1 + lVar6 * 4);
      do {
        uVar7 = uVar7 - 1;
        *puVar8 = *puVar11;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar7 != 0);
    }
  }
  lVar6 = (long)iVar5;
  if ((0 < iVar5) && (lVar4 + (long)(int)param_2 * 4 + (long)iVar5 * -4 != param_1)) {
    uVar7 = param_3 & 3;
    if ((param_3 & 0xffffffff) - 1 < 3) {
      lVar12 = 0;
    }
    else {
      lVar12 = 0;
      puVar8 = (undefined4 *)(param_1 + 8);
      puVar11 = (undefined4 *)((long)(int)param_2 * 4 + lVar6 * -4 + lVar4 + 8);
      do {
        puVar8[-2] = puVar11[-2];
        puVar8[-1] = puVar11[-1];
        *puVar8 = *puVar11;
        puVar1 = puVar11 + 1;
        lVar12 = lVar12 + 4;
        puVar11 = puVar11 + 4;
        puVar8[1] = *puVar1;
        puVar8 = puVar8 + 4;
      } while ((param_3 & 0xffffffff) - uVar7 != lVar12);
    }
    if ((param_3 & 3) != 0) {
      puVar8 = (undefined4 *)(lVar4 + lVar12 * 4 + (long)(int)param_2 * 4 + lVar6 * -4);
      puVar11 = (undefined4 *)(param_1 + lVar12 * 4);
      do {
        uVar7 = uVar7 - 1;
        *puVar11 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar7 != 0);
    }
  }
  if ((0 < (int)uVar2) && (lVar12 = param_1 + lVar6 * 4, lVar12 != lVar4)) {
    uVar9 = (ulong)uVar2;
    uVar7 = uVar9 & 3;
    if (uVar9 - 1 < 3) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      puVar8 = (undefined4 *)(lVar4 + 8);
      puVar11 = (undefined4 *)(lVar12 + 8);
      do {
        puVar11[-2] = puVar8[-2];
        puVar11[-1] = puVar8[-1];
        *puVar11 = *puVar8;
        puVar1 = puVar8 + 1;
        lVar10 = lVar10 + 4;
        puVar8 = puVar8 + 4;
        puVar11[1] = *puVar1;
        puVar11 = puVar11 + 4;
      } while (uVar9 - uVar7 != lVar10);
    }
    if ((uVar2 & 3) != 0) {
      puVar8 = (undefined4 *)(param_1 + (lVar10 + lVar6) * 4);
      puVar11 = (undefined4 *)(lVar4 + lVar10 * 4);
      do {
        uVar7 = uVar7 - 1;
        *puVar8 = *puVar11;
        puVar8 = puVar8 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar7 != 0);
    }
  }
  lVar6 = *(long *)(lVar3 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar3 + 0x38d490) = lVar6;
  }
  lVar3 = *(long *)(lVar6 + 8);
  if (((*(ulong *)(lVar3 + 0x10) < uVar13) || (*(long *)(lVar3 + 0x18) != lVar4 + uVar13)) ||
     (*(long *)(lVar3 + 0x28) == lVar4)) {
    FUN_032cedf0(lVar3,lVar4,uVar13);
    return;
  }
  *(long *)(lVar3 + 0x18) = lVar4;
  return;
}


