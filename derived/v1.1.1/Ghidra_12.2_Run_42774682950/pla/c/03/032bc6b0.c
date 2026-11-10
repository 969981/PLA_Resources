/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032bc6b0; name: FUN_032bc6b0
 */


/* WARNING: Removing unreachable block (ram,0x032bcae0) */
/* WARNING: Removing unreachable block (ram,0x032bc71c) */

void FUN_032bc6b0(long param_1,uint param_2,long param_3,undefined8 param_4,uint param_5,int param_6
                 )

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  byte *pbVar17;
  int *piVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  uint auStack_890 [256];
  int local_490;
  uint local_480 [255];
  uint local_84;
  
  uVar14 = (ulong)param_5;
  memset(local_480,0,0x410);
  if (param_2 != 0) {
    lVar8 = (int)param_5 + param_1;
    if (param_2 == 1) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      pbVar12 = (byte *)(lVar8 + 8);
      do {
        lVar16 = lVar16 + 2;
        local_480[pbVar12[-8]] = local_480[pbVar12[-8]] + 1;
        local_480[*pbVar12] = local_480[*pbVar12] + 1;
        pbVar12 = pbVar12 + 0x10;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar16);
      if ((param_2 & 1) == 0) goto LAB_032bc784;
    }
    bVar6 = *(byte *)(lVar8 + lVar16 * 8);
    local_480[bVar6] = local_480[bVar6] + 1;
  }
