/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b0ef4; name: FUN_032b0ef4
 */


undefined8 FUN_032b0ef4(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 *puVar19;
  uint uVar20;
  long lVar21;
  undefined4 *extraout_x15;
  undefined4 *puVar22;
  undefined8 uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *pbVar26;
  undefined4 local_280;
  undefined4 local_27c;
  byte *local_278;
  undefined8 local_270;
  undefined4 *local_268;
  undefined8 local_260;
  undefined1 auStack_258 [336];
  undefined8 local_108;
  undefined4 local_100;
  uint uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulong local_c8;
  char local_c0;
  char local_bf;
  uint local_bc;
  undefined4 local_b8;
  uint local_b4;
  int local_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  
  local_80 = 0;
  uVar23 = 0x80040200;
  local_88 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_033215ac(&local_a8);
  local_e8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  iVar8 = FUN_032b0600(&local_a8,&local_e8);
  if (iVar8 < 0) goto LAB_032b1014;
  uVar10 = local_e8._4_4_;
  uVar11 = (ulong)local_e8._4_4_;
  uVar5 = (uint)local_e0;
  FUN_032a6024(&local_108);
  local_108 = 0x100000001;
  local_100 = 1;
  uStack_fc = uVar10;
  local_f8 = uVar5;
  uStack_f4 = 1;
  local_f0 = local_b8;
  FUN_032a6078(param_3,&local_108);
  uVar9 = *(uint *)(param_3 + 0xc);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar9 = FUN_032b5574(*(undefined4 *)(param_3 + 0x18),uVar9);
  if (local_c0 == '\0') {
    uVar10 = FUN_032b5430(local_b8);
    if (uVar10 == local_bc) {
      lVar12 = (local_c8 & 0xffffffff) * 4;
      uVar11 = lVar12 + local_a8;
      if (uStack_a0 < lVar12 + local_a8) {
        lVar21 = FUN_033216d4(&local_a8,lVar12);
        uVar11 = local_a8;
        if (lVar21 != lVar12) {
          if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0))
          goto LAB_032b1014;
          uVar11 = FUN_03327170();
          if ((uVar11 & 1) != 0) {
            FUN_03326a7c(auStack_258,&DAT_04440908,1);
            lVar12 = FUN_03326338(auStack_258,"Failed to skip palette data.",PTR_DAT_04372528);
            uVar15 = 0x2fb;
            goto LAB_032b1c64;
          }
          FUN_03326994(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,"Failed to skip palette data.",PTR_DAT_04372528);
          uVar15 = 0x2fb;
          goto LAB_032b1008;
        }
      }
      do {
        local_a8 = uVar11;
        uVar5 = uVar5 - 1;
        if ((int)uVar5 < 0) goto LAB_032b1458;
        uVar15 = FUN_032a68ac(param_3,0,0,0,0,uVar5,0);
        uVar11 = FUN_032af29c(&local_a8,uVar15,(ulong)uVar9);
        if (uVar11 != uVar9) {
          if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0))
          goto LAB_032b1014;
          uVar11 = FUN_03327170();
          if ((uVar11 & 1) != 0) {
            FUN_03326a7c(auStack_258,&DAT_04440908,1);
            lVar12 = FUN_03326338(auStack_258,"Failed to read row data.",PTR_DAT_04372528);
            uVar15 = 0x304;
            goto LAB_032b1c64;
          }
          FUN_03326994(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,"Failed to read row data.",PTR_DAT_04372528);
          uVar15 = 0x304;
          goto LAB_032b1008;
        }
        uVar13 = (ulong)(local_b0 - uVar9);
        if (uStack_a0 < local_a8 + uVar13) {
          uVar13 = FUN_033216d4(&local_a8);
          uVar14 = (ulong)(local_b0 - uVar9);
        }
        else {
          uVar14 = uVar13;
          local_a8 = local_a8 + uVar13;
        }
        uVar11 = local_a8;
      } while (uVar13 == uVar14);
      if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0)) goto LAB_032b1014;
      uVar11 = FUN_03327170();
      if ((uVar11 & 1) != 0) {
        FUN_03326a7c(auStack_258,&DAT_04440908,1);
        lVar12 = FUN_03326338(auStack_258,"Failed to skip row data.",PTR_DAT_04372528);
        uVar15 = 0x309;
        goto LAB_032b1c64;
      }
      FUN_03326994(auStack_258,&DAT_04440908,1);
      lVar12 = FUN_03326338(auStack_258,"Failed to skip row data.",PTR_DAT_04372528);
      uVar15 = 0x309;
    }
    else {
      if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0)) goto LAB_032b1014;
      uVar11 = FUN_03327170();
      if ((uVar11 & 1) != 0) {
        FUN_03326a7c(auStack_258,&DAT_04440908,1);
        local_280 = FUN_032b5430(local_b8);
        local_278 = (byte *)FUN_032b5388(local_b8);
        lVar12 = FUN_03326338(auStack_258,
                              "The number of bits per pixel specified in the file ({}) does not match the expected value of {} for the format \'{}\'."
                              ,&DAT_04346d78,&local_bc,&local_280,&local_278);
        uVar15 = 0x2f3;
LAB_032b1c64:
        *(char **)(lVar12 + 0x38) =
             "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
        ;
        *(undefined8 *)(lVar12 + 0x40) = uVar15;
        FUN_03326adc(auStack_258);
        goto LAB_032b1014;
      }
      FUN_03326994(auStack_258,&DAT_04440908,1);
      local_27c = FUN_032b5430(local_b8);
      local_268 = (undefined4 *)FUN_032b5388(local_b8);
      lVar12 = FUN_03326338(auStack_258,
                            "The number of bits per pixel specified in the file ({}) does not match the expected value of {} for the format \'{}\'."
                            ,&DAT_04346d78,&local_bc,&local_27c,&local_268);
      uVar15 = 0x2f3;
    }
