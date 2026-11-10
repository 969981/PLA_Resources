/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016bef0; name: FUN_0016bef0
 */


undefined4 * FUN_0016bef0(uint *param_1)

{
  char *pcVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  long *plVar17;
  long *plVar18;
  undefined1 auVar19 [16];
  
  plVar17 = *(long **)(param_1 + 0x12);
  uVar7 = *param_1;
  lVar13 = plVar17[1];
  uVar2 = plVar17[2];
  uVar15 = lVar13 + 1;
  if (uVar15 <= uVar2) {
    lVar8 = *plVar17;
LAB_0016bf5c:
    plVar17[1] = uVar15;
    *(char *)(lVar8 + lVar13) = (char)uVar7;
    lVar13 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar13 + -1;
    if (lVar13 == 0) {
      uVar5 = FUN_001790d0();
      *param_1 = uVar5;
    }
    else {
      pbVar14 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar14 + 1;
      uVar5 = (uint)*pbVar14;
      *param_1 = uVar5;
    }
    if (uVar5 == 0x3d) {
      uVar16 = 0;
      do {
        while( true ) {
          plVar17 = *(long **)(param_1 + 0x12);
          lVar13 = plVar17[1];
          uVar2 = plVar17[2];
          uVar15 = lVar13 + 1;
          if (uVar2 < uVar15) {
            if (0x3ffffffffffffffe < uVar2) goto LAB_0016c07c;
            lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar2,uVar2 << 1);
            lVar13 = plVar17[1];
            uVar15 = lVar13 + 1;
            *plVar17 = lVar8;
            plVar17[2] = uVar2 << 1;
          }
          else {
            lVar8 = *plVar17;
          }
          plVar17[1] = uVar15;
          *(undefined1 *)(lVar8 + lVar13) = 0x3d;
          lVar13 = **(long **)(param_1 + 0x10);
          **(long **)(param_1 + 0x10) = lVar13 + -1;
          if (lVar13 == 0) break;
          pbVar14 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
          *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar14 + 1;
          bVar3 = *pbVar14;
          uVar5 = (uint)bVar3;
          uVar16 = uVar16 + 1;
          *param_1 = (uint)bVar3;
          if (bVar3 != 0x3d) goto LAB_0016c05c;
        }
        uVar5 = FUN_001790d0();
        uVar16 = uVar16 + 1;
        *param_1 = uVar5;
      } while (uVar5 == 0x3d);
    }
    else {
      uVar16 = 0;
    }
LAB_0016c05c:
    if (uVar5 != uVar7) {
      uVar16 = ~uVar16;
    }
    return (undefined4 *)(ulong)uVar16;
  }
  if (uVar2 < 0x3fffffffffffffff) {
    lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar17,uVar2,uVar2 << 1);
    lVar13 = plVar17[1];
    uVar15 = lVar13 + 1;
    *plVar17 = lVar8;
    plVar17[2] = uVar2 << 1;
    goto LAB_0016bf5c;
  }
LAB_0016c07c:
  iVar12 = 0;
  auVar19 = FUN_0016a190(param_1,"lexical element too long");
  plVar17 = auVar19._8_8_;
  puVar9 = auVar19._0_8_;
  plVar18 = *(long **)(puVar9 + 0x12);
  uVar7 = *puVar9;
  uVar5 = puVar9[1];
  lVar13 = plVar18[1];
  uVar2 = plVar18[2];
  uVar15 = lVar13 + 1;
  if (uVar2 < uVar15) {
    if (0x3ffffffffffffffe < uVar2) goto LAB_0016c558;
    lVar8 = FUN_00161510(*(undefined8 *)(puVar9 + 0xe),*plVar18,uVar2,uVar2 << 1);
    lVar13 = plVar18[1];
    uVar15 = lVar13 + 1;
    *plVar18 = lVar8;
    plVar18[2] = uVar2 << 1;
  }
  else {
    lVar8 = *plVar18;
  }
  plVar18[1] = uVar15;
  *(char *)(lVar8 + lVar13) = (char)uVar7;
  lVar13 = **(long **)(puVar9 + 0x10);
  **(long **)(puVar9 + 0x10) = lVar13 + -1;
  if (lVar13 == 0) {
    uVar7 = FUN_001790d0();
    *puVar9 = uVar7;
    if (uVar7 != 0xd && uVar7 != 10) goto LAB_0016c150;
  }
  else {
    pbVar14 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
    *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar14 + 1;
    bVar3 = *pbVar14;
    *puVar9 = (uint)bVar3;
    if (bVar3 != 0xd && bVar3 != 10) goto LAB_0016c150;
  }
  FUN_0016be20(puVar9);
