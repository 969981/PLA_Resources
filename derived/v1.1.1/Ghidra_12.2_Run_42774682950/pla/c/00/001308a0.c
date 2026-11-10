/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001308a0; name: FUN_001308a0
 */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Type propagation algorithm not settling */

ulong FUN_001308a0(byte *param_1,byte *param_2,byte *param_3,long param_4,long param_5,long param_6,
                  long param_7,int param_8)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  byte *pbVar20;
  byte *pbVar21;
  ulong uVar22;
  ulong uVar23;
  byte *pbVar24;
  size_t sVar25;
  int iVar26;
  int iVar27;
  ulong uVar28;
  
  iVar27 = (int)param_3;
  if (param_8 != 0) {
    if (*(int *)(param_5 + 0x18) == 0) {
      uVar28 = param_7 - 1;
      param_7 = param_6 - param_7;
      uVar9 = 0xffffffffffffffff;
LAB_00130980:
      pbVar24 = param_3 + 1;
      bVar5 = *param_3;
      uVar13 = (uint)(char)bVar5;
      uVar10 = (int)(char)bVar5 & 0xf;
      uVar11 = (uint)(int)(char)bVar5 >> 4 & 0xf;
      if ((char)bVar5 < '\0') {
        do {
          param_3 = pbVar24 + -((long)((ulong)uVar10 - 8) >> 0x3f) + 1;
          uVar9 = (ulong)(CONCAT41(uVar13 + 8,*pbVar24) & 0xfff) +
                  ((ulong)((uint)((long)((ulong)uVar10 - 8) >> 0x3f) &
                          pbVar24[-((long)((ulong)uVar10 - 8) >> 0x3f)] - 4) & 0xff) * 0x800;
          if (0x7e7ff < uVar9) {
            uVar10 = 0xd;
            pbVar24 = param_3;
            do {
              param_3 = pbVar24 + 1;
              bVar5 = *pbVar24;
              uVar13 = bVar5 + 0xfc & 0xff;
              uVar18 = uVar10 & 0x1f;
              uVar10 = uVar10 + 2;
              uVar9 = uVar9 + (long)(int)(uVar13 << (ulong)uVar18);
              pbVar24 = param_3;
            } while (uVar13 == bVar5 + 0xfc);
            uVar9 = (ulong)(int)uVar9;
          }
          uVar9 = ~uVar9;
          if (uVar11 == 0xf) {
            pbVar24 = param_3 + 1;
            bVar5 = *param_3 >> 4;
            if (bVar5 == 0) {
              iVar26 = param_3[1] - 8;
              if (iVar26 < 0) {
                bVar5 = param_3[2];
                iVar26 = param_3[1] + 0xf8;
                uVar10 = 3;
                pbVar24 = param_3 + 3;
                while( true ) {
                  uVar11 = (uint)bVar5;
                  iVar14 = uVar11 - 8;
                  if (-1 < iVar14) break;
                  bVar5 = *pbVar24;
                  uVar13 = uVar10 & 0x1f;
                  uVar10 = uVar10 + 3;
                  iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                  pbVar24 = pbVar24 + 1;
                }
                iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
              }
              else {
                pbVar24 = param_3 + 2;
              }
              iVar26 = iVar26 + 0x19;
            }
            else {
              iVar26 = bVar5 + 9;
            }
            uVar12 = (ulong)(*param_3 & 0xf);
            if (iVar26 == 0) goto LAB_001317d4;
            uVar22 = (ulong)iVar26;
            pbVar16 = param_1 + (uVar9 - param_7);
            uVar15 = uVar22;
            if ((uVar22 & 3) == 0) {
              pbVar17 = param_1;
            }
            else {
              lVar19 = -(uVar22 & 3);
              pbVar20 = param_1;
              do {
                uVar23 = (ulong)pbVar16 & uVar28;
                pbVar16 = pbVar16 + 1;
                uVar15 = uVar15 - 1;
                lVar19 = lVar19 + 1;
                pbVar17 = pbVar20 + 1;
                *pbVar20 = *(byte *)(param_6 + uVar23);
                pbVar20 = pbVar17;
              } while (lVar19 != 0);
            }
            if (uVar22 - 1 < 3) goto LAB_00131844;
            do {
              *pbVar17 = *(byte *)(param_6 + ((ulong)pbVar16 & uVar28));
              pbVar17[1] = *(byte *)(param_6 + ((ulong)(pbVar16 + 1) & uVar28));
              uVar15 = uVar15 - 4;
              pbVar17[2] = *(byte *)(param_6 + ((ulong)(pbVar16 + 2) & uVar28));
              pbVar20 = pbVar16 + 3;
              pbVar16 = pbVar16 + 4;
              pbVar17[3] = *(byte *)(param_6 + ((ulong)pbVar20 & uVar28));
              pbVar17 = pbVar17 + 4;
              if (uVar15 == 0) goto LAB_00131844;
            } while( true );
          }
          if (uVar11 - 5 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = (ulong)(int)(uVar11 - 5);
            pbVar24 = param_1 + (uVar9 - param_7);
            uVar15 = uVar12;
            pbVar16 = param_1;
            if ((uVar12 & 3) != 0) {
              lVar19 = -(uVar12 & 3);
              pbVar17 = param_1;
              do {
                uVar22 = (ulong)pbVar24 & uVar28;
                pbVar24 = pbVar24 + 1;
                uVar15 = uVar15 - 1;
                lVar19 = lVar19 + 1;
                pbVar16 = pbVar17 + 1;
                *pbVar17 = *(byte *)(param_6 + uVar22);
                pbVar17 = pbVar16;
              } while (lVar19 != 0);
            }
            if (2 < uVar12 - 1) {
              do {
                *pbVar16 = *(byte *)(param_6 + ((ulong)pbVar24 & uVar28));
                pbVar16[1] = *(byte *)(param_6 + ((ulong)(pbVar24 + 1) & uVar28));
                uVar15 = uVar15 - 4;
                pbVar16[2] = *(byte *)(param_6 + ((ulong)(pbVar24 + 2) & uVar28));
                pbVar17 = pbVar24 + 3;
                pbVar24 = pbVar24 + 4;
                pbVar16[3] = *(byte *)(param_6 + ((ulong)pbVar17 & uVar28));
                pbVar16 = pbVar16 + 4;
              } while (uVar15 != 0);
            }
          }
          pbVar24 = param_3 + 1;
          uVar13 = (uint)(char)*param_3;
          param_1 = param_1 + uVar12;
          uVar10 = uVar13 & 0xf;
          uVar11 = uVar13 >> 4 & 0xf;
        } while ((int)uVar13 < 0);
      }
      lVar19 = (long)param_2 - (long)param_1;
      if (param_4 - (long)pbVar24 <= (long)param_2 - (long)param_1) {
        lVar19 = param_4 - (long)pbVar24;
      }
      if (uVar11 == 7) {
        if (uVar10 == 0) {
          iVar26 = *pbVar24 - 0x10;
          if (iVar26 < 0) {
            bVar5 = param_3[2];
            iVar26 = *pbVar24 + 0xf0;
            uVar10 = 4;
            pbVar24 = param_3 + 3;
            while( true ) {
              uVar11 = (uint)bVar5;
              iVar14 = uVar11 - 0x10;
              if (-1 < iVar14) break;
              bVar5 = *pbVar24;
              uVar13 = uVar10 & 0x1f;
              uVar10 = uVar10 + 4;
              iVar26 = (uVar11 + 0xf0 << (ulong)uVar13) + iVar26;
              pbVar24 = pbVar24 + 1;
            }
            iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
          }
          else {
            pbVar24 = param_3 + 2;
          }
          iVar14 = iVar26 + 0x17;
          iVar26 = iVar26 + 0x1f;
        }
        else {
          iVar14 = uVar10 + 7;
          iVar26 = uVar10 + 0xf;
        }
        if (iVar26 <= lVar19) {
          if (0 < iVar14) {
            iVar26 = 0;
            do {
              iVar1 = iVar26 + 8;
              *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar24 + iVar26);
              iVar26 = iVar1;
            } while (iVar1 < iVar14);
          }
          pbVar16 = param_1 + iVar14;
          param_3 = pbVar24 + iVar14;
          goto LAB_00130c90;
        }
        sVar25 = (size_t)iVar14;
        memmove(param_1,pbVar24,sVar25);
        pbVar16 = param_1 + sVar25;
        param_3 = pbVar24 + sVar25;
        if (pbVar16 < param_2) goto LAB_00130c90;
      }
      else {
        uVar12 = (ulong)(uVar11 + 1);
        if (0xc < lVar19) {
          *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
          pbVar17 = param_3 + 9;
          pbVar16 = param_1 + uVar12;
          param_3 = pbVar24 + uVar12;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)pbVar17;
          goto LAB_00130b10;
        }
        memmove(param_1,pbVar24,uVar12);
        pbVar16 = param_1 + uVar12;
        param_3 = pbVar24 + uVar12;
joined_r0x00131000:
        if (pbVar16 < param_2) {
LAB_00130b10:
          if (4 < uVar10) goto LAB_00130b18;
LAB_001313d4:
          if (uVar10 == 4) {
            pbVar24 = param_3 + 1;
            bVar5 = *param_3 >> 4;
            if (bVar5 == 0) {
              iVar26 = param_3[1] - 8;
              if (iVar26 < 0) {
                bVar5 = param_3[2];
                iVar26 = param_3[1] + 0xf8;
                uVar10 = 3;
                pbVar24 = param_3 + 3;
                while( true ) {
                  uVar11 = (uint)bVar5;
                  iVar14 = uVar11 - 8;
                  if (-1 < iVar14) break;
                  bVar5 = *pbVar24;
                  uVar13 = uVar10 & 0x1f;
                  uVar10 = uVar10 + 3;
                  iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                  pbVar24 = pbVar24 + 1;
                }
                iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
              }
              else {
                pbVar24 = param_3 + 2;
              }
              iVar26 = iVar26 + 0x14;
            }
            else {
              iVar26 = bVar5 + 4;
            }
            uVar12 = (ulong)(*param_3 & 0xf);
            if (iVar26 != 0) {
              uVar22 = (ulong)iVar26;
              pbVar17 = pbVar16 + (uVar9 - param_7);
              uVar15 = uVar22;
              if ((uVar22 & 3) == 0) {
                pbVar20 = pbVar16;
              }
              else {
                lVar19 = -(uVar22 & 3);
                pbVar21 = pbVar16;
                do {
                  uVar23 = (ulong)pbVar17 & uVar28;
                  pbVar17 = pbVar17 + 1;
                  uVar15 = uVar15 - 1;
                  lVar19 = lVar19 + 1;
                  pbVar20 = pbVar21 + 1;
                  *pbVar21 = *(byte *)(param_6 + uVar23);
                  pbVar21 = pbVar20;
                } while (lVar19 != 0);
              }
              if (uVar22 - 1 < 3) goto LAB_00130c44;
              do {
                *pbVar20 = *(byte *)(param_6 + ((ulong)pbVar17 & uVar28));
                pbVar20[1] = *(byte *)(param_6 + ((ulong)(pbVar17 + 1) & uVar28));
                uVar15 = uVar15 - 4;
                pbVar20[2] = *(byte *)(param_6 + ((ulong)(pbVar17 + 2) & uVar28));
                pbVar21 = pbVar17 + 3;
                pbVar17 = pbVar17 + 4;
                pbVar20[3] = *(byte *)(param_6 + ((ulong)pbVar21 & uVar28));
                pbVar20 = pbVar20 + 4;
                if (uVar15 == 0) goto LAB_00130c44;
              } while( true );
            }
LAB_00131608:
            uVar10 = (uint)uVar12;
            param_1 = pbVar16;
joined_r0x00131614:
            iVar26 = (int)uVar12;
            if (7 < uVar10) goto LAB_00131700;
LAB_00130c50:
            lVar19 = (long)param_2 - (long)param_1;
            if (param_4 - (long)pbVar24 <= (long)param_2 - (long)param_1) {
              lVar19 = param_4 - (long)pbVar24;
            }
            if ((int)uVar12 == 7) {
              param_3 = pbVar24 + 1;
              uVar10 = *pbVar24 & 0xf;
              uVar11 = (uint)(*pbVar24 >> 4);
              if (uVar11 == 0) {
                iVar26 = pbVar24[1] - 0x10;
                if (iVar26 < 0) {
                  bVar5 = pbVar24[2];
                  iVar26 = pbVar24[1] + 0xf0;
                  uVar11 = 4;
                  param_3 = pbVar24 + 3;
                  while( true ) {
                    uVar13 = (uint)bVar5;
                    iVar14 = uVar13 - 0x10;
                    if (-1 < iVar14) break;
                    bVar5 = *param_3;
                    uVar18 = uVar11 & 0x1f;
                    uVar11 = uVar11 + 4;
                    iVar26 = (uVar13 + 0xf0 << (ulong)uVar18) + iVar26;
                    param_3 = param_3 + 1;
                  }
                  iVar26 = (iVar14 << (ulong)(uVar11 & 0x1f)) + iVar26;
                }
                else {
                  param_3 = pbVar24 + 2;
                }
                iVar14 = iVar26 + 0x17;
                iVar26 = iVar26 + 0x1f;
              }
              else {
                iVar14 = uVar11 + 7;
                iVar26 = uVar11 + 0xf;
              }
              if (lVar19 < iVar26) {
                sVar25 = (size_t)iVar14;
                memmove(param_1,param_3,sVar25);
                pbVar16 = param_1 + sVar25;
                param_3 = param_3 + sVar25;
                goto joined_r0x00131000;
              }
              if (0 < iVar14) {
                iVar26 = 0;
                do {
                  iVar1 = iVar26 + 8;
                  *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(param_3 + iVar26);
                  iVar26 = iVar1;
                } while (iVar1 < iVar14);
              }
              pbVar16 = param_1 + iVar14;
              param_3 = param_3 + iVar14;
              if (uVar10 < 5) goto LAB_001313d4;
LAB_00130b18:
              bVar5 = *param_3;
              param_3 = param_3 + 1;
              uVar12 = (ulong)(bVar5 & 0xf);
              lVar19 = (ulong)(bVar5 >> 4) - 8;
              pbVar24 = param_3 + -(lVar19 >> 0x3f) + 1;
              uVar9 = ((ulong)((uint)(bVar5 >> 4) * 0x100 + 0x800 & 0xf00) | (ulong)*param_3) +
                      ((ulong)((uint)(lVar19 >> 0x3f) & param_3[-(lVar19 >> 0x3f)] - 4) & 0xff) *
                      0x800;
              if (0x7e7ff < uVar9) {
                uVar11 = 0xd;
                pbVar17 = pbVar24;
                do {
                  pbVar24 = pbVar17 + 1;
                  bVar3 = *pbVar17;
                  uVar13 = bVar3 + 0xfc & 0xff;
                  uVar18 = uVar11 & 0x1f;
                  uVar11 = uVar11 + 2;
                  uVar9 = uVar9 + (long)(int)(uVar13 << (ulong)uVar18);
                  pbVar17 = pbVar24;
                } while (uVar13 == bVar3 + 0xfc);
                uVar9 = (ulong)(int)uVar9;
              }
              uVar9 = ~uVar9;
              if (uVar10 != 0xf) {
                if (uVar10 - 2 != 0) {
                  uVar22 = (ulong)(int)(uVar10 - 2);
                  pbVar17 = pbVar16 + (uVar9 - param_7);
                  uVar15 = uVar22;
                  pbVar20 = pbVar16;
                  if ((uVar22 & 3) != 0) {
                    lVar19 = -(uVar22 & 3);
                    pbVar21 = pbVar16;
                    do {
                      uVar23 = (ulong)pbVar17 & uVar28;
                      pbVar17 = pbVar17 + 1;
                      uVar15 = uVar15 - 1;
                      lVar19 = lVar19 + 1;
                      pbVar20 = pbVar21 + 1;
                      *pbVar21 = *(byte *)(param_6 + uVar23);
                      pbVar21 = pbVar20;
                    } while (lVar19 != 0);
                  }
                  if (2 < uVar22 - 1) {
                    do {
                      *pbVar20 = *(byte *)(param_6 + ((ulong)pbVar17 & uVar28));
                      pbVar20[1] = *(byte *)(param_6 + ((ulong)(pbVar17 + 1) & uVar28));
                      uVar15 = uVar15 - 4;
                      pbVar20[2] = *(byte *)(param_6 + ((ulong)(pbVar17 + 2) & uVar28));
                      pbVar21 = pbVar17 + 3;
                      pbVar17 = pbVar17 + 4;
                      pbVar20[3] = *(byte *)(param_6 + ((ulong)pbVar21 & uVar28));
                      pbVar20 = pbVar20 + 4;
                    } while (uVar15 != 0);
                  }
                  goto LAB_00130c44;
                }
                goto LAB_00131608;
              }
              if ((bVar5 & 0xf) == 0) {
                param_3 = pbVar24 + 1;
                iVar26 = *pbVar24 - 8;
                if (iVar26 < 0) {
                  bVar5 = pbVar24[1];
                  iVar26 = *pbVar24 + 0xf8;
                  uVar10 = 3;
                  param_3 = pbVar24 + 2;
                  while( true ) {
                    uVar11 = (uint)bVar5;
                    iVar14 = uVar11 - 8;
                    if (-1 < iVar14) break;
                    bVar5 = *param_3;
                    uVar13 = uVar10 & 0x1f;
                    uVar10 = uVar10 + 3;
                    iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                    param_3 = param_3 + 1;
                  }
                  iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
                }
                iVar26 = iVar26 + 0x1c;
              }
              else {
                iVar26 = (bVar5 & 0xf) + 0xc;
                param_3 = pbVar24;
              }
              if (iVar26 == 0) {
                uVar15 = 0;
              }
              else {
                uVar15 = (ulong)iVar26;
                pbVar24 = pbVar16 + (uVar9 - param_7);
                uVar12 = uVar15;
                if ((uVar15 & 3) == 0) {
                  pbVar17 = pbVar16;
                }
                else {
                  lVar19 = -(uVar15 & 3);
                  pbVar20 = pbVar16;
                  do {
                    uVar22 = (ulong)pbVar24 & uVar28;
                    pbVar24 = pbVar24 + 1;
                    uVar12 = uVar12 - 1;
                    lVar19 = lVar19 + 1;
                    pbVar17 = pbVar20 + 1;
                    *pbVar20 = *(byte *)(param_6 + uVar22);
                    pbVar20 = pbVar17;
                  } while (lVar19 != 0);
                }
                if (2 < uVar15 - 1) {
                  do {
                    *pbVar17 = *(byte *)(param_6 + ((ulong)pbVar24 & uVar28));
                    pbVar17[1] = *(byte *)(param_6 + ((ulong)(pbVar24 + 1) & uVar28));
                    uVar12 = uVar12 - 4;
                    pbVar17[2] = *(byte *)(param_6 + ((ulong)(pbVar24 + 2) & uVar28));
                    pbVar20 = pbVar24 + 3;
                    pbVar24 = pbVar24 + 4;
                    pbVar17[3] = *(byte *)(param_6 + ((ulong)pbVar20 & uVar28));
                    pbVar17 = pbVar17 + 4;
                  } while (uVar12 != 0);
                }
              }
              param_1 = pbVar16 + uVar15;
            }
            else {
              lVar2 = (long)(int)uVar12 + 1;
              if (lVar19 < 0xd) {
                sVar25 = (size_t)(int)lVar2;
                memmove(param_1,pbVar24,sVar25);
                pbVar16 = param_1 + sVar25;
                param_3 = pbVar24 + sVar25;
                if (param_2 <= pbVar16) goto LAB_00131970;
              }
              else {
                *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
                *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar24 + 8);
                pbVar16 = param_1 + lVar2;
                param_3 = pbVar24 + lVar2;
              }
LAB_00130c90:
              pbVar24 = param_3 + 1;
              bVar5 = *param_3;
              uVar12 = (ulong)bVar5 & 0xf;
              uVar10 = (uint)(bVar5 >> 4);
              param_1 = pbVar16;
              if (0x4f < (ulong)bVar5) {
                param_3 = pbVar24 + -((long)(uVar12 - 8) >> 0x3f) + 1;
                uVar9 = (ulong)(CONCAT41(bVar5 + 8,*pbVar24) & 0xfff) +
                        ((ulong)((uint)((long)(uVar12 - 8) >> 0x3f) &
                                pbVar24[-((long)(uVar12 - 8) >> 0x3f)] - 4) & 0xff) * 0x800;
                if (0x7e7ff < uVar9) {
                  uVar11 = 0xd;
                  pbVar24 = param_3;
                  do {
                    param_3 = pbVar24 + 1;
                    bVar5 = *pbVar24;
                    uVar13 = bVar5 + 0xfc & 0xff;
                    uVar18 = uVar11 & 0x1f;
                    uVar11 = uVar11 + 2;
                    uVar9 = uVar9 + (long)(int)(uVar13 << (ulong)uVar18);
                    pbVar24 = param_3;
                  } while (uVar13 == bVar5 + 0xfc);
                  uVar9 = (ulong)(int)uVar9;
                }
                uVar9 = ~uVar9;
                if (uVar10 != 0xf) {
                  if (uVar10 - 2 != 0) {
                    uVar15 = (ulong)(int)(uVar10 - 2);
                    pbVar24 = pbVar16 + (uVar9 - param_7);
                    uVar12 = uVar15;
                    pbVar17 = pbVar16;
                    if ((uVar15 & 3) != 0) {
                      lVar19 = -(uVar15 & 3);
                      pbVar20 = pbVar16;
                      do {
                        uVar22 = (ulong)pbVar24 & uVar28;
                        pbVar24 = pbVar24 + 1;
                        uVar12 = uVar12 - 1;
                        lVar19 = lVar19 + 1;
                        pbVar17 = pbVar20 + 1;
                        *pbVar20 = *(byte *)(param_6 + uVar22);
                        pbVar20 = pbVar17;
                      } while (lVar19 != 0);
                    }
                    if (2 < uVar15 - 1) {
                      do {
                        *pbVar17 = *(byte *)(param_6 + ((ulong)pbVar24 & uVar28));
                        pbVar17[1] = *(byte *)(param_6 + ((ulong)(pbVar24 + 1) & uVar28));
                        uVar12 = uVar12 - 4;
                        pbVar17[2] = *(byte *)(param_6 + ((ulong)(pbVar24 + 2) & uVar28));
                        pbVar20 = pbVar24 + 3;
                        pbVar24 = pbVar24 + 4;
                        pbVar17[3] = *(byte *)(param_6 + ((ulong)pbVar20 & uVar28));
                        pbVar17 = pbVar17 + 4;
                      } while (uVar12 != 0);
                    }
                    param_1 = pbVar16 + uVar15;
                  }
                  goto LAB_00130980;
                }
                pbVar24 = param_3 + 1;
                bVar5 = *param_3 >> 4;
                if (bVar5 == 0) {
                  iVar26 = param_3[1] - 8;
                  if (iVar26 < 0) {
                    bVar5 = param_3[2];
                    iVar26 = param_3[1] + 0xf8;
                    uVar10 = 3;
                    pbVar24 = param_3 + 3;
                    while( true ) {
                      uVar11 = (uint)bVar5;
                      iVar14 = uVar11 - 8;
                      if (-1 < iVar14) break;
                      bVar5 = *pbVar24;
                      uVar13 = uVar10 & 0x1f;
                      uVar10 = uVar10 + 3;
                      iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                      pbVar24 = pbVar24 + 1;
                    }
                    iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
                  }
                  else {
                    pbVar24 = param_3 + 2;
                  }
                  iVar26 = iVar26 + 0x1c;
                }
                else {
                  iVar26 = bVar5 + 0xc;
                }
                uVar11 = *param_3 & 0xf;
                uVar12 = (ulong)uVar11;
                if (iVar26 == 0) goto joined_r0x00130dd0;
                uVar22 = (ulong)iVar26;
                pbVar17 = pbVar16 + (uVar9 - param_7);
                uVar15 = uVar22;
                if ((uVar22 & 3) == 0) {
                  pbVar20 = pbVar16;
                }
                else {
                  lVar19 = -(uVar22 & 3);
                  pbVar21 = pbVar16;
                  do {
                    uVar23 = (ulong)pbVar17 & uVar28;
                    pbVar17 = pbVar17 + 1;
                    uVar15 = uVar15 - 1;
                    lVar19 = lVar19 + 1;
                    pbVar20 = pbVar21 + 1;
                    *pbVar21 = *(byte *)(param_6 + uVar23);
                    pbVar21 = pbVar20;
                  } while (lVar19 != 0);
                }
                if (2 < uVar22 - 1) {
                  do {
                    *pbVar20 = *(byte *)(param_6 + ((ulong)pbVar17 & uVar28));
                    pbVar20[1] = *(byte *)(param_6 + ((ulong)(pbVar17 + 1) & uVar28));
                    uVar15 = uVar15 - 4;
                    pbVar20[2] = *(byte *)(param_6 + ((ulong)(pbVar17 + 2) & uVar28));
                    pbVar21 = pbVar17 + 3;
                    pbVar17 = pbVar17 + 4;
                    pbVar20[3] = *(byte *)(param_6 + ((ulong)pbVar21 & uVar28));
                    pbVar20 = pbVar20 + 4;
                  } while (uVar15 != 0);
                }
LAB_00130c44:
                param_1 = pbVar16 + uVar22;
                uVar10 = (uint)uVar12;
                goto joined_r0x00131614;
              }
              uVar11 = (uint)uVar12;
              if (uVar10 == 4) {
                if (uVar11 == 0) {
                  uVar10 = (uint)param_3[1];
                  if ((int)(uVar10 - 8) < 0) {
                    bVar5 = param_3[2];
                    iVar26 = uVar10 + 0xf8;
                    uVar10 = 3;
                    param_3 = param_3 + 3;
                    while( true ) {
                      uVar11 = (uint)bVar5;
                      iVar14 = uVar11 - 8;
                      if (-1 < iVar14) break;
                      bVar5 = *param_3;
                      uVar13 = uVar10 & 0x1f;
                      uVar10 = uVar10 + 3;
                      iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                      param_3 = param_3 + 1;
                    }
                    iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26 + 0x14;
                  }
                  else {
                    param_3 = param_3 + 2;
                    iVar26 = uVar10 + 0xc;
                  }
                }
                else {
                  iVar26 = uVar11 + 4;
                  param_3 = pbVar24;
                }
                if (iVar26 != 0) {
                  uVar15 = (ulong)iVar26;
                  pbVar24 = pbVar16 + (uVar9 - param_7);
                  uVar12 = uVar15;
                  if ((uVar15 & 3) == 0) {
                    pbVar17 = pbVar16;
                  }
                  else {
                    lVar19 = -(uVar15 & 3);
                    pbVar20 = pbVar16;
                    do {
                      uVar22 = (ulong)pbVar24 & uVar28;
                      pbVar24 = pbVar24 + 1;
                      uVar12 = uVar12 - 1;
                      lVar19 = lVar19 + 1;
                      pbVar17 = pbVar20 + 1;
                      *pbVar20 = *(byte *)(param_6 + uVar22);
                      pbVar20 = pbVar17;
                    } while (lVar19 != 0);
                  }
                  if (2 < uVar15 - 1) {
                    do {
                      *pbVar17 = *(byte *)(param_6 + ((ulong)pbVar24 & uVar28));
                      pbVar17[1] = *(byte *)(param_6 + ((ulong)(pbVar24 + 1) & uVar28));
                      uVar12 = uVar12 - 4;
                      pbVar17[2] = *(byte *)(param_6 + ((ulong)(pbVar24 + 2) & uVar28));
                      pbVar20 = pbVar24 + 3;
                      pbVar24 = pbVar24 + 4;
                      pbVar17[3] = *(byte *)(param_6 + ((ulong)pbVar20 & uVar28));
                      pbVar17 = pbVar17 + 4;
                    } while (uVar12 != 0);
                  }
                  param_1 = pbVar16 + uVar15;
                }
              }
              else {
                pbVar17 = pbVar16 + (uVar9 - param_7);
                uVar15 = (ulong)pbVar17 & uVar28;
                lVar19 = (ulong)(bVar5 >> 4) + 1;
                if ((long)uVar28 < (long)(uVar15 + 3)) {
                  *pbVar16 = *(byte *)(param_6 + uVar15);
                  pbVar16[1] = *(byte *)(param_6 + ((ulong)(pbVar17 + 1) & uVar28));
                  pbVar16[2] = *(byte *)(param_6 + ((ulong)(pbVar17 + 2) & uVar28));
                  pbVar16[3] = *(byte *)(param_6 + ((ulong)(pbVar17 + 3) & uVar28));
                  param_1 = pbVar16 + lVar19;
                }
                else {
                  *(undefined4 *)pbVar16 = *(undefined4 *)(param_6 + uVar15);
                  param_1 = pbVar16 + lVar19;
                }
joined_r0x00130dd0:
                iVar26 = (int)uVar12;
                if (uVar11 < 8) goto LAB_00130c50;
LAB_00131700:
                bVar5 = *pbVar24;
                pbVar16 = pbVar24 + 1;
                uVar12 = (ulong)(bVar5 & 0xf);
                lVar19 = (ulong)(bVar5 >> 4) - 8;
                pbVar24 = pbVar16 + -(lVar19 >> 0x3f) + 1;
                uVar9 = ((ulong)((uint)(bVar5 >> 4) * 0x100 + 0x800 & 0xf00) | (ulong)*pbVar16) +
                        ((ulong)((uint)(lVar19 >> 0x3f) & pbVar16[-(lVar19 >> 0x3f)] - 4) & 0xff) *
                        0x800;
                if (0x7e7ff < uVar9) {
                  uVar10 = 0xd;
                  pbVar16 = pbVar24;
                  do {
                    pbVar24 = pbVar16 + 1;
                    bVar3 = *pbVar16;
                    uVar11 = bVar3 + 0xfc & 0xff;
                    uVar13 = uVar10 & 0x1f;
                    uVar10 = uVar10 + 2;
                    uVar9 = uVar9 + (long)(int)(uVar11 << (ulong)uVar13);
                    pbVar16 = pbVar24;
                  } while (uVar11 == bVar3 + 0xfc);
                  uVar9 = (ulong)(int)uVar9;
                }
                uVar9 = ~uVar9;
                if (iVar26 != 0xf) {
                  if (iVar26 + -5 == 0) {
LAB_001317d4:
                    uVar11 = (uint)uVar12;
                  }
                  else {
                    uVar22 = (ulong)(iVar26 + -5);
                    pbVar16 = param_1 + (uVar9 - param_7);
                    uVar15 = uVar22;
                    pbVar17 = param_1;
                    if ((uVar22 & 3) != 0) {
                      lVar19 = -(uVar22 & 3);
                      pbVar20 = param_1;
                      do {
                        uVar23 = (ulong)pbVar16 & uVar28;
                        pbVar16 = pbVar16 + 1;
                        uVar15 = uVar15 - 1;
                        lVar19 = lVar19 + 1;
                        pbVar17 = pbVar20 + 1;
                        *pbVar20 = *(byte *)(param_6 + uVar23);
                        pbVar20 = pbVar17;
                      } while (lVar19 != 0);
                    }
                    if (2 < uVar22 - 1) {
                      do {
                        *pbVar17 = *(byte *)(param_6 + ((ulong)pbVar16 & uVar28));
                        pbVar17[1] = *(byte *)(param_6 + ((ulong)(pbVar16 + 1) & uVar28));
                        uVar15 = uVar15 - 4;
                        pbVar17[2] = *(byte *)(param_6 + ((ulong)(pbVar16 + 2) & uVar28));
                        pbVar20 = pbVar16 + 3;
                        pbVar16 = pbVar16 + 4;
                        pbVar17[3] = *(byte *)(param_6 + ((ulong)pbVar20 & uVar28));
                        pbVar17 = pbVar17 + 4;
                      } while (uVar15 != 0);
                    }
LAB_00131844:
                    param_1 = param_1 + uVar22;
                    uVar11 = (uint)uVar12;
                  }
                  goto joined_r0x00130dd0;
                }
                if ((bVar5 & 0xf) == 0) {
                  param_3 = pbVar24 + 1;
                  iVar26 = *pbVar24 - 8;
                  if (iVar26 < 0) {
                    bVar5 = pbVar24[1];
                    iVar26 = *pbVar24 + 0xf8;
                    uVar10 = 3;
                    param_3 = pbVar24 + 2;
                    while( true ) {
                      uVar11 = (uint)bVar5;
                      iVar14 = uVar11 - 8;
                      if (-1 < iVar14) break;
                      bVar5 = *param_3;
                      uVar13 = uVar10 & 0x1f;
                      uVar10 = uVar10 + 3;
                      iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                      param_3 = param_3 + 1;
                    }
                    iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
                  }
                  iVar26 = iVar26 + 0x19;
                }
                else {
                  iVar26 = (bVar5 & 0xf) + 9;
                  param_3 = pbVar24;
                }
                if (iVar26 == 0) {
                  uVar15 = 0;
                }
                else {
                  uVar15 = (ulong)iVar26;
                  pbVar24 = param_1 + (uVar9 - param_7);
                  uVar12 = uVar15;
                  if ((uVar15 & 3) == 0) {
                    pbVar16 = param_1;
                  }
                  else {
                    lVar19 = -(uVar15 & 3);
                    pbVar17 = param_1;
                    do {
                      uVar22 = (ulong)pbVar24 & uVar28;
                      pbVar24 = pbVar24 + 1;
                      uVar12 = uVar12 - 1;
                      lVar19 = lVar19 + 1;
                      pbVar16 = pbVar17 + 1;
                      *pbVar17 = *(byte *)(param_6 + uVar22);
                      pbVar17 = pbVar16;
                    } while (lVar19 != 0);
                  }
                  if (2 < uVar15 - 1) {
                    do {
                      *pbVar16 = *(byte *)(param_6 + ((ulong)pbVar24 & uVar28));
                      pbVar16[1] = *(byte *)(param_6 + ((ulong)(pbVar24 + 1) & uVar28));
                      uVar12 = uVar12 - 4;
                      pbVar16[2] = *(byte *)(param_6 + ((ulong)(pbVar24 + 2) & uVar28));
                      pbVar17 = pbVar24 + 3;
                      pbVar24 = pbVar24 + 4;
                      pbVar16[3] = *(byte *)(param_6 + ((ulong)pbVar17 & uVar28));
                      pbVar16 = pbVar16 + 4;
                    } while (uVar12 != 0);
                  }
                }
                param_1 = param_1 + uVar15;
              }
            }
          }
          else {
            pbVar24 = pbVar16 + (uVar9 - param_7);
            uVar12 = (ulong)pbVar24 & uVar28;
            if ((long)uVar28 < (long)(uVar12 + 3)) {
              *pbVar16 = *(byte *)(param_6 + uVar12);
              param_1 = pbVar16 + (uVar10 + 1);
              pbVar16[1] = *(byte *)(param_6 + ((ulong)(pbVar24 + 1) & uVar28));
              pbVar16[2] = *(byte *)(param_6 + ((ulong)(pbVar24 + 2) & uVar28));
              pbVar16[3] = *(byte *)(param_6 + ((ulong)(pbVar24 + 3) & uVar28));
            }
            else {
              *(undefined4 *)pbVar16 = *(undefined4 *)(param_6 + uVar12);
              param_1 = pbVar16 + (uVar10 + 1);
            }
          }
          goto LAB_00130980;
        }
      }