LAB_032b1008:
    *(char **)(lVar12 + 0x38) =
         "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
    ;
    *(undefined8 *)(lVar12 + 0x40) = uVar15;
    FUN_033269dc(auStack_258);
    goto LAB_032b1014;
  }
  if ((uint)local_c8 == 0) {
    uVar9 = 1 << (ulong)(local_bc & 0x1f);
  }
  else {
    uVar9 = (uint)local_c8;
    if (0x10000 < (uint)local_c8) {
      if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0)) goto LAB_032b1014;
      uVar11 = FUN_03327170();
      if ((uVar11 & 1) != 0) {
        FUN_03326a7c(auStack_258,&DAT_04440908,1);
        lVar12 = FUN_03326338(auStack_258,"Palette size > 65536.",PTR_DAT_04372528);
        uVar15 = 0x237;
        goto LAB_032b1c64;
      }
      FUN_03326994(auStack_258,&DAT_04440908,1);
      lVar12 = FUN_03326338(auStack_258,"Palette size > 65536.",PTR_DAT_04372528);
      uVar15 = 0x237;
      goto LAB_032b1008;
    }
  }
  local_268 = (undefined4 *)0x0;
  local_260 = -0x8000000000000000;
  if ((int)uVar9 < 1) {
    uVar24 = 0;
    if (uVar9 != 0) goto LAB_032b111c;
  }
  else {
    local_268 = (undefined4 *)FUN_032b2010(PTR_PTR_0434a080,uVar9,(long)&local_260 + 4);
    uVar24 = (uint)local_260;
    if ((uint)local_260 != uVar9) {
LAB_032b111c:
      local_260 = CONCAT44(local_260._4_4_,uVar9);
      uVar24 = uVar9;
    }
  }
  puVar22 = local_268;
  lVar12 = FUN_032af29c(&local_a8,local_268,(ulong)uVar9 * 4);
  uVar17 = local_b4;
  puVar6 = PTR_PTR_0434a080;
  if (lVar12 == (ulong)uVar9 * 4) {
    if (local_bf == '\0') {
      local_278 = (byte *)0x0;
      local_270 = -0x8000000000000000;
      if ((int)local_b4 < 1) {
        if (local_b4 != 0) goto LAB_032b1370;
      }
      else {
        if ((int)local_b4 < 0x40000000) {
          uVar9 = 0;
        }
        else {
          FUN_032bd0a8(local_b4);
          uVar9 = (local_270._4_4_ & 0x3fffffff) * 2;
          if (0x3ffffffe < uVar9) {
            uVar9 = 0x3fffffff;
          }
        }
        uVar10 = uVar17;
        if ((int)uVar17 <= (int)uVar9) {
          uVar10 = uVar9;
        }
        local_278 = (byte *)FUN_032bd1d4(puVar6,uVar10,1,0,0,(long)&local_270 + 4);
        if ((uint)local_270 != uVar17) {
LAB_032b1370:
          local_270 = CONCAT44(local_270._4_4_,uVar17);
        }
      }
      uVar11 = FUN_032af29c(&local_a8,local_278,local_b4);
      if (uVar11 == local_b4) {
        if (uVar5 == 0) {
          bVar7 = false;
        }
        else {
          uVar9 = 0;
          do {
            pbVar26 = local_278;
            iVar8 = local_b0 * uVar9;
            lVar12 = FUN_032b20e8(param_3,uVar5 + ~uVar9);
            uVar11 = 0;
            do {
              uVar10 = local_bc * (int)uVar11;
              uVar10 = (uint)(pbVar26[(ulong)(uVar10 >> 3) + (long)iVar8] >>
                             (ulong)(8 - (local_bc + (uVar10 & 7)) & 0x1f)) &
                       (-1 << (ulong)(local_bc & 0x1f) ^ 0xffffffffU);
              if (uVar24 <= uVar10) {
                if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0))
                goto LAB_032b1b10;
                uVar11 = FUN_03327170();
                if ((uVar11 & 1) != 0) {
                  FUN_03326a7c(auStack_258,&DAT_04440908,1);
                  lVar12 = FUN_03326338(auStack_258,"Image contains invalid palette indices.",
                                        PTR_DAT_04372528);
                  uVar15 = 0x2e5;
                  goto LAB_032b1dcc;
                }
                FUN_03326994(auStack_258,&DAT_04440908,1);
                lVar12 = FUN_03326338(auStack_258,"Image contains invalid palette indices.",
                                      PTR_DAT_04372528);
                uVar15 = 0x2e5;
                goto LAB_032b19e0;
              }
              *(undefined4 *)(lVar12 + uVar11 * 4) = puVar22[(int)uVar10];
              uVar10 = *(uint *)(param_3 + 0xc);
              uVar11 = uVar11 + 1;
              if (uVar10 < 2) {
                uVar10 = 1;
              }
            } while (uVar11 < uVar10);
            uVar9 = uVar9 + 1;
            bVar7 = false;
          } while (uVar9 != uVar5);
        }
      }
      else if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0)) {
LAB_032b1b10:
        bVar7 = true;
      }
      else {
        uVar11 = FUN_03327170();
        if ((uVar11 & 1) == 0) {
          FUN_03326994(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,"Failed to read data.",PTR_DAT_04372528);
          uVar15 = 0x2d5;
LAB_032b19e0:
          bVar7 = true;
          *(char **)(lVar12 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x40) = uVar15;
          FUN_033269dc(auStack_258);
        }
        else {
          FUN_03326a7c(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,"Failed to read data.",PTR_DAT_04372528);
          uVar15 = 0x2d5;
LAB_032b1dcc:
          bVar7 = true;
          *(char **)(lVar12 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x40) = uVar15;
          FUN_03326adc(auStack_258);
        }
      }
      lVar12 = local_270;
      uVar9 = local_270._4_4_;
      local_270 = (ulong)local_270._4_4_ << 0x20;
      if ((-1 < lVar12) && (local_278 != (byte *)0x0)) {
        FUN_032cf244(puVar6,local_278,1,uVar9 & 0x3fffffff);
      }
      if (bVar7) goto LAB_032b142c;
    }
    else {
      if ((local_b4 & 1) != 0) {
        if ((DAT_04440958 != '\0') || (uVar11 = FUN_03327170(), (uVar11 & 1) != 0)) {
          uVar11 = FUN_03327170();
          if ((uVar11 & 1) == 0) {
            FUN_03326994(auStack_258,&DAT_04440908,1);
            lVar12 = FUN_03326338(auStack_258,
                                  "The data size is not a multiple of 2 bytes in an RLE-compressed file."
                                  ,PTR_DAT_04372528);
            uVar15 = 0x248;
            goto LAB_032b1214;
          }
          FUN_03326a7c(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,
                                "The data size is not a multiple of 2 bytes in an RLE-compressed file."
                                ,PTR_DAT_04372528);
          uVar15 = 0x248;
          goto LAB_032b1c24;
        }
        goto LAB_032b142c;
      }
      local_278 = (byte *)0x0;
      local_270 = -0x8000000000000000;
      if ((int)local_b4 < 1) {
        if (local_b4 != 0) goto LAB_032b1178;
      }
      else {
        if ((int)local_b4 < 0x40000000) {
          uVar9 = 0;
        }
        else {
          FUN_032bd0a8(local_b4);
          uVar9 = local_270._4_4_;
        }
        uVar9 = (uVar9 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar9) {
          uVar9 = 0x3fffffff;
        }
        uVar24 = uVar17;
        if ((int)uVar17 <= (int)uVar9) {
          uVar24 = uVar9;
        }
        local_278 = (byte *)FUN_032bd1d4(puVar6,uVar24,1,0,0,(long)&local_270 + 4);
        if ((uint)local_270 != uVar17) {
LAB_032b1178:
          local_270 = CONCAT44(local_270._4_4_,uVar17);
        }
      }
      uVar13 = FUN_032af29c(&local_a8,local_278,local_b4);
      pbVar26 = local_278;
      if (uVar13 == local_b4) {
        uVar5 = uVar5 - 1;
        lVar12 = FUN_032b20e8(param_3,uVar5);
        if (local_b4 != 0) {
          uVar9 = 0;
          pbVar1 = pbVar26 + uVar13;
          puVar22 = extraout_x15;
          uVar24 = uVar5;
          do {
            while( true ) {
              bVar2 = *pbVar26;
              bVar3 = pbVar26[1];
              uVar13 = (ulong)bVar3;
              pbVar26 = pbVar26 + 2;
              if (bVar2 == 0) break;
              uVar18 = uVar10 - uVar9;
              uVar17 = (uint)bVar2;
              if (uVar18 < bVar2 || uVar18 == bVar2) {
                uVar17 = uVar18;
              }
              if (local_bc == 4) {
                uVar18 = uVar17 >> 1;
                if (uVar18 != 0) {
                  puVar22 = (undefined4 *)(ulong)(bVar3 >> 4);
                  uVar13 = uVar13 & 0xf;
                  uVar20 = uVar17 >> 1 & 1;
                  if (uVar18 != 1) {
                    iVar8 = uVar18 - uVar20;
                    do {
                      *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) = local_268[(long)puVar22];
                      *(undefined4 *)(lVar12 + (ulong)(uVar9 + 1) * 4) = local_268[uVar13];
                      uVar18 = uVar9 + 3;
                      *(undefined4 *)(lVar12 + (ulong)(uVar9 + 2) * 4) = local_268[(long)puVar22];
                      uVar9 = uVar9 + 4;
                      iVar8 = iVar8 + -2;
                      *(undefined4 *)(lVar12 + (ulong)uVar18 * 4) = local_268[uVar13];
                    } while (iVar8 != 0);
                  }
                  if (uVar20 != 0) {
                    *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) = local_268[(long)puVar22];
                    uVar18 = uVar9 + 1;
                    uVar9 = uVar9 + 2;
                    *(undefined4 *)(lVar12 + (ulong)uVar18 * 4) = local_268[uVar13];
                    puVar22 = local_268;
                  }
                }
                if ((uVar17 & 1) != 0) {
                  *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) =
                       *(undefined4 *)((long)local_268 + ((ulong)(bVar3 >> 2) & 0x3c));
                  uVar9 = uVar9 + 1;
                }
              }
              else if (uVar17 != 0) {
                uVar20 = uVar17 - 1;
                uVar18 = uVar17 & 3;
                if (2 < uVar20) {
                  iVar8 = uVar17 - uVar18;
                  do {
                    *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) = local_268[uVar13];
                    iVar8 = iVar8 + -4;
                    *(undefined4 *)(lVar12 + (ulong)(uVar9 + 1) * 4) = local_268[uVar13];
                    uVar17 = uVar9 + 3;
                    *(undefined4 *)(lVar12 + (ulong)(uVar9 + 2) * 4) = local_268[uVar13];
                    uVar20 = local_268[uVar13];
                    uVar9 = uVar9 + 4;
                    *(uint *)(lVar12 + (ulong)uVar17 * 4) = uVar20;
                  } while (iVar8 != 0);
                }
                puVar22 = (undefined4 *)(ulong)uVar20;
                for (; uVar18 != 0; uVar18 = uVar18 - 1) {
                  *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) = local_268[uVar13];
                  uVar9 = uVar9 + 1;
                }
              }
