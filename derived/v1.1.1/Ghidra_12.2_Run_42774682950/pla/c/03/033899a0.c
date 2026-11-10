/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033899a0; name: FUN_033899a0
 */


/* WARNING: Removing unreachable block (ram,0x0338b00c) */
/* WARNING: Removing unreachable block (ram,0x03389e3c) */
/* WARNING: Type propagation algorithm not settling */

uint FUN_033899a0(long *param_1,ulong *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  uint *puVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  ulong uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  long *local_220;
  uint local_218 [2];
  ulong *local_210;
  int local_208;
  int local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  ulong local_1e8;
  undefined1 local_1e0 [16];
  uint local_1cc;
  ulong *local_1c8;
  undefined1 auStack_1c0 [25];
  undefined1 local_1a7;
  char *local_188;
  undefined8 local_180;
  uint local_70 [4];
  
  uVar3 = *param_2;
  uVar20 = param_2[1];
  if ((uVar20 - uVar3 & 3) == 0) {
    uVar17 = uVar20 - uVar3 >> 2;
    uVar1 = uVar3 + ((long)(uVar17 << 0x20) >> 0x1e);
    if (uVar20 < uVar1) {
      *param_2 = uVar20;
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
    }
    else {
      *param_2 = uVar1;
    }
    local_1fc = 0;
    while( true ) {
      uVar22 = 0x80040200;
      lVar19 = (long)local_1fc;
      iVar8 = local_1fc + 2;
      uVar16 = (uint)uVar17;
      if ((int)uVar16 <= iVar8) break;
      local_1fc = local_1fc + 1;
      uVar4 = *(uint *)(uVar3 + lVar19 * 4);
      local_1e0._0_4_ = uVar4;
      if (uVar4 == 0) {
        local_210 = (ulong *)0x0;
        local_208 = 0;
        local_1f8 = 0;
        lVar19 = *param_1;
        bVar15 = *(byte *)(lVar19 + 0x50);
LAB_0338a4b0:
        local_218[0] = local_1f8;
        if (bVar15 < 4) {
          if (DAT_04350668 == '\0') break;
LAB_0338b29c:
          FUN_03326a7c(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Finished internal, starting external",PTR_DAT_04372528)
          ;
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0x103;
          FUN_03326adc(auStack_1c0);
          cVar5 = (char)param_1[6];
        }
        else {
          if (DAT_04350668 != '\0') goto LAB_0338b29c;
          FUN_03326994(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Finished internal, starting external",PTR_DAT_04372528)
          ;
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0x103;
          FUN_033269dc(auStack_1c0);
          cVar5 = (char)param_1[6];
        }
        if (cVar5 == '\0') {
          return 0;
        }
        goto LAB_0338a51c;
      }
      if ((ulong)uVar4 < (ulong)(param_1[4] - param_1[3] >> 3)) {
        if (*(long *)(param_1[3] + (long)(int)uVar4 * 8) == 0) {
          local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,0x80040200);
          if (*(char *)(*param_1 + 0x50) != '\0') {
            FUN_03326994(auStack_1c0,*param_1,1);
            local_180 = 0xd7;
            local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                  &local_1c8);
            local_1e8 = CONCAT44(local_1e8._4_4_,local_1fc + -1);
            pcVar13 = 
            "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
            goto LAB_03389c14;
          }
          goto LAB_03389c2c;
        }
        iVar9 = *(int *)(uVar3 + (long)local_1fc * 4);
        local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,iVar9);
        local_1fc = iVar8;
        if ((int)uVar16 < iVar9 + iVar8) {
          local_1e8 = CONCAT44(local_1e8._4_4_,0x80040200);
          uVar22 = 0x80040200;
          if (*(char *)(*param_1 + 0x50) != '\0') {
            FUN_03326994(auStack_1c0,*param_1,1);
            local_180 = 0xde;
            local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                  &local_1e8);
            local_70[0] = local_1fc - 1;
            FUN_03326338(uVar10,"Corrupt patch index body at index {}: invalid entries number {}",
                         &DAT_0411b3a0,local_70,&local_1c8);
            FUN_033269dc(auStack_1c0);
            uVar22 = (uint)local_1e8;
          }
          goto LAB_03389c2c;
        }
        lVar19 = *param_1;
        if (*(byte *)(lVar19 + 0x50) < 4) {
          if (DAT_04350668 != '\0') goto LAB_0338b21c;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_1e0,
                                &local_1c8,param_1[3] + (long)(int)local_1e0._0_4_ * 8);
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0xe1;
          FUN_033269dc(auStack_1c0);
        }
        else {
LAB_0338b21c:
          FUN_03326a7c(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_1e0,
                                &local_1c8,param_1[3] + (long)(int)local_1e0._0_4_ * 8);
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0xe1;
          FUN_03326adc(auStack_1c0);
        }
        local_210 = *(ulong **)(param_1[3] + (long)(int)local_1e0._0_4_ * 8);
        local_208 = (uint)local_1c8;
        local_1f8 = 0;
      }
      else {
        local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,0x80040200);
        uVar22 = 0x80040200;
        if (*(char *)(*param_1 + 0x50) != '\0') {
          FUN_03326994(auStack_1c0,*param_1,1);
          local_180 = 0xd2;
          local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,&local_1c8)
          ;
          pcVar13 = "Corrupt patch index body at index {}: invalid TypeId {}";
          local_1e8 = CONCAT44(local_1e8._4_4_,local_1fc + -1);
