/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed6688; name: FUN_02ed6688
 */


void FUN_02ed6688(long param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  long *plVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  ushort *puVar13;
  long lVar14;
  ushort *puVar15;
  float *pfVar16;
  ulong uVar17;
  float fVar18;
  
  pbVar10 = *(byte **)(param_1 + 0x98);
  if (pbVar10 == (byte *)0x0) {
    pbVar11 = (byte *)0x0;
    pfVar16 = (float *)0x0;
    goto LAB_02ed6724;
  }
  pbVar11 = pbVar10 + 1;
  pfVar16 = (float *)(pbVar10 + ((ulong)(*pbVar10 + 4) & 0x1fc));
  if (pbVar10 == (byte *)0x0) goto LAB_02ed6724;
  while (pbVar11 != pbVar10 + (ulong)*pbVar10 + 1) {
    while( true ) {
      bVar5 = *pbVar11;
      if (((bVar5 < 0x49) &&
          ((1L << ((ulong)bVar5 & 0x1f) &
           (ulong)*(uint *)(param_2 + ((ulong)(bVar5 >> 3) & 0x1c) + 0x80)) != 0)) &&
         (*(uint *)(&DAT_03a9efac + (ulong)bVar5 * 4) != 0x1b)) {
        lVar12 = (ulong)*(uint *)(&DAT_03a9efac + (ulong)bVar5 * 4) * 4;
        *(float *)(param_2 + lVar12) = *(float *)(param_2 + lVar12) + *pfVar16;
        pbVar10 = *(byte **)(param_1 + 0x98);
      }
      pbVar11 = pbVar11 + 1;
      pfVar16 = pfVar16 + 1;
      if (pbVar10 != (byte *)0x0) break;
LAB_02ed6724:
      if (pbVar11 == (byte *)0x0) goto LAB_02ed6730;
    }
  }
LAB_02ed6730:
  if ((*(ulong **)(param_1 + 0x38) != (ulong *)0x0) &&
     (uVar17 = **(ulong **)(param_1 + 0x38), uVar17 != 0)) {
    iVar9 = 0;
    do {
      while( true ) {
        uVar6 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        lVar12 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20);
        uVar1 = iVar9 + (int)lVar12;
        uVar17 = uVar17 >> (lVar12 + 1U & 0x3f);
        if (((0x3ffbffc018e78ffU >> ((ulong)uVar1 & 0x3f) & 1) != 0) &&
           (uVar4 = *(uint *)(&DAT_03a9f1f4 + (ulong)uVar1 * 4),
           (1L << ((ulong)uVar4 & 0x1f) &
           (ulong)*(uint *)(param_2 + ((ulong)(uVar4 >> 3) & 0x1ffffffc) + 0x80)) != 0)) break;
LAB_02ed67ac:
        iVar9 = uVar1 + 1;
        if (uVar17 == 0) goto LAB_02ed684c;
      }
      fVar18 = 0.0;
      uVar3 = *(uint *)(DAT_0440a160 + 0x20);
      if (uVar3 != 0) {
        uVar2 = uVar1 + (int)(param_1 + 0x30);
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = uVar2 / uVar3;
        }
        fVar18 = 0.0;
        plVar8 = *(long **)(*(long *)(DAT_0440a160 + 0x18) + (ulong)(uVar2 - uVar7 * uVar3) * 8);
        if (plVar8 != (long *)0x0) {
          do {
            if ((*plVar8 == param_1 + 0x30) && (*(uint *)(plVar8 + 1) == uVar1)) {
              if (*(int *)((long)plVar8 + 0x4c) == 3) {
                fVar18 = (float)FUN_02eb1180(DAT_0440a160,plVar8,param_3);
              }
              else {
                fVar18 = (float)FUN_02eb1334();
              }
              goto LAB_02ed6820;
            }
            plVar8 = (long *)plVar8[2];
          } while (plVar8 != (long *)0x0);
          fVar18 = 0.0;
        }
      }
LAB_02ed6820:
      if (*(uint *)(&DAT_03a9efac + (ulong)uVar4 * 4) == 0x1b) goto LAB_02ed67ac;
      lVar12 = (ulong)*(uint *)(&DAT_03a9efac + (ulong)uVar4 * 4) * 4;
      *(float *)(param_2 + lVar12) = *(float *)(param_2 + lVar12) + fVar18;
      iVar9 = uVar1 + 1;
    } while (uVar17 != 0);
  }
LAB_02ed684c:
  if (((*(char *)(param_1 + 0x20) == '\0') ||
      (plVar8 = (long *)(**(code **)(*(long *)(param_1 + 0x18) + 0x80))(), plVar8 == (long *)0x0))
     || (lVar12 = *plVar8, lVar12 == 0)) {
    return;
  }
  puVar13 = *(ushort **)(lVar12 + 0x20);
  if (puVar13 != (ushort *)0x0) goto LAB_02ed693c;
  do {
    puVar15 = (ushort *)0x0;
    pfVar16 = (float *)0x0;
LAB_02ed68cc:
    while (puVar13 == (ushort *)0x0) {
      if (puVar15 == (ushort *)0x0) goto LAB_02ed692c;
LAB_02ed68e4:
      if ((((0x3ffbffc018e78ffU >> ((ulong)*puVar15 & 0x3f) & 1) != 0) &&
          (uVar1 = *(uint *)(&DAT_03a9f1f4 + (ulong)*puVar15 * 4),
          (1L << ((ulong)uVar1 & 0x1f) &
          (ulong)*(uint *)(param_2 + ((ulong)(uVar1 >> 3) & 0x1ffffffc) + 0x80)) != 0)) &&
         (*(uint *)(&DAT_03a9efac + (ulong)uVar1 * 4) != 0x1b)) {
        lVar14 = (ulong)*(uint *)(&DAT_03a9efac + (ulong)uVar1 * 4) * 4;
        *(float *)(param_2 + lVar14) = *(float *)(param_2 + lVar14) + *pfVar16;
        puVar13 = *(ushort **)(lVar12 + 0x20);
      }
      puVar15 = puVar15 + 1;
      pfVar16 = pfVar16 + 4;
    }
    if (puVar15 != puVar13 + (ulong)*puVar13 + 1) goto LAB_02ed68e4;
LAB_02ed692c:
    lVar12 = *(long *)(lVar12 + 0x10);
    if (lVar12 == 0) {
      return;
    }
    puVar13 = *(ushort **)(lVar12 + 0x20);
  } while (puVar13 == (ushort *)0x0);
LAB_02ed693c:
  puVar15 = puVar13 + 1;
  pfVar16 = (float *)((long)puVar13 + ((ulong)((uint)*puVar13 * 2 + 5) & 0x3fffc));
  goto LAB_02ed68cc;
}