joined_r0x032b16f0:
              if (pbVar1 <= pbVar26) goto LAB_032b1a70;
            }
            uVar17 = (uint)bVar3;
            if (uVar17 == 0) {
              if (uVar9 < uVar10) {
                uVar13 = (ulong)uVar9;
                uVar16 = ~uVar13;
                uVar14 = (ulong)(uVar10 - uVar9) & 3;
                if ((uVar10 - uVar9 & 3) != 0) {
                  do {
                    uVar14 = uVar14 - 1;
                    *(undefined4 *)(lVar12 + uVar13 * 4) = *local_268;
                    uVar13 = uVar13 + 1;
                  } while (uVar14 != 0);
                }
                if (2 < uVar16 + uVar11) {
                  lVar21 = uVar11 - uVar13;
                  puVar19 = (undefined4 *)(lVar12 + uVar13 * 4 + 8);
                  do {
                    lVar21 = lVar21 + -4;
                    puVar19[-2] = *local_268;
                    puVar19[-1] = *local_268;
                    *puVar19 = *local_268;
                    puVar19[1] = *local_268;
                    puVar19 = puVar19 + 4;
                  } while (lVar21 != 0);
                }
              }
              uVar9 = 0;
              uVar24 = uVar24 - 1;
              lVar12 = lVar12 + uVar11 * -4;
              goto joined_r0x032b16f0;
            }
            if (uVar17 == 1) {
              if ((uVar24 == 0) || (bVar7 = uVar9 == uVar5, uVar9 = uVar5, bVar7))
              goto joined_r0x032b16f0;
              if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0))
              goto LAB_032b1b20;
              uVar11 = FUN_03327170();
              if ((uVar11 & 1) != 0) {
                FUN_03326a7c(auStack_258,&DAT_04440908,1);
                lVar12 = FUN_03326338(auStack_258,"Unexpected end of image marker found.",
                                      PTR_DAT_04372528);
                uVar15 = 0x29e;
                goto LAB_032b1e0c;
              }
              FUN_03326994(auStack_258,&DAT_04440908,1);
              lVar12 = FUN_03326338(auStack_258,"Unexpected end of image marker found.",
                                    PTR_DAT_04372528);
              uVar15 = 0x29e;
              goto LAB_032b1a54;
            }
            uVar18 = (uint)bVar3;
            if (uVar18 == 2) {
              if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0))
              goto LAB_032b1b20;
              uVar11 = FUN_03327170();
              if ((uVar11 & 1) != 0) {
                FUN_03326a7c(auStack_258,&DAT_04440908,1);
                lVar12 = FUN_03326338(auStack_258,
                                      "Found a RLE compression position delta - this is not supported."
                                      ,PTR_DAT_04372528);
                uVar15 = 0x2a4;
                goto LAB_032b1e0c;
              }
              FUN_03326994(auStack_258,&DAT_04440908,1);
              lVar12 = FUN_03326338(auStack_258,
                                    "Found a RLE compression position delta - this is not supported."
                                    ,PTR_DAT_04372528);
              uVar15 = 0x2a4;
              goto LAB_032b1a54;
            }
            if ((uVar10 < uVar9 + uVar18) || (pbVar1 < pbVar26 + (uVar13 + 1 >> 1)))
            goto LAB_032b1b20;
            if (local_bc == 4) {
              bVar2 = bVar3 >> 1;
              pbVar25 = pbVar26;
              if (bVar2 != 0) {
                if (bVar2 != 1) {
                  iVar8 = (bVar3 >> 1 & 1) - (uint)bVar2;
                  do {
                    bVar4 = *pbVar26;
                    *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) =
                         *(undefined4 *)((long)local_268 + ((ulong)(bVar4 >> 2) & 0x3c));
                    *(undefined4 *)(lVar12 + (ulong)(uVar9 + 1) * 4) = local_268[(ulong)bVar4 & 0xf]
                    ;
                    bVar4 = pbVar26[1];
                    pbVar26 = pbVar26 + 2;
                    *(undefined4 *)(lVar12 + (ulong)(uVar9 + 2) * 4) =
                         *(undefined4 *)((long)local_268 + ((ulong)(bVar4 >> 2) & 0x3c));
                    uVar17 = uVar9 + 3;
                    uVar9 = uVar9 + 4;
                    iVar8 = iVar8 + 2;
                    *(undefined4 *)(lVar12 + (ulong)uVar17 * 4) = local_268[(ulong)bVar4 & 0xf];
                  } while (iVar8 != 0);
                  puVar22 = (undefined4 *)0x0;
                }
                pbVar25 = pbVar26;
                if ((bVar3 >> 1 & 1) != 0) {
                  pbVar25 = pbVar26 + 1;
                  bVar4 = *pbVar26;
                  uVar17 = uVar9 + 1;
                  *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) =
                       *(undefined4 *)((long)local_268 + ((ulong)(bVar4 >> 2) & 0x3c));
                  uVar9 = uVar9 + 2;
                  *(undefined4 *)(lVar12 + (ulong)uVar17 * 4) = local_268[(ulong)bVar4 & 0xf];
                  puVar22 = local_268;
                }
              }
              pbVar26 = pbVar25;
              if ((bVar3 & 1) != 0) {
                pbVar26 = pbVar25 + 1;
                *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) =
                     *(undefined4 *)((long)local_268 + ((ulong)(*pbVar25 >> 2) & 0x3c));
                uVar9 = uVar9 + 1;
                puVar22 = local_268;
              }
              pbVar26 = pbVar26 + ((ulong)((uint)bVar2 + (uint)bVar3) & 1);
              goto joined_r0x032b16f0;
            }
            uVar20 = uVar18 & 3;
            if (2 < uVar17 - 1) {
              lVar21 = 0;
              do {
                pbVar25 = pbVar26 + lVar21;
                uVar14 = (ulong)uVar9 + lVar21;
                lVar21 = lVar21 + 4;
                *(undefined4 *)(lVar12 + (uVar14 & 0xffffffff) * 4) = local_268[*pbVar25];
                iVar8 = (int)uVar14;
                *(undefined4 *)(lVar12 + (ulong)(iVar8 + 1) * 4) = local_268[pbVar25[1]];
                *(undefined4 *)(lVar12 + (ulong)(iVar8 + 2) * 4) = local_268[pbVar25[2]];
                *(undefined4 *)(lVar12 + (ulong)(iVar8 + 3) * 4) = local_268[pbVar25[3]];
              } while (uVar18 - uVar20 != (int)lVar21);
              uVar9 = uVar9 + (int)lVar21;
              puVar22 = (undefined4 *)(ulong)uVar9;
              pbVar26 = pbVar26 + lVar21;
            }
            pbVar25 = pbVar26;
            if ((bVar3 & 3) != 0) {
              do {
                pbVar26 = pbVar25 + 1;
                uVar20 = uVar20 - 1;
                puVar22 = (undefined4 *)(ulong)(uVar9 + 1);
                *(undefined4 *)(lVar12 + (ulong)uVar9 * 4) = local_268[*pbVar25];
                pbVar25 = pbVar26;
                uVar9 = uVar9 + 1;
              } while (uVar20 != 0);
            }
            pbVar26 = pbVar26 + (uVar13 & 1);
            uVar9 = (uint)puVar22;
          } while (pbVar26 < pbVar1);
        }