LAB_03389c14:
          FUN_03326338(uVar10,pcVar13,&DAT_0411b3a0,&local_1e8,local_1e0);
          FUN_033269dc(auStack_1c0);
          uVar22 = (uint)local_1c8;
        }
LAB_03389c2c:
        local_210 = (ulong *)0x0;
        local_208 = 0;
        local_1f8 = uVar22;
        if ((int)uVar22 < 0) {
          return uVar22;
        }
      }
      lVar19 = *param_1;
      bVar15 = *(byte *)(lVar19 + 0x50);
      if (local_210 == (ulong *)0x0) goto LAB_0338a4b0;
      local_218[0] = local_1f8;
      if (bVar15 < 4) {
        if (DAT_04350668 != '\0') goto LAB_0338b174;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_1c0,lVar19,4);
        lVar11 = FUN_03326338(auStack_1c0,"Internal fixups for type {}",PTR_DAT_043891f8,&local_210)
        ;
        *(char **)(lVar11 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x40) = 0x107;
        *(undefined1 *)(lVar11 + 0x19) = 1;
        FUN_033269dc(auStack_1c0);
      }
      else {
LAB_0338b174:
        FUN_03326a7c(auStack_1c0,lVar19,4);
        lVar11 = FUN_03326338(auStack_1c0,"Internal fixups for type {}",PTR_DAT_043891f8,&local_210)
        ;
        *(char **)(lVar11 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x40) = 0x107;
        *(undefined1 *)(lVar11 + 0x19) = 1;
        FUN_03326adc(auStack_1c0);
      }
      puVar18 = local_210;
      do {
        uVar20 = *puVar18;
        if (((uint)uVar20 >> 2 & 1) != 0) {
          local_220 = (long *)puVar18[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
          goto joined_r0x03389cf0;
        }
        puVar18 = (ulong *)puVar18[1];
      } while (puVar18 != (ulong *)0x0);
      local_220 = (long *)0x0;
joined_r0x03389cf0:
      if (local_208 == 0) {
        bVar6 = false;
      }
      else {
        puVar14 = (uint *)(uVar3 + (long)local_1fc * 4);
        bVar15 = (byte)*local_210;
        puVar18 = local_210;
        while ((bVar15 & 1) == 0) {
          puVar18 = (ulong *)puVar18[1];
          bVar15 = (byte)*puVar18;
        }
        uVar22 = (uint)puVar18[2] & 0x1f;
        lVar11 = (long)local_208 << 2;
        do {
          if ((ulong)(param_1[2] - param_1[1]) <= (ulong)*puVar14) {
            local_1f8 = 0x80040200;
            bVar6 = true;
            if (*(char *)(*param_1 + 0x50) != '\0') {
              FUN_03326994(auStack_1c0,*param_1,1);
              local_180 = 0x113;
              local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_1f8);
              FUN_03326338(uVar10,"Corrupt patch index body at index {}: invalid offset {}",
                           &DAT_0436ed18,&local_1fc,puVar14);
              FUN_033269dc(auStack_1c0);
            }
            goto LAB_0338a3c8;
          }
          lVar12 = *param_1;
          puVar23 = (uint *)(param_1[1] + (long)(int)*puVar14);
          if (*(byte *)(lVar12 + 0x50) < 4) {
            if (DAT_04350668 != '\0') goto LAB_0338b0cc;
          }
          else if (DAT_04350668 == '\0') {
            FUN_03326994(auStack_1c0,lVar12,4);
            lVar12 = FUN_03326338(auStack_1c0,"srcOff={}",PTR_DAT_04389020,puVar14);
            *(char **)(lVar12 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar12 + 0x40) = 0x116;
            FUN_033269dc(auStack_1c0);
          }
          else {
LAB_0338b0cc:
            FUN_03326a7c(auStack_1c0,lVar12,4);
            lVar12 = FUN_03326338(auStack_1c0,"srcOff={}",PTR_DAT_04389020,puVar14);
            *(char **)(lVar12 + 0x38) =
                 "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar12 + 0x40) = 0x116;
            FUN_03326adc(auStack_1c0);
          }
          puVar18 = local_210;
          local_1f4 = *puVar23;
          local_1f0 = 0x80040200;
          if ((ulong)local_1f4 < (ulong)param_1[5]) {
            local_1c8 = local_210;
            *puVar23 = 0;
            local_1cc = local_1f4;
            if (local_1f4 == 0) {
              local_70[0] = 0x80040200;
              iVar8 = (**(code **)(*local_220 + 0x10))(local_220,puVar23,local_210,0,0,0);
              if (iVar8 < 0) {
                if (DAT_04450900 != '\0') {
                  FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                  local_180 = 0xaa8;
                  local_188 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                        PTR_DAT_043894b0,
                                        "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                        ,local_70);
                  local_1e0._0_8_ = (long)puVar23 - param_1[1];
                  FUN_03326338(uVar10,"Failed to apply null fixup of type \'{}\' at data offset {}",
                               PTR_DAT_043891b8,&local_1c8,local_1e0);
                  goto LAB_0338a190;
                }
              }
              else {
LAB_03389ea4:
                local_70[0] = 0;
              }
            }
            else {
              lVar12 = (long)(int)local_1f4;
              lVar25 = *(long *)(param_1[7] + 0x48);
              puVar21 = (uint *)(lVar25 + lVar12 * 0xc);
              auVar27 = FUN_033875a4(param_1[7],puVar21);
              local_1e0 = auVar27;
              if (uVar22 == 3) {
                local_70[0] = 0x80040200;
                uVar20 = FUN_032e37ec(auVar27._8_8_,&DAT_0434b9d8);
                auVar7 = local_1e0;
                if ((uVar20 & 1) == 0) {
                  if (DAT_04450900 != '\0') {
                    FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                    local_180 = 0xa95;
                    local_188 = 
                    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                    ;
                    uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                          &DAT_0436ede8,
                                          "!addrAndType.m_type->equals(hkReflect::getType<char>())",
                                          local_70);
                    FUN_03326338(uVar10,"Found string whose item type is \'{}\' instead of \'char\'"
                                 ,PTR_DAT_043891f8,local_1e0 + 8);
                    goto LAB_0338a190;
                  }
                  goto LAB_03389ea8;
                }
LAB_0338a1bc:
                local_1e0 = auVar27;
                if (*puVar21 >> 0x1c == 5) {
                  local_1e0 = auVar7;
                  FUN_032e4384(&local_1e8,auVar27._0_8_);
                  local_70[0] = 0x80040200;
                  if ((1 < local_1e8) &&
                     (*(char *)(param_1[8] + ((ulong)*puVar21 & 0xffffff)) == '\0')) {
                    if (DAT_04450900 != '\0') {
                      FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                      local_180 = 0xa9e;
                      local_188 = 
                      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                      ;
                      uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                            &DAT_0436ed48,
                                            "decl && !m_propHashVerified[targetItem.getIndex()]",
                                            local_70);
                      local_1ec = *puVar21 & 0xffffff;
                      FUN_03326338(uVar10,
                                   "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                                   ,&DAT_0436ee88,&local_1ec,
                                   param_1[3] + ((ulong)*puVar21 & 0xffffff) * 8);
                      FUN_033269dc(auStack_1c0);
                    }
                    goto LAB_03389ea8;
                  }
                  puVar18 = local_1c8;
                  auVar7 = local_1e0;
                }
                uVar10 = local_1e0._8_8_;
                uVar26 = local_1e0._0_8_;
                local_70[0] = 0x80040200;
                local_1e0 = auVar7;
                iVar8 = (**(code **)(*local_220 + 0x10))
                                  (local_220,puVar23,puVar18,uVar26,uVar10,
                                   *(undefined4 *)(lVar25 + lVar12 * 0xc + 8));
                if (-1 < iVar8) goto LAB_03389ea4;
                if ((-1 < (int)local_70[0]) || (DAT_04450900 == '\0')) goto LAB_03389ea8;
                FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                local_180 = 0xaa3;
                local_188 = 
                "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                      &DAT_0436eea0,
                                      "srcImpl->inplaceFixup(srcAddr, srcType, addrAndType.m_addr, addrAndType.m_type, targetItem.count).isFailure()"
                                      ,local_70);
                local_1e8 = (long)puVar23 - param_1[1];
                FUN_03326338(uVar10,
                             "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                             ,&DAT_0436ef40,&local_1c8,&local_1e8,&local_1cc);
              }
              else {
                auVar7 = auVar27;
                if ((uVar22 != 6) ||
                   (local_70[0] = 0x80040200, (*puVar21 | 0x10000000) >> 0x1c != 3))
                goto LAB_0338a1bc;
                if (DAT_04450900 == '\0') goto LAB_03389ea8;
                FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                local_180 = 0xa90;
                local_188 = 
                "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                      &DAT_0436ed48,
                                      "targetItem.isKindVarN() || targetItem.isKindNote()",local_70)
                ;
                FUN_03326338(uVar10,"Found invalid fixup for pointer",PTR_DAT_04372528);
              }
LAB_0338a190:
              FUN_033269dc(auStack_1c0);
            }