LAB_032bc784:
  memset(auStack_890,0,0x410);
  iVar21 = (int)((ulong)param_4 >> 0x20);
  iVar7 = iVar21 + -1;
  if (iVar7 < 1) {
    lVar8 = param_1;
  }
  else if (param_2 == 0) {
    iVar22 = 0;
    lVar8 = param_1;
    lVar16 = param_3;
    if ((local_84 != 0) && (local_480[0] != 0)) {
      uVar14 = 0;
      local_490 = 0;
      piVar15 = (int *)((ulong)local_480 | 8);
      piVar18 = (int *)((ulong)auStack_890 | 8);
      do {
        iVar3 = piVar15[-2];
        iVar2 = piVar15[-1];
        piVar18[-2] = local_490;
        piVar18[-1] = iVar3 + local_490;
        iVar2 = iVar2 + iVar3 + local_490;
        uVar14 = uVar14 + 4;
        local_490 = piVar15[1];
        iVar3 = *piVar15 + iVar2;
        *piVar18 = iVar2;
        piVar18[1] = iVar3;
        local_490 = local_490 + iVar3;
        piVar15 = piVar15 + 4;
        piVar18 = piVar18 + 4;
      } while (uVar14 < 0x100);
      lVar16 = param_1;
      goto LAB_032bcb24;
    }
    while( true ) {
      param_3 = lVar8;
LAB_032bcb24:
      memset(local_480,0,0x400);
      iVar22 = iVar22 + 1;
      if (iVar22 == iVar7) break;
      lVar8 = param_3;
    }
    uVar14 = (ulong)(iVar21 - 2) + (long)(int)param_5 + 1;
    lVar8 = param_3;
    param_3 = lVar16;
  }
  else {
    uVar9 = (ulong)param_2;
    iVar21 = 0;
    uVar20 = (long)(int)param_5;
    lVar16 = param_1;
    do {
      uVar14 = uVar20 + 1;
      lVar8 = lVar16 + uVar14;
      if (local_480[0] == param_2 || local_84 == param_2) {
        memset(local_480,0,0x400);
        if (uVar9 - 1 < 3) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          pbVar12 = (byte *)(lVar8 + 0x10);
          do {
            lVar10 = lVar10 + 4;
            local_480[pbVar12[-0x10]] = local_480[pbVar12[-0x10]] + 1;
            local_480[pbVar12[-8]] = local_480[pbVar12[-8]] + 1;
            local_480[*pbVar12] = local_480[*pbVar12] + 1;
            pbVar17 = pbVar12 + 8;
            pbVar12 = pbVar12 + 0x20;
            local_480[*pbVar17] = local_480[*pbVar17] + 1;
          } while (uVar9 - (uVar9 & 3) != lVar10);
        }
        if ((param_2 & 3) != 0) {
          pbVar12 = (byte *)(lVar8 + lVar10 * 8);
          uVar20 = uVar9 & 3;
          do {
            uVar20 = uVar20 - 1;
            local_480[*pbVar12] = local_480[*pbVar12] + 1;
            pbVar12 = pbVar12 + 8;
          } while (uVar20 != 0);
        }
        lVar8 = lVar16;
      }
      else {
        uVar11 = 0;
        local_490 = 0;
        piVar15 = (int *)((ulong)local_480 | 8);
        piVar18 = (int *)((ulong)auStack_890 | 8);
        do {
          iVar2 = piVar15[-2];
          iVar22 = piVar15[-1];
          piVar18[-2] = local_490;
          piVar18[-1] = iVar2 + local_490;
          iVar22 = iVar22 + iVar2 + local_490;
          uVar11 = uVar11 + 4;
          local_490 = piVar15[1];
          iVar2 = *piVar15 + iVar22;
          *piVar18 = iVar22;
          piVar18[1] = iVar2;
          local_490 = local_490 + iVar2;
          piVar15 = piVar15 + 4;
          piVar18 = piVar18 + 4;
        } while (uVar11 < 0x100);
        memset(local_480,0,0x400);
        lVar10 = 0;
        if (uVar9 != 1) {
          lVar10 = 0;
          pbVar12 = (byte *)(lVar16 + uVar20 + 8);
          pbVar17 = (byte *)(lVar8 + 8);
          puVar13 = (undefined8 *)(lVar16 + 8);
          do {
            bVar6 = pbVar17[-8];
            uVar4 = auStack_890[pbVar12[-8]];
            auStack_890[pbVar12[-8]] = uVar4 + 1;
            *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = puVar13[-1];
            local_480[bVar6] = local_480[bVar6] + 1;
            lVar10 = lVar10 + 2;
            bVar6 = *pbVar17;
            uVar4 = auStack_890[*pbVar12];
            auStack_890[*pbVar12] = uVar4 + 1;
            *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *puVar13;
            local_480[bVar6] = local_480[bVar6] + 1;
            pbVar12 = pbVar12 + 0x10;
            pbVar17 = pbVar17 + 0x10;
            puVar13 = puVar13 + 2;
          } while (uVar9 - (uVar9 & 1) != lVar10);
        }
        if ((param_2 & 1) != 0) {
          lVar10 = lVar10 * 8;
          bVar6 = *(byte *)(lVar16 + uVar20 + lVar10);
          uVar4 = auStack_890[bVar6];
          bVar5 = *(byte *)(lVar8 + lVar10);
          auStack_890[bVar6] = uVar4 + 1;
          *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar16 + lVar10);
          local_480[bVar5] = local_480[bVar5] + 1;
        }
        lVar8 = param_3;
        param_3 = lVar16;
      }
      iVar21 = iVar21 + 1;
      uVar20 = uVar14;
      lVar16 = lVar8;
    } while (iVar21 != iVar7);
  }
  if ((local_480[0] == param_2) || (local_84 == param_2)) {
    lVar16 = lVar8;
    lVar8 = param_3;
    goto LAB_032bca28;
  }
  uVar20 = 0;
  local_490 = 0;
  piVar15 = (int *)((ulong)auStack_890 | 8);
  piVar18 = (int *)((ulong)local_480 | 8);
  do {
    iVar21 = piVar18[-2];
    iVar7 = piVar18[-1];
    piVar15[-2] = local_490;
    piVar15[-1] = iVar21 + local_490;
    iVar7 = iVar7 + iVar21 + local_490;
    uVar20 = uVar20 + 4;
    local_490 = piVar18[1];
    iVar21 = *piVar18 + iVar7;
    *piVar15 = iVar7;
    piVar15[1] = iVar21;
    local_490 = local_490 + iVar21;
    piVar15 = piVar15 + 4;
    piVar18 = piVar18 + 4;
  } while (uVar20 < 0x100);
  if (param_2 == 0) {
    return;
  }
  lVar16 = lVar8 + (int)uVar14;
  if (param_2 == 1) {
    lVar10 = 0;
LAB_032bcc8c:
    bVar6 = *(byte *)(lVar16 + lVar10 * 8);
    uVar4 = auStack_890[bVar6];
    auStack_890[bVar6] = uVar4 + 1;
    *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *(undefined8 *)(lVar8 + lVar10 * 8);
  }
  else {
    lVar10 = 0;
    pbVar12 = (byte *)(lVar16 + 8);
    do {
      puVar13 = (undefined8 *)(lVar8 + lVar10 * 8);
      uVar4 = auStack_890[pbVar12[-8]];
      auStack_890[pbVar12[-8]] = uVar4 + 1;
      *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = *puVar13;
      lVar10 = lVar10 + 2;
      uVar4 = auStack_890[*pbVar12];
      auStack_890[*pbVar12] = uVar4 + 1;
      *(undefined8 *)(param_3 + (ulong)uVar4 * 8) = puVar13[1];
      pbVar12 = pbVar12 + 0x10;
    } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar10);
    if ((param_2 & 1) != 0) goto LAB_032bcc8c;
  }
  lVar16 = param_3;
LAB_032bca28:
  if ((param_2 != 0) && ((param_6 == 1) != (lVar8 == param_1))) {
    uVar20 = (ulong)param_2;
    uVar14 = uVar20 & 3;
    if (uVar20 - 1 < 3) {
      lVar10 = 0;
    }
    else {
      lVar10 = 0;
      puVar13 = (undefined8 *)(lVar16 + 0x10);
      puVar19 = (undefined8 *)(lVar8 + 0x10);
      do {
        puVar19[-2] = puVar13[-2];
        puVar19[-1] = puVar13[-1];
        *puVar19 = *puVar13;
        puVar1 = puVar13 + 1;
        lVar10 = lVar10 + 4;
        puVar13 = puVar13 + 4;
        puVar19[1] = *puVar1;
        puVar19 = puVar19 + 4;
      } while (uVar20 - uVar14 != lVar10);
    }
    if ((param_2 & 3) != 0) {
      puVar13 = (undefined8 *)(lVar16 + lVar10 * 8);
      puVar19 = (undefined8 *)(lVar8 + lVar10 * 8);
      do {
        uVar14 = uVar14 - 1;
        *puVar19 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar19 = puVar19 + 1;
      } while (uVar14 != 0);
    }
  }
  return;
}


