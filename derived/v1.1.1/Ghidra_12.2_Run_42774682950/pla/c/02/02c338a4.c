/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c338a4; name: FUN_02c338a4
 */


void FUN_02c338a4(long *param_1,long param_2,long param_3,uint param_4,byte param_5)

{
  char *pcVar1;
  ushort *puVar2;
  ushort *puVar3;
  long *plVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ushort *puVar10;
  long *plVar11;
  ushort uVar12;
  byte bVar13;
  ulong uVar14;
  long lVar15;
  byte *pbVar16;
  short *psVar17;
  ushort *puVar18;
  ushort uVar19;
  uint uVar20;
  ulong uVar21;
  undefined2 uVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  ushort *puVar26;
  ulong uVar27;
  undefined1 uVar28;
  ushort *puVar29;
  undefined1 uVar30;
  ushort uVar31;
  ushort *puVar32;
  ushort local_70 [2];
  ushort local_6c [2];
  undefined4 local_68;
  byte local_64 [4];
  
  pcVar1 = (char *)(param_2 + 0x7c);
  puVar2 = (ushort *)(param_2 + 0x7a);
  puVar3 = (ushort *)(param_2 + 0x78);
  plVar4 = (long *)(param_2 + 0x58);
  puVar10 = *(ushort **)(param_3 + 0x58);
LAB_02c338f0:
  uVar19 = *puVar10;
  if (uVar19 != 0x10) {
    if (uVar19 == 0) {
      return;
    }
    local_70[0] = uVar19;
    if ((param_5 & 1) == 0) {
      param_5 = 0;
LAB_02c339a0:
      if (*pcVar1 == '\0') goto LAB_02c338ec;
LAB_02c339a8:
      uVar19 = *puVar2;
      if ((uint)*puVar3 <= uVar19 + 1) {
        if ((local_70[0] == 0) && (uVar19 + 1 == (uint)*puVar3)) {
          *puVar2 = uVar19 + 1;
          *(undefined2 *)(*plVar4 + (ulong)uVar19 * 2) = 0;
        }
        goto LAB_02c338ec;
      }
      *puVar2 = uVar19 + 1;
      *(ushort *)(*plVar4 + (ulong)uVar19 * 2) = local_70[0];
      *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
      puVar10 = puVar10 + 1;
    }
    else {
      param_5 = 1;
      if ((uVar19 == 0x1b) || (uVar19 - 0x11 < 10)) goto LAB_02c339a0;
      puVar8 = (undefined8 *)FUN_00d1603c();
      uVar9 = *puVar8;
      *(undefined8 *)PTR_DAT_0437b198 = uVar9;
      FUN_02c2d3b0(uVar9,local_70);
      param_5 = 0;
      if (*pcVar1 != '\0') goto LAB_02c339a8;
LAB_02c338ec:
      puVar10 = puVar10 + 1;
    }
    goto LAB_02c338f0;
  }
  uVar19 = puVar10[2];
  switch(uVar19) {
  case 0x10a:
  case 0x10b:
  case 0x110:
switchD_02c33974_caseD_10a:
    puVar10 = (ushort *)FUN_02c345bc(param_1,param_2,puVar10,param_4 & 1,param_5 & 1);
    param_5 = 0;
    goto LAB_02c338f0;
  default:
    if (((uVar19 >> 8) - 1 & 0xff) < 2) goto switchD_02c33974_caseD_10a;
    break;
  case 0x114:
    puVar18 = puVar10 + 1;
    puVar10 = puVar10 + (ulong)*puVar18 + 2;
    uVar19 = 0x10;
    if (*pcVar1 != '\0') goto LAB_02c33a60;
LAB_02c33abc:
    puVar32 = puVar18;
    if (puVar18 < puVar10) {
      while( true ) {
        puVar18 = puVar32 + 1;
        uVar19 = *puVar32;
        if (*pcVar1 == '\0') break;
LAB_02c33a60:
        uVar31 = *puVar2;
        if ((uint)*puVar3 <= uVar31 + 1) {
          if ((uVar19 == 0) && (uVar31 + 1 == (uint)*puVar3)) {
            *puVar2 = uVar31 + 1;
            *(undefined2 *)(*plVar4 + (ulong)uVar31 * 2) = 0;
          }
          break;
        }
        *puVar2 = uVar31 + 1;
        *(ushort *)(*plVar4 + (ulong)uVar31 * 2) = uVar19;
        *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
        puVar32 = puVar18;
        if (puVar10 <= puVar18) goto LAB_02c338f0;
      }
      goto LAB_02c33abc;
    }
    goto LAB_02c338f0;
  }
  if (uVar19 == 0x1900) {
    if (puVar10[1] < 2) {
      uVar14 = 0;
    }
    else {
      uVar14 = (ulong)puVar10[3];
      if (7 < puVar10[3]) goto switchD_02c33d24_default;
    }
    uVar19 = *(ushort *)(param_1 + 0x25);
    if ((uVar19 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
      uVar24 = (int)(uVar19 - 0xac00) % 0x1c;
      uVar20 = uVar24 & 0xfffffff7;
      if ((int)uVar14 != 5) {
        uVar20 = uVar24;
      }
      uVar20 = (uint)(uVar20 != 0);
    }
    else {
      uVar20 = uVar19 - 0x30;
      if (uVar20 < 10) {
        uVar24 = 0x49;
        if ((int)uVar14 != 5) {
          uVar24 = 0x1cb;
        }
        uVar20 = uVar24 >> (ulong)(uVar20 & 0x1f) & 1;
      }
      else {
        uVar20 = 0;
      }
    }
    sVar6 = (&DAT_038885a0)[(ulong)uVar20 * 8 + uVar14];
    if ((sVar6 != 0) && (*pcVar1 != '\0')) {
      uVar19 = *puVar2;
      if (uVar19 + 1 < (uint)*puVar3) {
        *puVar2 = uVar19 + 1;
        *(short *)(*plVar4 + (ulong)uVar19 * 2) = sVar6;
LAB_02c33c94:
        *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
      }
    }
  }
  else {
    uVar31 = uVar19 & 0xff00;
    if (uVar31 == 0x1100) {
      uVar31 = puVar10[1];
      uVar14 = (ulong)uVar31;
      if ((uVar14 == 0) || (uVar31 == 1)) goto LAB_02c338f0;
      if ((ushort)(uVar31 - 1) < 4) {
        uVar12 = puVar10[3];
        uVar24 = (ushort)(uVar31 - 1) - 1;
        uVar7 = FUN_02c35a14(param_1);
        uVar23 = uVar7 >> 0x12 & 7;
        uVar20 = 0;
        if (uVar23 != 2) {
          uVar20 = uVar23;
        }
        if ((uVar19 & 0xff) < 7) {
          uVar23 = uVar7 & 3;
          switch((ulong)uVar19 & 0xff) {
          case 1:
            uVar23 = uVar20;
            break;
          case 2:
            uVar23 = uVar23 + uVar20 * 2;
            break;
          case 3:
            uVar7 = 3;
            if (uVar20 != 1) {
              uVar7 = uVar23;
            }
            uVar23 = uVar7;
            break;
          case 4:
            puVar8 = (undefined8 *)FUN_00d1603c();
            *(undefined8 *)PTR_DAT_0437b198 = *puVar8;
            puVar32 = *(ushort **)(*(long *)(param_1[0x13] + (ulong)uVar12 * 0x18) + 0x58);
            puVar8 = (undefined8 *)FUN_00d1603c();
            *(undefined8 *)PTR_DAT_0437b198 = *puVar8;
            lVar15 = 2;
            puVar18 = puVar32 + 1;
            if (*puVar32 != 0x1b && 9 < *puVar32 - 0x11) {
              lVar15 = 0;
              puVar18 = puVar32;
            }
            uVar19 = *(ushort *)((long)puVar32 + lVar15);
            if ((0xff < uVar19) ||
               (uVar23 = 1,
               (*(uint *)(&DAT_038884e0 + (ulong)(uVar19 >> 5) * 4) & 1 << (ulong)(uVar19 & 0x1f))
               == 0)) {
              if ((uVar19 | 0x20) == 0x79) {
                uVar19 = puVar18[1];
                uVar23 = 1;
                if ((0xff < uVar19) ||
                   ((*(uint *)(&DAT_038884e0 + (ulong)(uVar19 >> 5) * 4) &
                    1 << (ulong)(uVar19 & 0x1f)) == 0)) break;
              }
LAB_02c3421c:
              uVar23 = 0;
            }
            break;
          case 5:
            if ((uVar7 & 0x200000) != 0) {
              uVar20 = 2;
            }
            uVar23 = uVar20;
            break;
          case 6:
            puVar18 = *(ushort **)(*(long *)(param_1[0x13] + (ulong)uVar12 * 0x18) + 0x58);
            uVar19 = *puVar18;
            if (uVar19 == 0) {
LAB_02c34224:
              uVar23 = 1;
            }
            else {
              do {
                if (uVar19 == 0x38) {
                  uVar31 = 0x38;
                  puVar26 = (ushort *)&UNK_03a75924;
                  puVar32 = puVar18;
                  do {
                    if (uVar31 == 0x10) {
                      puVar29 = puVar32 + 1;
                      uVar14 = (ulong)*puVar29;
                      lVar15 = uVar14 * 2 + 4;
                      puVar32 = puVar32 + uVar14 + 2;
                      while (lVar15 != 0) {
                        puVar26 = puVar26 + 1;
                        lVar15 = lVar15 + -2;
                        uVar31 = *puVar29;
                        puVar29 = puVar29 + 1;
                        if (uVar31 != *puVar26) goto LAB_02c341fc;
                      }
                      uVar31 = *puVar32;
                    }
                    if (uVar31 == 0) goto LAB_02c3421c;
                    puVar32 = puVar32 + 1;
                    uVar31 = *puVar32;
                    puVar26 = puVar26 + 1;
                  } while (uVar31 == *puVar26);
                }
                else if (uVar19 == 0x31) {
                  uVar31 = 0x31;
                  puVar26 = (ushort *)&UNK_03a75868;
                  puVar32 = puVar18;
                  do {
                    if (uVar31 == 0x10) {
                      puVar29 = puVar32 + 1;
                      uVar14 = (ulong)*puVar29;
                      lVar15 = uVar14 * 2 + 4;
                      puVar32 = puVar32 + uVar14 + 2;
                      while (lVar15 != 0) {
                        puVar26 = puVar26 + 1;
                        lVar15 = lVar15 + -2;
                        uVar31 = *puVar29;
                        puVar29 = puVar29 + 1;
                        if (uVar31 != *puVar26) goto LAB_02c341fc;
                      }
                      uVar31 = *puVar32;
                    }
                    if (uVar31 == 0) goto LAB_02c3421c;
                    puVar32 = puVar32 + 1;
                    uVar31 = *puVar32;
                    puVar26 = puVar26 + 1;
                  } while (uVar31 == *puVar26);
                }
LAB_02c341fc:
                if (uVar19 != 0x30) goto LAB_02c34224;
                puVar18 = puVar18 + 1;
                uVar19 = *puVar18;
                uVar23 = 1;
              } while (uVar19 != 0);
            }
          }
        }
        else {
          uVar23 = 0;
        }
        if (uVar24 * 2 <= uVar23) {
          uVar23 = 0;
        }
        uVar14 = (ulong)uVar23;
        local_68 = 0;
        if (uVar24 != 0) {
          uVar19 = *puVar10;
          uVar20 = 1;
          uVar21 = 0;
          do {
            uVar27 = uVar21 + 1;
            if (uVar19 == 0x10) {
              if (puVar10[1] == 0) {
                uVar28 = 0;
                uVar30 = 0;
              }
              else {
                if (puVar10[1] - 1 <= (uint)uVar27) goto LAB_02c3424c;
                uVar28 = (undefined1)puVar10[(int)uVar21 + 4];
                uVar30 = (undefined1)(puVar10[(int)uVar21 + 4] >> 8);
              }
            }
            else {
LAB_02c3424c:
              uVar28 = 0;
              uVar30 = 0;
            }
            *(undefined1 *)((long)&local_68 + (ulong)(uVar20 - 1)) = uVar28;
            *(undefined1 *)((long)&local_68 + (ulong)uVar20) = uVar30;
            uVar20 = uVar20 + 2;
            uVar21 = uVar27;
            if (uVar24 == uVar27) {
              if (uVar19 == 0x10) {
                puVar10 = puVar10 + (ulong)puVar10[1] + 2;
              }
              uVar21 = 0;
              if (uVar14 == 0) goto LAB_02c342e4;
              do {
                puVar10 = puVar10 + *(byte *)((long)&local_68 + uVar21);
                while( true ) {
                  uVar21 = uVar21 + 1;
                  if (uVar24 * 2 <= uVar21) goto LAB_02c338f0;
                  if (uVar21 != uVar14) break;
LAB_02c342e4:
                  uVar20 = (uint)*(byte *)((long)&local_68 + uVar14);
                  if (*(byte *)((long)&local_68 + uVar14) != 0) {
                    do {
                      if (*pcVar1 != '\0') {
                        uVar19 = *puVar2;
                        uVar27 = (ulong)uVar19;
                        uVar31 = *puVar10;
                        if (uVar19 + 1 < (uint)*puVar3) {
                          *puVar2 = uVar19 + 1;
                          *(ushort *)(*plVar4 + uVar27 * 2) = uVar31;
                          uVar27 = (ulong)*puVar2;
                        }
                        else {
                          if ((uVar31 != 0) || (uVar19 + 1 != (uint)*puVar3)) goto LAB_02c3430c;
                          *puVar2 = uVar19 + 1;
                        }
                        *(undefined2 *)(*plVar4 + uVar27 * 2) = 0;
                      }
LAB_02c3430c:
                      puVar10 = puVar10 + 1;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                }
              } while( true );
            }
          } while( true );
        }
        goto switchD_02c33d24_default;
      }
      goto LAB_02c34590;
    }
    if (((uVar19 >> 8) - 0x11 & 0xff) < 8) {
      uVar31 = puVar10[1];
      if (uVar31 < 2) {
        uVar12 = 0;
        if (uVar31 != 0) goto LAB_02c33ca8;
LAB_02c33cbc:
        uVar31 = 0;
      }
      else {
        uVar12 = puVar10[3];
LAB_02c33ca8:
        if (uVar31 - 1 < 2) goto LAB_02c33cbc;
        uVar31 = puVar10[4];
      }
      local_64[0] = 0;
      uVar20 = FUN_02c35bdc(param_1,uVar12,local_64);
      if ((uVar31 == 0) && (local_64[0] != 0)) {
        plVar11 = (long *)FUN_00d1603c();
        lVar15 = *plVar11;
        *(long *)PTR_DAT_0437b198 = lVar15;
        if (*(int *)(lVar15 + 0x238) == 4) {
          switch(uVar19 & 0xff) {
          case 4:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < *puVar3) {
                *puVar2 = (ushort)uVar20;
                lVar15 = *plVar4;
                uVar22 = 100;
LAB_02c34378:
                *(undefined2 *)(lVar15 + uVar14 * 2) = uVar22;
                *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
                if (*pcVar1 == '\0') break;
                uVar14 = (ulong)*puVar2;
                uVar20 = *puVar2 + 1;
                uVar24 = (uint)*puVar3;
              }
LAB_02c3439c:
              if (uVar20 < uVar24) {
                *puVar2 = (short)uVar14 + 1;
                lVar15 = *plVar4;
                uVar22 = 0x69;
                goto LAB_02c3453c;
              }
LAB_02c34560:
              if (uVar20 < uVar24) {
                *puVar2 = (short)uVar14 + 1;
                *(undefined2 *)(*plVar4 + uVar14 * 2) = 0x20;
                goto LAB_02c33c94;
              }
            }
            break;
          case 5:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < *puVar3) {
                *puVar2 = (ushort)uVar20;
                lVar15 = *plVar4;
                uVar22 = 0x44;
                goto LAB_02c34378;
              }
              goto LAB_02c3439c;
            }
            break;
          case 6:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < uVar24) {
                *puVar2 = (ushort)uVar20;
                lVar15 = *plVar4;
                uVar22 = 0x73;
LAB_02c3440c:
                *(undefined2 *)(lVar15 + uVar14 * 2) = uVar22;
                *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
                if (*pcVar1 == '\0') break;
                uVar14 = (ulong)*puVar2;
                uVar20 = *puVar2 + 1;
                uVar24 = (uint)*puVar3;
              }
LAB_02c34430:
              if (uVar20 < uVar24) {
                *puVar2 = (short)uVar14 + 1;
                lVar15 = *plVar4;
                uVar22 = 0x75;
                goto LAB_02c3453c;
              }
              goto LAB_02c34560;
            }
            break;
          case 7:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < uVar24) {
                *puVar2 = (ushort)uVar20;
                lVar15 = *plVar4;
                uVar22 = 0x53;
                goto LAB_02c3440c;
              }
              goto LAB_02c34430;
            }
            break;
          case 8:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar24 <= uVar20) goto LAB_02c34560;
              *puVar2 = (ushort)uVar20;
              *(undefined2 *)(*plVar4 + uVar14 * 2) = 0x61;