LAB_03389ea8:
            local_1f8 = local_70[0];
          }
          else {
            if (DAT_04450900 == '\0') {
              bVar6 = true;
              local_1f8 = local_1f0;
              goto LAB_0338a3c8;
            }
            FUN_03326994(auStack_1c0,&DAT_044508b0,1);
            local_180 = 0xa7c;
            local_188 = 
            "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",PTR_DAT_04389360
                                  ,"tgtIdx >= m_numItems",&local_1f0);
            local_1e0._0_8_ = (long)puVar23 - param_1[1];
            FUN_03326338(uVar10,"Corrupt data at offset {}: invalid target index {}",&DAT_0436ed30,
                         local_1e0,&local_1f4);
            FUN_033269dc(auStack_1c0);
            local_1f8 = local_1f0;
          }
          local_1f0 = local_1f8;
          if ((int)local_1f8 < 0) {
            bVar6 = true;
            goto LAB_0338a3c8;
          }
          local_1fc = local_1fc + 1;
          puVar14 = puVar14 + 1;
          lVar11 = lVar11 + -4;
        } while (lVar11 != 0);
        bVar6 = false;
      }
LAB_0338a3c8:
      if (*(byte *)(lVar19 + 0x50) < 4) {
        if (bVar6) {
          return local_1f8;
        }
      }
      else {
        FUN_03326994(auStack_1c0,lVar19,4);
        local_1a7 = 0xff;
        FUN_033269dc(auStack_1c0);
        if (bVar6) {
          return local_1f8;
        }
      }
    }
    if ((char)param_1[6] == '\0') {
      return 0;
    }
