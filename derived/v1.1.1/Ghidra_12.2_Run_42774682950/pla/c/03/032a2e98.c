/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032a2e98; name: FUN_032a2e98
 */


undefined8 FUN_032a2e98(long param_1,int param_2,uint *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  float *pfVar5;
  uint uVar6;
  byte bVar7;
  undefined8 uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  undefined1 *puVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  
  puVar12 = (undefined8 *)(param_1 + (long)param_2 * 0x18);
  uVar8 = 0x80040200;
  if (*(byte *)((long)puVar12 + 0xc) - 1 < 10) {
    iVar11 = *(int *)(param_1 + 0x304);
    bVar7 = *(byte *)((long)puVar12 + 0xd);
    uVar17 = (ulong)bVar7;
    puVar14 = (uint *)*puVar12;
    lVar13 = (long)*(int *)(puVar12 + 1);
    switch((uint)*(byte *)((long)puVar12 + 0xc)) {
    case 1:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        if (6 < uVar17 - 1) goto LAB_032a2f30;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 7) != 0) {
              puVar10 = param_3;
              uVar20 = uVar17 & 7;
              do {
                param_3 = puVar10 + 1;
                uVar20 = uVar20 - 1;
                *(char *)((long)puVar14 + lVar18) = (char)*puVar10;
                lVar18 = lVar18 + 1;
                puVar10 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 7) break;
LAB_032a2f30:
            lVar19 = 3;
            do {
              lVar18 = lVar19;
              puVar15 = (undefined1 *)((long)puVar14 + lVar18);
              puVar15[-3] = (char)*param_3;
              puVar15[-2] = (char)param_3[1];
              puVar15[-1] = (char)param_3[2];
              *puVar15 = (char)param_3[3];
              puVar15[1] = (char)param_3[4];
              puVar15[2] = (char)param_3[5];
              puVar15[3] = (char)param_3[6];
              puVar10 = param_3 + 7;
              param_3 = param_3 + 8;
              puVar15[4] = (char)*puVar10;
              lVar19 = lVar18 + 8;
            } while (((uVar17 & 7) - uVar17) + lVar18 + 8 != 3);
            lVar18 = lVar18 + 5;
          }
        } while( true );
      }
      break;
    case 2:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        if (6 < uVar17 - 1) goto LAB_032a3004;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 7) != 0) {
              puVar10 = param_3;
              uVar20 = uVar17 & 7;
              do {
                param_3 = puVar10 + 1;
                uVar20 = uVar20 - 1;
                *(char *)((long)puVar14 + lVar18) = (char)*puVar10;
                lVar18 = lVar18 + 1;
                puVar10 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 7) break;
LAB_032a3004:
            lVar19 = 3;
            do {
              lVar18 = lVar19;
              puVar15 = (undefined1 *)((long)puVar14 + lVar18);
              puVar15[-3] = (char)*param_3;
              puVar15[-2] = (char)param_3[1];
              puVar15[-1] = (char)param_3[2];
              *puVar15 = (char)param_3[3];
              puVar15[1] = (char)param_3[4];
              puVar15[2] = (char)param_3[5];
              puVar15[3] = (char)param_3[6];
              puVar10 = param_3 + 7;
              param_3 = param_3 + 8;
              puVar15[4] = (char)*puVar10;
              lVar19 = lVar18 + 8;
            } while (((uVar17 & 7) - uVar17) + lVar18 + 8 != 3);
            lVar18 = lVar18 + 5;
          }
        } while( true );
      }
      break;
    case 3:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        puVar10 = puVar14 + 2;
        if (6 < uVar17 - 1) goto LAB_032a30e0;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 7) != 0) {
              lVar18 = lVar18 << 1;
              puVar9 = param_3;
              uVar20 = uVar17 & 7;
              do {
                param_3 = puVar9 + 1;
                uVar20 = uVar20 - 1;
                *(short *)((long)puVar14 + lVar18) = (short)*puVar9;
                lVar18 = lVar18 + 2;
                puVar9 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            puVar10 = (uint *)((long)puVar10 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 7) break;
LAB_032a30e0:
            lVar18 = 0;
            puVar9 = puVar10;
            do {
              *(short *)(puVar9 + -2) = (short)*param_3;
              *(short *)((long)puVar9 + -6) = (short)param_3[1];
              *(short *)(puVar9 + -1) = (short)param_3[2];
              *(short *)((long)puVar9 + -2) = (short)param_3[3];
              *(short *)puVar9 = (short)param_3[4];
              *(short *)((long)puVar9 + 2) = (short)param_3[5];
              *(short *)(puVar9 + 1) = (short)param_3[6];
              puVar1 = param_3 + 7;
              param_3 = param_3 + 8;
              lVar18 = lVar18 + -8;
              *(short *)((long)puVar9 + 6) = (short)*puVar1;
              puVar9 = puVar9 + 4;
            } while ((uVar17 & 7) - uVar17 != lVar18);
            lVar18 = -lVar18;
          }
        } while( true );
      }
      break;
    case 4:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        puVar10 = puVar14 + 2;
        if (6 < uVar17 - 1) goto LAB_032a31c0;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 7) != 0) {
              lVar18 = lVar18 << 1;
              puVar9 = param_3;
              uVar20 = uVar17 & 7;
              do {
                param_3 = puVar9 + 1;
                uVar20 = uVar20 - 1;
                *(short *)((long)puVar14 + lVar18) = (short)*puVar9;
                lVar18 = lVar18 + 2;
                puVar9 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            puVar10 = (uint *)((long)puVar10 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 7) break;
LAB_032a31c0:
            lVar18 = 0;
            puVar9 = puVar10;
            do {
              *(short *)(puVar9 + -2) = (short)*param_3;
              *(short *)((long)puVar9 + -6) = (short)param_3[1];
              *(short *)(puVar9 + -1) = (short)param_3[2];
              *(short *)((long)puVar9 + -2) = (short)param_3[3];
              *(short *)puVar9 = (short)param_3[4];
              *(short *)((long)puVar9 + 2) = (short)param_3[5];
              *(short *)(puVar9 + 1) = (short)param_3[6];
              puVar1 = param_3 + 7;
              param_3 = param_3 + 8;
              lVar18 = lVar18 + -8;
              *(short *)((long)puVar9 + 6) = (short)*puVar1;
              puVar9 = puVar9 + 4;
            } while ((uVar17 & 7) - uVar17 != lVar18);
            lVar18 = -lVar18;
          }
        } while( true );
      }
      break;
    case 5:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        if (6 < uVar17 - 1) goto LAB_032a3298;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 7) != 0) {
              lVar18 = lVar18 << 2;
              puVar10 = param_3;
              uVar20 = uVar17 & 7;
              do {
                param_3 = puVar10 + 1;
                uVar20 = uVar20 - 1;
                *(uint *)((long)puVar14 + lVar18) = *puVar10;
                lVar18 = lVar18 + 4;
                puVar10 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 7) break;
LAB_032a3298:
            lVar19 = 0;
            lVar18 = 0;
            do {
              puVar2 = (undefined4 *)((long)param_3 + lVar19);
              puVar3 = (undefined4 *)((long)puVar14 + lVar19);
              lVar19 = lVar19 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar18 = lVar18 + -8;
              puVar3[7] = puVar2[7];
            } while ((uVar17 & 7) - uVar17 != lVar18);
            param_3 = (uint *)((long)param_3 + lVar19);
            lVar18 = -lVar18;
          }
        } while( true );
      }
      break;
    case 6:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        if (6 < uVar17 - 1) goto LAB_032a3370;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 7) != 0) {
              lVar18 = lVar18 << 2;
              puVar10 = param_3;
              uVar20 = uVar17 & 7;
              do {
                param_3 = puVar10 + 1;
                uVar20 = uVar20 - 1;
                *(uint *)((long)puVar14 + lVar18) = *puVar10;
                lVar18 = lVar18 + 4;
                puVar10 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 7) break;
LAB_032a3370:
            lVar19 = 0;
            lVar18 = 0;
            do {
              puVar2 = (undefined4 *)((long)param_3 + lVar19);
              puVar3 = (undefined4 *)((long)puVar14 + lVar19);
              lVar19 = lVar19 + 0x20;
              *puVar3 = *puVar2;
              puVar3[1] = puVar2[1];
              puVar3[2] = puVar2[2];
              puVar3[3] = puVar2[3];
              puVar3[4] = puVar2[4];
              puVar3[5] = puVar2[5];
              puVar3[6] = puVar2[6];
              lVar18 = lVar18 + -8;
              puVar3[7] = puVar2[7];
            } while ((uVar17 & 7) - uVar17 != lVar18);
            param_3 = (uint *)((long)param_3 + lVar19);
            lVar18 = -lVar18;
          }
        } while( true );
      }
      break;
    case 7:
      if (0 < iVar11) {
        do {
          uVar6 = *param_3;
          iVar11 = iVar11 + -1;
          puVar10 = param_3 + 1;
          puVar9 = param_3 + 2;
          puVar1 = param_3 + 3;
          param_3 = param_3 + 4;
          *puVar14 = (uint)(byte)*puVar1 |
                     ((uint)(byte)*puVar9 | ((uint)(byte)*puVar10 | (uVar6 & 0xff) << 8) << 8) << 8;
          puVar14 = (uint *)((long)puVar14 + lVar13);
        } while (iVar11 != 0);
      }
      break;
    case 8:
      if (0 < iVar11) {
        puVar15 = (undefined1 *)((long)puVar14 + 3);
        do {
          puVar15[-3] = (char)*param_3;
          puVar15[-2] = (char)param_3[1];
          puVar15[-1] = (char)param_3[2];
          puVar14 = param_3 + 3;
          iVar11 = iVar11 + -1;
          param_3 = param_3 + 4;
          *puVar15 = (char)*puVar14;
          puVar15 = puVar15 + lVar13;
        } while (iVar11 != 0);
      }
      break;
    case 9:
      goto switchD_032a2ee0_caseD_9;
    case 10:
      if ((0 < iVar11) && (bVar7 != 0)) {
        iVar16 = 0;
        if (2 < uVar17 - 1) goto LAB_032a34c4;
        do {
          lVar18 = 0;
          while( true ) {
            if ((bVar7 & 3) != 0) {
              lVar18 = lVar18 << 2;
              puVar10 = param_3;
              uVar20 = uVar17 & 3;
              do {
                param_3 = puVar10 + 1;
                uVar20 = uVar20 - 1;
                *(float *)((long)puVar14 + lVar18) = (float)(int)*puVar10;
                lVar18 = lVar18 + 4;
                puVar10 = param_3;
              } while (uVar20 != 0);
            }
            iVar16 = iVar16 + 1;
            puVar14 = (uint *)((long)puVar14 + lVar13);
            if (iVar16 == iVar11) goto LAB_032a3544;
            if (uVar17 - 1 < 3) break;
LAB_032a34c4:
            lVar19 = 0;
            lVar18 = 0;
            do {
              piVar4 = (int *)((long)param_3 + lVar19);
              pfVar5 = (float *)((long)puVar14 + lVar19);
              *pfVar5 = (float)*piVar4;
              pfVar5[1] = (float)piVar4[1];
              lVar18 = lVar18 + -4;
              pfVar5[2] = (float)piVar4[2];
              lVar19 = lVar19 + 0x10;
              pfVar5[3] = (float)piVar4[3];
            } while ((uVar17 & 3) - uVar17 != lVar18);
            param_3 = (uint *)((long)param_3 + lVar19);
            lVar18 = -lVar18;
          }
        } while( true );
      }
    }
LAB_032a3544:
    uVar8 = 0;
  }
switchD_032a2ee0_caseD_9:
  return uVar8;
}