LAB_02c34540:
              *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
              if (*pcVar1 != '\0') {
                uVar14 = (ulong)*puVar2;
                uVar20 = *puVar2 + 1;
                uVar24 = (uint)*puVar3;
                goto LAB_02c34560;
              }
            }
            break;
          case 9:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < uVar24) {
                *puVar2 = (ushort)uVar20;
                *(undefined2 *)(*plVar4 + uVar14 * 2) = 0x41;
                goto LAB_02c34540;
              }
              goto LAB_02c34560;
            }
            break;
          case 10:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < uVar24) {
                *puVar2 = (ushort)uVar20;
                lVar15 = *plVar4;
                uVar22 = 0x69;
LAB_02c34500:
                *(undefined2 *)(lVar15 + uVar14 * 2) = uVar22;
                *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
                if (*pcVar1 == '\0') break;
                uVar14 = (ulong)*puVar2;
                uVar20 = *puVar2 + 1;
                uVar24 = (uint)*puVar3;
              }
LAB_02c34524:
              if (uVar24 <= uVar20) goto LAB_02c34560;
              *puVar2 = (short)uVar14 + 1;
              lVar15 = *plVar4;
              uVar22 = 0x6e;
LAB_02c3453c:
              *(undefined2 *)(lVar15 + uVar14 * 2) = uVar22;
              goto LAB_02c34540;
            }
            break;
          case 0xb:
            if (*pcVar1 != '\0') {
              uVar14 = (ulong)*puVar2;
              uVar20 = *puVar2 + 1;
              uVar24 = (uint)*puVar3;
              if (uVar20 < uVar24) {
                *puVar2 = (ushort)uVar20;
                lVar15 = *plVar4;
                uVar22 = 0x49;
                goto LAB_02c34500;
              }
              goto LAB_02c34524;
            }
          }
        }
      }
      else {
        plVar11 = (long *)FUN_00d1603c();
        lVar15 = *plVar11;
        *(long *)PTR_DAT_0437b198 = lVar15;
        pbVar25 = (byte *)&DAT_03a759e8;
        pbVar16 = *(byte **)(*(long *)(lVar15 + (ulong)*(uint *)(lVar15 + 0x238) * 0x30 + 0x58) +
                            0x250);
        if ((uVar19 & 0xff) <= (ushort)*pbVar16) {
          pbVar25 = (byte *)&DAT_03a759e8;
          if (uVar20 <= pbVar16[1]) {
            uVar14 = (ulong)uVar19 & 0xff;
            pbVar25 = pbVar16 + (ulong)pbVar16[(ulong)(uVar20 + (uint)pbVar16[1] * (int)uVar14) +
                                               (ulong)*pbVar16 * 2 + 2] +
                                (ulong)*(ushort *)(pbVar16 + uVar14 * 2 + 2);
          }
        }
        sVar6 = *(short *)pbVar25;
        if (sVar6 != 0) {
          cVar5 = *pcVar1;
          do {
            pbVar25 = pbVar25 + 2;
            if (cVar5 == '\0') {
LAB_02c33e04:
              sVar6 = *(short *)pbVar25;
            }
            else {
              uVar19 = *puVar2;
              if ((uint)*puVar3 <= uVar19 + 1) goto LAB_02c33e04;
              *puVar2 = uVar19 + 1;
              *(short *)(*plVar4 + (ulong)uVar19 * 2) = sVar6;
              *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
              sVar6 = *(short *)pbVar25;
            }
            if (sVar6 == 0) break;
            cVar5 = *pcVar1;
          } while( true );
        }
      }
      goto switchD_02c33d24_default;
    }
    if (uVar31 == 0x1000) {
      uVar31 = uVar19 & 0xff;
      param_5 = uVar31 == 3;
      if (uVar31 == 2) {
        *(ushort *)((long)param_1 + 300) = *(ushort *)((long)param_1 + 300) & 0xfffc;
        *(ushort *)((long)param_1 + 0x134) = *(ushort *)((long)param_1 + 0x134) | 3;
      }
      else {
        if (uVar31 == 1) {
          bVar13 = *(byte *)((long)param_1 + 0x12e) & 0xe7 | 4;
        }
        else {
          if ((uVar19 & 0xff) != 0) goto switchD_02c33d24_default;
          bVar13 = *(byte *)((long)param_1 + 0x12e) & 0xe3;
        }
        *(byte *)((long)param_1 + 0x12e) = bVar13;
        *(byte *)((long)param_1 + 0x136) = *(byte *)((long)param_1 + 0x136) | 0x1c;
      }
      goto switchD_02c33d24_default;
    }
    if (uVar31 != 0x6400) {
      puVar18 = puVar10 + (ulong)puVar10[1] + 2;
      do {
        local_6c[0] = *puVar10;
        if ((param_5 & 1) == 0) {
          param_5 = 0;
LAB_02c33edc:
          cVar5 = *pcVar1;
        }
        else {
          param_5 = 1;
          if ((local_6c[0] == 0x1b) || (local_6c[0] - 0x11 < 10)) goto LAB_02c33edc;
          puVar8 = (undefined8 *)FUN_00d1603c();
          uVar9 = *puVar8;
          *(undefined8 *)PTR_DAT_0437b198 = uVar9;
          FUN_02c2d3b0(uVar9,local_6c);
          param_5 = 0;
          cVar5 = *pcVar1;
        }
        if (cVar5 != '\0') {
          uVar19 = *puVar2;
          if (uVar19 + 1 < (uint)*puVar3) {
            *puVar2 = uVar19 + 1;
            *(ushort *)(*plVar4 + (ulong)uVar19 * 2) = local_6c[0];
            *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
          }
          else if ((local_6c[0] == 0) && (uVar19 + 1 == (uint)*puVar3)) {
            *puVar2 = uVar19 + 1;
            *(undefined2 *)(*plVar4 + (ulong)uVar19 * 2) = 0;
          }
        }
        puVar10 = puVar10 + 1;
      } while (puVar10 < puVar18);
      puVar10 = puVar18;
      goto LAB_02c338f0;
    }
    if (puVar10[1] < 2) {
      uVar19 = 0;
    }
    else {
      uVar19 = puVar10[3];
    }
    (**(code **)(*param_1 + 0x50))(param_1,param_1[0xd],uVar19);
    psVar17 = *(short **)(param_1[0xd] + 0x58);
    sVar6 = *psVar17;
    if (sVar6 != 0) {
      cVar5 = *pcVar1;
      do {
        psVar17 = psVar17 + 1;
        if (cVar5 == '\0') {
LAB_02c33f90:
          sVar6 = *psVar17;
        }
        else {
          uVar19 = *puVar2;
          if ((uint)*puVar3 <= uVar19 + 1) goto LAB_02c33f90;
          *puVar2 = uVar19 + 1;
          *(short *)(*plVar4 + (ulong)uVar19 * 2) = sVar6;
          *(undefined2 *)(*plVar4 + (ulong)*puVar2 * 2) = 0;
          sVar6 = *psVar17;
        }
        if (sVar6 == 0) break;
        cVar5 = *pcVar1;
      } while( true );
    }
  }
switchD_02c33d24_default:
  if (*puVar10 != 0x10) goto LAB_02c338f0;
  uVar14 = (ulong)puVar10[1];
LAB_02c34590:
  puVar10 = puVar10 + uVar14 + 2;
  goto LAB_02c338f0;
}