LAB_0338a51c:
    while( true ) {
      uVar22 = 0x80040200;
      lVar19 = (long)local_1fc;
      iVar8 = local_1fc + 2;
      if ((int)uVar16 <= iVar8) {
        return 0;
      }
      local_1fc = local_1fc + 1;
      uVar4 = *(uint *)(uVar3 + lVar19 * 4);
      local_1e0._0_4_ = uVar4;
      if (uVar4 == 0) break;
      if ((ulong)uVar4 < (ulong)(param_1[4] - param_1[3] >> 3)) {
        if (*(long *)(param_1[3] + (long)(int)uVar4 * 8) == 0) {
          local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,0x80040200);
          if (*(char *)(*param_1 + 0x50) != '\0') {
            FUN_03326994(auStack_1c0,*param_1,1);
            local_180 = 0xd7;
            local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                  &local_1c8);
            local_1e8 = CONCAT44(local_1e8._4_4_,local_1fc + -1);
            pcVar13 = 
            "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
            goto LAB_0338a684;
          }
          goto LAB_0338a69c;
        }
        iVar9 = *(int *)(uVar3 + (long)local_1fc * 4);
        local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,iVar9);
        local_1fc = iVar8;
        if ((int)uVar16 < iVar9 + iVar8) {
          local_1e8 = CONCAT44(local_1e8._4_4_,0x80040200);
          uVar22 = 0x80040200;
          if (*(char *)(*param_1 + 0x50) != '\0') {
            FUN_03326994(auStack_1c0,*param_1,1);
            local_180 = 0xde;
            local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                  &local_1e8);
            local_70[0] = local_1fc - 1;
            FUN_03326338(uVar10,"Corrupt patch index body at index {}: invalid entries number {}",
                         &DAT_0411b3a0,local_70,&local_1c8);
            FUN_033269dc(auStack_1c0);
            uVar22 = (uint)local_1e8;
          }
          goto LAB_0338a69c;
        }
        lVar19 = *param_1;
        if (*(byte *)(lVar19 + 0x50) < 4) {
          if (DAT_04350668 != '\0') goto LAB_0338b2ec;
        }
        else if (DAT_04350668 == '\0') {
          FUN_03326994(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_1e0,
                                &local_1c8,param_1[3] + (long)(int)local_1e0._0_4_ * 8);
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0xe1;
          FUN_033269dc(auStack_1c0);
        }
        else {
LAB_0338b2ec:
          FUN_03326a7c(auStack_1c0,lVar19,4);
          lVar19 = FUN_03326338(auStack_1c0,"Type {} ({} entries) //{}",&DAT_0436ecf8,local_1e0,
                                &local_1c8,param_1[3] + (long)(int)local_1e0._0_4_ * 8);
          *(char **)(lVar19 + 0x38) =
               "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar19 + 0x40) = 0xe1;
          FUN_03326adc(auStack_1c0);
        }
        local_210 = *(ulong **)(param_1[3] + (long)(int)local_1e0._0_4_ * 8);
        local_208 = (uint)local_1c8;
        local_1f8 = 0;
      }
      else {
        local_1c8 = (ulong *)CONCAT44(local_1c8._4_4_,0x80040200);
        uVar22 = 0x80040200;
        if (*(char *)(*param_1 + 0x50) != '\0') {
          FUN_03326994(auStack_1c0,*param_1,1);
          local_180 = 0xd2;
          local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,&local_1c8)
          ;
          pcVar13 = "Corrupt patch index body at index {}: invalid TypeId {}";
          local_1e8 = CONCAT44(local_1e8._4_4_,local_1fc + -1);
LAB_0338a684:
          FUN_03326338(uVar10,pcVar13,&DAT_0411b3a0,&local_1e8,local_1e0);
          FUN_033269dc(auStack_1c0);
          uVar22 = (uint)local_1c8;
        }