LAB_00131970:
      uVar9 = (ulong)(uint)((int)param_3 - iVar27);
    }
    else {
      uVar9 = FUN_0010a390("v:\\devel\\projects\\oodle2\\core\\lznib.cpp",0x10b7,
                           "LZNib_DecodeOneQuantum","No SW GetDev");
      if ((int)uVar9 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return uVar9;
  }
  if (*(int *)(param_5 + 0x18) != 0) {
    pbVar24 = param_3 + 1;
    bVar5 = *param_3 >> 4;
    uVar11 = (uint)bVar5;
    uVar10 = *param_3 & 0xf;
    uVar9 = 0xffffffffffffffff;
joined_r0x0013094c:
    do {
      uVar28 = (ulong)uVar10;
      if (uVar10 < uVar11) goto LAB_001336bc;
LAB_00133400:
      bVar3 = *pbVar24;
      pbVar16 = pbVar24 + 1;
      uVar10 = bVar3 & 0xf;
      lVar19 = (ulong)(bVar3 >> 4) - 8;
      pbVar24 = pbVar16 + -(lVar19 >> 0x3f) + 1;
      uVar9 = ((ulong)((uint)(bVar3 >> 4) * 0x100 + 0x800 & 0xf00) | (ulong)*pbVar16) +
              ((ulong)((uint)(lVar19 >> 0x3f) & pbVar16[-(lVar19 >> 0x3f)] - 4) & 0xff) * 0x800;
      if (0x7e7ff < uVar9) {
        uVar13 = 0xd;
        pbVar16 = pbVar24;
        do {
          pbVar24 = pbVar16 + 1;
          bVar4 = *pbVar16;
          uVar18 = bVar4 + 0xfc & 0xff;
          uVar7 = uVar13 & 0x1f;
          uVar13 = uVar13 + 2;
          uVar9 = uVar9 + (long)(int)(uVar18 << (ulong)uVar7);
          pbVar16 = pbVar24;
        } while (uVar18 == bVar4 + 0xfc);
        uVar9 = (ulong)(int)uVar9;
      }
      uVar9 = ~uVar9;
      if ((int)uVar28 == 0xf) {
        if ((bVar3 & 0xf) == 0) {
          pbVar16 = pbVar24 + 1;
          iVar26 = *pbVar24 - 8;
          if (iVar26 < 0) {
            bVar3 = pbVar24[1];
            iVar26 = *pbVar24 + 0xf8;
            uVar10 = 3;
            pbVar16 = pbVar24 + 2;
            while( true ) {
              uVar13 = (uint)bVar3;
              iVar14 = uVar13 - 8;
              if (-1 < iVar14) break;
              bVar3 = *pbVar16;
              uVar18 = uVar10 & 0x1f;
              uVar10 = uVar10 + 3;
              iVar26 = (uVar13 + 0xf8 << (ulong)uVar18) + iVar26;
              pbVar16 = pbVar16 + 1;
            }
            iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
          }
          iVar26 = iVar26 + 0xf;
        }
        else {
          iVar26 = uVar10 - 1;
          pbVar16 = pbVar24;
        }
        uVar10 = iVar26 + (0x12 - uVar11);
        pbVar24 = param_1 + uVar9;
        sVar25 = (size_t)(int)uVar10;
        if (param_1 < pbVar24 + sVar25) {
          if (param_1 + -1 == pbVar24) goto LAB_00133380;
          if (uVar10 != 0) {
            pbVar17 = param_1;
            if ((uVar10 & 7) != 0) {
              lVar19 = 0;
              do {
                param_1[lVar19] = pbVar24[lVar19];
                lVar19 = lVar19 + 1;
              } while (((2 - uVar11) + iVar26 & 7) != (uint)lVar19);
              uVar10 = uVar10 - (uint)lVar19;
              pbVar24 = pbVar24 + lVar19;
              pbVar17 = param_1 + lVar19;
            }
            if (6 < (0x11 - uVar11) + iVar26) {
              do {
                *pbVar17 = *pbVar24;
                pbVar17[1] = pbVar24[1];
                pbVar17[2] = pbVar24[2];
                pbVar17[3] = pbVar24[3];
                pbVar17[4] = pbVar24[4];
                pbVar17[5] = pbVar24[5];
                pbVar17[6] = pbVar24[6];
                pbVar20 = pbVar24 + 7;
                uVar10 = uVar10 - 8;
                pbVar24 = pbVar24 + 8;
                pbVar17[7] = *pbVar20;
                pbVar17 = pbVar17 + 8;
              } while (uVar10 != 0);
            }
          }
        }
        else if (0 < (int)uVar10) {
          iVar26 = 0;
          do {
            iVar14 = iVar26 + 8;
            *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar24 + iVar26);
            iVar26 = iVar14;
          } while (iVar14 < (int)uVar10);
        }
        do {
          param_1 = param_1 + sVar25;
LAB_00132cfc:
          pbVar24 = pbVar16 + 1;
          bVar3 = *pbVar16;
          uVar13 = (uint)(bVar3 >> 4);
          uVar10 = bVar3 & 0xf;
          if (uVar13 < uVar11) {
            lVar19 = (long)param_2 - (long)param_1;
            if (param_4 - (long)pbVar24 <= (long)param_2 - (long)param_1) {
              lVar19 = param_4 - (long)pbVar24;
            }
            if (uVar13 == uVar11 - 1) {
              if ((bVar3 & 0xf) == 0) {
                iVar26 = *pbVar24 - 0x10;
                if (iVar26 < 0) {
                  bVar3 = pbVar16[2];
                  iVar26 = *pbVar24 + 0xf0;
                  uVar10 = 4;
                  pbVar24 = pbVar16 + 3;
                  while( true ) {
                    uVar13 = (uint)bVar3;
                    iVar14 = uVar13 - 0x10;
                    if (-1 < iVar14) break;
                    bVar3 = *pbVar24;
                    uVar18 = uVar10 & 0x1f;
                    uVar10 = uVar10 + 4;
                    iVar26 = (uVar13 + 0xf0 << (ulong)uVar18) + iVar26;
                    pbVar24 = pbVar24 + 1;
                  }
                  iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
                }
                else {
                  pbVar24 = pbVar16 + 2;
                }
                iVar26 = iVar26 + 0xf;
              }
              else {
                iVar26 = uVar10 - 1;
              }
              iVar26 = iVar26 + uVar11;
              if (lVar19 < iVar26 + 8) {
                sVar25 = (size_t)iVar26;
                memmove(param_1,pbVar24,sVar25);
                param_1 = param_1 + sVar25;
                pbVar16 = pbVar24 + sVar25;
                goto joined_r0x00133888;
              }
              if (0 < iVar26) {
                iVar14 = 0;
                do {
                  iVar1 = iVar14 + 8;
                  *(undefined8 *)(param_1 + iVar14) = *(undefined8 *)(pbVar24 + iVar14);
                  iVar14 = iVar1;
                } while (iVar1 < iVar26);
              }
              param_1 = param_1 + iVar26;
              pbVar16 = pbVar24 + iVar26;
              goto LAB_001336fc;
            }
            uVar28 = (ulong)(uVar13 + 1);
            if (0xc < lVar19) {
              *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
              *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar16 + 9);
              param_1 = param_1 + uVar28;
              pbVar16 = pbVar24 + uVar28;
              goto joined_r0x0013383c;
            }
            memmove(param_1,pbVar24,uVar28);
            param_1 = param_1 + uVar28;
            pbVar16 = pbVar24 + uVar28;
            if (param_1 < param_2) goto joined_r0x0013383c;
LAB_0013388c:
            return (ulong)(uint)((int)pbVar16 - iVar27);
          }
          pbVar16 = pbVar24 + -((long)((ulong)uVar10 - 8) >> 0x3f) + 1;
          uVar9 = (ulong)(CONCAT41(bVar3 + 8,*pbVar24) & 0xfff) +
                  ((ulong)((uint)((long)((ulong)uVar10 - 8) >> 0x3f) &
                          pbVar24[-((long)((ulong)uVar10 - 8) >> 0x3f)] - 4) & 0xff) * 0x800;
          if (0x7e7ff < uVar9) {
            uVar10 = 0xd;
            pbVar24 = pbVar16;
            do {
              pbVar16 = pbVar24 + 1;
              bVar3 = *pbVar24;
              uVar18 = bVar3 + 0xfc & 0xff;
              uVar7 = uVar10 & 0x1f;
              uVar10 = uVar10 + 2;
              uVar9 = uVar9 + (long)(int)(uVar18 << (ulong)uVar7);
              pbVar24 = pbVar16;
            } while (uVar18 == bVar3 + 0xfc);
            uVar9 = (ulong)(int)uVar9;
          }
          uVar9 = ~uVar9;
          if (uVar13 != 0xf) {
            lVar19 = ((long)(int)uVar13 - (ulong)bVar5) + 3;
            pbVar24 = param_1 + uVar9;
            iVar26 = (int)lVar19;
            if (param_1 < pbVar24 + lVar19) {
              *param_1 = *pbVar24;
              param_1[1] = pbVar24[1];
              param_1[2] = pbVar24[2];
              param_1[3] = pbVar24[3];
              if (iVar26 < 5) goto LAB_00132cf8;
              param_1[4] = pbVar24[4];
              param_1[5] = pbVar24[5];
              param_1[6] = pbVar24[6];
              param_1[7] = pbVar24[7];
              if (iVar26 < 9) goto LAB_00132cf8;
              param_1[8] = pbVar24[8];
              param_1[9] = pbVar24[9];
              param_1[10] = pbVar24[10];
              param_1[0xb] = pbVar24[0xb];
              param_1[0xc] = pbVar24[0xc];
              param_1[0xd] = pbVar24[0xd];
              param_1[0xe] = pbVar24[0xe];
              param_1 = param_1 + lVar19;
            }
            else {
              *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
              if (8 < iVar26) {
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar24 + 8);
              }
LAB_00132cf8:
              param_1 = param_1 + lVar19;
            }
            goto LAB_00132cfc;
          }
          pbVar24 = pbVar16 + 1;
          uVar28 = (ulong)(*pbVar16 & 0xf);
          uVar10 = (uint)(*pbVar16 >> 4);
          if (uVar10 == 0) {
            iVar26 = pbVar16[1] - 8;
            if (iVar26 < 0) {
              bVar3 = pbVar16[2];
              iVar26 = pbVar16[1] + 0xf8;
              uVar10 = 3;
              pbVar24 = pbVar16 + 3;
              while( true ) {
                uVar13 = (uint)bVar3;
                iVar14 = uVar13 - 8;
                if (-1 < iVar14) break;
                bVar3 = *pbVar24;
                uVar18 = uVar10 & 0x1f;
                uVar10 = uVar10 + 3;
                iVar26 = (uVar13 + 0xf8 << (ulong)uVar18) + iVar26;
                pbVar24 = pbVar24 + 1;
              }
              iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
            }
            else {
              pbVar24 = pbVar16 + 2;
            }
            iVar26 = iVar26 + 0xf;
          }
          else {
            iVar26 = uVar10 - 1;
          }
          uVar10 = iVar26 + (0x12 - uVar11);
          pbVar16 = param_1 + uVar9;
          sVar25 = (size_t)(int)uVar10;
          if (param_1 < pbVar16 + sVar25) {
            if (param_1 + -1 == pbVar16) goto LAB_0013305c;
            if (uVar10 != 0) {
              pbVar17 = param_1;
              if ((uVar10 & 7) != 0) {
                lVar19 = 0;
                do {
                  param_1[lVar19] = pbVar16[lVar19];
                  lVar19 = lVar19 + 1;
                } while (((2 - uVar11) + iVar26 & 7) != (uint)lVar19);
                uVar10 = uVar10 - (uint)lVar19;
                pbVar16 = pbVar16 + lVar19;
                pbVar17 = param_1 + lVar19;
              }
              if (6 < (0x11 - uVar11) + iVar26) {
                do {
                  *pbVar17 = *pbVar16;
                  pbVar17[1] = pbVar16[1];
                  pbVar17[2] = pbVar16[2];
                  pbVar17[3] = pbVar16[3];
                  pbVar17[4] = pbVar16[4];
                  pbVar17[5] = pbVar16[5];
                  pbVar17[6] = pbVar16[6];
                  pbVar20 = pbVar16 + 7;
                  uVar10 = uVar10 - 8;
                  pbVar16 = pbVar16 + 8;
                  pbVar17[7] = *pbVar20;
                  pbVar17 = pbVar17 + 8;
                } while (uVar10 != 0);
              }
            }
          }
          else if (0 < (int)uVar10) {
            iVar26 = 0;
            do {
              iVar14 = iVar26 + 8;
              *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar16 + iVar26);
              iVar26 = iVar14;
            } while (iVar14 < (int)uVar10);
          }
LAB_00132ce8:
          param_1 = param_1 + sVar25;
          uVar13 = (uint)uVar28;
joined_r0x0013307c:
          uVar10 = (uint)uVar28;
          if (uVar11 <= uVar13) goto LAB_00133400;
LAB_001336bc:
          lVar19 = (long)param_2 - (long)param_1;
          if (param_4 - (long)pbVar24 <= (long)param_2 - (long)param_1) {
            lVar19 = param_4 - (long)pbVar24;
          }
          if (uVar10 != uVar11 - 1) {
            uVar10 = uVar10 + 1;
            if (lVar19 < 0xd) {
              uVar28 = (ulong)uVar10;
              memmove(param_1,pbVar24,uVar28);
              param_1 = param_1 + uVar28;
              pbVar16 = pbVar24 + uVar28;
joined_r0x00133888:
              if (param_2 <= param_1) goto LAB_0013388c;
            }
            else {
              *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
              *(undefined4 *)(param_1 + 8) = *(undefined4 *)(pbVar24 + 8);
              param_1 = param_1 + uVar10;
              pbVar16 = pbVar24 + uVar10;
            }
LAB_001336fc:
            pbVar24 = pbVar16 + 1;
            bVar3 = *pbVar16;
            uVar28 = (ulong)bVar3 & 0xf;
            uVar10 = (uint)(bVar3 >> 4);
            if (0x4f < (ulong)bVar3) {
              pbVar16 = pbVar24 + -((long)(uVar28 - 8) >> 0x3f) + 1;
              uVar9 = (ulong)(CONCAT41(bVar3 + 8,*pbVar24) & 0xfff) +
                      ((ulong)((uint)((long)(uVar28 - 8) >> 0x3f) &
                              pbVar24[-((long)(uVar28 - 8) >> 0x3f)] - 4) & 0xff) * 0x800;
              if (0x7e7ff < uVar9) {
                uVar13 = 0xd;
                pbVar24 = pbVar16;
                do {
                  pbVar16 = pbVar24 + 1;
                  bVar3 = *pbVar24;
                  uVar18 = bVar3 + 0xfc & 0xff;
                  uVar7 = uVar13 & 0x1f;
                  uVar13 = uVar13 + 2;
                  uVar9 = uVar9 + (long)(int)(uVar18 << (ulong)uVar7);
                  pbVar24 = pbVar16;
                } while (uVar18 == bVar3 + 0xfc);
                uVar9 = (ulong)(int)uVar9;
              }
              uVar9 = ~uVar9;
              if (uVar10 != 0xf) {
                iVar26 = uVar10 - 2;
                pbVar24 = param_1 + uVar9;
                if (param_1 < pbVar24 + iVar26) {
                  *param_1 = *pbVar24;
                  param_1[1] = pbVar24[1];
                  param_1[2] = pbVar24[2];
                  param_1[3] = pbVar24[3];
                  if (4 < iVar26) {
                    param_1[4] = pbVar24[4];
                    param_1[5] = pbVar24[5];
                    param_1[6] = pbVar24[6];
                    param_1[7] = pbVar24[7];
                    if (8 < iVar26) {
                      param_1[8] = pbVar24[8];
                      param_1[9] = pbVar24[9];
                      param_1[10] = pbVar24[10];
                      param_1[0xb] = pbVar24[0xb];
                      param_1[0xc] = pbVar24[0xc];
                      param_1[0xd] = pbVar24[0xd];
                      param_1[0xe] = pbVar24[0xe];
                      param_1 = param_1 + iVar26;
                      goto LAB_00132cfc;
                    }
                  }
                }
                else {
                  *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
                  if (8 < iVar26) {
                    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar24 + 8);
                  }
                }
                param_1 = param_1 + iVar26;
                goto LAB_00132cfc;
              }
              pbVar24 = pbVar16 + 1;
              bVar3 = *pbVar16 >> 4;
              if (bVar3 == 0) {
                iVar26 = pbVar16[1] - 8;
                if (iVar26 < 0) {
                  bVar3 = pbVar16[2];
                  iVar26 = pbVar16[1] + 0xf8;
                  uVar10 = 3;
                  pbVar24 = pbVar16 + 3;
                  while( true ) {
                    uVar13 = (uint)bVar3;
                    iVar14 = uVar13 - 8;
                    if (-1 < iVar14) break;
                    bVar3 = *pbVar24;
                    uVar18 = uVar10 & 0x1f;
                    uVar10 = uVar10 + 3;
                    iVar26 = (uVar13 + 0xf8 << (ulong)uVar18) + iVar26;
                    pbVar24 = pbVar24 + 1;
                  }
                  iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
                }
                else {
                  pbVar24 = pbVar16 + 2;
                }
                iVar26 = iVar26 + 0xf;
              }
              else {
                iVar26 = bVar3 - 1;
              }
              uVar10 = iVar26 + 0xd;
              uVar28 = (ulong)(*pbVar16 & 0xf);
              pbVar16 = param_1 + uVar9;
              sVar25 = (size_t)(int)uVar10;
              if (pbVar16 + sVar25 <= param_1) {
                if (0 < (int)uVar10) {
                  iVar26 = 0;
                  do {
                    iVar14 = iVar26 + 8;
                    *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar16 + iVar26);
                    iVar26 = iVar14;
                  } while (iVar14 < (int)uVar10);
                }
                goto LAB_00132ce8;
              }
              if (param_1 + -1 != pbVar16) goto code_r0x00132b24;
LAB_0013305c:
              memset(param_1,(uint)*pbVar16,sVar25);
              param_1 = param_1 + sVar25;
              uVar13 = (uint)uVar28;
              goto joined_r0x0013307c;
            }
            uVar13 = (uint)uVar28;
            if (uVar10 != 4) {
              *(undefined4 *)param_1 = *(undefined4 *)(param_1 + uVar9);
              param_1 = param_1 + (ulong)(bVar3 >> 4) + 1;
              goto joined_r0x0013307c;
            }
            if (uVar13 == 0) {
              uVar10 = (uint)pbVar16[1];
              if ((int)(uVar10 - 8) < 0) {
                bVar3 = pbVar16[2];
                iVar26 = uVar10 + 0xf8;
                uVar10 = 3;
                pbVar16 = pbVar16 + 3;
                while( true ) {
                  uVar13 = (uint)bVar3;
                  iVar14 = uVar13 - 8;
                  if (-1 < iVar14) break;
                  bVar3 = *pbVar16;
                  uVar18 = uVar10 & 0x1f;
                  uVar10 = uVar10 + 3;
                  iVar26 = (uVar13 + 0xf8 << (ulong)uVar18) + iVar26;
                  pbVar16 = pbVar16 + 1;
                }
                iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26 + 0x14;
                if (0 < iVar26) {
LAB_00132be0:
                  iVar14 = 0;
                  do {
                    iVar1 = iVar14 + 8;
                    *(undefined8 *)(param_1 + iVar14) =
                         *(undefined8 *)(param_1 + (long)iVar14 + uVar9);
                    iVar14 = iVar1;
                  } while (iVar1 < iVar26);
                }
LAB_00132c00:
                param_1 = param_1 + iVar26;
                goto LAB_00132cfc;
              }
              iVar26 = uVar10 + 0xc;
              pbVar16 = pbVar16 + 2;
            }
            else {
              iVar26 = uVar13 + 4;
              pbVar16 = pbVar24;
            }
            if (iVar26 == 0) goto LAB_00132c00;
            goto LAB_00132be0;
          }
          pbVar16 = pbVar24 + 1;
          uVar10 = *pbVar24 & 0xf;
          uVar13 = (uint)(*pbVar24 >> 4);
          if (uVar13 == 0) {
            iVar26 = pbVar24[1] - 0x10;
            if (iVar26 < 0) {
              bVar3 = pbVar24[2];
              iVar26 = pbVar24[1] + 0xf0;
              uVar13 = 4;
              pbVar16 = pbVar24 + 3;
              while( true ) {
                uVar18 = (uint)bVar3;
                iVar14 = uVar18 - 0x10;
                if (-1 < iVar14) break;
                bVar3 = *pbVar16;
                uVar7 = uVar13 & 0x1f;
                uVar13 = uVar13 + 4;
                iVar26 = (uVar18 + 0xf0 << (ulong)uVar7) + iVar26;
                pbVar16 = pbVar16 + 1;
              }
              iVar26 = (iVar14 << (ulong)(uVar13 & 0x1f)) + iVar26;
            }
            else {
              pbVar16 = pbVar24 + 2;
            }
            iVar26 = iVar26 + 0xf;
          }
          else {
            iVar26 = uVar13 - 1;
          }
          iVar26 = iVar26 + uVar11;
          if (lVar19 < iVar26 + 8) {
            sVar25 = (size_t)iVar26;
            memmove(param_1,pbVar16,sVar25);
            param_1 = param_1 + sVar25;
            pbVar16 = pbVar16 + sVar25;
            if (param_2 <= param_1) goto LAB_0013388c;
          }
          else {
            if (0 < iVar26) {
              iVar14 = 0;
              do {
                iVar1 = iVar14 + 8;
                *(undefined8 *)(param_1 + iVar14) = *(undefined8 *)(pbVar16 + iVar14);
                iVar14 = iVar1;
              } while (iVar1 < iVar26);
            }
            param_1 = param_1 + iVar26;
            pbVar16 = pbVar16 + iVar26;
          }
