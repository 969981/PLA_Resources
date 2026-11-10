/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337f6a4; name: FUN_0337f6a4
 */


void FUN_0337f6a4(undefined4 *param_1,long *param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  int iVar18;
  byte *pbVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long local_218;
  long lStack_210;
  long local_208;
  long lStack_200;
  uint local_1f8 [2];
  byte *local_1f0;
  uint local_1e8;
  int local_1dc;
  uint local_1d8 [2];
  undefined8 *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  long lStack_1b0;
  long local_1a8;
  undefined1 local_1a0;
  char *local_198;
  long local_190;
  long local_188;
  int local_7c;
  uint local_78 [2];
  uint local_70;
  uint local_6c [3];
  
  if ((param_3 & 1) == 0) {
    lVar7 = *param_2;
    if ((param_2[1] - lVar7 & 3U) == 0) {
      lVar22 = *(long *)(param_1 + 4);
      uVar21 = (uint)((ulong)(param_2[1] - lVar7) >> 2);
      iVar6 = param_1[6];
      lVar13 = *(long *)(param_1 + 0x14);
      lVar14 = *(long *)(param_1 + 0x16);
      local_1dc = 0;
      uVar24 = *(long *)(param_1 + 0x12) - *(long *)(param_1 + 0x10);
      iVar4 = (int)*(long *)(param_1 + 0x10);
      if (2 < (int)uVar21) {
        iVar18 = 0;
        iVar12 = 2;
LAB_0337f72c:
        local_1dc = (int)((long)iVar18 + 1);
        local_6c[0] = *(uint *)(lVar7 + (long)iVar18 * 4);
        if (local_6c[0] != 0) {
          if ((ulong)local_6c[0] < (ulong)(long)iVar6) {
            if (*(long *)(lVar22 + (long)(int)local_6c[0] * 8) == 0) {
              local_70 = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_0337fd98;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd7;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_70);
              pcVar9 = 
              "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
              goto LAB_0337fbe0;
            }
            local_70 = *(uint *)(lVar7 + ((long)iVar18 + 1) * 4);
            local_1dc = iVar12;
            if ((int)uVar21 < (int)(local_70 + iVar12)) {
              local_78[0] = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_0337fd98;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xde;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_78
                                   );
              local_7c = local_1dc + -1;
              FUN_03326338(uVar20,"Corrupt patch index body at index {}: invalid entries number {}",
                           &DAT_0411b3a0,&local_7c,&local_70);
              FUN_033269dc(&local_1d0);
              local_1d8[0] = local_78[0];
              goto LAB_0337fbf8;
            }
            if (DAT_04450900 < 4) {
              if (DAT_04350668 != '\0') goto LAB_0337fe04;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_6c,
                                    &local_70,lVar22 + (long)(int)local_6c[0] * 8);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0xe1;
              FUN_033269dc(&local_1d0);
            }
            else {
LAB_0337fe04:
              FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_6c,
                                    &local_70,lVar22 + (long)(int)local_6c[0] * 8);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0xe1;
              FUN_03326adc(&local_1d0);
            }
            local_1f0 = *(byte **)(lVar22 + (long)(int)local_6c[0] * 8);
            local_1e8 = local_70;
            local_1d8[0] = 0;
          }
          else {
            local_70 = 0x80040200;
            if (DAT_04450900 == 0) {
LAB_0337fd98:
              local_1d8[0] = 0x80040200;
            }
            else {
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd2;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_70);
              pcVar9 = "Corrupt patch index body at index {}: invalid TypeId {}";
LAB_0337fbe0:
              local_78[0] = local_1dc - 1;
              FUN_03326338(uVar20,pcVar9,&DAT_0411b3a0,local_78,local_6c);
              FUN_033269dc(&local_1d0);
              local_1d8[0] = local_70;
            }
LAB_0337fbf8:
            local_1f0 = (byte *)0x0;
            local_1e8 = 0;
            local_1f8[0] = local_1d8[0];
            if ((int)local_1d8[0] < 0) goto joined_r0x03380024;
          }
          if (local_1f0 == (byte *)0x0) goto LAB_0337fa9c;
          local_1f8[0] = local_1d8[0];
          if (DAT_04450900 < 4) {
            if (DAT_04350668 != '\0') {
LAB_0337fc7c:
              FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Internal fixups for type {}",PTR_DAT_043891f8,
                                    &local_1f0);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0x107;
              *(undefined1 *)(lVar23 + 0x19) = 1;
              FUN_03326adc(&local_1d0);
              goto joined_r0x0337fcd4;
            }
            if (local_1e8 != 0) goto LAB_0337f7c8;
