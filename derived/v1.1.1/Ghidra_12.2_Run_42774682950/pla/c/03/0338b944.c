/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338b944; name: FUN_0338b944
 */


void FUN_0338b944(int *param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  byte *pbVar11;
  undefined4 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  ulong *puVar21;
  int iVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  undefined8 local_1e0;
  byte *local_1d8;
  byte *local_1d0;
  uint local_1c8;
  uint local_1c4;
  undefined8 local_1c0;
  undefined *local_1b8;
  byte **local_1b0;
  byte **ppbStack_1a8;
  byte *local_70 [2];
  
  iVar22 = param_1[0x1a];
  lVar25 = (long)iVar22;
  uVar5 = FUN_03384ab0(param_2);
  puVar4 = PTR_PTR_0434a080;
  if (uVar5 >> 0x1f == 0) {
    if (*(byte *)(param_2 + 3) != 0) goto LAB_0338bf50;
    if (-1 < *param_1) {
      iVar18 = (int)uVar5;
      if (iVar18 < iVar22) {
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0338c194;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1c0,&DAT_044508b0,1);
          lVar25 = FUN_03326338(&local_1c0,"Cannot remove types.",PTR_DAT_04372528);
          uVar23 = 0x86e;
LAB_0338c188:
          *(char **)(lVar25 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar25 + 0x40) = uVar23;
          FUN_033269dc(&local_1c0);
          goto LAB_0338c194;
        }
        FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
        lVar25 = FUN_03326338(&local_1c0,"Cannot remove types.",PTR_DAT_04372528);
        uVar23 = 0x86e;
      }
      else {
        if (iVar22 == iVar18) {
          return;
        }
        iVar19 = iVar18 - iVar22;
        lVar20 = (long)iVar19;
        if (lVar20 <= param_2[1] - *param_2) {
          puVar26 = (uint *)(param_1 + 0x1b);
          uVar7 = *puVar26;
          if ((int)(uVar7 & 0x3fffffff) < iVar18) {
            uVar23 = *(undefined8 *)(param_1 + 0x18);
            iVar8 = param_1[0x1a];
            if (0x3fffffff < iVar18) {
              FUN_032bd0a8(uVar5 & 0xffffffff);
              uVar7 = *puVar26;
            }
            uVar7 = (uVar7 & 0x3fffffff) << 1;
            uVar9 = (ulong)uVar7;
            if (0x3ffffffe < uVar7) {
              uVar9 = 0x3fffffff;
            }
            uVar5 = uVar5 & 0xffffffff;
            if (iVar18 <= (int)uVar9) {
              uVar5 = uVar9;
            }
            uVar23 = FUN_032bd1d4(puVar4,uVar5,8,uVar23,iVar8,puVar26);
            *(undefined8 *)(param_1 + 0x18) = uVar23;
          }
          uVar7 = param_1[0x1a];
          if ((int)uVar7 < iVar18) {
            param_1[0x1a] = iVar18;
            memset((void *)(*(long *)(param_1 + 0x18) + (long)(int)uVar7 * 8),0,
                   (ulong)(~uVar7 + iVar18) * 8 + 8);
          }
          else if (iVar18 < (int)uVar7) {
            param_1[0x1a] = iVar18;
          }
          if ((param_1[0x4e] == 2) && (uVar7 = param_1[0x53] & 0x3fffffff, (int)uVar7 < iVar18)) {
            lVar13 = *(long *)(param_1 + 0x50);
            uVar3 = param_1[0x52];
            uVar5 = (ulong)uVar3;
            local_1d0 = (byte *)CONCAT44(local_1d0._4_4_,iVar18);
            local_1d8 = (byte *)CONCAT44(local_1d8._4_4_,0x18);
            local_70[0] = (byte *)(((long)iVar18 + (long)iVar18 * 2) * 8);
            if (iVar18 < 0) {
              local_1c0 = 2;
              local_1b8 = &DAT_0411b3a0;
              local_1b0 = &local_1d0;
              ppbStack_1a8 = &local_1d8;
              FUN_03320b50(0x1bd2a77e,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x53,"Array size overflow {}*{}",&local_1c0);
              iVar8 = (int)local_1d0;
              if ((int)uVar7 <= (int)local_1d0) goto LAB_0338bc20;
LAB_0338bc2c:
              local_1c0 = 1;
              local_1b0 = &local_1d0;
              local_1b8 = &DAT_0411b3b8;
              FUN_03320b50(0x65816502,
                           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                           ,0x5a,"Invalid requestedCapacity {}",&local_1c0);
            }
            else {
              iVar8 = iVar18;
              if (iVar18 < (int)uVar7) goto LAB_0338bc2c;
LAB_0338bc20:
              if (0x3fffffff < iVar8) goto LAB_0338bc2c;
            }
            uVar7 = param_1[0x53];
            lVar14 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_70[0],local_70);
            if (0 < (int)uVar3) {
              lVar24 = 0;
              uVar9 = uVar5;
              do {
                puVar6 = (undefined8 *)(lVar13 + lVar24);
                puVar15 = (undefined8 *)(lVar14 + lVar24);
                *puVar15 = *puVar6;
                puVar15[1] = 0;
                puVar15[2] = 0x8000000000000000;
                if (*(int *)((long)puVar6 + 0x14) < 0) {
                  FUN_0338cbf4(puVar4,puVar6 + 1);
                }
                puVar15[1] = puVar6[1];
                *(undefined4 *)(puVar15 + 2) = *(undefined4 *)(puVar6 + 2);
                uVar9 = uVar9 - 1;
                lVar24 = lVar24 + 0x18;
                *(undefined4 *)((long)puVar15 + 0x14) = *(undefined4 *)((long)puVar6 + 0x14);
                puVar6[1] = 0;
                puVar6[2] = 0;
              } while (uVar9 != 0);
              puVar26 = (uint *)(lVar13 + 0x14);
              do {
                puVar26[-1] = 0;
                if ((-1 < (int)*puVar26) && (*(long *)(puVar26 + -3) != 0)) {
                  (**(code **)(*(long *)puVar4 + 0x18))
                            (puVar4,*(long *)(puVar26 + -3),((ulong)*puVar26 & 0x3fffffff) << 4);
                }
                puVar26[-3] = 0;
                puVar26[-2] = 0;
                uVar5 = uVar5 - 1;
                *puVar26 = 0x80000000;
                puVar26 = puVar26 + 6;
              } while (uVar5 != 0);
            }
            if (-1 < (int)uVar7) {
              (**(code **)(*(long *)puVar4 + 0x18))
                        (puVar4,lVar13,((ulong)uVar7 & 0x3fffffff) * 0x18);
            }
            if (local_70[0] < (byte *)0x5ffffffe8) {
              iVar8 = (int)((ulong)local_70[0] / 0x18);
            }
            else {
              iVar8 = 0x3fffffff;
            }
            param_1[0x53] = iVar8;
            *(long *)(param_1 + 0x50) = lVar14;
          }
          local_70[0] = (byte *)CONCAT44(local_70[0]._4_4_,0x38);
          plVar2 = (long *)(param_1 + 0x2c);
          local_1d0 = (byte *)CONCAT44(local_1d0._4_4_,iVar19);
          if ((ulong)(lVar20 * 0x38) >> 0x1f != 0) {
            local_1c0 = 2;
            local_1b8 = &DAT_0411b3a0;
            local_1b0 = local_70;
            ppbStack_1a8 = &local_1d0;
            FUN_03320b50(0x2f29d85e,
                         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                         ,0x57,"Memory allocation request overflow {}*{}",&local_1c0);
          }
          puVar6 = (undefined8 *)
                   (**(code **)(*plVar2 + 0x10))(plVar2,lVar20 * 0x3800000000 >> 0x20,0);
          if (iVar22 < iVar18) {
            lVar20 = lVar25;
            do {
              puVar6[2] = 1;
              puVar6[3] = 0;
              *(int *)(puVar6 + 6) = (int)lVar20;
              puVar6[4] = 0;
              puVar6[5] = 0;
              *puVar6 = &DAT_00100001;
              puVar6[1] = 0;
              *(undefined8 **)(*(long *)(param_1 + 0x18) + lVar20 * 8) = puVar6;
              lVar20 = lVar20 + 1;
              puVar6 = puVar6 + 7;
            } while (iVar18 != lVar20);
          }
          param_1[0x82] = param_1[0x82] + iVar19;
          if (param_3 != 0) {
LAB_0338baf8:
            if (iVar18 <= iVar22) {
              return;
            }
            do {
              puVar21 = *(ulong **)(*(long *)(param_1 + 0x18) + lVar25 * 8);
              uVar5 = FUN_03384ab0(param_2);
              local_1c4 = (uint)uVar5;
              if (uVar5 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0338ca6c:
                *param_1 = -0x7ffbfe00;
LAB_0338ca78:
                if (DAT_04450900 == '\0') {
                  if (DAT_04350668 == '\0') {
                    return;
                  }
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1c0,&DAT_044508b0,1);
                  lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                  uVar23 = 0x8a4;
                  goto LAB_0338c168;
                }
                FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                uVar23 = 0x8a4;
                goto LAB_0338c158;
              }
              if (*(byte *)(param_2 + 3) != 0) goto LAB_0338ca6c;
              if (*param_1 < 0) goto LAB_0338ca78;
              if (param_1[0x4e] == 2) {
                iVar19 = param_1[0x52];
                lVar20 = *(long *)(param_1 + 0x50);
                iVar22 = iVar19 + 1;
                if ((int)(param_1[0x53] & 0x3fffffffU) <= iVar19) {
                  lVar20 = FUN_0338cccc(puVar4,iVar22,lVar20,iVar19,param_1 + 0x53);
                  *(long *)(param_1 + 0x50) = lVar20;
                  iVar19 = param_1[0x52];
                  uVar5 = (ulong)local_1c4;
                }
                puVar12 = (undefined4 *)(lVar20 + (long)iVar19 * 0x18);
                *puVar12 = (int)uVar5;
                puVar12[1] = 1;
                *(undefined8 *)(puVar12 + 2) = 0;
                *(undefined8 *)(puVar12 + 4) = 0x8000000000000000;
                param_1[0x52] = iVar22;
                uVar5 = (ulong)local_1c4;
                if (local_1c4 != 0xffffffff) goto LAB_0338c1e8;
              }
              else {
LAB_0338c1e8:
                if (param_1[0x1e] <= (int)uVar5) {
                  if (DAT_04450900 == '\0') {
                    if (DAT_04350668 == '\0') goto LAB_0338c194;
                  }
                  else if (DAT_04350668 == '\0') {
                    FUN_03326994(&local_1c0,&DAT_044508b0,1);
                    lVar25 = FUN_03326338(&local_1c0,
                                          "Invalid type name string ID #{} (out of bounds).",
                                          &DAT_0411b3b8,&local_1c4);
                    uVar23 = 0x8b2;
                    goto LAB_0338c188;
                  }
                  FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                  lVar25 = FUN_03326338(&local_1c0,
                                        "Invalid type name string ID #{} (out of bounds).",
                                        &DAT_0411b3b8,&local_1c4);
                  uVar23 = 0x8b2;
                  goto LAB_0338c178;
                }
                pcVar10 = *(char **)(*(long *)(param_1 + 0x1c) + (long)(int)uVar5 * 8);
                if (*pcVar10 != '\0') {
                  *puVar21 = *puVar21 | 8;
                  puVar21[3] = (ulong)pcVar10;
                }
              }
              uVar5 = FUN_03384ab0(param_2);
              if (uVar5 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0338c9c0:
                *param_1 = -0x7ffbfe00;
LAB_0338c9cc:
                if (DAT_04450900 == '\0') {
                  if (DAT_04350668 == '\0') {
                    return;
                  }
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1c0,&DAT_044508b0,1);
                  lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                  uVar23 = 0x8bd;
                  goto LAB_0338c168;
                }
                FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                uVar23 = 0x8bd;
                goto LAB_0338c158;
              }
              if (*(byte *)(param_2 + 3) != 0) goto LAB_0338c9c0;
              if (*param_1 < 0) goto LAB_0338c9cc;
              iVar22 = (int)uVar5;
              if (0 < iVar22) {
                lVar20 = param_2[1] - *param_2;
                if (lVar20 < 0) {
                  lVar20 = lVar20 + 1;
                }
                if (lVar20 >> 1 < (long)iVar22) {
                  if (DAT_04450900 == '\0') {
                    if (DAT_04350668 == '\0') goto LAB_0338c194;
                  }
                  else if (DAT_04350668 == '\0') {
                    FUN_03326994(&local_1c0,&DAT_044508b0,1);
                    lVar25 = FUN_03326338(&local_1c0,"Invalid template",PTR_DAT_04372528);
                    uVar23 = 0x8c0;
                    goto LAB_0338c188;
                  }
                  FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                  lVar25 = FUN_03326338(&local_1c0,"Invalid template",PTR_DAT_04372528);
                  uVar23 = 0x8c0;
                  goto LAB_0338c178;
                }
                pbVar11 = (byte *)((uVar5 & 0xffffffff) * 0x10);
                puVar6 = (undefined8 *)
                         (**(code **)(*(long *)(param_1 + 0x2c) + 0x10))(plVar2,pbVar11 + 0x10,0);
                *puVar6 = 0;
                puVar6[1] = (long)iVar22;
                *puVar21 = *puVar21 | 0x8000;
                puVar21[4] = (ulong)puVar6;
                if (param_1[0x4e] == 2) {
                  lVar20 = *(long *)(param_1 + 0x50) + ((long)param_1[0x52] + -1) * 0x18;
                  puVar26 = (uint *)(lVar20 + 0x14);
                  if ((int)(*puVar26 & 0x3fffffff) < iVar22) {
                    plVar16 = (long *)(lVar20 + 8);
                    lVar20 = *plVar16;
                    uVar7 = *(uint *)(*(long *)(param_1 + 0x50) + ((long)param_1[0x52] + -1) * 0x18
                                     + 0x10);
                    uVar5 = (ulong)uVar7;
                    local_1d0 = (byte *)CONCAT44(local_1d0._4_4_,iVar22);
                    local_70[0] = pbVar11;
                    if (0x3fffffff < iVar22) {
                      local_1c0 = 1;
                      local_1b0 = &local_1d0;
                      local_1b8 = &DAT_0411b3b8;
                      FUN_03320b50(0x65816502,
                                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                                   ,0x5a,"Invalid requestedCapacity {}",&local_1c0);
                    }
                    uVar3 = *puVar26;
                    lVar13 = (**(code **)(*(long *)puVar4 + 0x10))(puVar4,local_70[0],local_70);
                    if (0 < (int)uVar7) {
                      uVar9 = uVar5 & 3;
                      if (uVar5 - 1 < 3) {
                        lVar14 = 0;
                      }
                      else {
                        lVar14 = 0;
                        puVar15 = (undefined8 *)(lVar13 + 0x20);
                        puVar17 = (undefined8 *)(lVar20 + 0x20);
                        do {
                          uVar23 = puVar17[-3];
                          lVar14 = lVar14 + 4;
                          puVar15[-4] = puVar17[-4];
                          puVar15[-3] = uVar23;
                          uVar23 = puVar17[-1];
                          puVar15[-2] = puVar17[-2];
                          puVar15[-1] = uVar23;
                          uVar23 = puVar17[1];
                          *puVar15 = *puVar17;
                          puVar15[1] = uVar23;
                          puVar1 = puVar17 + 2;
                          uVar23 = puVar17[3];
                          puVar17 = puVar17 + 8;
                          puVar15[2] = *puVar1;
                          puVar15[3] = uVar23;
                          puVar15 = puVar15 + 8;
                        } while (uVar5 - uVar9 != lVar14);
                      }
                      if ((uVar7 & 3) != 0) {
                        puVar15 = (undefined8 *)(lVar20 + lVar14 * 0x10);
                        puVar17 = (undefined8 *)(lVar13 + lVar14 * 0x10);
                        do {
                          uVar23 = puVar15[1];
                          uVar9 = uVar9 - 1;
                          *puVar17 = *puVar15;
                          puVar17[1] = uVar23;
                          puVar15 = puVar15 + 2;
                          puVar17 = puVar17 + 2;
                        } while (uVar9 != 0);
                      }
                    }
                    if (-1 < (int)uVar3) {
                      (**(code **)(*(long *)puVar4 + 0x18))
                                (puVar4,lVar20,((ulong)uVar3 & 0x3fffffff) << 4);
                    }
                    if (local_70[0] < (byte *)0x3fffffff0) {
                      uVar7 = (uint)((ulong)local_70[0] >> 4);
                    }
                    else {
                      uVar7 = 0x3fffffff;
                    }
                    *puVar26 = uVar7;
                    *plVar16 = lVar13;
                  }
                }
                lVar20 = puVar6[1] << 4;
                if (lVar20 != 0) {
                  puVar6 = puVar6 + 3;
                  do {
                    uVar5 = FUN_03384ab0(param_2);
                    if (uVar5 >> 0x1f != 0) {
                      *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
                    }
                    local_1c8 = (uint)uVar5;
                    local_70[0] = (byte *)FUN_03384ab0(param_2);
                    if ((char)param_2[3] != '\0') {
                      *param_1 = -0x7ffbfe00;
LAB_0338c5a4:
                      if (DAT_04450900 == '\0') {
                        if (DAT_04350668 == '\0') {
                          return;
                        }
                      }
                      else if (DAT_04350668 == '\0') {
                        FUN_03326994(&local_1c0,&DAT_044508b0,1);
                        lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                        uVar23 = 0x8d1;
                        goto LAB_0338c168;
                      }
                      FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                      lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                      uVar23 = 0x8d1;
                      goto LAB_0338c158;
                    }
                    if (*param_1 < 0) goto LAB_0338c5a4;
                    if (param_1[0x4e] == 2) {
                      lVar13 = *(long *)(param_1 + 0x50) + (long)param_1[0x52] * 0x18;
                      iVar22 = *(int *)(lVar13 + -8);
                      plVar16 = (long *)(*(long *)(lVar13 + -0x10) + (long)iVar22 * 0x10);
                      *plVar16 = (long)(int)(uint)uVar5;
                      plVar16[1] = (long)local_70[0];
                      *(int *)(lVar13 + -8) = iVar22 + 1;
                      uVar5 = (ulong)local_1c8;
                    }
                    iVar22 = (int)uVar5;
                    local_1d0 = *(byte **)(*(long *)(param_1 + 0x1c) + (long)iVar22 * 8);
                    if ((iVar22 < 0) || (param_1[0x1e] <= iVar22)) {
                      if (DAT_04450900 == '\0') {
                        if (DAT_04350668 == '\0') goto LAB_0338c194;
                      }
                      else if (DAT_04350668 == '\0') {
                        FUN_03326994(&local_1c0,&DAT_044508b0,1);
                        local_1d8 = (byte *)FUN_032e239c(puVar21);
                        lVar25 = FUN_03326338(&local_1c0,
                                              "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                                              ,PTR_DAT_043894b8,&local_1c8,&local_1d8);
                        uVar23 = 0x8dc;
                        goto LAB_0338c188;
                      }
                      FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                      local_1e0 = FUN_032e239c(puVar21);
                      lVar25 = FUN_03326338(&local_1c0,
                                            "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                                            ,PTR_DAT_043894b8,&local_1c8,&local_1e0);
                      uVar23 = 0x8dc;
                      goto LAB_0338c178;
                    }
                    if ((*local_1d0 == 0) || (local_1d0[1] == 0)) {
                      if (DAT_04450900 == '\0') {
                        if (DAT_04350668 == '\0') goto LAB_0338c194;
                      }
                      else if (DAT_04350668 == '\0') {
                        FUN_03326994(&local_1c0,&DAT_044508b0,1);
                        local_1d8 = (byte *)FUN_032e239c(puVar21);
                        lVar25 = FUN_03326338(&local_1c0,
                                              "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'."
                                              ,&DAT_0436ef60,&local_1c8,&local_1d8,&local_1d0);
                        uVar23 = 0x8df;
                        goto LAB_0338c188;
                      }
                      FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                      local_1e0 = FUN_032e239c(puVar21);
                      lVar25 = FUN_03326338(&local_1c0,
                                            "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'."
                                            ,&DAT_0436ef60,&local_1c8,&local_1e0,&local_1d0);
                      uVar23 = 0x8df;
                      goto LAB_0338c178;
                    }
                    if ((*local_1d0 | 2) != 0x76) {
                      if (DAT_04450900 == '\0') {
                        if (DAT_04350668 == '\0') goto LAB_0338c194;
                      }
                      else if (DAT_04350668 == '\0') {
                        FUN_03326994(&local_1c0,&DAT_044508b0,1);
                        local_1d8 = (byte *)FUN_032e239c(puVar21);
                        lVar25 = FUN_03326338(&local_1c0,
                                              "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                                              ,&DAT_0436ef80,&local_1d0,&local_1d8,local_1d0);
                        uVar23 = 0x8e3;
                        goto LAB_0338c188;
                      }
                      FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                      local_1e0 = FUN_032e239c(puVar21);
                      lVar25 = FUN_03326338(&local_1c0,
                                            "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                                            ,&DAT_0436ef80,&local_1d0,&local_1e0,local_1d0);
                      uVar23 = 0x8e3;
                      goto LAB_0338c178;
                    }
                    *puVar6 = local_1d0;
                    pbVar11 = local_70[0];
                    if (*local_1d0 == 0x74) {
                      if ((local_70[0] == (byte *)0x0) ||
                         ((byte *)(long)param_1[0x1a] <= local_70[0])) {
                        if (DAT_04450900 == '\0') {
                          if (DAT_04350668 == '\0') goto LAB_0338c194;
                        }
                        else if (DAT_04350668 == '\0') {
                          FUN_03326994(&local_1c0,&DAT_044508b0,1);
                          local_1d8 = (byte *)FUN_032e239c(puVar21);
                          lVar25 = FUN_03326338(&local_1c0,
                                                "Invalid template type ID #{} (out of bounds) for type \'{}\'."
                                                ,&DAT_0436efa0,local_70,&local_1d8);
                          uVar23 = 0x8eb;
                          goto LAB_0338c188;
                        }
                        FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                        local_1e0 = FUN_032e239c(puVar21);
                        lVar25 = FUN_03326338(&local_1c0,
                                              "Invalid template type ID #{} (out of bounds) for type \'{}\'."
                                              ,&DAT_0436efa0,local_70,&local_1e0);
                        uVar23 = 0x8eb;
                        goto LAB_0338c178;
                      }
                      pbVar11 = *(byte **)(*(long *)(param_1 + 0x18) +
                                          (-((ulong)local_70[0] >> 0x1f & 1) & 0xfffffff800000000 |
                                          ((ulong)local_70[0] & 0xffffffff) << 3));
                    }
                    puVar6[-1] = pbVar11;
                    puVar6 = puVar6 + 2;
                    lVar20 = lVar20 + -0x10;
                  } while (lVar20 != 0);
                }
              }
              lVar25 = lVar25 + 1;
              if ((int)lVar25 == iVar18) {
                return;
              }
            } while( true );
          }
          if (1 < iVar22) {
            iVar19 = 1;
            do {
              FUN_03384ab0(param_2);
              uVar5 = FUN_03384ab0(param_2);
              if (uVar5 >> 0x1f != 0) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0338c068:
                *param_1 = -0x7ffbfe00;
LAB_0338c074:
                if (DAT_04450900 == '\0') {
                  if (DAT_04350668 == '\0') {
                    return;
                  }
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1c0,&DAT_044508b0,1);
                  lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                  uVar23 = 0x893;
                  goto LAB_0338c168;
                }
                FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
                lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
                uVar23 = 0x893;
                goto LAB_0338c158;
              }
              if (*(byte *)(param_2 + 3) != 0) goto LAB_0338c068;
              if (*param_1 < 0) goto LAB_0338c074;
              if (0 < (int)uVar5) {
                do {
                  FUN_03384ab0(param_2);
                  FUN_03384ab0(param_2);
                  uVar7 = (int)uVar5 - 1;
                  uVar5 = (ulong)uVar7;
                } while (uVar7 != 0);
              }
              iVar19 = iVar19 + 1;
            } while (iVar19 != iVar22);
          }
          if ((char)param_2[3] == '\0') {
            if (-1 < *param_1) goto LAB_0338baf8;
          }
          else {
            *param_1 = -0x7ffbfe00;
          }
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') {
              return;
            }
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(&local_1c0,&DAT_044508b0,1);
            lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
            uVar23 = 0x89a;
            goto LAB_0338c168;
          }
          FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
          lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
          uVar23 = 0x89a;
          goto LAB_0338c158;
        }
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0338c194;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1c0,&DAT_044508b0,1);
          lVar25 = FUN_03326338(&local_1c0,"More types than would fit in the section",
                                PTR_DAT_04372528);
          uVar23 = 0x875;
          goto LAB_0338c188;
        }
        FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
        lVar25 = FUN_03326338(&local_1c0,"More types than would fit in the section",PTR_DAT_04372528
                             );
        uVar23 = 0x875;
      }
LAB_0338c178:
      *(char **)(lVar25 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar25 + 0x40) = uVar23;
      FUN_03326adc(&local_1c0);
LAB_0338c194:
      *param_1 = -0x7ffbfe00;
      return;
    }
  }
  else {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
LAB_0338bf50:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04450900 == '\0') {
    if (DAT_04350668 == '\0') {
      return;
    }
  }
  else if (DAT_04350668 == '\0') {
    FUN_03326994(&local_1c0,&DAT_044508b0,1);
    lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
    uVar23 = 0x86b;
LAB_0338c168:
    *(char **)(lVar25 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
    ;
    *(undefined8 *)(lVar25 + 0x40) = uVar23;
    FUN_033269dc(&local_1c0);
    return;
  }
  FUN_03326a7c(&local_1c0,&DAT_044508b0,1);
  lVar25 = FUN_03326338(&local_1c0,"Error in input stream.",PTR_DAT_04372528);
  uVar23 = 0x86b;
LAB_0338c158:
  *(char **)(lVar25 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar25 + 0x40) = uVar23;
  FUN_03326adc(&local_1c0);
  return;
}


