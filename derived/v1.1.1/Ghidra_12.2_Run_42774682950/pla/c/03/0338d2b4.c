/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338d2b4; name: FUN_0338d2b4
 */


/* WARNING: Removing unreachable block (ram,0x0338dac0) */

void FUN_0338d2b4(int *param_1,ulong *param_2,ulong param_3,undefined8 param_4,int param_5)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  char *pcVar14;
  long lVar15;
  undefined8 *puVar16;
  char *pcVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  short *psVar21;
  short *psVar22;
  long lVar23;
  ulong *puVar24;
  uint uVar25;
  long *plVar26;
  long *plVar27;
  uint uVar28;
  uint *puVar29;
  long *plVar30;
  ulong *puVar31;
  long *plVar32;
  long *local_1f0;
  long local_1e0;
  long local_1d8;
  long *local_1d0;
  undefined8 local_1c8;
  int local_1bc;
  undefined1 auStack_1b8 [344];
  
  puVar7 = PTR_PTR_0434a080;
  if ((param_3 & 1) != 0) {
    return;
  }
  if (param_1[0x4e] == 1) {
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_0338d980;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_1b8,&DAT_044508b0,1);
      lVar15 = FUN_03326338(auStack_1b8,"Types cannot be added to when using a compendium.",
                            PTR_DAT_04372528);
      uVar13 = 0x78e;