LAB_0016c150:
  if (plVar17 != (long *)0x0) {
    uVar7 = *puVar9;
    if (0xc < (int)uVar7) goto LAB_0016c18c;
    do {
      if (uVar7 == 10) goto LAB_0016c1cc;
      if (uVar7 == 0xffffffff) goto LAB_0016c51c;
LAB_0016c218:
      plVar18 = *(long **)(puVar9 + 0x12);
      lVar13 = plVar18[1];
      uVar2 = plVar18[2];
      uVar15 = lVar13 + 1;
      if (uVar2 < uVar15) {
        if (0x3ffffffffffffffe < uVar2) goto LAB_0016c558;
        lVar8 = FUN_00161510(*(undefined8 *)(puVar9 + 0xe),*plVar18,uVar2,uVar2 << 1);
        lVar13 = plVar18[1];
        uVar15 = lVar13 + 1;
        *plVar18 = lVar8;
        plVar18[2] = uVar2 << 1;
      }
      else {
        lVar8 = *plVar18;
      }
      plVar18[1] = uVar15;
      *(char *)(lVar8 + lVar13) = (char)uVar7;
      lVar13 = **(long **)(puVar9 + 0x10);
      **(long **)(puVar9 + 0x10) = lVar13 + -1;
      if (lVar13 == 0) {
        uVar7 = FUN_001790d0();
        *puVar9 = uVar7;
        goto joined_r0x0016c1c0;
      }
      pbVar14 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
      *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar14 + 1;
      uVar7 = (uint)*pbVar14;
      *puVar9 = uVar7;
      if (0xc < uVar7) {
LAB_0016c18c:
        do {
          if (uVar7 == 0xd) {
LAB_0016c1cc:
            plVar18 = *(long **)(puVar9 + 0x12);
            lVar13 = plVar18[1];
            uVar2 = plVar18[2];
            uVar15 = lVar13 + 1;
            if (uVar2 < uVar15) {
              if (0x3ffffffffffffffe < uVar2) goto LAB_0016c558;
              lVar8 = FUN_00161510(*(undefined8 *)(puVar9 + 0xe),*plVar18,uVar2,uVar2 << 1);
              lVar13 = plVar18[1];
              uVar15 = lVar13 + 1;
              *plVar18 = lVar8;
              plVar18[2] = uVar2 << 1;
            }
            else {
              lVar8 = *plVar18;
            }
            plVar18[1] = uVar15;
            *(undefined1 *)(lVar8 + lVar13) = 10;
            FUN_0016be20(puVar9);
          }
          else {
            if (uVar7 != 0x5d) goto LAB_0016c218;
            iVar6 = FUN_0016bef0(puVar9);
            if (iVar6 == iVar12) goto LAB_0016c3cc;
          }
          uVar7 = *puVar9;
joined_r0x0016c1c0:
          if ((int)uVar7 < 0xd) break;
        } while( true );
      }
    } while( true );
  }
  uVar7 = *puVar9;
  if (0xc < (int)uVar7) goto LAB_0016c2fc;
  do {
    if (uVar7 == 10) goto LAB_0016c32c;
    if (uVar7 == 0xffffffff) break;
LAB_0016c378:
    lVar13 = **(long **)(puVar9 + 0x10);
    **(long **)(puVar9 + 0x10) = lVar13 + -1;
    if (lVar13 == 0) {
      uVar7 = FUN_001790d0();
      *puVar9 = uVar7;
      goto joined_r0x0016c3c4;
    }
    pbVar14 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
    *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar14 + 1;
    uVar7 = (uint)*pbVar14;
    *puVar9 = uVar7;
    if (0xc < uVar7) {
LAB_0016c2fc:
      do {
        if (uVar7 == 0x5d) {
          iVar6 = FUN_0016bef0(puVar9);
          if (iVar6 == iVar12) goto LAB_0016c3cc;
        }
        else {
          if (uVar7 != 0xd) goto LAB_0016c378;
LAB_0016c32c:
          plVar18 = *(long **)(puVar9 + 0x12);
          lVar13 = plVar18[1];
          uVar2 = plVar18[2];
          uVar15 = lVar13 + 1;
          if (uVar2 < uVar15) {
            if (0x3ffffffffffffffe < uVar2) goto LAB_0016c558;
            lVar8 = FUN_00161510(*(undefined8 *)(puVar9 + 0xe),*plVar18,uVar2,uVar2 << 1);
            lVar13 = plVar18[1];
            uVar15 = lVar13 + 1;
            *plVar18 = lVar8;
            plVar18[2] = uVar2 << 1;
          }
          else {
            lVar8 = *plVar18;
          }
          plVar18[1] = uVar15;
          *(undefined1 *)(lVar8 + lVar13) = 10;
          FUN_0016be20(puVar9);
          *(undefined8 *)(*(long *)(puVar9 + 0x12) + 8) = 0;
        }
        uVar7 = *puVar9;
joined_r0x0016c3c4:
        if ((int)uVar7 < 0xd) break;
      } while( true );
    }
  } while( true );