joined_r0x0013383c:
          if (uVar10 < 5) {
            if (uVar10 != 4) {
              *(undefined4 *)param_1 = *(undefined4 *)(param_1 + uVar9);
              param_1 = param_1 + (uVar10 + 1);
              goto LAB_00132cfc;
            }
            pbVar24 = pbVar16 + 1;
            bVar3 = *pbVar16 >> 4;
            if (bVar3 == 0) {
              iVar26 = pbVar16[1] - 8;
              if (iVar26 < 0) {
                bVar3 = pbVar16[2];
                iVar26 = pbVar16[1] + 0xf8;
                uVar10 = 3;
                pbVar24 = pbVar16 + 3;
                while( true ) {
                  uVar13 = (uint)bVar3;
                  iVar14 = uVar13 - 8;
                  if (-1 < iVar14) break;
                  bVar3 = *pbVar24;
                  uVar18 = uVar10 & 0x1f;
                  uVar10 = uVar10 + 3;
                  iVar26 = (uVar13 + 0xf8 << (ulong)uVar18) + iVar26;
                  pbVar24 = pbVar24 + 1;
                }
                iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
              }
              else {
                pbVar24 = pbVar16 + 2;
              }
              iVar26 = iVar26 + 0xf;
            }
            else {
              iVar26 = bVar3 - 1;
            }
            uVar13 = *pbVar16 & 0xf;
            uVar28 = (ulong)uVar13;
            iVar26 = iVar26 + 5;
            if (0 < iVar26) {
              iVar14 = 0;
              do {
                iVar1 = iVar14 + 8;
                *(undefined8 *)(param_1 + iVar14) = *(undefined8 *)(param_1 + (long)iVar14 + uVar9);
                iVar14 = iVar1;
              } while (iVar1 < iVar26);
            }
            param_1 = param_1 + iVar26;
            goto joined_r0x0013307c;
          }
          bVar3 = *pbVar16;
          pbVar16 = pbVar16 + 1;
          uVar13 = bVar3 & 0xf;
          uVar28 = (ulong)uVar13;
          lVar19 = (ulong)(bVar3 >> 4) - 8;
          pbVar24 = pbVar16 + -(lVar19 >> 0x3f) + 1;
          uVar9 = ((ulong)((uint)(bVar3 >> 4) * 0x100 + 0x800 & 0xf00) | (ulong)*pbVar16) +
                  ((ulong)((uint)(lVar19 >> 0x3f) & pbVar16[-(lVar19 >> 0x3f)] - 4) & 0xff) * 0x800;
          if (0x7e7ff < uVar9) {
            uVar18 = 0xd;
            pbVar16 = pbVar24;
            do {
              pbVar24 = pbVar16 + 1;
              bVar4 = *pbVar16;
              uVar7 = bVar4 + 0xfc & 0xff;
              uVar6 = uVar18 & 0x1f;
              uVar18 = uVar18 + 2;
              uVar9 = uVar9 + (long)(int)(uVar7 << (ulong)uVar6);
              pbVar16 = pbVar24;
            } while (uVar7 == bVar4 + 0xfc);
            uVar9 = (ulong)(int)uVar9;
          }
          uVar9 = ~uVar9;
          if (uVar10 != 0xf) {
            iVar26 = uVar10 - 2;
            pbVar16 = param_1 + uVar9;
            if (param_1 < pbVar16 + iVar26) {
              *param_1 = *pbVar16;
              param_1[1] = pbVar16[1];
              param_1[2] = pbVar16[2];
              param_1[3] = pbVar16[3];
              if (4 < iVar26) {
                param_1[4] = pbVar16[4];
                param_1[5] = pbVar16[5];
                param_1[6] = pbVar16[6];
                param_1[7] = pbVar16[7];
                if (8 < iVar26) {
                  param_1[8] = pbVar16[8];
                  param_1[9] = pbVar16[9];
                  param_1[10] = pbVar16[10];
                  param_1[0xb] = pbVar16[0xb];
                  param_1[0xc] = pbVar16[0xc];
                  param_1[0xd] = pbVar16[0xd];
                  param_1[0xe] = pbVar16[0xe];
                }
              }
            }
            else {
              *(undefined8 *)param_1 = *(undefined8 *)pbVar16;
              if (8 < iVar26) {
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar16 + 8);
              }
            }
            param_1 = param_1 + iVar26;
            goto joined_r0x0013307c;
          }
          if ((bVar3 & 0xf) == 0) {
            pbVar16 = pbVar24 + 1;
            iVar26 = *pbVar24 - 8;
            if (iVar26 < 0) {
              bVar3 = pbVar24[1];
              iVar26 = *pbVar24 + 0xf8;
              uVar10 = 3;
              pbVar16 = pbVar24 + 2;
              while( true ) {
                uVar13 = (uint)bVar3;
                iVar14 = uVar13 - 8;
                if (-1 < iVar14) break;
                bVar3 = *pbVar16;
                uVar18 = uVar10 & 0x1f;
                uVar10 = uVar10 + 3;
                iVar26 = (uVar13 + 0xf8 << (ulong)uVar18) + iVar26;
                pbVar16 = pbVar16 + 1;
              }
              iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
            }
            iVar26 = iVar26 + 0xf;
          }
          else {
            iVar26 = uVar13 - 1;
            pbVar16 = pbVar24;
          }
          uVar10 = iVar26 + 0xd;
          pbVar24 = param_1 + uVar9;
          sVar25 = (size_t)(int)uVar10;
          if (param_1 < pbVar24 + sVar25) {
            if (param_1 + -1 == pbVar24) {
LAB_00133380:
              memset(param_1,(uint)*pbVar24,sVar25);
            }
            else if (uVar10 != 0) {
              pbVar17 = param_1;
              if ((uVar10 & 7) != 0) {
                lVar19 = 0;
                do {
                  param_1[lVar19] = pbVar24[lVar19];
                  lVar19 = lVar19 + 1;
                } while ((iVar26 + 5U & 7) != (uint)lVar19);
                uVar10 = uVar10 - (uint)lVar19;
                pbVar24 = pbVar24 + lVar19;
                pbVar17 = param_1 + lVar19;
              }
              if (6 < iVar26 + 0xcU) {
                do {
                  *pbVar17 = *pbVar24;
                  pbVar17[1] = pbVar24[1];
                  pbVar17[2] = pbVar24[2];
                  pbVar17[3] = pbVar24[3];
                  pbVar17[4] = pbVar24[4];
                  pbVar17[5] = pbVar24[5];
                  pbVar17[6] = pbVar24[6];
                  pbVar20 = pbVar24 + 7;
                  uVar10 = uVar10 - 8;
                  pbVar24 = pbVar24 + 8;
                  pbVar17[7] = *pbVar20;
                  pbVar17 = pbVar17 + 8;
                } while (uVar10 != 0);
              }
            }
          }
          else if (0 < (int)uVar10) {
            iVar26 = 0;
            do {
              iVar14 = iVar26 + 8;
              *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar24 + iVar26);
              iVar26 = iVar14;
            } while (iVar14 < (int)uVar10);
          }
        } while( true );
      }
      lVar19 = ((long)(int)uVar28 - (ulong)bVar5) + 3;
      pbVar16 = param_1 + uVar9;
      iVar26 = (int)lVar19;
      if (pbVar16 + lVar19 <= param_1) {
        *(undefined8 *)param_1 = *(undefined8 *)pbVar16;
        if (8 < iVar26) {
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar16 + 8);
        }