LAB_0337f8b8:
            bVar5 = false;
          }
          else {
            if (DAT_04350668 != '\0') goto LAB_0337fc7c;
            FUN_03326994(&local_1d0,&DAT_044508b0,4);
            lVar23 = FUN_03326338(&local_1d0,"Internal fixups for type {}",PTR_DAT_043891f8,
                                  &local_1f0);
            *(char **)(lVar23 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar23 + 0x40) = 0x107;
            *(undefined1 *)(lVar23 + 0x19) = 1;
            FUN_033269dc(&local_1d0);
joined_r0x0337fcd4:
            if (local_1e8 == 0) goto LAB_0337f8b8;
LAB_0337f7c8:
            puVar10 = (uint *)(lVar7 + (long)local_1dc * 4);
            bVar3 = *local_1f0;
            pbVar19 = local_1f0;
            while ((bVar3 & 1) == 0) {
              pbVar19 = *(byte **)(pbVar19 + 8);
              bVar3 = *pbVar19;
            }
            lVar23 = (long)(int)local_1e8 << 2;
            if ((*(ulong *)(pbVar19 + 0x10) & 0x1f) == 3) {
              do {
                uVar2 = *puVar10;
                if (uVar24 <= uVar2) goto LAB_0337fe60;
                if (DAT_04450900 < 4) {
                  if (DAT_04350668 != '\0') goto LAB_03380254;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_033269dc(&local_1d0);
                }
                else {
LAB_03380254:
                  FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_03326adc(&local_1d0);
                }
                local_1d0 = (undefined8 *)CONCAT44(local_1d0._4_4_,(iVar4 + uVar2) - param_1[0x10]);
                FUN_03328a7c(*(undefined8 *)(param_1 + 0x46),&local_1d0);
                local_1dc = local_1dc + 1;
                puVar10 = puVar10 + 1;
                lVar23 = lVar23 + -4;
                local_1d8[0] = 0;
              } while (lVar23 != 0);
            }
            else {
              do {
                if (uVar24 <= *puVar10) goto LAB_0337fe60;
                if (DAT_04450900 < 4) {
                  if (DAT_04350668 != '\0') goto LAB_0337ff8c;
                }
                else if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_033269dc(&local_1d0);
                }
                else {
LAB_0337ff8c:
                  FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                  lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                  *(char **)(lVar8 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar8 + 0x40) = 0x116;
                  FUN_03326adc(&local_1d0);
                }
                local_1dc = local_1dc + 1;
                puVar10 = puVar10 + 1;
                lVar23 = lVar23 + -4;
                local_1d8[0] = 0;
              } while (lVar23 != 0);
            }
            local_1d8[0] = 0;
            bVar5 = false;
          }
          goto LAB_0337f83c;
        }
        local_1f0 = (byte *)0x0;
        local_1e8 = 0;
        local_1d8[0] = 0;
LAB_0337fa9c:
        local_1f8[0] = local_1d8[0];
        if (DAT_04450900 < 4) {
          if (DAT_04350668 == '\0') goto LAB_0337ffe4;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(&local_1d0,&DAT_044508b0,4);
          lVar23 = FUN_03326338(&local_1d0,"Finished internal, starting external",PTR_DAT_04372528);
          *(char **)(lVar23 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar23 + 0x40) = 0x103;
          FUN_033269dc(&local_1d0);
          goto LAB_0337ffe4;
        }
        FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
        lVar23 = FUN_03326338(&local_1d0,"Finished internal, starting external",PTR_DAT_04372528);
        *(char **)(lVar23 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar23 + 0x40) = 0x103;
        FUN_03326adc(&local_1d0);
      }