LAB_032b1a70:
        bVar7 = false;
      }
      else if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0)) {
LAB_032b1b20:
        bVar7 = true;
      }
      else {
        uVar11 = FUN_03327170();
        if ((uVar11 & 1) == 0) {
          FUN_03326994(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,"Failed to read data.",PTR_DAT_04372528);
          uVar15 = 0x251;
LAB_032b1a54:
          bVar7 = true;
          *(char **)(lVar12 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x40) = uVar15;
          FUN_033269dc(auStack_258);
        }
        else {
          FUN_03326a7c(auStack_258,&DAT_04440908,1);
          lVar12 = FUN_03326338(auStack_258,"Failed to read data.",PTR_DAT_04372528);
          uVar15 = 0x251;
LAB_032b1e0c:
          bVar7 = true;
          *(char **)(lVar12 + 0x38) =
               "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x40) = uVar15;
          FUN_03326adc(auStack_258);
        }
      }
      lVar12 = local_270;
      uVar9 = local_270._4_4_;
      local_270 = (ulong)local_270._4_4_ << 0x20;
      if ((-1 < lVar12) && (local_278 != (byte *)0x0)) {
        FUN_032cf244(puVar6,local_278,1,uVar9 & 0x3fffffff);
      }
      if (bVar7) goto LAB_032b142c;
    }
    bVar7 = false;
  }
  else if ((DAT_04440958 == '\0') && (uVar11 = FUN_03327170(), (uVar11 & 1) == 0)) {
LAB_032b142c:
    bVar7 = true;
  }
  else {
    uVar11 = FUN_03327170();
    if ((uVar11 & 1) == 0) {
      FUN_03326994(auStack_258,&DAT_04440908,1);
      lVar12 = FUN_03326338(auStack_258,"Failed to read palette data.",PTR_DAT_04372528);
      uVar15 = 0x23f;
LAB_032b1214:
      bVar7 = true;
      *(char **)(lVar12 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      *(undefined8 *)(lVar12 + 0x40) = uVar15;
      FUN_033269dc(auStack_258);
    }
    else {
      FUN_03326a7c(auStack_258,&DAT_04440908,1);
      lVar12 = FUN_03326338(auStack_258,"Failed to read palette data.",PTR_DAT_04372528);
      uVar15 = 0x23f;
LAB_032b1c24:
      bVar7 = true;
      *(char **)(lVar12 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/ImageUtilities/FileFormats/hkBmpFileFormat.cpp"
      ;
      *(undefined8 *)(lVar12 + 0x40) = uVar15;
      FUN_03326adc(auStack_258);
    }
  }
  lVar12 = local_260;
  uVar9 = local_260._4_4_;
  local_260 = (ulong)local_260._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_268 != (undefined4 *)0x0)) {
    FUN_032cf244(PTR_PTR_0434a080,local_268,4,uVar9 & 0x3fffffff);
  }
  if (!bVar7) {
LAB_032b1458:
    uVar23 = 0;
  }
LAB_032b1014:
  FUN_03321570(&local_a8);
  return uVar23;
}