LAB_001334b0:
        param_1 = param_1 + lVar19;
        goto joined_r0x0013094c;
      }
      *param_1 = *pbVar16;
      param_1[1] = pbVar16[1];
      param_1[2] = pbVar16[2];
      param_1[3] = pbVar16[3];
      if (iVar26 < 5) goto LAB_001334b0;
      param_1[4] = pbVar16[4];
      param_1[5] = pbVar16[5];
      param_1[6] = pbVar16[6];
      param_1[7] = pbVar16[7];
      if (iVar26 < 9) goto LAB_001334b0;
      param_1[8] = pbVar16[8];
      param_1[9] = pbVar16[9];
      param_1[10] = pbVar16[10];
      param_1[0xb] = pbVar16[0xb];
      param_1[0xc] = pbVar16[0xc];
      param_1[0xd] = pbVar16[0xd];
      param_1[0xe] = pbVar16[0xe];
      param_1 = param_1 + lVar19;
    } while( true );
  }
  uVar9 = 0xffffffffffffffff;
LAB_001319a0:
  do {
    pbVar24 = param_3 + 1;
    bVar5 = *param_3;
    uVar28 = (long)(char)bVar5 & 0xf;
    uVar12 = (ulong)(long)(char)bVar5 >> 4 & 0xf;
    iVar26 = (int)uVar12;
    if (-1 < (char)bVar5) {
      lVar19 = (long)param_2 - (long)param_1;
      if (param_4 - (long)pbVar24 <= (long)param_2 - (long)param_1) {
        lVar19 = param_4 - (long)pbVar24;
      }
      if (iVar26 != 7) {
        sVar25 = uVar12 + 1;
        if (lVar19 < 0xd) {
          memmove(param_1,pbVar24,sVar25);
          param_1 = param_1 + sVar25;
          param_3 = pbVar24 + sVar25;
          goto joined_r0x00131bc8;
        }
        *(undefined8 *)param_1 = *(undefined8 *)(param_3 + 1);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 9);
        param_1 = param_1 + sVar25;
        param_3 = pbVar24 + sVar25;
        goto LAB_001319f0;
      }
      iVar26 = (int)uVar28;
      if (iVar26 == 0) {
        iVar26 = param_3[1] - 0x10;
        if (iVar26 < 0) {
          bVar5 = param_3[2];
          iVar26 = param_3[1] + 0xf0;
          uVar10 = 4;
          pbVar24 = param_3 + 3;
          while( true ) {
            uVar11 = (uint)bVar5;
            iVar14 = uVar11 - 0x10;
            if (-1 < iVar14) break;
            bVar5 = *pbVar24;
            uVar13 = uVar10 & 0x1f;
            uVar10 = uVar10 + 4;
            iVar26 = (uVar11 + 0xf0 << (ulong)uVar13) + iVar26;
            pbVar24 = pbVar24 + 1;
          }
          iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
        }
        else {
          pbVar24 = param_3 + 2;
        }
        iVar14 = iVar26 + 0x17;
        iVar26 = iVar26 + 0x1f;
      }
      else {
        iVar14 = iVar26 + 7;
        iVar26 = iVar26 + 0xf;
      }
      if (lVar19 < iVar26) {
        sVar25 = (size_t)iVar14;
        memmove(param_1,pbVar24,sVar25);
        param_1 = param_1 + sVar25;
        param_3 = pbVar24 + sVar25;
        goto LAB_00132058;
      }
      if (0 < iVar14) {
        iVar26 = 0;
        do {
          iVar1 = iVar26 + 8;
          *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar24 + iVar26);
          iVar26 = iVar1;
        } while (iVar1 < iVar14);
      }
      param_1 = param_1 + iVar14;
      param_3 = pbVar24 + iVar14;
      goto LAB_00132060;
    }
    param_3 = pbVar24 + -((long)(uVar28 - 8) >> 0x3f) + 1;
    uVar9 = (ulong)(CONCAT41((char)bVar5 + 8,*pbVar24) & 0xfff) +
            ((ulong)((uint)((long)(uVar28 - 8) >> 0x3f) & pbVar24[-((long)(uVar28 - 8) >> 0x3f)] - 4
                    ) & 0xff) * 0x800;
    if (0x7e7ff < uVar9) {
      uVar10 = 0xd;
      pbVar24 = param_3;
      do {
        param_3 = pbVar24 + 1;
        bVar5 = *pbVar24;
        uVar11 = bVar5 + 0xfc & 0xff;
        uVar13 = uVar10 & 0x1f;
        uVar10 = uVar10 + 2;
        uVar9 = uVar9 + (long)(int)(uVar11 << (ulong)uVar13);
        pbVar24 = param_3;
      } while (uVar11 == bVar5 + 0xfc);
      uVar9 = (ulong)(int)uVar9;
    }
    uVar9 = ~uVar9;
    if (iVar26 == 0xf) {
      pbVar24 = param_3 + 1;
      bVar5 = *param_3 >> 4;
      if (bVar5 == 0) {
        iVar26 = param_3[1] - 8;
        if (iVar26 < 0) {
          bVar5 = param_3[2];
          iVar26 = param_3[1] + 0xf8;
          uVar10 = 3;
          pbVar24 = param_3 + 3;
          while( true ) {
            uVar11 = (uint)bVar5;
            iVar14 = uVar11 - 8;
            if (-1 < iVar14) break;
            bVar5 = *pbVar24;
            uVar13 = uVar10 & 0x1f;
            uVar10 = uVar10 + 3;
            iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
            pbVar24 = pbVar24 + 1;
          }
          iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
        }
        else {
          pbVar24 = param_3 + 2;
        }
        iVar26 = iVar26 + 0xf;
      }
      else {
        iVar26 = bVar5 - 1;
      }
      uVar10 = iVar26 + 10;
      uVar28 = (ulong)(*param_3 & 0xf);
      pbVar16 = param_1 + uVar9;
      sVar25 = (size_t)(int)uVar10;
      if (param_1 < pbVar16 + sVar25) {
        if (param_1 + -1 == pbVar16) goto LAB_00132318;
        if (uVar10 != 0) {
          pbVar17 = param_1;
          if ((uVar10 & 7) != 0) {
            lVar19 = 0;
            do {
              param_1[lVar19] = pbVar16[lVar19];
              lVar19 = lVar19 + 1;
            } while ((iVar26 + 2U & 7) != (uint)lVar19);
            uVar10 = uVar10 - (uint)lVar19;
            pbVar16 = pbVar16 + lVar19;
            pbVar17 = param_1 + lVar19;
          }
          if (6 < iVar26 + 9U) {
            do {
              *pbVar17 = *pbVar16;
              pbVar17[1] = pbVar16[1];
              pbVar17[2] = pbVar16[2];
              pbVar17[3] = pbVar16[3];
              pbVar17[4] = pbVar16[4];
              pbVar17[5] = pbVar16[5];
              pbVar17[6] = pbVar16[6];
              pbVar20 = pbVar16 + 7;
              uVar10 = uVar10 - 8;
              pbVar16 = pbVar16 + 8;
              pbVar17[7] = *pbVar20;
              pbVar17 = pbVar17 + 8;
            } while (uVar10 != 0);
          }
        }
      }
      else if (0 < (int)uVar10) {
        iVar26 = 0;
        do {
          iVar14 = iVar26 + 8;
          *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar16 + iVar26);
          iVar26 = iVar14;
        } while (iVar14 < (int)uVar10);
      }