LAB_0338a69c:
        local_210 = (ulong *)0x0;
        local_208 = 0;
        local_1f8 = uVar22;
        if ((int)uVar22 < 0) {
          return uVar22;
        }
      }
      local_218[0] = local_1f8;
      if (local_210 == (ulong *)0x0) goto LAB_0338b020;
      lVar19 = *param_1;
      if (*(byte *)(lVar19 + 0x50) < 4) {
        if (DAT_04350668 != '\0') goto LAB_0338b1c8;
      }
      else if (DAT_04350668 == '\0') {
        FUN_03326994(auStack_1c0,lVar19,4);
        lVar11 = FUN_03326338(auStack_1c0,"External fixups for type {}",PTR_DAT_043891f8,&local_210)
        ;
        *(char **)(lVar11 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x40) = 0x12f;
        *(undefined1 *)(lVar11 + 0x19) = 1;
        FUN_033269dc(auStack_1c0);
      }
      else {
LAB_0338b1c8:
        FUN_03326a7c(auStack_1c0,lVar19,4);
        lVar11 = FUN_03326338(auStack_1c0,"External fixups for type {}",PTR_DAT_043891f8,&local_210)
        ;
        *(char **)(lVar11 + 0x38) =
             "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x40) = 0x12f;
        *(undefined1 *)(lVar11 + 0x19) = 1;
        FUN_03326adc(auStack_1c0);
      }
      puVar18 = local_210;
      do {
        uVar20 = *puVar18;
        if (((uint)uVar20 >> 2 & 1) != 0) {
          local_220 = (long *)puVar18[(uVar20 >> 1 & 1) + (uVar20 & 1) + 2];
          goto LAB_0338a75c;
        }
        puVar18 = (ulong *)puVar18[1];
      } while (puVar18 != (ulong *)0x0);
      local_220 = (long *)0x0;
