/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309c770; name: FUN_0309c770
 */


/* WARNING: Removing unreachable block (ram,0x0309ce3c) */
/* WARNING: Removing unreachable block (ram,0x0309c7c8) */
/* WARNING: Removing unreachable block (ram,0x0309ccc0) */
/* WARNING: Removing unreachable block (ram,0x0309ca84) */

void FUN_0309c770(byte *param_1,uint param_2,byte *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  int *piVar9;
  int *piVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  uint auStack_880 [256];
  int local_480;
  uint local_470 [255];
  uint local_74;
  
  memset(local_470,0,0x410);
  if (param_2 != 0) {
    if (param_2 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      pbVar12 = param_1;
      do {
        lVar8 = lVar8 + 2;
        local_470[*pbVar12] = local_470[*pbVar12] + 1;
        pbVar13 = pbVar12 + 0xc;
        pbVar12 = pbVar12 + 0x18;
        local_470[*pbVar13] = local_470[*pbVar13] + 1;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar8);
      if ((param_2 & 1) == 0) goto LAB_0309c838;
    }
    local_470[param_1[lVar8 * 0xc]] = local_470[param_1[lVar8 * 0xc]] + 1;
  }
LAB_0309c838:
  memset(auStack_880,0,0x410);
  if (param_2 == 0) {
    pbVar12 = param_3;
    pbVar13 = param_1;
    if ((local_470[0] != 0) && (local_74 != 0)) {
      uVar6 = 0;
      local_480 = 0;
      piVar9 = (int *)((ulong)auStack_880 | 8);
      piVar10 = (int *)((ulong)local_470 | 8);
      do {
        iVar2 = piVar10[-2];
        iVar3 = piVar10[-1];
        piVar9[-2] = local_480;
        piVar9[-1] = iVar2 + local_480;
        iVar3 = iVar3 + iVar2 + local_480;
        uVar6 = uVar6 + 4;
        local_480 = piVar10[1];
        iVar2 = *piVar10 + iVar3;
        *piVar9 = iVar3;
        piVar9[1] = iVar2;
        local_480 = local_480 + iVar2;
        piVar9 = piVar9 + 4;
        piVar10 = piVar10 + 4;
      } while (uVar6 < 0x100);
      pbVar12 = param_1;
      pbVar13 = param_3;
    }
    memset(local_470,0,0x400);
    memset(local_470,0,0x400);
    goto joined_r0x0309cec0;
  }
  pbVar12 = param_1 + 1;
  if ((local_470[0] == param_2) || (local_74 == param_2)) {
    memset(local_470,0,0x400);
    if (param_2 == 1) {
      lVar8 = 0;
LAB_0309cab4:
      local_470[pbVar12[lVar8 * 0xc]] = local_470[pbVar12[lVar8 * 0xc]] + 1;
    }
    else {
      lVar8 = 0;
      pbVar13 = pbVar12;
      do {
        lVar8 = lVar8 + 2;
        local_470[*pbVar13] = local_470[*pbVar13] + 1;
        pbVar15 = pbVar13 + 0xc;
        pbVar13 = pbVar13 + 0x18;
        local_470[*pbVar15] = local_470[*pbVar15] + 1;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar8);
      if ((param_2 & 1) != 0) goto LAB_0309cab4;
    }
    pbVar15 = param_1;
  }
  else {
    uVar6 = 0;
    local_480 = 0;
    piVar9 = (int *)((ulong)auStack_880 | 8);
    piVar10 = (int *)((ulong)local_470 | 8);
    do {
      iVar2 = piVar10[-2];
      iVar3 = piVar10[-1];
      piVar9[-2] = local_480;
      piVar9[-1] = iVar2 + local_480;
      iVar3 = iVar3 + iVar2 + local_480;
      uVar6 = uVar6 + 4;
      local_480 = piVar10[1];
      iVar2 = *piVar10 + iVar3;
      *piVar9 = iVar3;
      piVar9[1] = iVar2;
      local_480 = local_480 + iVar2;
      piVar9 = piVar9 + 4;
      piVar10 = piVar10 + 4;
    } while (uVar6 < 0x100);
    memset(local_470,0,0x400);
    uVar6 = (ulong)param_2;
    pbVar13 = param_1;
    do {
      uVar6 = uVar6 - 1;
      bVar5 = *pbVar12;
      uVar4 = auStack_880[*pbVar13];
      auStack_880[*pbVar13] = uVar4 + 1;
      uVar14 = *(undefined8 *)pbVar13;
      *(undefined4 *)(param_3 + (ulong)uVar4 * 0xc + 8) = *(undefined4 *)(pbVar13 + 8);
      *(undefined8 *)(param_3 + (ulong)uVar4 * 0xc) = uVar14;
      pbVar13 = pbVar13 + 0xc;
      local_470[bVar5] = local_470[bVar5] + 1;
      pbVar12 = pbVar12 + 0xc;
    } while (uVar6 != 0);
    pbVar12 = param_3 + 1;
    pbVar15 = param_3;
    param_3 = param_1;
  }
  pbVar13 = pbVar15 + 2;
  if ((local_470[0] == param_2) || (local_74 == param_2)) {
    memset(local_470,0,0x400);
    if (param_2 == 1) {
      lVar8 = 0;
LAB_0309cd0c:
      local_470[pbVar13[lVar8 * 0xc]] = local_470[pbVar13[lVar8 * 0xc]] + 1;
    }
    else {
      lVar8 = 0;
      pbVar12 = pbVar13;
      do {
        lVar8 = lVar8 + 2;
        local_470[*pbVar12] = local_470[*pbVar12] + 1;
        pbVar11 = pbVar12 + 0xc;
        pbVar12 = pbVar12 + 0x18;
        local_470[*pbVar11] = local_470[*pbVar11] + 1;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar8);
      if ((param_2 & 1) != 0) goto LAB_0309cd0c;
    }
    pbVar12 = param_3;
  }
  else {
    uVar6 = 0;
    local_480 = 0;
    piVar9 = (int *)((ulong)auStack_880 | 8);
    piVar10 = (int *)((ulong)local_470 | 8);
    do {
      iVar2 = piVar10[-2];
      iVar3 = piVar10[-1];
      piVar9[-2] = local_480;
      piVar9[-1] = iVar2 + local_480;
      iVar3 = iVar3 + iVar2 + local_480;
      uVar6 = uVar6 + 4;
      local_480 = piVar10[1];
      iVar2 = *piVar10 + iVar3;
      *piVar9 = iVar3;
      piVar9[1] = iVar2;
      local_480 = local_480 + iVar2;
      piVar9 = piVar9 + 4;
      piVar10 = piVar10 + 4;
    } while (uVar6 < 0x100);
    memset(local_470,0,0x400);
    uVar6 = (ulong)param_2;
    pbVar11 = pbVar15;
    do {
      bVar5 = *pbVar13;
      uVar4 = auStack_880[*pbVar12];
      auStack_880[*pbVar12] = uVar4 + 1;
      uVar14 = *(undefined8 *)pbVar11;
      *(undefined4 *)(param_3 + (ulong)uVar4 * 0xc + 8) = *(undefined4 *)(pbVar11 + 8);
      *(undefined8 *)(param_3 + (ulong)uVar4 * 0xc) = uVar14;
      uVar6 = uVar6 - 1;
      pbVar11 = pbVar11 + 0xc;
      local_470[bVar5] = local_470[bVar5] + 1;
      pbVar13 = pbVar13 + 0xc;
      pbVar12 = pbVar12 + 0xc;
    } while (uVar6 != 0);
    pbVar13 = param_3 + 2;
    pbVar12 = pbVar15;
    pbVar15 = param_3;
  }
  pbVar11 = pbVar15 + 3;
  if ((local_470[0] == param_2) || (local_74 == param_2)) {
    memset(local_470,0,0x400);
    if (param_2 == 1) {
      lVar8 = 0;
LAB_0309ce88:
      local_470[pbVar11[lVar8 * 0xc]] = local_470[pbVar11[lVar8 * 0xc]] + 1;
    }
    else {
      lVar8 = 0;
      pbVar13 = pbVar11;
      do {
        lVar8 = lVar8 + 2;
        local_470[*pbVar13] = local_470[*pbVar13] + 1;
        pbVar7 = pbVar13 + 0xc;
        pbVar13 = pbVar13 + 0x18;
        local_470[*pbVar7] = local_470[*pbVar7] + 1;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar8);
      if ((param_2 & 1) != 0) goto LAB_0309ce88;
    }
    pbVar11 = pbVar12;
  }
  else {
    uVar6 = 0;
    local_480 = 0;
    piVar9 = (int *)((ulong)auStack_880 | 8);
    piVar10 = (int *)((ulong)local_470 | 8);
    do {
      iVar2 = piVar10[-2];
      iVar3 = piVar10[-1];
      piVar9[-2] = local_480;
      piVar9[-1] = iVar2 + local_480;
      iVar3 = iVar3 + iVar2 + local_480;
      uVar6 = uVar6 + 4;
      local_480 = piVar10[1];
      iVar2 = *piVar10 + iVar3;
      *piVar9 = iVar3;
      piVar9[1] = iVar2;
      local_480 = local_480 + iVar2;
      piVar9 = piVar9 + 4;
      piVar10 = piVar10 + 4;
    } while (uVar6 < 0x100);
    memset(local_470,0,0x400);
    uVar6 = (ulong)param_2;
    pbVar7 = pbVar15;
    do {
      bVar5 = *pbVar11;
      uVar4 = auStack_880[*pbVar13];
      auStack_880[*pbVar13] = uVar4 + 1;
      uVar14 = *(undefined8 *)pbVar7;
      *(undefined4 *)(pbVar12 + (ulong)uVar4 * 0xc + 8) = *(undefined4 *)(pbVar7 + 8);
      *(undefined8 *)(pbVar12 + (ulong)uVar4 * 0xc) = uVar14;
      uVar6 = uVar6 - 1;
      pbVar7 = pbVar7 + 0xc;
      local_470[bVar5] = local_470[bVar5] + 1;
      pbVar13 = pbVar13 + 0xc;
      pbVar11 = pbVar11 + 0xc;
    } while (uVar6 != 0);
    pbVar11 = pbVar15;
    pbVar15 = pbVar12;
  }
  pbVar12 = pbVar11;
  pbVar13 = pbVar15;
  if ((local_470[0] != param_2) && (local_74 != param_2)) {
    uVar6 = 0;
    local_480 = 0;
    piVar9 = (int *)((ulong)auStack_880 | 8);
    piVar10 = (int *)((ulong)local_470 | 8);
    do {
      iVar2 = piVar10[-2];
      iVar3 = piVar10[-1];
      piVar9[-2] = local_480;
      piVar9[-1] = iVar2 + local_480;
      iVar3 = iVar3 + iVar2 + local_480;
      uVar6 = uVar6 + 4;
      local_480 = piVar10[1];
      iVar2 = *piVar10 + iVar3;
      *piVar9 = iVar3;
      piVar9[1] = iVar2;
      local_480 = local_480 + iVar2;
      piVar9 = piVar9 + 4;
      piVar10 = piVar10 + 4;
    } while (uVar6 < 0x100);
    pbVar12 = pbVar15;
    pbVar13 = pbVar11;
    if (param_2 != 0) {
      uVar6 = (ulong)param_2;
      pbVar7 = pbVar15 + 3;
      do {
        uVar4 = auStack_880[*pbVar7];
        auStack_880[*pbVar7] = uVar4 + 1;
        uVar14 = *(undefined8 *)pbVar15;
        pbVar1 = pbVar15 + 8;
        uVar6 = uVar6 - 1;
        pbVar15 = pbVar15 + 0xc;
        *(undefined4 *)(pbVar11 + (ulong)uVar4 * 0xc + 8) = *(undefined4 *)pbVar1;
        *(undefined8 *)(pbVar11 + (ulong)uVar4 * 0xc) = uVar14;
        pbVar7 = pbVar7 + 0xc;
      } while (uVar6 != 0);
    }
  }
joined_r0x0309cec0:
  if ((param_2 != 0) && (pbVar12 == param_1)) {
    if (param_2 == 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = 0;
      pbVar15 = param_1;
      pbVar12 = pbVar13;
      do {
        uVar14 = *(undefined8 *)pbVar12;
        lVar8 = lVar8 + 2;
        *(undefined4 *)(pbVar15 + 8) = *(undefined4 *)(pbVar12 + 8);
        *(undefined8 *)pbVar15 = uVar14;
        uVar14 = *(undefined8 *)(pbVar12 + 0xc);
        *(undefined4 *)(pbVar15 + 0x14) = *(undefined4 *)(pbVar12 + 0x14);
        *(undefined8 *)(pbVar15 + 0xc) = uVar14;
        pbVar12 = pbVar12 + 0x18;
        pbVar15 = pbVar15 + 0x18;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar8);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    uVar14 = *(undefined8 *)(pbVar13 + lVar8 * 0xc);
    *(undefined4 *)(param_1 + lVar8 * 0xc + 8) = *(undefined4 *)(pbVar13 + lVar8 * 0xc + 8);
    *(undefined8 *)(param_1 + lVar8 * 0xc) = uVar14;
  }
  return;
}