LAB_0013240c:
      param_1 = param_1 + sVar25;
      uVar10 = (uint)uVar28;
joined_r0x00132798:
      uVar8 = (undefined4)uVar28;
joined_r0x00132798:
      if (uVar10 < 8) {
        lVar19 = (long)param_2 - (long)param_1;
        if (param_4 - (long)pbVar24 <= (long)param_2 - (long)param_1) {
          lVar19 = param_4 - (long)pbVar24;
        }
        if ((int)uVar28 == 7) {
          param_3 = (byte *)((long)pbVar24 + 1);
          uVar11 = *pbVar24 & 0xf;
          uVar28 = (ulong)uVar11;
          uVar10 = (uint)(*pbVar24 >> 4);
          if (uVar10 == 0) {
            iVar26 = *(byte *)((long)pbVar24 + 1) - 0x10;
            if (iVar26 < 0) {
              bVar5 = *(byte *)((long)pbVar24 + 2);
              iVar26 = *(byte *)((long)pbVar24 + 1) + 0xf0;
              uVar10 = 4;
              param_3 = (byte *)((long)pbVar24 + 3);
              while( true ) {
                uVar13 = (uint)bVar5;
                iVar14 = uVar13 - 0x10;
                if (-1 < iVar14) break;
                bVar5 = *param_3;
                uVar18 = uVar10 & 0x1f;
                uVar10 = uVar10 + 4;
                iVar26 = (uVar13 + 0xf0 << (ulong)uVar18) + iVar26;
                param_3 = param_3 + 1;
              }
              iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
            }
            else {
              param_3 = (byte *)((long)pbVar24 + 2);
            }
            iVar14 = iVar26 + 0x17;
            iVar26 = iVar26 + 0x1f;
          }
          else {
            iVar14 = uVar10 + 7;
            iVar26 = uVar10 + 0xf;
          }
          if (lVar19 < iVar26) {
            sVar25 = (size_t)iVar14;
            memmove(param_1,param_3,sVar25);
            param_1 = (byte *)((long)param_1 + sVar25);
            param_3 = param_3 + sVar25;
joined_r0x00131bc8:
            if (param_2 <= param_1) {
LAB_001328f8:
              return (ulong)(uint)((int)param_3 - iVar27);
            }
LAB_001319f0:
            uVar11 = (uint)uVar28;
          }
          else {
            if (0 < iVar14) {
              iVar26 = 0;
              do {
                lVar19 = (long)iVar26;
                iVar26 = iVar26 + 8;
                *(undefined8 *)((long)param_1 + lVar19) = *(undefined8 *)(param_3 + lVar19);
              } while (iVar26 < iVar14);
            }
            param_1 = (byte *)((long)param_1 + (long)iVar14);
            param_3 = param_3 + iVar14;
          }
          if (uVar11 < 5) goto LAB_001326e8;
          bVar5 = *param_3;
          param_3 = param_3 + 1;
          uVar10 = bVar5 & 0xf;
          lVar19 = (ulong)(bVar5 >> 4) - 8;
          pbVar24 = param_3 + -(lVar19 >> 0x3f) + 1;
          uVar9 = ((ulong)((uint)(bVar5 >> 4) * 0x100 + 0x800 & 0xf00) | (ulong)*param_3) +
                  ((ulong)((uint)(lVar19 >> 0x3f) & param_3[-(lVar19 >> 0x3f)] - 4) & 0xff) * 0x800;
          if (0x7e7ff < uVar9) {
            uVar13 = 0xd;
            pbVar16 = pbVar24;
            do {
              pbVar24 = pbVar16 + 1;
              bVar3 = *pbVar16;
              uVar18 = bVar3 + 0xfc & 0xff;
              uVar7 = uVar13 & 0x1f;
              uVar13 = uVar13 + 2;
              uVar9 = uVar9 + (long)(int)(uVar18 << (ulong)uVar7);
              pbVar16 = pbVar24;
            } while (uVar18 == bVar3 + 0xfc);
            uVar9 = (ulong)(int)uVar9;
          }
          uVar9 = ~uVar9;
          if (uVar11 != 0xf) {
            iVar26 = uVar11 - 2;
            pbVar16 = param_1 + uVar9;
            if (param_1 < pbVar16 + iVar26) {
              *param_1 = *pbVar16;
              param_1[1] = pbVar16[1];
              param_1[2] = pbVar16[2];
              param_1[3] = pbVar16[3];
              if (4 < iVar26) {
                param_1[4] = pbVar16[4];
                param_1[5] = pbVar16[5];
                param_1[6] = pbVar16[6];
                param_1[7] = pbVar16[7];
                if (8 < iVar26) {
                  param_1[8] = pbVar16[8];
                  param_1[9] = pbVar16[9];
                  param_1[10] = pbVar16[10];
                  param_1[0xb] = pbVar16[0xb];
                  param_1[0xc] = pbVar16[0xc];
                  param_1[0xd] = pbVar16[0xd];
                  param_1[0xe] = pbVar16[0xe];
                }
              }
            }
            else {
              *(undefined8 *)param_1 = *(undefined8 *)pbVar16;
              if (8 < iVar26) {
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar16 + 8);
              }
            }
            param_1 = param_1 + iVar26;
            goto joined_r0x00131d14;
          }
          if ((bVar5 & 0xf) == 0) {
            param_3 = pbVar24 + 1;
            iVar26 = *pbVar24 - 8;
            if (iVar26 < 0) {
              bVar5 = pbVar24[1];
              iVar26 = *pbVar24 + 0xf8;
              uVar10 = 3;
              param_3 = pbVar24 + 2;
              while( true ) {
                uVar11 = (uint)bVar5;
                iVar14 = uVar11 - 8;
                if (-1 < iVar14) break;
                bVar5 = *param_3;
                uVar13 = uVar10 & 0x1f;
                uVar10 = uVar10 + 3;
                iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                param_3 = param_3 + 1;
              }
              iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
            }
            iVar26 = iVar26 + 0xf;
          }
          else {
            iVar26 = uVar10 - 1;
            param_3 = pbVar24;
          }
          uVar10 = iVar26 + 0xd;
          pbVar24 = param_1 + uVar9;
          sVar25 = (size_t)(int)uVar10;
          if (param_1 < pbVar24 + sVar25) {
            if (param_1 + -1 == pbVar24) {
              memset(param_1,(uint)*pbVar24,sVar25);
            }
            else if (uVar10 != 0) {
              pbVar16 = param_1;
              if ((uVar10 & 7) != 0) {
                lVar19 = 0;
                do {
                  param_1[lVar19] = pbVar24[lVar19];
                  lVar19 = lVar19 + 1;
                } while ((iVar26 + 5U & 7) != (uint)lVar19);
                uVar10 = uVar10 - (uint)lVar19;
                pbVar24 = pbVar24 + lVar19;
                pbVar16 = param_1 + lVar19;
              }
              if (6 < iVar26 + 0xcU) {
                do {
                  *pbVar16 = *pbVar24;
                  pbVar16[1] = pbVar24[1];
                  pbVar16[2] = pbVar24[2];
                  pbVar16[3] = pbVar24[3];
                  pbVar16[4] = pbVar24[4];
                  pbVar16[5] = pbVar24[5];
                  pbVar16[6] = pbVar24[6];
                  pbVar17 = pbVar24 + 7;
                  uVar10 = uVar10 - 8;
                  pbVar24 = pbVar24 + 8;
                  pbVar16[7] = *pbVar17;
                  pbVar16 = pbVar16 + 8;
                } while (uVar10 != 0);
              }
            }
          }
          else if (0 < (int)uVar10) {
            iVar26 = 0;
            do {
              iVar14 = iVar26 + 8;
              *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar24 + iVar26);
              iVar26 = iVar14;
            } while (iVar14 < (int)uVar10);
          }
          param_1 = param_1 + sVar25;
          goto LAB_001319a0;
        }
        lVar2 = (long)(int)uVar28 + 1;
        if (lVar19 < 0xd) {
          sVar25 = (size_t)(int)lVar2;
          memmove(param_1,pbVar24,sVar25);
          param_1 = (byte *)((long)param_1 + sVar25);
          param_3 = (byte *)((long)pbVar24 + sVar25);
LAB_00132058:
          if (param_2 <= param_1) goto LAB_001328f8;
        }
        else {
          *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
          *(undefined4 *)((long)param_1 + 8) = *(undefined4 *)((long)pbVar24 + 8);
          param_1 = (byte *)((long)param_1 + lVar2);
          param_3 = (byte *)((long)pbVar24 + lVar2);
        }