LAB_0338a75c:
      if (0 < local_208) {
        bVar15 = (byte)*local_210;
        puVar18 = local_210;
        while ((bVar15 & 1) == 0) {
          puVar18 = (ulong *)puVar18[1];
          bVar15 = (byte)*puVar18;
        }
        iVar8 = 0;
        uVar22 = (uint)puVar18[2] & 0x1f;
        do {
          iVar9 = local_1fc + 1;
          local_1f0 = *(uint *)(uVar3 + (long)local_1fc * 4);
          if ((ulong)param_1[5] <= (ulong)local_1f0) {
            local_1f8 = 0x80040200;
            local_1fc = iVar9;
            if (*(char *)(*param_1 + 0x50) != '\0') {
              FUN_03326994(auStack_1c0,*param_1,1);
              local_180 = 0x13a;
              local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_1f8);
              puVar14 = &local_1f0;
              pcVar13 = "Corrupt patch index body at index {}: invalid target index {}";
              local_1e0._0_4_ = local_1fc + -1;
LAB_0338afc4:
              FUN_03326338(uVar10,pcVar13,&DAT_0436ed18,local_1e0,puVar14);
              FUN_033269dc(auStack_1c0);
            }
LAB_0338afd8:
            bVar6 = true;
            goto LAB_0338adfc;
          }
          local_1fc = local_1fc + 2;
          local_1f4 = *(uint *)(uVar3 + (long)iVar9 * 4);
          if (uVar16 < local_1f4 + local_1fc) {
            local_1f8 = 0x80040200;
            if (*(char *)(*param_1 + 0x50) != '\0') {
              FUN_03326994(auStack_1c0,*param_1,1);
              local_180 = 0x141;
              local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                    &local_1f8);
              local_1e0._0_4_ = local_1fc + -1;
              puVar14 = &local_1f4;
              pcVar13 = "Corrupt patch index body at index {}: invalid offsets number {}";
              goto LAB_0338afc4;
            }
            goto LAB_0338afd8;
          }
          lVar11 = *param_1;
          if (*(byte *)(lVar11 + 0x50) < 4) {
            if (DAT_04350668 != '\0') goto LAB_0338b114;
            if (local_1f4 != 0) goto LAB_0338a858;
LAB_0338a844:
            bVar6 = false;
          }
          else {
            if (DAT_04350668 == '\0') {
              FUN_03326994(auStack_1c0,lVar11,4);
              lVar12 = FUN_03326338(auStack_1c0,"tgtIdx={}, {} entries",PTR_DAT_043894a8,&local_1f0,
                                    &local_1f4);
              *(char **)(lVar12 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar12 + 0x40) = 0x144;
              *(undefined1 *)(lVar12 + 0x19) = 1;
              FUN_033269dc(auStack_1c0);
            }
            else {
LAB_0338b114:
              FUN_03326a7c(auStack_1c0,lVar11,4);
              lVar12 = FUN_03326338(auStack_1c0,"tgtIdx={}, {} entries",PTR_DAT_043894a8,&local_1f0,
                                    &local_1f4);
              *(char **)(lVar12 + 0x38) =
                   "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar12 + 0x40) = 0x144;
              *(undefined1 *)(lVar12 + 0x19) = 1;
              FUN_03326adc(auStack_1c0);
            }
            if (local_1f4 == 0) goto LAB_0338a844;
LAB_0338a858:
            puVar14 = (uint *)(uVar3 + (long)local_1fc * 4);
            lVar12 = (ulong)local_1f4 << 2;
            do {
              if ((ulong)(param_1[2] - param_1[1]) <= (ulong)*puVar14) {
                local_1f8 = 0x80040200;
                bVar6 = true;
                if (*(char *)(*param_1 + 0x50) != '\0') {
                  FUN_03326994(auStack_1c0,*param_1,1);
                  local_180 = 0x14e;
                  local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,
                                        &local_1f8);
                  FUN_03326338(uVar10,"Corrupt patch index body at index {}: invalid offset {}",
                               &DAT_0436ed18,&local_1fc,puVar14);
                  FUN_033269dc(auStack_1c0);
                }
                goto LAB_0338add8;
              }
              lVar25 = *param_1;
              puVar2 = (undefined4 *)(param_1[1] + (long)(int)*puVar14);
              if (*(byte *)(lVar25 + 0x50) < 4) {
                if (DAT_04350668 != '\0') goto LAB_0338b084;
              }
              else if (DAT_04350668 == '\0') {
                FUN_03326994(auStack_1c0,lVar25,4);
                lVar25 = FUN_03326338(auStack_1c0,"srcOff={}",PTR_DAT_04389020,puVar14);
                *(char **)(lVar25 + 0x38) =
                     "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                *(undefined8 *)(lVar25 + 0x40) = 0x151;
                FUN_033269dc(auStack_1c0);
              }
              else {
LAB_0338b084:
                FUN_03326a7c(auStack_1c0,lVar25,4);
                lVar25 = FUN_03326338(auStack_1c0,"srcOff={}",PTR_DAT_04389020,puVar14);
                *(char **)(lVar25 + 0x38) =
                     "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                *(undefined8 *)(lVar25 + 0x40) = 0x151;
                FUN_03326adc(auStack_1c0);
              }
              puVar18 = local_210;
              local_1c8 = local_210;
              lVar25 = (long)(int)local_1f0;
              local_1cc = local_1f0;
              *puVar2 = 0;
              if (local_1f0 != 0) {
                lVar24 = *(long *)(param_1[7] + 0x48);
                puVar23 = (uint *)(lVar24 + lVar25 * 0xc);
                auVar27 = FUN_033875a4(param_1[7],puVar23);
                local_1e0 = auVar27;
                if (uVar22 != 3) {
                  auVar7 = auVar27;
                  if ((uVar22 != 6) ||
                     (local_70[0] = 0x80040200, (*puVar23 | 0x10000000) >> 0x1c != 3))
                  goto LAB_0338ab30;
                  if (DAT_04450900 == '\0') goto LAB_0338ab00;
                  FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                  local_180 = 0xa90;
                  local_188 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                        &DAT_0436ed48,
                                        "targetItem.isKindVarN() || targetItem.isKindNote()",
                                        local_70);
                  FUN_03326338(uVar10,"Found invalid fixup for pointer",PTR_DAT_04372528);
LAB_0338aaf8:
                  FUN_033269dc(auStack_1c0);
                  goto LAB_0338ab00;
                }
                local_70[0] = 0x80040200;
                uVar20 = FUN_032e37ec(auVar27._8_8_,&DAT_0434b9d8);
                auVar7 = local_1e0;
                if ((uVar20 & 1) == 0) {
                  if (DAT_04450900 != '\0') {
                    FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                    local_180 = 0xa95;
                    local_188 = 
                    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                    ;
                    uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                          &DAT_0436ede8,
                                          "!addrAndType.m_type->equals(hkReflect::getType<char>())",
                                          local_70);
                    FUN_03326338(uVar10,"Found string whose item type is \'{}\' instead of \'char\'"
                                 ,PTR_DAT_043891f8,local_1e0 + 8);
                    goto LAB_0338aaf8;
                  }
                  goto LAB_0338ab00;
                }
