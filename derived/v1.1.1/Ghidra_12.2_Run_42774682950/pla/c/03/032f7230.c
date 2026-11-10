/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f7230; name: FUN_032f7230
 */


void FUN_032f7230(long param_1,ulong param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  ulong *puVar14;
  ulong *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  
  param_2 = param_2 & 0xffffffff;
LAB_032f725c:
  iVar17 = (int)param_2;
  plVar1 = (long *)(param_1 + ((long)((ulong)(iVar17 + param_3) << 0x20) >> 0x21) * 0x20);
  lVar21 = *plVar1;
  iVar12 = (int)plVar1[1];
  uVar18 = param_2 & 0xffffffff;
  lVar3 = plVar1[2];
  lVar7 = plVar1[3];
  uVar20 = (ulong)param_3;
LAB_032f727c:
  param_2 = (ulong)(int)param_2;
  do {
    plVar1 = (long *)(param_1 + param_2 * 0x20);
    if ((*(long *)(*plVar1 + 8) == *(long *)(lVar21 + 8)) ||
       (iVar13 = FUN_032e3c78(plVar1[2],plVar1[3],lVar3,lVar7), iVar13 == 0)) {
      if ((int)plVar1[1] == iVar12) {
        puVar14 = *(ulong **)(lVar21 + 8);
        if (*(ulong **)(*plVar1 + 8) == puVar14) break;
        for (; (puVar14 != (ulong *)0x0 && ((*puVar14 & 1) == 0)); puVar14 = (ulong *)puVar14[1]) {
        }
        puVar15 = puVar14;
        while( true ) {
          uVar16 = (uint)*puVar15;
          if ((uVar16 >> 0xf & 1) != 0) break;
          if (((*puVar15 & 9) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_032f740c;
        }
        uVar16 = (uVar16 & 0x7fff) - (uVar16 >> 1 & 0x1555);
        uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
        if (((undefined8 *)
             puVar15[(ulong)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
             (undefined8 *)0x0) &&
           (puVar15 = *(ulong **)
                       puVar15[(ulong)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                              ], puVar15 != (ulong *)0x0)) goto LAB_032f73dc;
LAB_032f740c:
        puVar15 = puVar14;
LAB_032f73dc:
        if (*(ulong **)(*plVar1 + 8) != puVar15) break;
      }
      else if (iVar12 <= (int)plVar1[1]) break;
    }
    else if (-1 < iVar13) break;
    param_2 = param_2 + 1;
  } while( true );
  uVar20 = (ulong)(int)uVar20;
  do {
    plVar2 = (long *)(param_1 + uVar20 * 0x20);
    if ((*(long *)(lVar21 + 8) == *(long *)(*plVar2 + 8)) ||
       (iVar13 = FUN_032e3c78(lVar3,lVar7,plVar2[2],plVar2[3]), iVar13 == 0)) {
      if (iVar12 == (int)plVar2[1]) {
        puVar14 = *(ulong **)(*plVar2 + 8);
        if (*(ulong **)(lVar21 + 8) == puVar14) break;
        for (; (puVar14 != (ulong *)0x0 && ((*puVar14 & 1) == 0)); puVar14 = (ulong *)puVar14[1]) {
        }
        puVar15 = puVar14;
        while( true ) {
          uVar16 = (uint)*puVar15;
          if ((uVar16 >> 0xf & 1) != 0) break;
          if (((*puVar15 & 9) != 0) || (puVar15 = (ulong *)puVar15[1], puVar15 == (ulong *)0x0))
          goto LAB_032f73cc;
        }
        uVar16 = (uVar16 & 0x7fff) - (uVar16 >> 1 & 0x1555);
        uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
        if (((undefined8 *)
             puVar15[(ulong)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] !=
             (undefined8 *)0x0) &&
           (puVar15 = *(ulong **)
                       puVar15[(ulong)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2
                              ], puVar15 != (ulong *)0x0)) goto LAB_032f73d0;
LAB_032f73cc:
        puVar15 = puVar14;
LAB_032f73d0:
        if (*(ulong **)(lVar21 + 8) != puVar15) break;
      }
      else if ((int)plVar2[1] <= iVar12) break;
    }
    else if (-1 < iVar13) break;
    uVar20 = uVar20 - 1;
  } while( true );
  iVar13 = (int)param_2;
  iVar19 = (int)uVar20;
  if (iVar13 <= iVar19) {
    if (iVar19 != iVar13) {
      lVar4 = *plVar2;
      lVar8 = plVar2[1];
      lVar5 = plVar2[2];
      lVar9 = plVar2[3];
      lVar6 = *plVar1;
      lVar10 = plVar1[1];
      lVar11 = plVar1[3];
      plVar2[2] = plVar1[2];
      plVar2[3] = lVar11;
      *plVar2 = lVar6;
      plVar2[1] = lVar10;
      plVar1[2] = lVar5;
      plVar1[3] = lVar9;
      *plVar1 = lVar4;
      plVar1[1] = lVar8;
    }
    uVar20 = (ulong)(iVar19 - 1);
    param_2 = (ulong)(iVar13 + 1);
  }
  if ((int)uVar20 < (int)param_2) goto code_r0x032f7380;
  goto LAB_032f727c;
code_r0x032f7380:
  if (iVar17 < (int)uVar20) {
    FUN_032f7230(param_1,uVar18,uVar20 & 0xffffffff);
  }
  if ((int)param_3 <= (int)param_2) {
    return;
  }
  goto LAB_032f725c;
}