LAB_00132060:
        pbVar24 = param_3 + 1;
        bVar5 = *param_3;
        uVar28 = (ulong)bVar5 & 0xf;
        uVar11 = (uint)(bVar5 >> 4);
        if (0x4f < (ulong)bVar5) {
          param_3 = pbVar24 + -((long)(uVar28 - 8) >> 0x3f) + 1;
          uVar9 = (ulong)(CONCAT41(bVar5 + 8,*pbVar24) & 0xfff) +
                  ((ulong)((uint)((long)(uVar28 - 8) >> 0x3f) &
                          pbVar24[-((long)(uVar28 - 8) >> 0x3f)] - 4) & 0xff) * 0x800;
          if (0x7e7ff < uVar9) {
            uVar10 = 0xd;
            pbVar24 = param_3;
            do {
              param_3 = pbVar24 + 1;
              bVar5 = *pbVar24;
              uVar13 = bVar5 + 0xfc & 0xff;
              uVar18 = uVar10 & 0x1f;
              uVar10 = uVar10 + 2;
              uVar9 = uVar9 + (long)(int)(uVar13 << (ulong)uVar18);
              pbVar24 = param_3;
            } while (uVar13 == bVar5 + 0xfc);
            uVar9 = (ulong)(int)uVar9;
          }
          uVar9 = ~uVar9;
          if (uVar11 != 0xf) {
            iVar26 = uVar11 - 2;
            pbVar24 = param_1 + uVar9;
            if (param_1 < pbVar24 + iVar26) {
              *param_1 = *pbVar24;
              param_1[1] = pbVar24[1];
              param_1[2] = pbVar24[2];
              param_1[3] = pbVar24[3];
              if (4 < iVar26) {
                param_1[4] = pbVar24[4];
                param_1[5] = pbVar24[5];
                param_1[6] = pbVar24[6];
                param_1[7] = pbVar24[7];
                if (8 < iVar26) {
                  param_1[8] = pbVar24[8];
                  param_1[9] = pbVar24[9];
                  param_1[10] = pbVar24[10];
                  param_1[0xb] = pbVar24[0xb];
                  param_1[0xc] = pbVar24[0xc];
                  param_1[0xd] = pbVar24[0xd];
                  param_1[0xe] = pbVar24[0xe];
                }
              }
            }
            else {
              *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
              if (8 < iVar26) {
                *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar24 + 8);
                param_1 = param_1 + iVar26;
                goto LAB_001319a0;
              }
            }
            param_1 = param_1 + iVar26;
            goto LAB_001319a0;
          }
          pbVar24 = param_3 + 1;
          uVar28 = (ulong)(*param_3 & 0xf);
          uVar10 = (uint)(*param_3 >> 4);
          if (uVar10 == 0) {
            iVar26 = param_3[1] - 8;
            if (iVar26 < 0) {
              bVar5 = param_3[2];
              iVar26 = param_3[1] + 0xf8;
              uVar10 = 3;
              pbVar24 = param_3 + 3;
              while( true ) {
                uVar11 = (uint)bVar5;
                iVar14 = uVar11 - 8;
                if (-1 < iVar14) break;
                bVar5 = *pbVar24;
                uVar13 = uVar10 & 0x1f;
                uVar10 = uVar10 + 3;
                iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
                pbVar24 = pbVar24 + 1;
              }
              iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
            }
            else {
              pbVar24 = param_3 + 2;
            }
            iVar26 = iVar26 + 0xf;
          }
          else {
            iVar26 = uVar10 - 1;
          }
          uVar10 = iVar26 + 0xd;
          pbVar16 = param_1 + uVar9;
          sVar25 = (size_t)(int)uVar10;
          if (pbVar16 + sVar25 <= param_1) {
            if (0 < (int)uVar10) {
              iVar26 = 0;
              do {
                iVar14 = iVar26 + 8;
                *(undefined8 *)(param_1 + iVar26) = *(undefined8 *)(pbVar16 + iVar26);
                iVar26 = iVar14;
              } while (iVar14 < (int)uVar10);
            }
            goto LAB_0013240c;
          }
          if (param_1 + -1 != pbVar16) {
            if (uVar10 != 0) {
              pbVar17 = param_1;
              if ((uVar10 & 7) != 0) {
                lVar19 = 0;
                do {
                  param_1[lVar19] = pbVar16[lVar19];
                  lVar19 = lVar19 + 1;
                } while ((iVar26 + 5U & 7) != (uint)lVar19);
                uVar10 = uVar10 - (uint)lVar19;
                pbVar16 = pbVar16 + lVar19;
                pbVar17 = param_1 + lVar19;
              }
              if (6 < iVar26 + 0xcU) {
                do {
                  *pbVar17 = *pbVar16;
                  pbVar17[1] = pbVar16[1];
                  pbVar17[2] = pbVar16[2];
                  pbVar17[3] = pbVar16[3];
                  pbVar17[4] = pbVar16[4];
                  pbVar17[5] = pbVar16[5];
                  pbVar17[6] = pbVar16[6];
                  pbVar20 = pbVar16 + 7;
                  uVar10 = uVar10 - 8;
                  pbVar16 = pbVar16 + 8;
                  pbVar17[7] = *pbVar20;
                  pbVar17 = pbVar17 + 8;
                } while (uVar10 != 0);
              }
            }
            goto LAB_0013240c;
          }