LAB_0016c51c:
  pcVar1 = "comment";
  if (plVar17 != (long *)0x0) {
    pcVar1 = "string";
  }
  uVar11 = FUN_00162fa0(*(undefined8 *)(puVar9 + 0xe),"unfinished long %s (starting at line %d)",
                        pcVar1,uVar5);
  FUN_0016a190(puVar9,uVar11,0x121);
LAB_0016c558:
  FUN_0016a190(puVar9,"lexical element too long",0);
                    /* WARNING: Does not return */
  pcVar4 = (code *)UndefinedInstructionException(0,0x16c56c);
  (*pcVar4)();
LAB_0016c3cc:
  plVar18 = *(long **)(puVar9 + 0x12);
  lVar13 = plVar18[1];
  uVar2 = plVar18[2];
  uVar7 = *puVar9;
  uVar15 = lVar13 + 1;
  if (uVar2 < uVar15) {
    if (0x3ffffffffffffffe < uVar2) goto LAB_0016c558;
    lVar8 = FUN_00161510(*(undefined8 *)(puVar9 + 0xe),*plVar18,uVar2,uVar2 << 1);
    lVar13 = plVar18[1];
    uVar15 = lVar13 + 1;
    *plVar18 = lVar8;
    plVar18[2] = uVar2 << 1;
  }
  else {
    lVar8 = *plVar18;
  }
  plVar18[1] = uVar15;
  *(char *)(lVar8 + lVar13) = (char)uVar7;
  lVar13 = **(long **)(puVar9 + 0x10);
  **(long **)(puVar9 + 0x10) = lVar13 + -1;
  if (lVar13 == 0) {
    puVar10 = (undefined4 *)FUN_001790d0();
    *puVar9 = (uint)puVar10;
  }
  else {
    pbVar14 = *(byte **)(*(long *)(puVar9 + 0x10) + 8);
    *(byte **)(*(long *)(puVar9 + 0x10) + 8) = pbVar14 + 1;
    bVar3 = *pbVar14;
    puVar10 = (undefined4 *)(ulong)bVar3;
    *puVar9 = (uint)bVar3;
  }
  if (plVar17 != (long *)0x0) {
    lVar8 = *(long *)(puVar9 + 0xe);
    lVar13 = FUN_0016d720(lVar8,**(long **)(puVar9 + 0x12) + (long)(iVar12 + 2),
                          (*(long **)(puVar9 + 0x12))[1] - (long)((iVar12 + 2) * 2));
    plVar18 = *(long **)(lVar8 + 0x10);
    *(long **)(lVar8 + 0x10) = plVar18 + 2;
    *plVar18 = lVar13;
    *(uint *)(plVar18 + 1) = *(byte *)(lVar13 + 8) | 0x40;
    puVar10 = (undefined4 *)
              FUN_00171c60(lVar8,*(undefined8 *)(puVar9 + 0x14),*(long *)(lVar8 + 0x10) + -0x10);
    if (puVar10[2] == 0) {
      *puVar10 = 1;
      puVar10[2] = 1;
      if (0 < *(long *)(*(long *)(lVar8 + 0x18) + 0x18)) {
        puVar10 = (undefined4 *)FUN_0015dc70(lVar8);
      }
    }
    else {
      lVar13 = *(long *)(puVar10 + 4);
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -0x10;
    *plVar17 = lVar13;
  }
  return puVar10;
}