LAB_0337ffe4:
LAB_0338000c:
      lVar23 = (long)local_1dc;
      iVar12 = local_1dc + 2;
      if (iVar12 < (int)uVar21) {
        local_1dc = local_1dc + 1;
        local_6c[0] = *(uint *)(lVar7 + lVar23 * 4);
        if (local_6c[0] != 0) {
          if ((ulong)local_6c[0] < (ulong)(long)iVar6) {
            if (*(long *)(lVar22 + (long)(int)local_6c[0] * 8) == 0) {
              local_70 = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_03380c70;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd7;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_70);
              pcVar9 = 
              "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
              goto LAB_03380ba8;
            }
            local_70 = *(uint *)(lVar7 + (long)local_1dc * 4);
            local_1dc = iVar12;
            if ((int)uVar21 < (int)(local_70 + iVar12)) {
              local_78[0] = 0x80040200;
              if (DAT_04450900 == 0) goto LAB_03380c70;
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xde;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_78
                                   );
              local_7c = local_1dc + -1;
              FUN_03326338(uVar20,"Corrupt patch index body at index {}: invalid entries number {}",
                           &DAT_0411b3a0,&local_7c,&local_70);
              FUN_033269dc(&local_1d0);
              local_1d8[0] = local_78[0];
              goto LAB_03380bc0;
            }
            if (DAT_04450900 < 4) {
              if (DAT_04350668 != '\0') goto LAB_03380ce0;
            }
            else if (DAT_04350668 == '\0') {
              FUN_03326994(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_6c,
                                    &local_70,lVar22 + (long)(int)local_6c[0] * 8);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0xe1;
              FUN_033269dc(&local_1d0);
            }
            else {
LAB_03380ce0:
              FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
              lVar23 = FUN_03326338(&local_1d0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_6c,
                                    &local_70,lVar22 + (long)(int)local_6c[0] * 8);
              *(char **)(lVar23 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar23 + 0x40) = 0xe1;
              FUN_03326adc(&local_1d0);
            }
            local_1f0 = *(byte **)(lVar22 + (long)(int)local_6c[0] * 8);
            local_1e8 = local_70;
            local_1d8[0] = 0;
          }
          else {
            local_70 = 0x80040200;
            if (DAT_04450900 == 0) {
LAB_03380c70:
              local_1d8[0] = 0x80040200;
            }
            else {
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0xd2;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_70);
              pcVar9 = "Corrupt patch index body at index {}: invalid TypeId {}";
LAB_03380ba8:
              local_78[0] = local_1dc - 1;
              FUN_03326338(uVar20,pcVar9,&DAT_0411b3a0,local_78,local_6c);
              FUN_033269dc(&local_1d0);
              local_1d8[0] = local_70;
            }
