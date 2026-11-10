/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016c090; name: FUN_0016c090
 */


void FUN_0016c090(uint *param_1,long *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long *plVar14;
  
  plVar14 = *(long **)(param_1 + 0x12);
  uVar7 = *param_1;
  uVar2 = param_1[1];
  lVar11 = plVar14[1];
  uVar3 = plVar14[2];
  uVar13 = lVar11 + 1;
  if (uVar3 < uVar13) {
    if (0x3ffffffffffffffe < uVar3) goto LAB_0016c558;
    lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar3,uVar3 << 1);
    lVar11 = plVar14[1];
    uVar13 = lVar11 + 1;
    *plVar14 = lVar8;
    plVar14[2] = uVar3 << 1;
  }
  else {
    lVar8 = *plVar14;
  }
  plVar14[1] = uVar13;
  *(char *)(lVar8 + lVar11) = (char)uVar7;
  lVar11 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar11 + -1;
  if (lVar11 == 0) {
    uVar7 = FUN_001790d0();
    *param_1 = uVar7;
    if (uVar7 != 0xd && uVar7 != 10) goto LAB_0016c150;
  }
  else {
    pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
    bVar4 = *pbVar12;
    *param_1 = (uint)bVar4;
    if (bVar4 != 0xd && bVar4 != 10) goto LAB_0016c150;
  }
  FUN_0016be20(param_1);
LAB_0016c150:
  if (param_2 == (long *)0x0) {
    uVar7 = *param_1;
    if (0xc < (int)uVar7) goto LAB_0016c2fc;
    do {
      if (uVar7 == 10) goto LAB_0016c32c;
      if (uVar7 == 0xffffffff) goto LAB_0016c51c;
LAB_0016c378:
      lVar11 = **(long **)(param_1 + 0x10);
      **(long **)(param_1 + 0x10) = lVar11 + -1;
      if (lVar11 == 0) {
        uVar7 = FUN_001790d0();
        *param_1 = uVar7;
        goto joined_r0x0016c3c4;
      }
      pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
      *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
      uVar7 = (uint)*pbVar12;
      *param_1 = uVar7;
      if (0xc < uVar7) {
LAB_0016c2fc:
        do {
          if (uVar7 == 0x5d) {
            iVar6 = FUN_0016bef0(param_1);
            if (iVar6 == param_3) goto LAB_0016c3cc;
          }
          else {
            if (uVar7 != 0xd) goto LAB_0016c378;
LAB_0016c32c:
            plVar14 = *(long **)(param_1 + 0x12);
            lVar11 = plVar14[1];
            uVar3 = plVar14[2];
            uVar13 = lVar11 + 1;
            if (uVar3 < uVar13) {
              if (0x3ffffffffffffffe < uVar3) goto LAB_0016c558;
              lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar3,uVar3 << 1);
              lVar11 = plVar14[1];
              uVar13 = lVar11 + 1;
              *plVar14 = lVar8;
              plVar14[2] = uVar3 << 1;
            }
            else {
              lVar8 = *plVar14;
            }
            plVar14[1] = uVar13;
            *(undefined1 *)(lVar8 + lVar11) = 10;
            FUN_0016be20(param_1);
            *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
          }
          uVar7 = *param_1;
joined_r0x0016c3c4:
          if ((int)uVar7 < 0xd) break;
        } while( true );
      }
    } while( true );
  }
  uVar7 = *param_1;
  if (0xc < (int)uVar7) goto LAB_0016c18c;
  do {
    if (uVar7 == 10) goto LAB_0016c1cc;
    if (uVar7 == 0xffffffff) break;
LAB_0016c218:
    plVar14 = *(long **)(param_1 + 0x12);
    lVar11 = plVar14[1];
    uVar3 = plVar14[2];
    uVar13 = lVar11 + 1;
    if (uVar3 < uVar13) {
      if (0x3ffffffffffffffe < uVar3) goto LAB_0016c558;
      lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar3,uVar3 << 1);
      lVar11 = plVar14[1];
      uVar13 = lVar11 + 1;
      *plVar14 = lVar8;
      plVar14[2] = uVar3 << 1;
    }
    else {
      lVar8 = *plVar14;
    }
    plVar14[1] = uVar13;
    *(char *)(lVar8 + lVar11) = (char)uVar7;
    lVar11 = **(long **)(param_1 + 0x10);
    **(long **)(param_1 + 0x10) = lVar11 + -1;
    if (lVar11 == 0) {
      uVar7 = FUN_001790d0();
      *param_1 = uVar7;
      goto joined_r0x0016c1c0;
    }
    pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
    uVar7 = (uint)*pbVar12;
    *param_1 = uVar7;
    if (0xc < uVar7) {
LAB_0016c18c:
      do {
        if (uVar7 == 0xd) {
LAB_0016c1cc:
          plVar14 = *(long **)(param_1 + 0x12);
          lVar11 = plVar14[1];
          uVar3 = plVar14[2];
          uVar13 = lVar11 + 1;
          if (uVar3 < uVar13) {
            if (0x3ffffffffffffffe < uVar3) goto LAB_0016c558;
            lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar3,uVar3 << 1);
            lVar11 = plVar14[1];
            uVar13 = lVar11 + 1;
            *plVar14 = lVar8;
            plVar14[2] = uVar3 << 1;
          }
          else {
            lVar8 = *plVar14;
          }
          plVar14[1] = uVar13;
          *(undefined1 *)(lVar8 + lVar11) = 10;
          FUN_0016be20(param_1);
        }
        else {
          if (uVar7 != 0x5d) goto LAB_0016c218;
          iVar6 = FUN_0016bef0(param_1);
          if (iVar6 == param_3) goto LAB_0016c3cc;
        }
        uVar7 = *param_1;
joined_r0x0016c1c0:
        if ((int)uVar7 < 0xd) break;
      } while( true );
    }
  } while( true );
