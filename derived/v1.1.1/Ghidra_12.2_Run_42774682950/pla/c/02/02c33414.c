/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c33414; name: FUN_02c33414
 */


void FUN_02c33414(long *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  bool bVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  ushort *puVar17;
  ushort *puVar18;
  ushort *puVar19;
  uint uVar20;
  ushort *puVar21;
  short *psVar22;
  ulong uVar23;
  
  psVar22 = *(short **)(param_2 + 0x58);
  bVar8 = false;
  iVar12 = 0;
LAB_02c3345c:
  for (; *psVar22 != 0x10; psVar22 = psVar22 + 1) {
    if (*psVar22 == 0) {
      return;
    }
  }
  uVar4 = psVar22[2];
  if ((uVar4 & 0xff00) == 0x1000) {
    if ((uVar4 & 0xff) == 1) {
      iVar12 = 0x1c;
      bVar8 = true;
    }
    else if ((uVar4 & 0xff) == 0) {
      bVar8 = false;
      iVar12 = 0x1c;
    }
  }
  else {
    switch(uVar4) {
    case 0x109:
      if ((ushort)psVar22[1] < 2) {
        uVar23 = 0;
        if (iVar12 == 0) goto LAB_02c335c8;
LAB_02c334d4:
        lVar10 = param_1[0x1f];
      }
      else {
        uVar23 = (ulong)(ushort)psVar22[3];
        if (iVar12 != 0) goto LAB_02c334d4;
LAB_02c335c8:
        lVar10 = param_1[0x1f];
        bVar8 = *(int *)(lVar10 + uVar23 * 8 + 4) != 0;
      }
      FUN_02c38a18(param_1,uVar23,*(undefined4 *)(lVar10 + uVar23 * 8),bVar8,0);
      break;
    case 0x10a:
      if ((ushort)psVar22[1] < 2) {
        uVar23 = 0;
        if (iVar12 == 0) goto LAB_02c33600;
LAB_02c33550:
        lVar10 = param_1[0x1f];
      }
      else {
        uVar23 = (ulong)(ushort)psVar22[3];
        if (iVar12 != 0) goto LAB_02c33550;
LAB_02c33600:
        lVar10 = param_1[0x1f];
        bVar8 = *(int *)(lVar10 + uVar23 * 8 + 4) != 0;
      }
      FUN_02c38a18(param_1,uVar23,*(undefined4 *)(lVar10 + uVar23 * 8),bVar8,1);
      break;
    case 0x10b:
      if ((ushort)psVar22[1] < 2) {
        uVar23 = 0;
        if (iVar12 == 0) goto LAB_02c33638;
LAB_02c3357c:
        lVar10 = param_1[0x1f];
      }
      else {
        uVar23 = (ulong)(ushort)psVar22[3];
        if (iVar12 != 0) goto LAB_02c3357c;
LAB_02c33638:
        lVar10 = param_1[0x1f];
        bVar8 = *(int *)(lVar10 + uVar23 * 8 + 4) != 0;
      }
      FUN_02c38a18(param_1,uVar23,*(undefined4 *)(lVar10 + uVar23 * 8),bVar8,2);
      break;
    case 0x10c:
    case 0x10d:
    case 0x10e:
    case 0x10f:
      goto switchD_02c334b8_caseD_10c;
    case 0x110:
      if ((ushort)psVar22[1] < 2) {
        uVar23 = 0;
        if (iVar12 == 0) goto LAB_02c33670;
LAB_02c335a8:
        lVar10 = param_1[0x1f];
      }
      else {
        uVar23 = (ulong)(ushort)psVar22[3];
        if (iVar12 != 0) goto LAB_02c335a8;
LAB_02c33670:
        lVar10 = param_1[0x1f];
        bVar8 = *(int *)(lVar10 + uVar23 * 8 + 4) != 0;
      }
      FUN_02c38a18(param_1,uVar23,*(undefined4 *)(lVar10 + uVar23 * 8),bVar8,3);
      break;
    default:
      if (uVar4 != 0x1d3) goto switchD_02c334b8_caseD_10c;
      if ((ushort)psVar22[1] < 2) {
        uVar23 = 0;
      }
      else {
        uVar23 = (ulong)(ushort)psVar22[3];
      }
      if ((*(byte *)(param_1[0x13] + uVar23 * 0x18 + 0x12) & 1) != 0) {
        uVar3 = *(undefined4 *)(param_1[0x1f] + uVar23 * 8);
        lVar10 = (**(code **)(*param_1 + 0x98))(param_1);
        if (lVar10 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_02c2e33c(lVar10,uVar3,param_1[0xd]);
          uVar11 = uVar11 & 0xffff;
        }
        if ((uint)uVar23 < *(uint *)(param_1 + 0x12)) {
          lVar10 = uVar23 * 0x18;
          lVar16 = param_1[0xd];
          *(ulong *)(param_1[0x13] + lVar10 + 8) = uVar11 | 0x20000;
          lVar14 = param_1[0x13];
          lVar13 = *(long *)(lVar14 + lVar10);
          if (*(char *)(lVar13 + 0x7c) != '\0') {
            uVar15 = (uint)*(ushort *)(lVar13 + 0x78);
            if (*(ushort *)(lVar13 + 0x78) == 0) {
              iVar12 = 0;
            }
            else {
              puVar18 = *(ushort **)(lVar16 + 0x58);
              iVar12 = 0;
              puVar17 = *(ushort **)(lVar13 + 0x58);
              do {
                while( true ) {
                  uVar4 = *puVar18;
                  *puVar17 = uVar4;
                  if (uVar4 == 0x10) break;
                  if (uVar4 == 0) goto LAB_02c33854;
                  puVar17 = puVar17 + 1;
                  puVar18 = puVar18 + 1;
                  iVar12 = iVar12 + 1;
                  uVar15 = uVar15 - 1;
                  if (uVar15 == 0) goto LAB_02c33840;
                }
                uVar4 = puVar18[1];
                uVar1 = uVar4 + 2;
                bVar8 = uVar15 < uVar1;
                uVar15 = uVar15 - uVar1;
                if (bVar8 || uVar15 == 0) {
                  *puVar17 = 0;
                  goto LAB_02c33854;
                }
                uVar20 = uVar4 + 1;
                uVar9 = uVar20 & 7;
                puVar21 = puVar17 + 1;
                *puVar21 = uVar4;
                puVar6 = puVar18 + 1;
                puVar19 = puVar18;
                if (uVar9 != 0) {
                  lVar14 = 0;
                  do {
                    lVar16 = lVar14;
                    uVar20 = uVar20 - 1;
                    uVar9 = uVar9 - 1;
                    *(undefined2 *)((long)puVar17 + lVar16 + 4) =
                         *(undefined2 *)((long)puVar18 + lVar16 + 4);
                    lVar14 = lVar16 + 2;
                  } while (uVar9 != 0);
                  puVar21 = (ushort *)((long)puVar17 + lVar16 + 4);
                  puVar19 = (ushort *)((long)puVar18 + lVar16 + 2);
                  puVar6 = puVar19 + 1;
                  puVar17 = puVar21;
                }
                puVar18 = puVar6;
                if (6 < uVar4) {
                  puVar17 = puVar21;
                  do {
                    puVar17[1] = puVar19[2];
                    puVar17[2] = puVar18[2];
                    puVar17[3] = puVar18[3];
                    puVar17[4] = puVar18[4];
                    puVar17[5] = puVar18[5];
                    puVar17[6] = puVar18[6];
                    puVar19 = puVar18 + 7;
                    puVar17[7] = *puVar19;
                    puVar18 = puVar18 + 8;
                    uVar20 = uVar20 - 8;
                    puVar17 = puVar17 + 8;
                    *puVar17 = *puVar18;
                  } while (uVar20 != 0);
                }
                iVar12 = uVar1 + iVar12;
              } while (uVar15 != 0);
LAB_02c33840:
              if (iVar12 != 0) {
                iVar12 = iVar12 + -1;
                puVar17[-1] = 0;
              }
            }
LAB_02c33854:
            *(short *)(lVar13 + 0x7a) = (short)iVar12;
            lVar14 = param_1[0x13];
          }
          *(undefined2 *)(lVar14 + lVar10 + 0x10) = 0;
          *(ushort *)(param_1[0x13] + lVar10 + 0x12) =
               *(ushort *)(param_1[0x13] + lVar10 + 0x12) & 0xfffe;
        }
      }
    }
    bVar8 = false;
    iVar12 = 0;
    if (*psVar22 != 0x10) goto LAB_02c3345c;
    bVar8 = false;
    iVar12 = 0;
  }
  psVar22 = psVar22 + (ulong)(ushort)psVar22[1] + 2;
  goto LAB_02c3345c;
switchD_02c334b8_caseD_10c:
  bVar7 = 1 < ((uVar4 >> 8) - 1 & 0xff);
  psVar22 = psVar22 + (ulong)(ushort)psVar22[1] + 2;
  bVar5 = false;
  if (bVar7) {
    bVar5 = bVar8;
  }
  bVar8 = bVar5;
  iVar2 = 0;
  if (bVar7) {
    iVar2 = iVar12;
  }
  iVar12 = iVar2;
  goto LAB_02c3345c;
}