LAB_03380bc0:
            local_1f0 = (byte *)0x0;
            local_1e8 = 0;
            local_1f8[0] = local_1d8[0];
            if ((int)local_1d8[0] < 0) goto joined_r0x03380024;
          }
          local_1f8[0] = local_1d8[0];
          if (local_1f0 == (byte *)0x0) goto LAB_03380d50;
          if (DAT_04450900 < 4) {
            if (DAT_04350668 != '\0') goto LAB_033809fc;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(&local_1d0,&DAT_044508b0,4);
            lVar23 = FUN_03326338(&local_1d0,"External fixups for type {}",PTR_DAT_043891f8,
                                  &local_1f0);
            *(char **)(lVar23 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar23 + 0x40) = 0x12f;
            *(undefined1 *)(lVar23 + 0x19) = 1;
            FUN_033269dc(&local_1d0);
          }
          else {
LAB_033809fc:
            FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
            lVar23 = FUN_03326338(&local_1d0,"External fixups for type {}",PTR_DAT_043891f8,
                                  &local_1f0);
            *(char **)(lVar23 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar23 + 0x40) = 0x12f;
            *(undefined1 *)(lVar23 + 0x19) = 1;
            FUN_03326adc(&local_1d0);
          }
          if (0 < (int)local_1e8) {
            bVar3 = *local_1f0;
            pbVar19 = local_1f0;
            while ((bVar3 & 1) == 0) {
              pbVar19 = *(byte **)(pbVar19 + 8);
              bVar3 = *pbVar19;
            }
            uVar17 = *(ulong *)(pbVar19 + 0x10);
            iVar12 = 0;
LAB_033802ec:
            iVar18 = local_1dc + 1;
            local_6c[0] = *(uint *)(lVar7 + (long)local_1dc * 4);
            if ((ulong)local_6c[0] < (ulong)((lVar14 - lVar13 >> 2) * -0x5555555555555555)) {
              local_1dc = local_1dc + 2;
              local_70 = *(uint *)(lVar7 + (long)iVar18 * 4);
              if (uVar21 < local_70 + local_1dc) {
                local_1d8[0] = 0x80040200;
                if (DAT_04450900 != 0) {
                  FUN_03326994(&local_1d0,&DAT_044508b0,1);
                  local_190 = 0x141;
                  local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                        local_1d8);
                  local_78[0] = local_1dc - 1;
                  puVar10 = local_78;
                  puVar11 = &local_70;
                  pcVar9 = "Corrupt patch index body at index {}: invalid offsets number {}";
                  goto LAB_0338085c;
                }
                goto LAB_03380870;
              }
              if (DAT_04450900 < 4) {
                if (DAT_04350668 != '\0') goto LAB_03380964;
                if (local_70 != 0) goto LAB_033803d0;
LAB_03380394:
                bVar5 = false;
              }
              else {
                if (DAT_04350668 == '\0') {
                  FUN_03326994(&local_1d0,&DAT_044508b0,4);
                  lVar23 = FUN_03326338(&local_1d0,"tgtIdx={}, {} entries",PTR_DAT_043894a8,local_6c
                                        ,&local_70);
                  *(char **)(lVar23 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar23 + 0x40) = 0x144;
                  *(undefined1 *)(lVar23 + 0x19) = 1;
                  FUN_033269dc(&local_1d0);
                }
                else {
LAB_03380964:
                  FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                  lVar23 = FUN_03326338(&local_1d0,"tgtIdx={}, {} entries",PTR_DAT_043894a8,local_6c
                                        ,&local_70);
                  *(char **)(lVar23 + 0x38) =
                       "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar23 + 0x40) = 0x144;
                  *(undefined1 *)(lVar23 + 0x19) = 1;
                  FUN_03326adc(&local_1d0);
                }
                if (local_70 == 0) goto LAB_03380394;
LAB_033803d0:
                puVar10 = (uint *)(lVar7 + (long)local_1dc * 4);
                lVar23 = (ulong)local_70 << 2;
                if ((uVar17 & 0x1f) == 3) {
                  do {
                    uVar2 = *puVar10;
                    if (uVar24 <= uVar2) goto LAB_03380538;
                    if (DAT_04450900 < 4) {
                      if (DAT_04350668 != '\0') goto LAB_03380910;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_1d0,&DAT_044508b0,4);
                      lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                      *(char **)(lVar8 + 0x38) =
                           "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      *(undefined8 *)(lVar8 + 0x40) = 0x151;
                      FUN_033269dc(&local_1d0);
                    }
                    else {
LAB_03380910:
                      FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                      lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                      *(char **)(lVar8 + 0x38) =
                           "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      *(undefined8 *)(lVar8 + 0x40) = 0x151;
                      FUN_03326adc(&local_1d0);
                    }
                    local_1d0 = (undefined8 *)
                                CONCAT44(local_1d0._4_4_,(iVar4 + uVar2) - param_1[0x10]);
                    FUN_03328a7c(*(undefined8 *)(param_1 + 0x46),&local_1d0);
                    local_1dc = local_1dc + 1;
                    puVar10 = puVar10 + 1;
                    lVar23 = lVar23 + -4;
                    local_1d8[0] = 0;
                  } while (lVar23 != 0);
                }
                else {
                  do {
                    if (uVar24 <= *puVar10) goto LAB_03380538;
                    if (DAT_04450900 < 4) {
                      if (DAT_04350668 != '\0') goto LAB_033808c0;
                    }
                    else if (DAT_04350668 == '\0') {
                      FUN_03326994(&local_1d0,&DAT_044508b0,4);
                      lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                      *(char **)(lVar8 + 0x38) =
                           "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      *(undefined8 *)(lVar8 + 0x40) = 0x151;
                      FUN_033269dc(&local_1d0);
                    }
                    else {
LAB_033808c0:
                      FUN_03326a7c(&local_1d0,&DAT_044508b0,4);
                      lVar8 = FUN_03326338(&local_1d0,"srcOff={}",PTR_DAT_04389020,puVar10);
                      *(char **)(lVar8 + 0x38) =
                           "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      *(undefined8 *)(lVar8 + 0x40) = 0x151;
                      FUN_03326adc(&local_1d0);
                    }
                    local_1dc = local_1dc + 1;
                    puVar10 = puVar10 + 1;
                    lVar23 = lVar23 + -4;
                    local_1d8[0] = 0;
                  } while (lVar23 != 0);
                }
                local_1d8[0] = 0;
                bVar5 = false;
              }
              goto LAB_03380398;
            }
            local_1d8[0] = 0x80040200;
            local_1dc = iVar18;
            if (DAT_04450900 != 0) {
              FUN_03326994(&local_1d0,&DAT_044508b0,1);
              local_190 = 0x13a;
              local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    local_1d8);
              local_70 = local_1dc - 1;
              puVar10 = &local_70;
              puVar11 = local_6c;
              pcVar9 = "Corrupt patch index body at index {}: invalid target index {}";