LAB_00132318:
          memset(param_1,(uint)*pbVar16,sVar25);
          param_1 = param_1 + sVar25;
          uVar10 = (uint)uVar28;
          goto joined_r0x00131d14;
        }
        uVar10 = (uint)uVar28;
        if (uVar11 != 4) {
          *(undefined4 *)param_1 = *(undefined4 *)(param_1 + uVar9);
          param_1 = param_1 + (ulong)(bVar5 >> 4) + 1;
          goto joined_r0x00132798;
        }
        if (uVar10 == 0) {
          uVar10 = (uint)param_3[1];
          if ((int)(uVar10 - 8) < 0) {
            bVar5 = param_3[2];
            iVar26 = uVar10 + 0xf8;
            uVar10 = 3;
            param_3 = param_3 + 3;
            while( true ) {
              uVar11 = (uint)bVar5;
              iVar14 = uVar11 - 8;
              if (-1 < iVar14) break;
              bVar5 = *param_3;
              uVar13 = uVar10 & 0x1f;
              uVar10 = uVar10 + 3;
              iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
              param_3 = param_3 + 1;
            }
            iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26 + 0x14;
            if (0 < iVar26) {
LAB_00132388:
              iVar14 = 0;
              do {
                iVar1 = iVar14 + 8;
                *(undefined8 *)(param_1 + iVar14) = *(undefined8 *)(param_1 + (long)iVar14 + uVar9);
                iVar14 = iVar1;
              } while (iVar1 < iVar26);
            }
LAB_001323a8:
            param_1 = param_1 + iVar26;
            goto LAB_001319a0;
          }
          param_3 = param_3 + 2;
          iVar26 = uVar10 + 0xc;
        }
        else {
          iVar26 = uVar10 + 4;
          param_3 = pbVar24;
        }
        if (iVar26 == 0) goto LAB_001323a8;
        goto LAB_00132388;
      }
      bVar5 = *pbVar24;
      pbVar17 = (byte *)((long)pbVar24 + 1);
      uVar10 = bVar5 & 0xf;
      lVar19 = (ulong)(bVar5 >> 4) - 8;
      pbVar16 = pbVar17 + -(lVar19 >> 0x3f);
      pbVar24 = pbVar16 + 1;
      uVar9 = ((ulong)((uint)(bVar5 >> 4) * 0x100 + 0x800 & 0xf00) | (ulong)*pbVar17) +
              ((ulong)((uint)(lVar19 >> 0x3f) & *pbVar16 - 4) & 0xff) * 0x800;
      if (0x7e7ff < uVar9) {
        uVar11 = 0xd;
        pbVar16 = pbVar24;
        do {
          pbVar24 = pbVar16 + 1;
          bVar3 = *pbVar16;
          uVar13 = bVar3 + 0xfc & 0xff;
          uVar18 = uVar11 & 0x1f;
          uVar11 = uVar11 + 2;
          uVar9 = uVar9 + (long)(int)(uVar13 << (ulong)uVar18);
          pbVar16 = pbVar24;
        } while (uVar13 == bVar3 + 0xfc);
        uVar9 = (ulong)(int)uVar9;
      }
      uVar9 = ~uVar9;
      if (uVar8 != 0xf) {
        iVar26 = uVar8 + -5;
        pbVar16 = (byte *)((long)param_1 + uVar9);
        lVar19 = (long)iVar26;
        if (param_1 < pbVar16 + lVar19) {
          *param_1 = *pbVar16;
          *(byte *)((long)param_1 + 1) = pbVar16[1];
          *(byte *)((long)param_1 + 2) = pbVar16[2];
          *(byte *)((long)param_1 + 3) = pbVar16[3];
          if (4 < iVar26) {
            *(byte *)((long)param_1 + 4) = pbVar16[4];
            *(byte *)((long)param_1 + 5) = pbVar16[5];
            *(byte *)((long)param_1 + 6) = pbVar16[6];
            *(byte *)((long)param_1 + 7) = pbVar16[7];
            if (8 < iVar26) {
              *(byte *)((long)param_1 + 8) = pbVar16[8];
              *(byte *)((long)param_1 + 9) = pbVar16[9];
              *(byte *)((long)param_1 + 10) = pbVar16[10];
              *(byte *)((long)param_1 + 0xb) = pbVar16[0xb];
              *(byte *)((long)param_1 + 0xc) = pbVar16[0xc];
              *(byte *)((long)param_1 + 0xd) = pbVar16[0xd];
              *(byte *)((long)param_1 + 0xe) = pbVar16[0xe];
              param_1 = (byte *)((long)param_1 + lVar19);
              uVar28 = (ulong)uVar10;
              goto joined_r0x00131d14;
            }
          }
        }
        else {
          *(undefined8 *)param_1 = *(undefined8 *)pbVar16;
          if (8 < iVar26) {
            *(undefined8 *)((long)param_1 + 8) = *(undefined8 *)(pbVar16 + 8);
          }
        }
        param_1 = (byte *)((long)param_1 + lVar19);
joined_r0x00131d14:
        uVar28 = (ulong)uVar10;
joined_r0x00131d14:
        uVar8 = (undefined4)uVar28;
        goto joined_r0x00132798;
      }
      if ((bVar5 & 0xf) == 0) {
        param_3 = pbVar24 + 1;
        iVar26 = *pbVar24 - 8;
        if (iVar26 < 0) {
          bVar5 = pbVar24[1];
          iVar26 = *pbVar24 + 0xf8;
          uVar10 = 3;
          param_3 = pbVar24 + 2;
          while( true ) {
            uVar11 = (uint)bVar5;
            iVar14 = uVar11 - 8;
            if (-1 < iVar14) break;
            bVar5 = *param_3;
            uVar13 = uVar10 & 0x1f;
            uVar10 = uVar10 + 3;
            iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
            param_3 = param_3 + 1;
          }
          iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
        }
        iVar26 = iVar26 + 0xf;
      }
      else {
        iVar26 = uVar10 - 1;
        param_3 = pbVar24;
      }
      uVar10 = iVar26 + 10;
      pbVar24 = (byte *)((long)param_1 + uVar9);
      sVar25 = (size_t)(int)uVar10;
      if (param_1 < pbVar24 + sVar25) {
        if ((byte *)((long)param_1 + -1) == pbVar24) {
          memset(param_1,(uint)*pbVar24,sVar25);
          param_1 = (byte *)((long)param_1 + sVar25);
          goto LAB_001319a0;
        }
        if (uVar10 != 0) {
          pbVar16 = param_1;
          if ((uVar10 & 7) != 0) {
            lVar19 = 0;
            do {
              *(byte *)((long)param_1 + lVar19) = pbVar24[lVar19];
              lVar19 = lVar19 + 1;
            } while ((iVar26 + 2U & 7) != (uint)lVar19);
            uVar10 = uVar10 - (uint)lVar19;
            pbVar24 = pbVar24 + lVar19;
            pbVar16 = (byte *)((long)param_1 + lVar19);
          }
          if (6 < iVar26 + 9U) {
            do {
              *pbVar16 = *pbVar24;
              pbVar16[1] = pbVar24[1];
              pbVar16[2] = pbVar24[2];
              pbVar16[3] = pbVar24[3];
              pbVar16[4] = pbVar24[4];
              pbVar16[5] = pbVar24[5];
              pbVar16[6] = pbVar24[6];
              pbVar17 = pbVar24 + 7;
              uVar10 = uVar10 - 8;
              pbVar24 = pbVar24 + 8;
              pbVar16[7] = *pbVar17;
              pbVar16 = pbVar16 + 8;
            } while (uVar10 != 0);
          }
        }
      }
      else if (0 < (int)uVar10) {
        iVar26 = 0;
        do {
          lVar19 = (long)iVar26;
          iVar26 = iVar26 + 8;
          *(undefined8 *)((long)param_1 + lVar19) = *(undefined8 *)(pbVar24 + lVar19);
        } while (iVar26 < (int)uVar10);
      }
      param_1 = (byte *)((long)param_1 + sVar25);
      goto LAB_001319a0;
    }
    iVar26 = iVar26 + -5;
    pbVar24 = param_1 + uVar9;
    if (param_1 < pbVar24 + iVar26) {
      *param_1 = *pbVar24;
      param_1[1] = pbVar24[1];
      param_1[2] = pbVar24[2];
      param_1[3] = pbVar24[3];
      if (4 < iVar26) {
        param_1[4] = pbVar24[4];
        param_1[5] = pbVar24[5];
        param_1[6] = pbVar24[6];
        param_1[7] = pbVar24[7];
        if (8 < iVar26) {
          param_1[8] = pbVar24[8];
          param_1[9] = pbVar24[9];
          param_1[10] = pbVar24[10];
          param_1[0xb] = pbVar24[0xb];
          param_1[0xc] = pbVar24[0xc];
          param_1[0xd] = pbVar24[0xd];
          param_1[0xe] = pbVar24[0xe];
        }
      }
LAB_00131c70:
      param_1 = param_1 + iVar26;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)pbVar24;
      if (iVar26 < 9) goto LAB_00131c70;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(pbVar24 + 8);
      param_1 = param_1 + iVar26;
    }
  } while( true );