LAB_0016c51c:
  pcVar1 = "comment";
  if (param_2 != (long *)0x0) {
    pcVar1 = "string";
  }
  uVar10 = FUN_00162fa0(*(undefined8 *)(param_1 + 0xe),"unfinished long %s (starting at line %d)",
                        pcVar1,uVar2);
  FUN_0016a190(param_1,uVar10,0x121);
LAB_0016c558:
  FUN_0016a190(param_1,"lexical element too long",0);
                    /* WARNING: Does not return */
  pcVar5 = (code *)UndefinedInstructionException(0,0x16c56c);
  (*pcVar5)();
LAB_0016c3cc:
  plVar14 = *(long **)(param_1 + 0x12);
  lVar11 = plVar14[1];
  uVar3 = plVar14[2];
  uVar7 = *param_1;
  uVar13 = lVar11 + 1;
  if (uVar3 < uVar13) {
    if (0x3ffffffffffffffe < uVar3) goto LAB_0016c558;
    lVar8 = FUN_00161510(*(undefined8 *)(param_1 + 0xe),*plVar14,uVar3,uVar3 << 1);
    lVar11 = plVar14[1];
    uVar13 = lVar11 + 1;
    *plVar14 = lVar8;
    plVar14[2] = uVar3 << 1;
  }
  else {
    lVar8 = *plVar14;
  }
  plVar14[1] = uVar13;
  *(char *)(lVar8 + lVar11) = (char)uVar7;
  lVar11 = **(long **)(param_1 + 0x10);
  **(long **)(param_1 + 0x10) = lVar11 + -1;
  if (lVar11 == 0) {
    uVar7 = FUN_001790d0();
    *param_1 = uVar7;
  }
  else {
    pbVar12 = *(byte **)(*(long *)(param_1 + 0x10) + 8);
    *(byte **)(*(long *)(param_1 + 0x10) + 8) = pbVar12 + 1;
    *param_1 = (uint)*pbVar12;
  }
  if (param_2 != (long *)0x0) {
    lVar8 = *(long *)(param_1 + 0xe);
    lVar11 = FUN_0016d720(lVar8,**(long **)(param_1 + 0x12) + (long)(param_3 + 2),
                          (*(long **)(param_1 + 0x12))[1] - (long)((param_3 + 2) * 2));
    plVar14 = *(long **)(lVar8 + 0x10);
    *(long **)(lVar8 + 0x10) = plVar14 + 2;
    *plVar14 = lVar11;
    *(uint *)(plVar14 + 1) = *(byte *)(lVar11 + 8) | 0x40;
    puVar9 = (undefined4 *)
             FUN_00171c60(lVar8,*(undefined8 *)(param_1 + 0x14),*(long *)(lVar8 + 0x10) + -0x10);
    if (puVar9[2] == 0) {
      *puVar9 = 1;
      puVar9[2] = 1;
      if (0 < *(long *)(*(long *)(lVar8 + 0x18) + 0x18)) {
        FUN_0015dc70(lVar8);
      }
    }
    else {
      lVar11 = *(long *)(puVar9 + 4);
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -0x10;
    *param_2 = lVar11;
  }
  return;
}