LAB_0338ab30:
                local_1e0 = auVar27;
                if (*puVar23 >> 0x1c != 5) {
LAB_0338a878:
                  uVar10 = local_1e0._8_8_;
                  uVar26 = local_1e0._0_8_;
                  local_70[0] = 0x80040200;
                  local_1e0 = auVar7;
                  iVar9 = (**(code **)(*local_220 + 0x10))
                                    (local_220,puVar2,puVar18,uVar26,uVar10,
                                     *(undefined4 *)(lVar24 + lVar25 * 0xc + 8));
                  if (-1 < iVar9) goto LAB_0338a8b8;
                  if ((-1 < (int)local_70[0]) || (DAT_04450900 == '\0')) goto LAB_0338ab00;
                  FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                  local_180 = 0xaa3;
                  local_188 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                        &DAT_0436eea0,
                                        "srcImpl->inplaceFixup(srcAddr, srcType, addrAndType.m_addr, addrAndType.m_type, targetItem.count).isFailure()"
                                        ,local_70);
                  local_1e8 = (long)puVar2 - param_1[1];
                  FUN_03326338(uVar10,
                               "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                               ,&DAT_0436ef40,&local_1c8,&local_1e8,&local_1cc);
                  goto LAB_0338aaf8;
                }
                local_1e0 = auVar7;
                FUN_032e4384(&local_1e8,auVar27._0_8_);
                local_70[0] = 0x80040200;
                if ((local_1e8 < 2) ||
                   (*(char *)(param_1[8] + ((ulong)*puVar23 & 0xffffff)) != '\0')) {
                  puVar18 = local_1c8;
                  auVar7 = local_1e0;
                  goto LAB_0338a878;
                }
                if (DAT_04450900 != '\0') {
                  FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                  local_180 = 0xa9e;
                  local_188 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                        &DAT_0436ed48,
                                        "decl && !m_propHashVerified[targetItem.getIndex()]",
                                        local_70);
                  local_1ec = *puVar23 & 0xffffff;
                  FUN_03326338(uVar10,
                               "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                               ,&DAT_0436ee88,&local_1ec,
                               param_1[3] + ((ulong)*puVar23 & 0xffffff) * 8);
                  FUN_033269dc(auStack_1c0);
                }
                if (-1 < (int)local_70[0]) goto LAB_0338a8c8;