LAB_0338085c:
              FUN_03326338(uVar20,pcVar9,&DAT_0436ed18,puVar10,puVar11);
              FUN_033269dc(&local_1d0);
            }
LAB_03380870:
            bVar5 = true;
            goto LAB_033805e8;
          }
          bVar5 = false;
          goto LAB_033805e8;
        }
        local_1f8[0] = 0;
        local_1f0 = (byte *)0x0;
        local_1e8 = 0;
LAB_03380d50:
        local_1d8[0] = 0x80040200;
        if (DAT_04450900 != 0) {
          FUN_03326994(&local_1d0,&DAT_044508b0,1);
          local_190 = 300;
          local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_1d8);
          FUN_03326338(uVar20,"Invalid sentinel at the end of external fixups",PTR_DAT_04372528);
          goto LAB_0337fa74;
        }
      }
      else {
        local_1d8[0] = 0;
      }
      goto joined_r0x03380024;
    }
    local_1d8[0] = 0x80040200;
    if (DAT_04450900 != 0) {
      FUN_03326994(&local_1d0,&DAT_044508b0,1);
      local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
      local_190 = 0xeb;
      uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_1d8);
      local_1f8[0] = 0x20f2cca4;
      FUN_03326338(uVar20,"PATCH_DATA section has the wrong size",&DAT_0436ece8,local_1f8);
LAB_0337fa74:
      FUN_033269dc(&local_1d0);
    }