code_r0x00132b24:
  if (uVar10 != 0) {
    pbVar17 = param_1;
    if ((uVar10 & 7) != 0) {
      lVar19 = 0;
      do {
        param_1[lVar19] = pbVar16[lVar19];
        lVar19 = lVar19 + 1;
      } while ((iVar26 + 5U & 7) != (uint)lVar19);
      uVar10 = uVar10 - (uint)lVar19;
      pbVar16 = pbVar16 + lVar19;
      pbVar17 = param_1 + lVar19;
    }
    if (6 < iVar26 + 0xcU) {
      do {
        *pbVar17 = *pbVar16;
        pbVar17[1] = pbVar16[1];
        pbVar17[2] = pbVar16[2];
        pbVar17[3] = pbVar16[3];
        pbVar17[4] = pbVar16[4];
        pbVar17[5] = pbVar16[5];
        pbVar17[6] = pbVar16[6];
        pbVar20 = pbVar16 + 7;
        uVar10 = uVar10 - 8;
        pbVar16 = pbVar16 + 8;
        pbVar17[7] = *pbVar20;
        pbVar17 = pbVar17 + 8;
      } while (uVar10 != 0);
    }
  }
  goto LAB_00132ce8;
LAB_001326e8:
  if (uVar11 != 4) {
    *(undefined4 *)param_1 = *(undefined4 *)(param_1 + uVar9);
    param_1 = param_1 + (uVar11 + 1);
    goto LAB_001319a0;
  }
  pbVar24 = param_3 + 1;
  bVar5 = *param_3 >> 4;
  if (bVar5 == 0) {
    iVar26 = param_3[1] - 8;
    if (iVar26 < 0) {
      bVar5 = param_3[2];
      iVar26 = param_3[1] + 0xf8;
      uVar10 = 3;
      pbVar24 = param_3 + 3;
      while( true ) {
        uVar11 = (uint)bVar5;
        iVar14 = uVar11 - 8;
        if (-1 < iVar14) break;
        bVar5 = *pbVar24;
        uVar13 = uVar10 & 0x1f;
        uVar10 = uVar10 + 3;
        iVar26 = (uVar11 + 0xf8 << (ulong)uVar13) + iVar26;
        pbVar24 = pbVar24 + 1;
      }
      iVar26 = (iVar14 << (ulong)(uVar10 & 0x1f)) + iVar26;
    }
    else {
      pbVar24 = param_3 + 2;
    }
    iVar26 = iVar26 + 0xf;
  }
  else {
    iVar26 = bVar5 - 1;
  }
  uVar10 = *param_3 & 0xf;
  uVar28 = (ulong)uVar10;
  iVar26 = iVar26 + 5;
  if (0 < iVar26) {
    iVar14 = 0;
    do {
      iVar1 = iVar14 + 8;
      *(undefined8 *)(param_1 + iVar14) = *(undefined8 *)(param_1 + (long)iVar14 + uVar9);
      iVar14 = iVar1;
    } while (iVar1 < iVar26);
  }
  param_1 = param_1 + iVar26;
  goto joined_r0x00132798;
}