LAB_0338adc0:
                bVar6 = true;
                local_1f8 = local_70[0];
                goto LAB_0338add8;
              }
              local_70[0] = 0x80040200;
              iVar9 = (**(code **)(*local_220 + 0x10))(local_220,puVar2,local_210,0,0,0);
              if (iVar9 < 0) {
                if (DAT_04450900 != '\0') {
                  FUN_03326994(auStack_1c0,&DAT_044508b0,1);
                  local_180 = 0xaa8;
                  local_188 = 
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_RES_IF({}) returning {}. ",
                                        PTR_DAT_043894b0,
                                        "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                        ,local_70);
                  local_1e0._0_8_ = (long)puVar2 - param_1[1];
                  FUN_03326338(uVar10,"Failed to apply null fixup of type \'{}\' at data offset {}",
                               PTR_DAT_043891b8,&local_1c8,local_1e0);
                  goto LAB_0338aaf8;
                }
LAB_0338ab00:
                if ((int)local_70[0] < 0) goto LAB_0338adc0;
              }
              else {
LAB_0338a8b8:
                local_70[0] = 0;
              }
LAB_0338a8c8:
              local_1fc = local_1fc + 1;
              puVar14 = puVar14 + 1;
              lVar12 = lVar12 + -4;
              local_1f8 = local_70[0];
            } while (lVar12 != 0);
            bVar6 = false;
          }
LAB_0338add8:
          if (3 < *(byte *)(lVar11 + 0x50)) {
            FUN_03326994(auStack_1c0,lVar11,4);
            local_1a7 = 0xff;
            FUN_033269dc(auStack_1c0);
          }
          if (bVar6) goto LAB_0338afd8;
          iVar8 = iVar8 + 1;
        } while (iVar8 < local_208);
      }
      bVar6 = false;
LAB_0338adfc:
      if (3 < *(byte *)(lVar19 + 0x50)) {
        FUN_03326994(auStack_1c0,lVar19,4);
        local_1a7 = 0xff;
        FUN_033269dc(auStack_1c0);
      }
      if (bVar6) {
        return local_1f8;
      }
    }
    local_218[0] = 0;
    local_210 = (ulong *)0x0;
    local_208 = 0;
LAB_0338b020:
    local_1f8 = 0x80040200;
    if (*(char *)(*param_1 + 0x50) == '\0') {
      return 0x80040200;
    }
    FUN_03326994(auStack_1c0,*param_1,1);
    local_180 = 300;
    local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
    uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,&local_1f8);
    FUN_03326338(uVar10,"Invalid sentinel at the end of external fixups",PTR_DAT_04372528);
  }
  else {
    local_1f8 = 0x80040200;
    if (*(char *)(*param_1 + 0x50) == '\0') {
      return 0x80040200;
    }
    FUN_03326994(auStack_1c0,*param_1,1);
    local_188 = "../..\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
    local_180 = 0xeb;
    uVar10 = FUN_03326338(auStack_1c0,"HK_RETURN_LOG returning {}. ",&DAT_0436ecd8,&local_1f8);
    local_218[0] = 0x20f2cca4;
    FUN_03326338(uVar10,"PATCH_DATA section has the wrong size",&DAT_0436ece8,local_218);
  }
  FUN_033269dc(auStack_1c0);
  return local_1f8;
}