joined_r0x03380024:
    if (-1 < (int)local_1d8[0]) {
      return;
    }
    if (DAT_04450900 == 0) {
      if (DAT_04350668 == '\0') goto LAB_033800a4;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_1d0,&DAT_044508b0,1);
      lVar7 = FUN_03326338(&local_1d0,"Failed to read the PATCH_DATA section",PTR_DAT_04372528);
      uVar20 = 0xae5;
      goto LAB_03380098;
    }
    FUN_03326a7c(&local_1d0,&DAT_044508b0,1);
    lVar7 = FUN_03326338(&local_1d0,"Failed to read the PATCH_DATA section",PTR_DAT_04372528);
    uVar20 = 0xae5;
  }
  else if ((param_3 >> 8 & 1) == 0) {
    local_190 = *(long *)(param_1 + 0x76);
    local_1d0 = &DAT_044508b0;
    local_1c8 = *(undefined8 *)(param_1 + 0x10);
    uStack_1c0 = *(undefined8 *)(param_1 + 0x12);
    local_188 = local_190 + (int)param_1[0x78];
    local_1b8 = *(long *)(param_1 + 4);
    lStack_1b0 = local_1b8 + (long)(int)param_1[6] * 8;
    local_1a0 = 1;
    local_198 = (char *)(param_1 + 2);
    local_1a8 = (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x14) >> 2) * -0x5555555555555555;
    local_218 = *param_2;
    lStack_210 = param_2[1];
    local_208 = param_2[2];
    lStack_200 = param_2[3];
    iVar6 = FUN_033899a0(&local_1d0,&local_218);
    if (-1 < iVar6) {
      FUN_032dba50(&local_1d0);
      iVar6 = param_1[6];
      if ((int)(param_1[0x81] & 0x3fffffff) < iVar6) {
        uVar20 = FUN_0338e9c8(PTR_PTR_0434a080,iVar6,*(undefined8 *)(param_1 + 0x7e),param_1[0x80],
                              param_1 + 0x81);
        *(undefined8 *)(param_1 + 0x7e) = uVar20;
      }
      iVar4 = param_1[0x80];
      if (iVar4 < iVar6) {
        lVar7 = *(long *)(param_1 + 0x7e);
        param_1[0x80] = iVar6;
        puVar16 = (undefined8 *)(lVar7 + (long)iVar4 * 8);
        uVar24 = ((long)iVar6 * 8 + (long)iVar4 * -8) - 8;
        uVar21 = ((uint)(uVar24 >> 3) & 0x1fffffff) + 1;
        if ((uVar21 & 3) != 0) {
          lVar13 = -((ulong)uVar21 & 3);
          puVar15 = puVar16;
          do {
            bVar5 = lVar13 != -1;
            lVar13 = lVar13 + 1;
            puVar16 = puVar15 + 1;
            *puVar15 = 0xfffffffe;
            puVar15 = puVar16;
          } while (bVar5);
        }
        if (0x17 < uVar24) {
          do {
            *puVar16 = 0xfffffffe;
            puVar16[1] = 0xfffffffe;
            puVar16[2] = 0xfffffffe;
            puVar16[3] = 0xfffffffe;
            puVar16 = puVar16 + 4;
          } while (puVar16 != (undefined8 *)(lVar7 + (long)iVar6 * 8));
        }
      }
      else if (iVar6 < iVar4) {
        param_1[0x80] = iVar6;
      }
      lVar7 = *(long *)(param_1 + 0x14);
      if (1 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar7) >> 2) * -0x55555555) {
        lVar14 = 0;
        lVar13 = 1;
        do {
          lVar7 = lVar7 + lVar14;
          uVar21 = *(uint *)(lVar7 + 0xc) & 0xf0000000;
          if ((uVar21 == 0x10000000 || uVar21 == 0x30000000) || uVar21 == 0x20000000) {
            uVar17 = (ulong)*(uint *)(lVar7 + 0xc) & 0xffffff;
            puVar1 = (ulong *)(*(long *)(param_1 + 0x7e) + uVar17 * 8);
            uVar24 = (ulong)(uint)*puVar1;
            if ((int)(uint)*puVar1 < -1) {
              uVar24 = FUN_032dbdc0(&local_1d0,*(undefined8 *)(*(long *)(param_1 + 4) + uVar17 * 8))
              ;
              *puVar1 = uVar24;
            }
            if (-1 < (int)uVar24) {
              FUN_032dbe70(&local_1d0,puVar1,
                           *(long *)(param_1 + 0x10) + (long)*(int *)(lVar7 + 0x10),
                           *(undefined8 *)(*(long *)(param_1 + 4) + uVar17 * 8),
                           *(undefined4 *)(lVar7 + 0x14));
            }
          }
          lVar7 = *(long *)(param_1 + 0x14);
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 0xc;
        } while (lVar13 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar7) >> 2) * -0x55555555);
      }
      FUN_032dc210(&local_1d0);
      return;
    }
    if (DAT_04450900 == 0) {
      if (DAT_04350668 == '\0') goto LAB_033800a4;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_1d0,&DAT_044508b0,1);
      lVar7 = FUN_03326338(&local_1d0,"Failed to read the PATCH_DATA section",PTR_DAT_04372528);
      uVar20 = 0xaad;
      goto LAB_03380098;
    }
    FUN_03326a7c(&local_1d0,&DAT_044508b0,1);
    lVar7 = FUN_03326338(&local_1d0,"Failed to read the PATCH_DATA section",PTR_DAT_04372528);
    uVar20 = 0xaad;
  }
  else {
    if (DAT_04450900 == 0) {
      if (DAT_04350668 == '\0') goto LAB_033800a4;
    }
    else if (DAT_04350668 == '\0') {
      FUN_03326994(&local_1d0,&DAT_044508b0,1);
      lVar7 = FUN_03326338(&local_1d0,"Format is readonly but buffer contains a PATCH_DATA section",
                           PTR_DAT_04372528);
      uVar20 = 0xa5f;
LAB_03380098:
      *(char **)(lVar7 + 0x38) =
           "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar7 + 0x40) = uVar20;
      FUN_033269dc(&local_1d0);
      goto LAB_033800a4;
    }
    FUN_03326a7c(&local_1d0,&DAT_044508b0,1);
    lVar7 = FUN_03326338(&local_1d0,"Format is readonly but buffer contains a PATCH_DATA section",
                         PTR_DAT_04372528);
    uVar20 = 0xa5f;
  }
  *(char **)(lVar7 + 0x38) =
       "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar7 + 0x40) = uVar20;
  FUN_03326adc(&local_1d0);