LAB_0338d974:
      *(char **)(lVar15 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar15 + 0x40) = uVar13;
      FUN_033269dc(auStack_1b8);
      goto LAB_0338d980;
    }
    FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
    lVar15 = FUN_03326338(auStack_1b8,"Types cannot be added to when using a compendium.",
                          PTR_DAT_04372528);
    uVar13 = 0x78e;
  }
  else {
    uVar28 = param_1[6];
    uVar25 = param_1[0x1a];
    uVar19 = uVar28;
    if ((int)uVar28 < 2) {
      uVar19 = 1;
    }
    if ((int)uVar19 <= (int)uVar25) {
      puVar29 = (uint *)(param_1 + 7);
      uVar19 = *puVar29;
      if ((int)(uVar19 & 0x3fffffff) < (int)uVar25) {
        uVar13 = *(undefined8 *)(param_1 + 4);
        if (0x3fffffff < (int)uVar25) {
          FUN_032bd0a8(uVar25);
          uVar19 = *puVar29;
        }
        uVar19 = (uVar19 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar19) {
          uVar19 = 0x3fffffff;
        }
        uVar2 = uVar25;
        if ((int)uVar25 <= (int)uVar19) {
          uVar2 = uVar19;
        }
        uVar13 = FUN_032bd1d4(puVar7,uVar2,8,uVar13,uVar28,puVar29);
        uVar28 = param_1[6];
        *(undefined8 *)(param_1 + 4) = uVar13;
        if ((int)uVar28 < (int)uVar25) goto LAB_0338d324;
LAB_0338d7e8:
        if ((int)uVar28 <= (int)uVar25) goto LAB_0338d348;
        param_1[6] = uVar25;
        if (param_5 == 0) goto LAB_0338d7f4;
LAB_0338d34c:
        pcVar10 = (char *)*param_2;
        pcVar14 = (char *)param_2[1];
      }
      else {
        if ((int)uVar25 <= (int)uVar28) goto LAB_0338d7e8;
LAB_0338d324:
        param_1[6] = uVar25;
        memset((void *)(*(long *)(param_1 + 4) + (long)(int)uVar28 * 8),0,
               (ulong)(uVar25 + ~uVar28) * 8 + 8);
LAB_0338d348:
        if (param_5 != 0) goto LAB_0338d34c;
LAB_0338d7f4:
        pcVar10 = (char *)(*param_2 + *(long *)(param_1 + 0x72));
        pcVar14 = (char *)param_2[1];
        if (pcVar14 < pcVar10) {
          *param_2 = (ulong)pcVar14;
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
LAB_0338d81c:
          *param_1 = -0x7ffbfe00;
LAB_0338d828:
          if (DAT_04450900 == '\0') {
            if (DAT_04350668 == '\0') {
              return;
            }
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1b8,&DAT_044508b0,1);
            lVar15 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
            *(char **)(lVar15 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar15 + 0x40) = 0x79b;
            FUN_033269dc(auStack_1b8);
            return;
          }
          FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
          lVar15 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
          *(char **)(lVar15 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar15 + 0x40) = 0x79b;
          FUN_03326adc(auStack_1b8);
          return;
        }
        *param_2 = (ulong)pcVar10;
        if ((char)param_2[3] != '\0') goto LAB_0338d81c;
        if (*param_1 < 0) goto LAB_0338d828;
      }
      puVar31 = param_2 + 1;
      iVar12 = param_1[0x82];
      local_1d0 = (long *)0x0;
      local_1c8 = -0x8000000000000000;
      local_1bc = iVar12;
      if ((long)pcVar10 < (long)pcVar14) {
        plVar27 = (long *)0x0;
        local_1f0 = (long *)0x0;
        plVar26 = (long *)0x0;
        plVar30 = (long *)0x0;
        plVar32 = (long *)0x0;
        uVar28 = 0;
        uVar25 = 0;
        do {
          uVar19 = uVar25;
          if (*pcVar10 == '\0') break;
          if (iVar12 < 1) {
            if (DAT_04450900 == '\0') {
              if (DAT_04350668 == '\0') goto LAB_0338da24;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(auStack_1b8,&DAT_044508b0,1);
              lVar15 = FUN_03326338(auStack_1b8,
                                    "Too many type bodies actually present in bundle compared to what expected ({})."
                                    ,&DAT_0411b3b8,&local_1bc);
              *(char **)(lVar15 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              *(undefined8 *)(lVar15 + 0x40) = 0x7a5;
              goto LAB_0338da1c;
            }
            FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
            lVar15 = FUN_03326338(auStack_1b8,
                                  "Too many type bodies actually present in bundle compared to what expected ({})."
                                  ,&DAT_0411b3b8,&local_1bc);
            *(char **)(lVar15 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar15 + 0x40) = 0x7a5;
            goto LAB_0338dd18;
          }
          FUN_03381e74(param_1,param_2,&local_1d8,&local_1e0);
          if ((char)param_2[3] != '\0') {
            *param_1 = -0x7ffbfe00;
LAB_0338db34:
            if (DAT_04450900 == '\0') {
              if (DAT_04350668 == '\0') goto LAB_0338d600;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(auStack_1b8,&DAT_044508b0,1);
              lVar15 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
              uVar13 = 0x7a9;
              goto LAB_0338da90;
            }
            FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
            lVar15 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
            uVar13 = 0x7a9;
            goto LAB_0338dcbc;
          }
          if (*param_1 < 0) goto LAB_0338db34;
          if ((char)local_1e0 == '\0') {
            uVar25 = uVar19;
          }
          else {
            uVar19 = local_1c8._4_4_;
            uVar25 = uVar28 + 1;
            if ((int)uVar28 < (int)(local_1c8._4_4_ & 0x3fffffff)) {
            }
            else {
              if (0x3ffffffe < (int)uVar28) {
                FUN_032bd0a8(uVar25);
              }
              uVar19 = (uVar19 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar19) {
                uVar19 = 0x3fffffff;
              }
              uVar2 = uVar25;
              if ((int)uVar25 <= (int)uVar19) {
                uVar2 = uVar19;
              }
              plVar26 = (long *)FUN_032bd1d4(PTR_PTR_0434a090,uVar2,8,plVar30,uVar28,
                                             (long)&local_1c8 + 4);
              plVar27 = plVar26;
              plVar30 = plVar26;
              plVar32 = plVar26;
              uVar28 = (uint)local_1c8;
              local_1f0 = plVar26;
              local_1d0 = plVar26;
            }
            plVar32[(int)uVar28] = local_1d8;
            local_1c8 = CONCAT44(local_1c8._4_4_,uVar25);
            uVar28 = uVar25;
          }
          uVar19 = uVar28;
          iVar12 = param_1[0x82] + -1;
          param_1[0x82] = iVar12;
          pcVar10 = (char *)*param_2;
          uVar28 = uVar19;
        } while ((long)pcVar10 < (long)*puVar31);
        iVar12 = *param_1;
      }
      else {
        plVar27 = (long *)0x0;
        local_1f0 = (long *)0x0;
        uVar19 = 0;
        plVar26 = (long *)0x0;
        iVar12 = *param_1;
      }
      if (iVar12 < 0) goto LAB_0338d600;
      if (param_1[0x4e] == 2) {
        *(ulong *)(param_1 + 0x54) = param_2[2];
        *(char **)(param_1 + 0x56) = pcVar10;
        iVar12 = param_1[0x2a];
        if (iVar12 != 0) goto LAB_0338d4a0;
LAB_0338d9a0:
        iVar12 = 0;
        iVar9 = 0;
      }
      else {
        iVar12 = param_1[0x2a];
        if (iVar12 == 0) goto LAB_0338d9a0;
LAB_0338d4a0:
        puVar18 = *(undefined8 **)(param_1 + 0x28);
        lVar15 = *(long *)(param_1 + 4);
        iVar3 = param_1[6];
        iVar9 = 0;
        puVar16 = (undefined8 *)0x0;
        puVar20 = puVar18 + (long)iVar12 * 2 + -2;
LAB_0338d4dc:
        do {
          if ((*(int *)(puVar20 + 1) < iVar3) &&
             (lVar23 = *(long *)(lVar15 + (long)*(int *)(puVar20 + 1) * 8), lVar23 != 0)) {
            iVar9 = iVar9 + 1;
            *(long *)*puVar20 = lVar23;
            if (puVar16 != (undefined8 *)0x0) {
              if (puVar20 != puVar16) {
                uVar13 = puVar16[1];
                *puVar20 = *puVar16;
                puVar20[1] = uVar13;
              }
              puVar18 = puVar20 + 2;
              puVar20 = puVar16 + -2;
              puVar16 = (undefined8 *)0x0;
              iVar12 = iVar12 + -1;
              if (iVar12 == 0) break;
              goto LAB_0338d4dc;
            }
            puVar8 = puVar20 + -2;
            puVar20 = puVar16;
          }
          else {
            puVar8 = puVar18;
            if (puVar16 != (undefined8 *)0x0) {
              puVar8 = puVar20 + 2;
              puVar20 = puVar16;
            }
          }
          puVar16 = puVar20;
          puVar20 = puVar8;
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        iVar12 = param_1[0x2a];
      }
      param_1[0x2a] = iVar12 - iVar9;
      if (uVar19 != 0) {
        plVar30 = plVar26 + (int)uVar19;
        do {
          uVar19 = (uint)*(undefined8 *)*plVar26;
          if ((uVar19 >> 0x17 & 1) == 0) {
            psVar21 = (short *)0x0;
            sVar5 = sRam0000000000000000;
          }
          else {
            uVar19 = (uVar19 & 0x7fffff) - (uVar19 >> 1 & 0x155555);
            uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
            psVar21 = (short *)((undefined8 *)*plVar26)
                               [(ulong)((uVar19 + (uVar19 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) +
                                2];
            sVar5 = *psVar21;
          }
          if ((long)sVar5 != 0) {
            psVar22 = psVar21 + 4;
            do {
              puVar18 = *(undefined8 **)psVar22;
              uVar19 = (uint)*puVar18;
              if ((uVar19 >> 0x14 & 1) != 0) {
                uVar19 = (uVar19 & 0xfffff) - (uVar19 >> 1 & 0x55555);
                uVar19 = (uVar19 >> 2 & 0x33333333) + (uVar19 & 0x33333333);
                puVar24 = (ulong *)puVar18[1];
                do {
                  uVar25 = (uint)*puVar24;
                  if ((uVar25 >> 0x14 & 1) != 0) {
                    uVar11 = 0;
                    if (puVar24 != (ulong *)0x0) {
                      uVar25 = (uVar25 & 0xfffff) - (uVar25 >> 1 & 0x55555);
                      uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
                      uVar11 = (ulong)(ushort)puVar24[(ulong)((uVar25 + (uVar25 >> 4) & 0xf0f0f0f) *
                                                              0x1010101 >> 0x18) + 2];
                    }
                    goto LAB_0338d6d8;
                  }
                  if ((*puVar24 & 1) != 0) {
                    uVar11 = 0;
                    goto LAB_0338d6d8;
                  }
                  puVar24 = (ulong *)puVar24[1];
                } while (puVar24 != (ulong *)0x0);
                uVar11 = 0;
LAB_0338d6d8:
                puVar18[(ulong)((uVar19 + (uVar19 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] =
                     uVar11 | (ulong)*(ushort *)
                                      ((long)(puVar18 +
                                             (ulong)((uVar19 + (uVar19 >> 4) & 0xf0f0f0f) *
                                                     0x1010101 >> 0x18) + 2) + 2) << 0x10;
              }
              psVar22 = psVar22 + 4;
            } while (psVar22 != psVar21 + (long)sVar5 * 4 + 4);
          }
          plVar26 = plVar26 + 1;
        } while (plVar26 != plVar30);
      }
      pcVar14 = (char *)*param_2;
      pcVar10 = (char *)*puVar31;
      if ((long)pcVar10 - (long)pcVar14 < 4) {
        pcVar17 = pcVar14;
LAB_0338d564:
        do {
          if (pcVar10 == pcVar17) {
            if ((char)param_2[3] == '\0') {
              if (-1 < *param_1) {
                if (param_5 == 0) {
                  *(ulong *)(param_1 + 0x72) = (long)pcVar14 - param_2[2];
                }
                goto LAB_0338d600;
              }
            }
            else {
              *param_1 = -0x7ffbfe00;
            }
            if (DAT_04450900 == '\0') {
              if (DAT_04350668 == '\0') goto LAB_0338d600;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(auStack_1b8,&DAT_044508b0,1);
              lVar15 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
              uVar13 = 0x7e3;
LAB_0338da90:
              *(char **)(lVar15 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
              ;
              *(undefined8 *)(lVar15 + 0x40) = uVar13;
              FUN_033269dc(auStack_1b8);
              goto LAB_0338d600;
            }
            FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
            lVar15 = FUN_03326338(auStack_1b8,"Error in input stream.",PTR_DAT_04372528);
            uVar13 = 0x7e3;
LAB_0338dcbc:
            *(char **)(lVar15 + 0x38) =
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar15 + 0x40) = uVar13;
            FUN_03326adc(auStack_1b8);
            goto LAB_0338d600;
          }
          pcVar1 = pcVar17 + 1;
          if (pcVar10 < pcVar1) {
            *param_2 = (ulong)pcVar10;
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
            pcVar17 = pcVar10;
            goto LAB_0338d564;
          }
          cVar4 = *pcVar17;
          *param_2 = (ulong)pcVar1;
          pcVar17 = pcVar1;
        } while (cVar4 == '\0');
        if (DAT_04450900 == '\0') {
          if (DAT_04350668 == '\0') goto LAB_0338da24;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_1b8,&DAT_044508b0,1);
          lVar15 = FUN_03326338(auStack_1b8,
                                "Found non-zero byte in padding of type body section (TBOD/TBDY).",
                                PTR_DAT_04372528);
          *(char **)(lVar15 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar15 + 0x40) = 0x7e1;
          uVar6 = 0x68bf09d3;
          goto LAB_0338da18;
        }
        FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
        lVar15 = FUN_03326338(auStack_1b8,
                              "Found non-zero byte in padding of type body section (TBOD/TBDY).",
                              PTR_DAT_04372528);
        *(char **)(lVar15 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar15 + 0x40) = 0x7e1;
        uVar6 = 0x68bf09d3;
LAB_0338dd14:
        *(undefined4 *)(lVar15 + 0x1c) = uVar6;
LAB_0338dd18:
        FUN_03326adc(auStack_1b8);
      }
      else if (DAT_04450900 == '\0') {
        if (DAT_04350668 != '\0') goto LAB_0338dc24;
      }
      else {
        if (DAT_04350668 != '\0') {
LAB_0338dc24:
          FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
          local_1e0 = *puVar31 - *param_2;
          lVar15 = FUN_03326338(auStack_1b8,
                                "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                                ,&DAT_0436efb8,&local_1e0);
          *(char **)(lVar15 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar15 + 0x40) = 0x7dc;
          uVar6 = 0x16964161;
          goto LAB_0338dd14;
        }
        FUN_03326994(auStack_1b8,&DAT_044508b0,1);
        local_1d8 = *puVar31 - *param_2;
        lVar15 = FUN_03326338(auStack_1b8,
                              "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                              ,&DAT_0436efb8,&local_1d8);
        *(char **)(lVar15 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
        ;
        *(undefined8 *)(lVar15 + 0x40) = 0x7dc;
        uVar6 = 0x16964161;
LAB_0338da18:
        *(undefined4 *)(lVar15 + 0x1c) = uVar6;
LAB_0338da1c:
        FUN_033269dc(auStack_1b8);
      }
LAB_0338da24:
      *param_1 = -0x7ffbfe00;
LAB_0338d600:
      lVar15 = local_1c8;
      uVar11 = (ulong)local_1c8._4_4_;
      local_1c8 = (ulong)local_1c8._4_4_ << 0x20;
      if (lVar15 < 0) {
        return;
      }
      if (local_1f0 == (long *)0x0) {
        return;
      }
      (**(code **)(*(long *)PTR_PTR_0434a090 + 0x18))
                (PTR_PTR_0434a090,plVar27,(uVar11 & 0x3fffffff) << 3);
      return;
    }
    if (DAT_04450900 == '\0') {
      if (DAT_04350668 == '\0') goto LAB_0338d980;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(auStack_1b8,&DAT_044508b0,1);
      lVar15 = FUN_03326338(auStack_1b8,"Cannot remove types while deserializing.",PTR_DAT_04372528)
      ;
      uVar13 = 0x793;
      goto LAB_0338d974;
    }
    FUN_03326a7c(auStack_1b8,&DAT_044508b0,1);
    lVar15 = FUN_03326338(auStack_1b8,"Cannot remove types while deserializing.",PTR_DAT_04372528);
    uVar13 = 0x793;
  }
  *(char **)(lVar15 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar15 + 0x40) = uVar13;
  FUN_03326adc(auStack_1b8);
LAB_0338d980:
  *param_1 = -0x7ffbfe00;
  return;
}