LAB_033800a4:
  *param_1 = 0x80040200;
  return;
LAB_0337fe60:
  local_1d8[0] = 0x80040200;
  if (DAT_04450900 == 0) goto joined_r0x03380024;
  bVar5 = true;
  FUN_03326994(&local_1d0,&DAT_044508b0,1);
  local_190 = 0x113;
  local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
  uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_1d8);
  FUN_03326338(uVar20,"Corrupt patch index body at index {}: invalid offset {}",&DAT_0436ed18,
               &local_1dc,puVar10);
  FUN_033269dc(&local_1d0);
LAB_0337f83c:
  iVar18 = local_1dc;
  if (3 < DAT_04450900) {
    FUN_03326994(&local_1d0,&DAT_044508b0,4);
    local_1b8._0_2_ = CONCAT11(0xff,(undefined1)local_1b8);
    FUN_033269dc(&local_1d0);
    iVar18 = local_1dc;
  }
  local_1dc = iVar18;
  if (bVar5) goto joined_r0x03380024;
  iVar12 = iVar18 + 2;
  if ((int)uVar21 <= iVar12) goto LAB_0337ffe4;
  goto LAB_0337f72c;
LAB_03380538:
  local_1d8[0] = 0x80040200;
  if (DAT_04450900 == 0) goto joined_r0x03380024;
  bVar5 = true;
  FUN_03326994(&local_1d0,&DAT_044508b0,1);
  local_190 = 0x14e;
  local_198 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
  uVar20 = FUN_03326338(&local_1d0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,local_1d8);
  FUN_03326338(uVar20,"Corrupt patch index body at index {}: invalid offset {}",&DAT_0436ed18,
               &local_1dc,puVar10);
  FUN_033269dc(&local_1d0);
LAB_03380398:
  if (3 < DAT_04450900) {
    FUN_03326994(&local_1d0,&DAT_044508b0,4);
    local_1b8._0_2_ = CONCAT11(0xff,(undefined1)local_1b8);
    FUN_033269dc(&local_1d0);
  }
  if (bVar5) {
    bVar5 = true;
    goto LAB_033805e8;
  }
  iVar12 = iVar12 + 1;
  if ((int)local_1e8 <= iVar12) goto LAB_03380878;
  goto LAB_033802ec;
LAB_03380878:
  bVar5 = false;
LAB_033805e8:
  if (3 < DAT_04450900) {
    FUN_03326994(&local_1d0,&DAT_044508b0,4);
    local_1b8._0_2_ = CONCAT11(0xff,(undefined1)local_1b8);
    FUN_033269dc(&local_1d0);
  }
  if (bVar5) goto joined_r0x03380024;
  goto LAB_0338000c;
}


