/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00375a58; name: FUN_00375a58
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00375a58(long param_1,long *param_2)

{
  undefined8 ******ppppppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  void *__src;
  undefined8 *******pppppppuVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 ******ppppppuVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 ******ppppppuVar21;
  undefined8 extraout_x1;
  ulong uVar22;
  undefined8 ******ppppppuVar23;
  byte *pbVar24;
  undefined8 ****ppppuVar25;
  byte *pbVar26;
  char *pcVar27;
  char *pcVar28;
  ulong uVar29;
  byte *pbVar30;
  int iVar31;
  undefined8 *****pppppuVar32;
  void *__dest;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  char cVar37;
  char cVar38;
  char cVar39;
  undefined8 *******local_180;
  undefined8 ******ppppppuStack_178;
  byte *local_170;
  undefined8 *******local_150;
  ulong uStack_148;
  void *local_140;
  byte local_130 [16];
  undefined8 local_120;
  undefined4 local_118 [4];
  char *local_108;
  undefined8 ******local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 ******local_e0;
  undefined8 uStack_d8;
  char *local_d0;
  undefined8 *******local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined8 *******local_a0;
  undefined8 ******ppppppuStack_98;
  char *local_90;
  long local_88;
  long local_80;
  undefined8 *******local_78;
  undefined8 ******ppppppuStack_70;
  byte *local_68;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  lVar11 = (**(code **)(*param_2 + 0x98))(param_2);
  ppppppuStack_70 = (undefined8 ******)0x0;
  local_68 = (byte *)0x0;
  local_78 = (undefined8 *******)0x0;
  uVar17 = *(undefined8 *)(param_1 + 0x48);
                    /* try { // try from 00375ab0 to 00375abf has its CatchHandler @ 00377dd4 */
  uVar12 = FUN_003a1cc0(param_2,&local_80,&local_88);
  lVar20 = param_1 + 0x28;
  if ((uVar12 & 1) != 0) {
    ppppppuStack_178 = (undefined8 ******)0x0;
    local_170 = (byte *)0x0;
    local_180 = (undefined8 *******)0x5b02;
    bVar4 = *(byte *)(param_1 + 0x30);
    uVar22 = (ulong)(bVar4 >> 1);
    uVar12 = uVar22;
    if ((bVar4 & 1) != 0) {
      uVar12 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar12 == 1) {
      if ((bVar4 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '[') {
          pcVar27 = (char *)(param_1 + 0x32);
          pcVar28 = (char *)((ulong)&local_180 | 2);
          do {
            uVar22 = uVar22 - 1;
            if (uVar22 == 0) goto LAB_00375b48;
            cVar33 = *pcVar28;
            cVar34 = *pcVar27;
            pcVar27 = pcVar27 + 1;
            pcVar28 = pcVar28 + 1;
          } while (cVar34 == cVar33);
        }
      }
      else if (**(char **)(param_1 + 0x40) == '[') {
LAB_00375b48:
                    /* try { // try from 00375b48 to 00375b4f has its CatchHandler @ 00377da4 */
        FUN_003a0640(lVar20);
        ppppppuStack_178 = (undefined8 ******)0x0;
        local_170 = (byte *)0x0;
        local_180 = (undefined8 *******)0x0;
        local_a0 = (undefined8 *******)0x0;
        ppppppuStack_98 = (undefined8 ******)0x0;
        local_90 = (char *)0x0;
                    /* try { // try from 00375b60 to 00375b6f has its CatchHandler @ 00377d7c */
        uVar12 = FUN_00377df8(param_1,&local_180,&local_a0);
        if ((uVar12 & 1) == 0) {
LAB_0037600c:
          uVar10 = 0;
        }
        else {
          uStack_b8 = 0;
          local_b0 = (void *)0x0;
          local_c0 = (undefined8 *******)0x5d02;
                    /* try { // try from 00375b88 to 00375b93 has its CatchHandler @ 00377c30 */
          uVar12 = FUN_003780a4(param_1,&local_c0);
          if (((ulong)local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
          if ((uVar12 & 1) == 0) goto LAB_0037600c;
          uStack_b8 = 0;
          local_b0 = (void *)0x0;
          local_c0 = (undefined8 *******)0x3a02;
          bVar4 = *(byte *)(param_1 + 0x30);
          uVar22 = (ulong)(bVar4 >> 1);
          uVar12 = uVar22;
          if ((bVar4 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == ':') {
                pcVar27 = (char *)(param_1 + 0x32);
                pcVar28 = (char *)((ulong)&local_c0 | 2);
                do {
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_00377170;
                  cVar33 = *pcVar28;
                  cVar34 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                  pcVar28 = pcVar28 + 1;
                } while (cVar34 == cVar33);
              }
            }
            else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00377170:
                    /* try { // try from 00377170 to 00377177 has its CatchHandler @ 00377938 */
              FUN_003a0640(lVar20);
            }
          }
          uStack_b8 = 0;
          local_b0 = (void *)0x0;
          local_c0 = (undefined8 *******)0x0;
          plVar14 = *(long **)(param_1 + 8);
          if (plVar14 == (long *)0x0) {
            ppppppuVar21 = (undefined8 ******)strlen(PTR_s_type_googleapis_com__04373c50);
            pppppppuVar7 = local_a0;
            ppppppuVar15 = (undefined8 ******)((ulong)local_a0 >> 1 & 0x7f);
            if (((ulong)local_a0 & 1) != 0) {
              ppppppuVar15 = ppppppuStack_98;
            }
            if (ppppppuVar21 == ppppppuVar15) {
              if (ppppppuVar21 != (undefined8 ******)0x0) {
                if (ppppppuVar21 == (undefined8 ******)0xffffffffffffffff) {
                    /* try { // try from 003778b4 to 003778bb has its CatchHandler @ 003778d0 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_out_of_range();
                }
                pcVar27 = (char *)((ulong)&local_a0 | 1);
                if (((ulong)local_a0 & 1) != 0) {
                  pcVar27 = local_90;
                }
                iVar8 = memcmp(pcVar27,PTR_s_type_googleapis_com__04373c50,(size_t)ppppppuVar21);
                if (iVar8 != 0) goto LAB_00377204;
              }
LAB_0037724c:
              lVar20 = (**(code **)(*param_2 + 0x98))(param_2);
              lVar20 = FUN_003425b0(*(undefined8 *)(*(long *)(lVar20 + 0x10) + 0x10),&local_180);
              goto LAB_00377270;
            }
LAB_00377204:
            ppppppuVar21 = (undefined8 ******)strlen(PTR_s_type_googleprod_com__04373c58);
            if (ppppppuVar21 == ppppppuVar15) {
              if (ppppppuVar15 != (undefined8 ******)0x0) {
                if (ppppppuVar15 == (undefined8 ******)0xffffffffffffffff) {
                    /* try { // try from 003778bc to 003778c3 has its CatchHandler @ 003778cc */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_out_of_range();
                }
                pcVar27 = (char *)((ulong)&local_a0 | 1);
                if (((ulong)pppppppuVar7 & 1) != 0) {
                  pcVar27 = local_90;
                }
                iVar8 = memcmp(pcVar27,PTR_s_type_googleprod_com__04373c58,(size_t)ppppppuVar15);
                if (iVar8 != 0) goto LAB_0037732c;
              }
              goto LAB_0037724c;
            }
LAB_0037732c:
                    /* try { // try from 0037732c to 0037733f has its CatchHandler @ 00377a38 */
            FUN_0034b2f0(local_118,"Could not find type \"",&local_a0);
            ppppppuVar15 = (undefined8 ******)((ulong)local_180 >> 1 & 0x7f);
            pbVar30 = (byte *)((ulong)&local_180 | 1);
            if (((ulong)local_180 & 1) != 0) {
              ppppppuVar15 = ppppppuStack_178;
              pbVar30 = local_170;
            }
                    /* try { // try from 00377360 to 00377367 has its CatchHandler @ 003779f8 */
            puVar16 = (undefined8 *)FUN_002e4094(local_118,pbVar30,ppppppuVar15);
            uStack_f8 = puVar16[1];
            local_100 = (undefined8 ******)*puVar16;
            local_f0 = puVar16[2];
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
                    /* try { // try from 00377380 to 00377393 has its CatchHandler @ 003779d0 */
            puVar16 = (undefined8 *)
                      FUN_002e4094(&local_100,"\" stored in google.protobuf.Any.",0x20);
            uStack_d8 = puVar16[1];
            local_e0 = (undefined8 ******)*puVar16;
            local_d0 = (char *)puVar16[2];
            puVar16[1] = 0;
            puVar16[2] = 0;
            *puVar16 = 0;
                    /* try { // try from 003773b0 to 003773bb has its CatchHandler @ 00377994 */
            FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                         &local_e0);
            if (((ulong)local_e0 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_d0);
            }
            if (((ulong)local_100 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_f0);
            }
            if (((byte)local_118[0] & 1) != 0) {
LAB_0037740c:
              FUN_002e2ea0(PTR_LAB_04373088,local_108);
            }
LAB_00377418:
            uVar10 = 0;
          }
          else {
                    /* try { // try from 00377190 to 003772cb has its CatchHandler @ 00377c2c */
            lVar20 = (**(code **)(*plVar14 + 0x20))(plVar14,param_2,&local_a0,&local_180);
LAB_00377270:
            if (lVar20 == 0) goto LAB_0037732c;
            uVar12 = FUN_0037835c(param_1,lVar20,&local_c0);
            if ((uVar12 & 1) == 0) goto LAB_00377418;
            if ((*(int *)(param_1 + 0xe0) == 1) &&
               (((*(int *)(local_80 + 0x3c) != 3 &&
                 (uVar12 = FUN_00386684(extraout_x1,param_2), (uVar12 & 1) != 0)) ||
                ((*(int *)(local_88 + 0x3c) != 3 &&
                 (uVar12 = FUN_00386684(extraout_x1,param_2), (uVar12 & 1) != 0)))))) {
              local_d0 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x30);
              uVar5 = s_Non_repeated_Any_specified_multi_039181e5._16_8_;
              uVar19 = s_Non_repeated_Any_specified_multi_039181e5._0_8_;
              uStack_d8 = _UNK_03889a08;
              local_e0 = _DAT_03889a00;
              uVar17 = CONCAT62(s_Non_repeated_Any_specified_multi_039181e5._26_6_,
                                s_Non_repeated_Any_specified_multi_039181e5._24_2_);
              *(undefined8 *)(local_d0 + 8) = s_Non_repeated_Any_specified_multi_039181e5._8_8_;
              *(undefined8 *)local_d0 = uVar19;
              *(undefined8 *)(local_d0 + 0x18) = uVar17;
              *(undefined8 *)(local_d0 + 0x10) = uVar5;
              uVar17 = CONCAT26(s_Non_repeated_Any_specified_multi_039181e5._32_2_,
                                s_Non_repeated_Any_specified_multi_039181e5._26_6_);
              *(undefined8 *)(local_d0 + 0x22) = s_Non_repeated_Any_specified_multi_039181e5._34_8_;
              *(undefined8 *)(local_d0 + 0x1a) = uVar17;
              local_d0[0x2a] = '\0';
                    /* try { // try from 00377310 to 0037731b has its CatchHandler @ 003778dc */
              FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_e0);
              if (((ulong)local_e0 & 1) == 0) goto LAB_00377418;
              local_108 = local_d0;
              goto LAB_0037740c;
            }
                    /* try { // try from 00377498 to 003774a7 has its CatchHandler @ 00377c2c */
            FUN_003786a0(local_130,&local_a0,&local_180);
                    /* try { // try from 003774a8 to 003774bb has its CatchHandler @ 0037795c */
            FUN_00385d54(extraout_x1,param_2,local_80,local_130);
            if ((local_130[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_120);
            }
            __src = local_b0;
            uVar12 = uStack_b8;
            local_150 = (undefined8 *******)0x0;
            uStack_148 = 0;
            local_140 = (void *)0x0;
            if (((ulong)local_c0 & 1) == 0) {
              local_140 = local_b0;
              uStack_148 = uStack_b8;
              local_150 = local_c0;
            }
            else {
              if (0xffffffffffffffef < uStack_b8) {
                    /* try { // try from 003778c4 to 003778cb has its CatchHandler @ 00377c2c */
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (uStack_b8 < 0x17) {
                local_150 = (undefined8 *******)(ulong)(byte)((int)uStack_b8 << 1);
                __dest = (void *)((ulong)&local_150 | 1);
                if (uStack_b8 != 0) goto LAB_00377810;
              }
              else {
                uVar22 = uStack_b8 + 0x10 & 0xfffffffffffffff0;
                __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar22);
                local_150 = (undefined8 *******)(uVar22 | 1);
                uStack_148 = uVar12;
                local_140 = __dest;
LAB_00377810:
                memcpy(__dest,__src,uVar12);
              }
              *(undefined1 *)((long)__dest + uVar12) = 0;
            }
                    /* try { // try from 00377824 to 00377837 has its CatchHandler @ 00377948 */
            FUN_00385d54(extraout_x1,param_2,local_88,&local_150);
            if (((ulong)local_150 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_140);
            }
            uVar10 = 1;
          }
          if (((ulong)local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_90);
        }
        if (((ulong)local_180 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_170);
        }
        goto joined_r0x00377040;
      }
    }
  }
  ppppppuStack_178 = (undefined8 ******)0x0;
  local_170 = (byte *)0x0;
  local_180 = (undefined8 *******)0x5b02;
  bVar4 = *(byte *)(param_1 + 0x30);
  uVar22 = (ulong)(bVar4 >> 1);
  uVar12 = uVar22;
  if ((bVar4 & 1) != 0) {
    uVar12 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar12 == 1) {
    if ((bVar4 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '[') {
        pcVar27 = (char *)(param_1 + 0x32);
        pcVar28 = (char *)((ulong)&local_180 | 2);
        do {
          uVar22 = uVar22 - 1;
          if (uVar22 == 0) goto LAB_00375ca0;
          cVar33 = *pcVar28;
          cVar34 = *pcVar27;
          pcVar27 = pcVar27 + 1;
          pcVar28 = pcVar28 + 1;
        } while (cVar34 == cVar33);
      }
      goto LAB_00375e1c;
    }
    if (**(char **)(param_1 + 0x40) != '[') goto LAB_00375e1c;
LAB_00375ca0:
                    /* try { // try from 00375ca0 to 00375ca7 has its CatchHandler @ 00377dcc */
    FUN_003a0640(lVar20);
                    /* try { // try from 00375ca8 to 00375cb3 has its CatchHandler @ 00377dd4 */
    uVar12 = FUN_003787b0(param_1,&local_78);
    if ((uVar12 & 1) == 0) goto LAB_003770d0;
    ppppppuStack_178 = (undefined8 ******)0x0;
    local_170 = (byte *)0x0;
    local_180 = (undefined8 *******)0x5d02;
                    /* try { // try from 00375ccc to 00375cd7 has its CatchHandler @ 00377d6c */
    uVar12 = FUN_003780a4(param_1,&local_180);
    if (((ulong)local_180 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_170);
    }
    if ((uVar12 & 1) == 0) goto LAB_003770d0;
    plVar14 = *(long **)(param_1 + 8);
    if (plVar14 == (long *)0x0) {
                    /* try { // try from 00376f08 to 00376f23 has its CatchHandler @ 00377dd4 */
      lVar13 = (**(code **)(*param_2 + 0x98))(param_2);
      ppppppuVar15 = (undefined8 ******)
                     FUN_00342c1c(*(undefined8 *)(*(long *)(lVar13 + 0x10) + 0x10),lVar13,&local_78)
      ;
    }
    else {
                    /* try { // try from 00375d08 to 00375d13 has its CatchHandler @ 00377dd4 */
      ppppppuVar15 = (undefined8 ******)(**(code **)(*plVar14 + 0x10))(plVar14,param_2,&local_78);
    }
    if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_00376798;
    if ((*(char *)(param_1 + 0xe5) != '\0') || (*(char *)(param_1 + 0xe6) != '\0')) {
                    /* try { // try from 00375d2c to 00375d3f has its CatchHandler @ 00377a84 */
      FUN_0034b2f0(&local_e0,"Ignoring extension \"",&local_78);
                    /* try { // try from 00375d40 to 00375d53 has its CatchHandler @ 00377a74 */
      puVar16 = (undefined8 *)
                FUN_002e4094(&local_e0,"\" which is not defined or is not an extension of \"",0x32);
      uStack_b8 = puVar16[1];
      local_c0 = (undefined8 *******)*puVar16;
      local_b0 = (void *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
      pbVar24 = *(byte **)(lVar11 + 8);
      uVar12 = *(ulong *)(pbVar24 + 8);
      pbVar30 = *(byte **)(pbVar24 + 0x10);
      if ((*pbVar24 & 1) == 0) {
        pbVar30 = pbVar24 + 1;
        uVar12 = (ulong)(*pbVar24 >> 1);
      }
                    /* try { // try from 00375d88 to 00375d8f has its CatchHandler @ 00377a64 */
      puVar16 = (undefined8 *)FUN_002e4094(&local_c0,pbVar30,uVar12);
      ppppppuStack_98 = (undefined8 ******)puVar16[1];
      local_a0 = (undefined8 *******)*puVar16;
      local_90 = (char *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
                    /* try { // try from 00375da8 to 00375dbb has its CatchHandler @ 00377a54 */
      puVar16 = (undefined8 *)FUN_002e4094(&local_a0,&DAT_038c838e,2);
      ppppppuStack_178 = (undefined8 ******)puVar16[1];
      local_180 = (undefined8 *******)*puVar16;
      local_170 = (byte *)puVar16[2];
      puVar16[1] = 0;
      puVar16[2] = 0;
      *puVar16 = 0;
                    /* try { // try from 00375dd8 to 00375de3 has its CatchHandler @ 00377a44 */
      FUN_003758fc(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                   &local_180);
      if (((ulong)local_180 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_170);
      }
      if (((ulong)local_a0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_90);
      }
      if (((ulong)local_c0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_b0);
      }
      if (((ulong)local_e0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_d0);
      }
      uVar10 = 0;
      goto LAB_0037683c;
    }
                    /* try { // try from 0037772c to 0037773f has its CatchHandler @ 00377930 */
    FUN_0034b2f0(&local_e0,"Extension \"",&local_78);
                    /* try { // try from 00377740 to 00377753 has its CatchHandler @ 00377920 */
    puVar16 = (undefined8 *)
              FUN_002e4094(&local_e0,"\" is not defined or is not an extension of \"",0x2c);
    uStack_b8 = puVar16[1];
    local_c0 = (undefined8 *******)*puVar16;
    local_b0 = (void *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
    pbVar24 = *(byte **)(lVar11 + 8);
    uVar12 = *(ulong *)(pbVar24 + 8);
    pbVar30 = *(byte **)(pbVar24 + 0x10);
    if ((*pbVar24 & 1) == 0) {
      pbVar30 = pbVar24 + 1;
      uVar12 = (ulong)(*pbVar24 >> 1);
    }
                    /* try { // try from 00377788 to 0037778f has its CatchHandler @ 00377910 */
    puVar16 = (undefined8 *)FUN_002e4094(&local_c0,pbVar30,uVar12);
    ppppppuStack_98 = (undefined8 ******)puVar16[1];
    local_a0 = (undefined8 *******)*puVar16;
    local_90 = (char *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
                    /* try { // try from 003777a8 to 003777bb has its CatchHandler @ 00377900 */
    puVar16 = (undefined8 *)FUN_002e4094(&local_a0,&DAT_038c838e,2);
    ppppppuStack_178 = (undefined8 ******)puVar16[1];
    local_180 = (undefined8 *******)*puVar16;
    local_170 = (byte *)puVar16[2];
    puVar16[1] = 0;
    puVar16[2] = 0;
    *puVar16 = 0;
                    /* try { // try from 003777d8 to 003777e3 has its CatchHandler @ 003778f0 */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_180)
    ;
LAB_00376270:
    if (((ulong)local_180 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_170);
    }
    if (((ulong)local_a0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_90);
    }
    if (((ulong)local_c0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_b0);
    }
    if (((ulong)local_e0 & 1) != 0) {
      local_108 = local_d0;
      goto LAB_003770c4;
    }
  }
  else {
LAB_00375e1c:
                    /* try { // try from 00375e1c to 00375e27 has its CatchHandler @ 00377dd4 */
    uVar12 = FUN_00378994(param_1,&local_78);
    if ((uVar12 & 1) != 0) {
                    /* try { // try from 00375e34 to 00375e6f has its CatchHandler @ 00377dd0 */
      if ((*(char *)(param_1 + 0xe8) == '\0') ||
         (uVar12 = FUN_00320fc0(&local_78,local_118), (uVar12 & 1) == 0)) {
                    /* try { // try from 00375f68 to 00376087 has its CatchHandler @ 00377dd0 */
        ppppppuVar15 = (undefined8 ******)FUN_00342fe4(lVar11,&local_78);
        pbVar30 = local_68;
        ppppppuVar21 = ppppppuStack_70;
        if (ppppppuVar15 != (undefined8 ******)0x0) {
LAB_00376404:
          pppppuVar32 = ppppppuVar15[6];
          if (pppppuVar32 != (undefined8 *****)0x0) {
            local_c0 = (undefined8 *******)PTR_LAB_04373a98;
            local_e0 = ppppppuVar15;
            if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
              local_180 = &local_c0;
              ppppppuStack_178 = &local_e0;
              local_a0 = &local_180;
                    /* try { // try from 0037643c to 0037645f has its CatchHandler @ 00377dd0 */
              std::__call_once((ulong *)pppppuVar32,&local_a0,
                               (_func_void_void_ptr *)PTR_LAB_04373aa0);
            }
          }
          if (*(int *)(ppppppuVar15 + 7) == 10) {
            puVar16 = (undefined8 *)FUN_00342dac(ppppppuVar15);
            pbVar30 = (byte *)*puVar16;
            bVar4 = *pbVar30;
            ppppppuVar23 = (undefined8 ******)(ulong)(bVar4 >> 1);
            ppppppuVar21 = ppppppuVar23;
            if ((bVar4 & 1) != 0) {
              ppppppuVar21 = *(undefined8 *******)(pbVar30 + 8);
            }
            ppppppuVar1 = (undefined8 ******)((ulong)local_78 >> 1 & 0x7f);
            if (((ulong)local_78 & 1) != 0) {
              ppppppuVar1 = ppppppuStack_70;
            }
            if (ppppppuVar21 != ppppppuVar1) goto LAB_003764f4;
            pbVar24 = *(byte **)(pbVar30 + 0x10);
            if ((bVar4 & 1) == 0) {
              pbVar24 = pbVar30 + 1;
            }
            pbVar26 = (byte *)((ulong)&local_78 | 1);
            if (((ulong)local_78 & 1) != 0) {
              pbVar26 = local_68;
            }
            if ((bVar4 & 1) == 0) {
              if (ppppppuVar21 != (undefined8 ******)0x0) {
                do {
                  pbVar30 = pbVar30 + 1;
                  if (*pbVar30 != *pbVar26) goto LAB_003764f4;
                  ppppppuVar23 = (undefined8 ******)((long)ppppppuVar23 + -1);
                  pbVar26 = pbVar26 + 1;
                } while (ppppppuVar23 != (undefined8 ******)0x0);
                if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_003764f4;
              }
            }
            else if ((ppppppuVar21 != (undefined8 ******)0x0) &&
                    (iVar8 = memcmp(pbVar24,pbVar26,(size_t)ppppppuVar21), iVar8 != 0))
            goto LAB_003764f4;
          }
LAB_00376798:
          if (*(int *)(param_1 + 0xe0) == 1) {
                    /* try { // try from 003767b0 to 003767bf has its CatchHandler @ 00377dd4 */
            if ((*(int *)((long)ppppppuVar15 + 0x3c) == 3) ||
               (uVar12 = FUN_00386684(extraout_x1,param_2,ppppppuVar15), (uVar12 & 1) == 0)) {
              pppppuVar32 = ppppppuVar15[0xb];
                    /* try { // try from 00376908 to 00376917 has its CatchHandler @ 00377d48 */
              if ((pppppuVar32 == (undefined8 *****)0x0) ||
                 (uVar12 = FUN_0038e428(extraout_x1,param_2,pppppuVar32), (uVar12 & 1) == 0))
              goto LAB_00376a84;
                    /* try { // try from 0037691c to 0037692b has its CatchHandler @ 00377c04 */
              puVar16 = (undefined8 *)FUN_0038df60(extraout_x1,param_2,pppppuVar32);
                    /* try { // try from 00376930 to 00376943 has its CatchHandler @ 00377c00 */
              FUN_0034b2f0(local_118,"Field \"",&local_78);
                    /* try { // try from 00376944 to 00376957 has its CatchHandler @ 00377bec */
              puVar18 = (undefined8 *)
                        FUN_002e4094(local_118,"\" is specified along with field \"",0x21);
              uStack_f8 = puVar18[1];
              local_100 = (undefined8 ******)*puVar18;
              local_f0 = puVar18[2];
              puVar18[1] = 0;
              puVar18[2] = 0;
              *puVar18 = 0;
              pbVar24 = (byte *)*puVar16;
              uVar12 = *(ulong *)(pbVar24 + 8);
              pbVar30 = *(byte **)(pbVar24 + 0x10);
              if ((*pbVar24 & 1) == 0) {
                pbVar30 = pbVar24 + 1;
                uVar12 = (ulong)(*pbVar24 >> 1);
              }
                    /* try { // try from 0037698c to 00376993 has its CatchHandler @ 00377bdc */
              puVar16 = (undefined8 *)FUN_002e4094(&local_100,pbVar30,uVar12);
              uStack_d8 = puVar16[1];
              local_e0 = (undefined8 ******)*puVar16;
              local_d0 = (char *)puVar16[2];
              puVar16[1] = 0;
              puVar16[2] = 0;
              *puVar16 = 0;
                    /* try { // try from 003769ac to 003769bf has its CatchHandler @ 00377bcc */
              puVar16 = (undefined8 *)FUN_002e4094(&local_e0,"\", another member of oneof \"",0x1c);
              uStack_b8 = puVar16[1];
              local_c0 = (undefined8 *******)*puVar16;
              local_b0 = (void *)puVar16[2];
              puVar16[1] = 0;
              puVar16[2] = 0;
              *puVar16 = 0;
              ppppuVar25 = *pppppuVar32;
              pppuVar2 = ppppuVar25[1];
              pppuVar3 = ppppuVar25[2];
              if ((*(byte *)ppppuVar25 & 1) == 0) {
                pppuVar3 = (undefined8 ***)((long)ppppuVar25 + 1);
                pppuVar2 = (undefined8 ***)(ulong)(*(byte *)ppppuVar25 >> 1);
              }
                    /* try { // try from 003769f4 to 003769fb has its CatchHandler @ 00377b74 */
              puVar16 = (undefined8 *)FUN_002e4094(&local_c0,pppuVar3,pppuVar2);
              ppppppuStack_98 = (undefined8 ******)puVar16[1];
              local_a0 = (undefined8 *******)*puVar16;
              local_90 = (char *)puVar16[2];
              puVar16[1] = 0;
              puVar16[2] = 0;
              *puVar16 = 0;
                    /* try { // try from 00376a14 to 00376a27 has its CatchHandler @ 00377b4c */
              puVar16 = (undefined8 *)FUN_002e4094(&local_a0,&DAT_038c838e,2);
              ppppppuStack_178 = (undefined8 ******)puVar16[1];
              local_180 = (undefined8 *******)*puVar16;
              local_170 = (byte *)puVar16[2];
              puVar16[1] = 0;
              puVar16[2] = 0;
              *puVar16 = 0;
                    /* try { // try from 00376a44 to 00376a4f has its CatchHandler @ 00377af8 */
              FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_180);
              if (((ulong)local_180 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_170);
              }
              if (((ulong)local_a0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_90);
              }
              if (((ulong)local_c0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_b0);
              }
              if (((ulong)local_e0 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_d0);
              }
              if (((ulong)local_100 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_f0);
              }
              if (((byte)local_118[0] & 1) != 0) goto LAB_003770c4;
            }
            else {
                    /* try { // try from 003767c4 to 003767d7 has its CatchHandler @ 00377c28 */
              FUN_0034b2f0(&local_a0,"Non-repeated field \"",&local_78);
                    /* try { // try from 003767d8 to 003767eb has its CatchHandler @ 00377c18 */
              puVar16 = (undefined8 *)FUN_002e4094(&local_a0,"\" is specified multiple times.",0x1e)
              ;
              ppppppuStack_178 = (undefined8 ******)puVar16[1];
              local_180 = (undefined8 *******)*puVar16;
              local_170 = (byte *)puVar16[2];
              puVar16[1] = 0;
              puVar16[2] = 0;
              *puVar16 = 0;
                    /* try { // try from 00376808 to 00376813 has its CatchHandler @ 00377c08 */
              FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                           &local_180);
              if (((ulong)local_180 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_170);
              }
              if (((ulong)local_a0 & 1) != 0) {
                local_108 = local_90;
LAB_003770c4:
                FUN_002e2ea0(PTR_LAB_04373088,local_108);
              }
            }
          }
          else {
LAB_00376a84:
            pppppuVar32 = ppppppuVar15[6];
            if (pppppuVar32 != (undefined8 *****)0x0) {
              local_c0 = (undefined8 *******)PTR_LAB_04373a98;
              local_e0 = ppppppuVar15;
              if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
                local_180 = &local_c0;
                ppppppuStack_178 = &local_e0;
                local_a0 = &local_180;
                    /* try { // try from 00376abc to 00376acb has its CatchHandler @ 00377dd4 */
                std::__call_once((ulong *)pppppuVar32,&local_a0,
                                 (_func_void_void_ptr *)PTR_LAB_04373aa0);
              }
            }
            puVar6 = PTR_DAT_04373ab0;
            if (*(int *)(PTR_DAT_04373ab0 + (ulong)*(uint *)(ppppppuVar15 + 7) * 4) == 10) {
              ppppppuStack_178 = (undefined8 ******)0x0;
              local_170 = (byte *)0x0;
              local_180 = (undefined8 *******)0x3a02;
              bVar4 = *(byte *)(param_1 + 0x30);
              uVar22 = (ulong)(bVar4 >> 1);
              uVar12 = uVar22;
              if ((bVar4 & 1) != 0) {
                uVar12 = *(ulong *)(param_1 + 0x38);
              }
              if (uVar12 == 1) {
                if ((bVar4 & 1) == 0) {
                  if (*(char *)(param_1 + 0x31) == ':') {
                    pcVar27 = (char *)(param_1 + 0x32);
                    pcVar28 = (char *)((ulong)&local_180 | 2);
                    do {
                      uVar22 = uVar22 - 1;
                      if (uVar22 == 0) goto LAB_00376c30;
                      cVar33 = *pcVar28;
                      cVar34 = *pcVar27;
                      pcVar27 = pcVar27 + 1;
                      pcVar28 = pcVar28 + 1;
                    } while (cVar34 == cVar33);
                  }
                  goto LAB_00376c88;
                }
                if (**(char **)(param_1 + 0x40) != ':') goto LAB_00376c88;
LAB_00376c30:
                    /* try { // try from 00376c30 to 00376c37 has its CatchHandler @ 00377a8c */
                FUN_003a0640(lVar20);
                if ((*(char *)((long)ppppppuVar15[0xf] + 0x4f) == '\0') ||
                   (*(int *)(param_1 + 0x28) != 5)) goto LAB_00376c88;
                ppppppuStack_178 = (undefined8 ******)0x0;
                local_170 = (byte *)0x0;
                local_180 = (undefined8 *******)0x0;
                    /* try { // try from 00376c58 to 00376c63 has its CatchHandler @ 00377970 */
                uVar12 = FUN_00379638(param_1,&local_180);
                if ((uVar12 & 1) == 0) {
                  iVar31 = 1;
                  iVar8 = 1;
                }
                else {
                  plVar14 = *(long **)(param_1 + 8);
                  if (plVar14 == (long *)0x0) {
                    uVar19 = 0;
                  }
                  else {
                    /* try { // try from 00376c78 to 00376c7f has its CatchHandler @ 00377984 */
                    uVar19 = (**(code **)(*plVar14 + 0x28))(plVar14,ppppppuVar15);
                  }
                    /* try { // try from 0037787c to 00377893 has its CatchHandler @ 00377984 */
                  uVar19 = FUN_0038c3b8(extraout_x1,param_2,ppppppuVar15,uVar19);
                  FUN_0031e604(uVar19,&local_180);
                  iVar31 = 2;
                  iVar8 = 2;
                }
                if (((ulong)local_180 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_170);
                  iVar8 = iVar31;
                }
                if (iVar8 != 2) goto LAB_003770d0;
              }
              else {
LAB_00376c88:
                if (*(int *)((long)ppppppuVar15 + 0x3c) == 3) {
                  ppppppuStack_178 = (undefined8 ******)0x0;
                  local_170 = (byte *)0x0;
                  local_180 = (undefined8 *******)0x5b02;
                  bVar4 = *(byte *)(param_1 + 0x30);
                  uVar22 = (ulong)(bVar4 >> 1);
                  uVar12 = uVar22;
                  if ((bVar4 & 1) != 0) {
                    uVar12 = *(ulong *)(param_1 + 0x38);
                  }
                  if (uVar12 == 1) {
                    if ((bVar4 & 1) == 0) {
                      if (*(char *)(param_1 + 0x31) == '[') {
                        pcVar27 = (char *)(param_1 + 0x32);
                        pcVar28 = (char *)((ulong)&local_180 | 2);
                        do {
                          uVar22 = uVar22 - 1;
                          if (uVar22 == 0) goto LAB_00376d10;
                          cVar33 = *pcVar28;
                          cVar34 = *pcVar27;
                          pcVar27 = pcVar27 + 1;
                          pcVar28 = pcVar28 + 1;
                        } while (cVar34 == cVar33);
                      }
                    }
                    else if (**(char **)(param_1 + 0x40) == '[') {
LAB_00376d10:
                    /* try { // try from 00376d10 to 00376d17 has its CatchHandler @ 00377a40 */
                      FUN_003a0640(lVar20);
                      ppppppuStack_178 = (undefined8 ******)0x0;
                      local_170 = (byte *)0x0;
                      local_180 = (undefined8 *******)0x5d02;
                      bVar4 = *(byte *)(param_1 + 0x30);
                      uVar22 = (ulong)(bVar4 >> 1);
                      uVar12 = uVar22;
                      if ((bVar4 & 1) != 0) {
                        uVar12 = *(ulong *)(param_1 + 0x38);
                      }
                      if (uVar12 != 1) {
LAB_00377554:
                        pppppuVar32 = ppppppuVar15[6];
                        do {
                          if (pppppuVar32 != (undefined8 *****)0x0) {
                            local_e0 = ppppppuVar15;
                            local_c0 = (undefined8 *******)PTR_LAB_04373a98;
                            if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
                              ppppppuStack_178 = &local_e0;
                              local_180 = &local_c0;
                              local_a0 = &local_180;
                    /* try { // try from 003775c0 to 0037760b has its CatchHandler @ 00377db8 */
                              std::__call_once((ulong *)pppppuVar32,&local_a0,
                                               (_func_void_void_ptr *)PTR_LAB_04373aa0);
                            }
                          }
                          if (*(int *)(puVar6 + (ulong)*(uint *)(ppppppuVar15 + 7) * 4) == 10) {
                            uVar12 = FUN_00379738(param_1,param_2,extraout_x1,ppppppuVar15);
                          }
                          else {
                            uVar12 = FUN_00379aa8(param_1,param_2,extraout_x1,ppppppuVar15);
                          }
                          if ((uVar12 & 1) == 0) goto LAB_003770d0;
                          ppppppuStack_178 = (undefined8 ******)0x0;
                          local_170 = (byte *)0x0;
                          local_180 = (undefined8 *******)0x5d02;
                          bVar4 = *(byte *)(param_1 + 0x30);
                          uVar22 = (ulong)(bVar4 >> 1);
                          uVar12 = uVar22;
                          if ((bVar4 & 1) != 0) {
                            uVar12 = *(ulong *)(param_1 + 0x38);
                          }
                          if (uVar12 == 1) {
                            if ((bVar4 & 1) == 0) {
                              if (*(char *)(param_1 + 0x31) == ']') {
                                pcVar27 = (char *)((ulong)&local_180 | 2);
                                pcVar28 = (char *)(param_1 + 0x32);
                                do {
                                  uVar22 = uVar22 - 1;
                                  if (uVar22 == 0) goto LAB_003776c8;
                                  cVar33 = *pcVar27;
                                  cVar34 = *pcVar28;
                                  pcVar27 = pcVar27 + 1;
                                  pcVar28 = pcVar28 + 1;
                                } while (cVar34 == cVar33);
                              }
                            }
                            else if (**(char **)(param_1 + 0x40) == ']') {
LAB_003776c8:
                    /* try { // try from 003776c8 to 003776cf has its CatchHandler @ 00377980 */
                              FUN_003a0640(lVar20);
                              goto LAB_00376df4;
                            }
                          }
                          ppppppuStack_178 = (undefined8 ******)0x0;
                          local_170 = (byte *)0x0;
                          local_180 = (undefined8 *******)0x2c02;
                    /* try { // try from 0037769c to 003776a7 has its CatchHandler @ 00377d5c */
                          uVar12 = FUN_003780a4(param_1,&local_180);
                          if (((ulong)local_180 & 1) != 0) {
                            FUN_002e2ea0(PTR_LAB_04373088,local_170);
                          }
                          uVar10 = 0;
                          if ((uVar12 & 1) == 0) goto joined_r0x00377040;
                          pppppuVar32 = ppppppuVar15[6];
                        } while( true );
                      }
                      if ((bVar4 & 1) == 0) {
                        if (*(char *)(param_1 + 0x31) == ']') {
                          pcVar27 = (char *)(param_1 + 0x32);
                          pcVar28 = (char *)((ulong)&local_180 | 2);
                          do {
                            uVar22 = uVar22 - 1;
                            if (uVar22 == 0) goto LAB_00377548;
                            cVar33 = *pcVar28;
                            cVar34 = *pcVar27;
                            pcVar27 = pcVar27 + 1;
                            pcVar28 = pcVar28 + 1;
                          } while (cVar34 == cVar33);
                        }
                        goto LAB_00377554;
                      }
                      if (**(char **)(param_1 + 0x40) != ']') goto LAB_00377554;
LAB_00377548:
                    /* try { // try from 00377548 to 0037754f has its CatchHandler @ 00377934 */
                      FUN_003a0640(lVar20);
                      goto LAB_00376df4;
                    }
                  }
                }
                pppppuVar32 = ppppppuVar15[6];
                if (pppppuVar32 != (undefined8 *****)0x0) {
                  local_c0 = (undefined8 *******)PTR_LAB_04373a98;
                  local_e0 = ppppppuVar15;
                  if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
                    local_180 = &local_c0;
                    ppppppuStack_178 = &local_e0;
                    local_a0 = &local_180;
                    /* try { // try from 00376dbc to 00376e73 has its CatchHandler @ 00377dd4 */
                    std::__call_once((ulong *)pppppuVar32,&local_a0,
                                     (_func_void_void_ptr *)PTR_LAB_04373aa0);
                  }
                }
                if (*(int *)(puVar6 + (ulong)*(uint *)(ppppppuVar15 + 7) * 4) == 10) {
                  uVar12 = FUN_00379738(param_1,param_2,extraout_x1,ppppppuVar15);
                }
                else {
                  uVar12 = FUN_00379aa8(param_1,param_2,extraout_x1,ppppppuVar15);
                }
                if ((uVar12 & 1) == 0) goto LAB_003770d0;
              }
LAB_00376df4:
              ppppppuStack_178 = (undefined8 ******)0x0;
              local_170 = (byte *)0x0;
              local_180 = (undefined8 *******)0x3b02;
              bVar4 = *(byte *)(param_1 + 0x30);
              uVar22 = (ulong)(bVar4 >> 1);
              uVar12 = uVar22;
              if ((bVar4 & 1) != 0) {
                uVar12 = *(ulong *)(param_1 + 0x38);
              }
              if (uVar12 == 1) {
                if ((bVar4 & 1) == 0) {
                  if (*(char *)(param_1 + 0x31) == ';') {
                    pcVar27 = (char *)(param_1 + 0x32);
                    pcVar28 = (char *)((ulong)&local_180 | 2);
                    uVar29 = uVar22;
                    do {
                      uVar29 = uVar29 - 1;
                      if (uVar29 == 0) goto LAB_00376e8c;
                      cVar33 = *pcVar28;
                      cVar34 = *pcVar27;
                      pcVar27 = pcVar27 + 1;
                      pcVar28 = pcVar28 + 1;
                    } while (cVar34 == cVar33);
                  }
                  goto LAB_00376e98;
                }
                if (**(char **)(param_1 + 0x40) != ';') goto LAB_00376e98;
LAB_00376e8c:
                    /* try { // try from 00376e8c to 00376e93 has its CatchHandler @ 00377a88 */
                FUN_003a0640(lVar20);
              }
              else {
LAB_00376e98:
                local_90 = (char *)0x0;
                ppppppuStack_98 = (undefined8 ******)0x0;
                local_a0 = (undefined8 *******)0x2c02;
                if (uVar12 == 1) {
                  if ((bVar4 & 1) == 0) {
                    if (*(char *)(param_1 + 0x31) == ',') {
                      pcVar27 = (char *)(param_1 + 0x32);
                      pcVar28 = (char *)((ulong)&local_a0 | 2);
                      do {
                        uVar22 = uVar22 - 1;
                        if (uVar22 == 0) goto LAB_00376f8c;
                        cVar33 = *pcVar28;
                        cVar34 = *pcVar27;
                        pcVar27 = pcVar27 + 1;
                        pcVar28 = pcVar28 + 1;
                      } while (cVar34 == cVar33);
                    }
                  }
                  else if (**(char **)(param_1 + 0x40) == ',') {
LAB_00376f8c:
                    /* try { // try from 00376f8c to 00376f93 has its CatchHandler @ 00377a3c */
                    FUN_003a0640(lVar20);
                  }
                }
              }
              if (*(char *)((long)ppppppuVar15[0xf] + 0x4e) != '\0') {
                    /* try { // try from 00376fa0 to 00376fb3 has its CatchHandler @ 00377c90 */
                FUN_0034b2f0(&local_a0,"text format contains deprecated field \"",&local_78);
                    /* try { // try from 00376fb4 to 00376fc7 has its CatchHandler @ 00377c7c */
                puVar16 = (undefined8 *)FUN_002e4094(&local_a0,&DAT_039042e1,1);
                ppppppuStack_178 = (undefined8 ******)puVar16[1];
                local_180 = (undefined8 *******)*puVar16;
                local_170 = (byte *)puVar16[2];
                puVar16[1] = 0;
                puVar16[2] = 0;
                *puVar16 = 0;
                    /* try { // try from 00376fe4 to 00376fef has its CatchHandler @ 00377c54 */
                FUN_003758fc(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c)
                             ,&local_180);
                if (((ulong)local_180 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_170);
                }
                if (((ulong)local_a0 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_90);
                }
              }
              if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 0037702c to 00377037 has its CatchHandler @ 00377dd4 */
                FUN_00370d00(*(long *)(param_1 + 0x10),ppppppuVar15,uVar17);
              }
              uVar10 = 1;
              goto joined_r0x00377040;
            }
            ppppppuStack_178 = (undefined8 ******)0x0;
            local_170 = (byte *)0x0;
            local_180 = (undefined8 *******)0x3a02;
                    /* try { // try from 00376b64 to 00376b6f has its CatchHandler @ 00377da8 */
            uVar12 = FUN_003780a4(param_1,&local_180);
            if (((ulong)local_180 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_170);
            }
            if ((uVar12 & 1) != 0) goto LAB_00376c88;
          }
          goto LAB_003770d0;
        }
        ppppppuStack_178 = (undefined8 ******)0x0;
        local_170 = (byte *)0x0;
        local_180 = (undefined8 *******)0x0;
        if (((ulong)local_78 & 1) == 0) {
          local_170 = local_68;
          ppppppuStack_178 = ppppppuStack_70;
          local_180 = local_78;
          bVar4 = (byte)local_78;
          if (((ulong)local_78 & 1) != 0) goto LAB_00376370;
LAB_00375fa8:
          pbVar30 = (byte *)((ulong)&local_180 | 1);
          pbVar24 = pbVar30 + (bVar4 >> 1);
          if (pbVar30 != pbVar24) {
LAB_00375fbc:
            uVar12 = (long)pbVar24 - (long)pbVar30;
            if (uVar12 < 8) {
              bVar4 = *pbVar30;
              goto joined_r0x00375fd8;
            }
            uVar29 = uVar12 & 0xfffffffffffffff8;
            pbVar26 = pbVar30 + uVar29;
            pbVar30 = pbVar30 + 3;
            uVar22 = uVar29;
            do {
              uVar19 = *(undefined8 *)(pbVar30 + -3);
              cVar33 = (char)((ulong)uVar19 >> 8);
              cVar34 = (char)((ulong)uVar19 >> 0x10);
              cVar35 = (char)((ulong)uVar19 >> 0x18);
              cVar36 = (char)((ulong)uVar19 >> 0x20);
              cVar37 = (char)((ulong)uVar19 >> 0x28);
              cVar38 = (char)((ulong)uVar19 >> 0x30);
              cVar39 = (char)((ulong)uVar19 >> 0x38);
              if ((byte)((char)uVar19 + 0xbfU) < 0x1a) {
                pbVar30[-3] = (char)uVar19 + 0x20;
              }
              if ((byte)(cVar33 + 0xbfU) < 0x1a) {
                pbVar30[-2] = cVar33 + 0x20;
              }
              if ((byte)(cVar34 + 0xbfU) < 0x1a) {
                pbVar30[-1] = cVar34 + 0x20;
              }
              if ((byte)(cVar35 + 0xbfU) < 0x1a) {
                *pbVar30 = cVar35 + 0x20;
              }
              if ((byte)(cVar36 + 0xbfU) < 0x1a) {
                pbVar30[1] = cVar36 + 0x20;
              }
              if ((byte)(cVar37 + 0xbfU) < 0x1a) {
                pbVar30[2] = cVar37 + 0x20;
              }
              if ((byte)(cVar38 + 0xbfU) < 0x1a) {
                pbVar30[3] = cVar38 + 0x20;
              }
              if ((byte)(cVar39 + 0xbfU) < 0x1a) {
                pbVar30[4] = cVar39 + 0x20;
              }
              uVar22 = uVar22 - 8;
              pbVar30 = pbVar30 + 8;
            } while (uVar22 != 0);
            if (uVar29 != uVar12) {
              do {
                while( true ) {
                  bVar4 = *pbVar26;
                  pbVar30 = pbVar26;
joined_r0x00375fd8:
                  if (bVar4 - 0x41 < 0x1a) break;
                  pbVar26 = pbVar30 + 1;
                  if (pbVar24 == pbVar26) goto LAB_00376380;
                }
                pbVar26 = pbVar30 + 1;
                *pbVar30 = bVar4 + 0x20;
              } while (pbVar24 != pbVar26);
            }
          }
        }
        else {
          if ((undefined8 ******)0xffffffffffffffef < ppppppuStack_70) {
                    /* try { // try from 003778a4 to 003778ab has its CatchHandler @ 003778d8 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (&DAT_00000016 < ppppppuStack_70) {
            ppppppuVar15 = ppppppuStack_70 + 2;
            pbVar24 = (byte *)FUN_002e2e80(PTR_FUN_04373078,(ulong)ppppppuVar15 & 0xfffffffffffffff0
                                          );
            local_180 = (undefined8 *******)((ulong)ppppppuVar15 & 0xfffffffffffffff0 | 1);
            ppppppuStack_178 = ppppppuVar21;
            local_170 = pbVar24;
LAB_00376350:
            memcpy(pbVar24,pbVar30,(size_t)ppppppuVar21);
          }
          else {
            local_180 = (undefined8 *******)(ulong)(byte)((int)ppppppuStack_70 << 1);
            pbVar24 = (byte *)((ulong)&local_180 | 1);
            if (ppppppuStack_70 != (undefined8 ******)0x0) goto LAB_00376350;
          }
          pbVar24[(long)ppppppuVar21] = 0;
          bVar4 = (byte)local_180;
          if (((ulong)local_180 & 1) == 0) goto LAB_00375fa8;
LAB_00376370:
          pbVar24 = local_170 + (long)ppppppuStack_178;
          pbVar30 = local_170;
          if (local_170 != pbVar24) goto LAB_00375fbc;
        }
LAB_00376380:
                    /* try { // try from 00376380 to 003763db has its CatchHandler @ 00377dbc */
        ppppppuVar15 = (undefined8 ******)FUN_00342fe4(lVar11,&local_180);
        if (ppppppuVar15 != (undefined8 ******)0x0) {
          pppppuVar32 = ppppppuVar15[6];
          if (pppppuVar32 != (undefined8 *****)0x0) {
            local_e0 = (undefined8 ******)PTR_LAB_04373a98;
            local_100 = ppppppuVar15;
            if (*pppppuVar32 != (undefined8 ****)0xffffffffffffffff) {
              local_a0 = &local_e0;
              ppppppuStack_98 = &local_100;
              local_c0 = &local_a0;
              std::__call_once((ulong *)pppppuVar32,&local_c0,
                               (_func_void_void_ptr *)PTR_LAB_04373aa0);
            }
          }
          if (*(int *)(ppppppuVar15 + 7) != 10) {
            ppppppuVar15 = (undefined8 ******)0x0;
          }
        }
        if (((ulong)local_180 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_170);
        }
        if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_00376404;
LAB_003764f4:
        pbVar30 = local_68;
        ppppppuVar15 = ppppppuStack_70;
        if (*(char *)(param_1 + 0xe4) != '\0') {
          ppppppuStack_178 = (undefined8 ******)0x0;
          local_170 = (byte *)0x0;
          local_180 = (undefined8 *******)0x0;
          if (((ulong)local_78 & 1) == 0) {
            local_170 = local_68;
            ppppppuStack_178 = ppppppuStack_70;
            local_180 = local_78;
            bVar4 = (byte)local_78;
            if (((ulong)local_78 & 1) != 0) goto LAB_00376740;
LAB_00376524:
            pbVar30 = (byte *)((ulong)&local_180 | 1);
            pbVar24 = pbVar30 + (bVar4 >> 1);
            if (pbVar30 != pbVar24) {
LAB_00376538:
              uVar12 = (long)pbVar24 - (long)pbVar30;
              if (uVar12 < 8) {
                bVar4 = *pbVar30;
                goto joined_r0x00376554;
              }
              uVar29 = uVar12 & 0xfffffffffffffff8;
              pbVar26 = pbVar30 + uVar29;
              pbVar30 = pbVar30 + 3;
              uVar22 = uVar29;
              do {
                uVar19 = *(undefined8 *)(pbVar30 + -3);
                cVar33 = (char)((ulong)uVar19 >> 8);
                cVar34 = (char)((ulong)uVar19 >> 0x10);
                cVar35 = (char)((ulong)uVar19 >> 0x18);
                cVar36 = (char)((ulong)uVar19 >> 0x20);
                cVar37 = (char)((ulong)uVar19 >> 0x28);
                cVar38 = (char)((ulong)uVar19 >> 0x30);
                cVar39 = (char)((ulong)uVar19 >> 0x38);
                if ((byte)((char)uVar19 + 0xbfU) < 0x1a) {
                  pbVar30[-3] = (char)uVar19 + 0x20;
                }
                if ((byte)(cVar33 + 0xbfU) < 0x1a) {
                  pbVar30[-2] = cVar33 + 0x20;
                }
                if ((byte)(cVar34 + 0xbfU) < 0x1a) {
                  pbVar30[-1] = cVar34 + 0x20;
                }
                if ((byte)(cVar35 + 0xbfU) < 0x1a) {
                  *pbVar30 = cVar35 + 0x20;
                }
                if ((byte)(cVar36 + 0xbfU) < 0x1a) {
                  pbVar30[1] = cVar36 + 0x20;
                }
                if ((byte)(cVar37 + 0xbfU) < 0x1a) {
                  pbVar30[2] = cVar37 + 0x20;
                }
                if ((byte)(cVar38 + 0xbfU) < 0x1a) {
                  pbVar30[3] = cVar38 + 0x20;
                }
                if ((byte)(cVar39 + 0xbfU) < 0x1a) {
                  pbVar30[4] = cVar39 + 0x20;
                }
                uVar22 = uVar22 - 8;
                pbVar30 = pbVar30 + 8;
              } while (uVar22 != 0);
              if (uVar29 != uVar12) {
                do {
                  while( true ) {
                    bVar4 = *pbVar26;
                    pbVar30 = pbVar26;
joined_r0x00376554:
                    if (bVar4 - 0x41 < 0x1a) break;
                    pbVar26 = pbVar30 + 1;
                    if (pbVar24 == pbVar26) goto LAB_00376750;
                  }
                  pbVar26 = pbVar30 + 1;
                  *pbVar30 = bVar4 + 0x20;
                } while (pbVar24 != pbVar26);
              }
            }
          }
          else {
            if ((undefined8 ******)0xffffffffffffffef < ppppppuStack_70) {
                    /* try { // try from 003778ac to 003778b3 has its CatchHandler @ 003778d4 */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            if (&DAT_00000016 < ppppppuStack_70) {
              ppppppuVar21 = ppppppuStack_70 + 2;
              pbVar24 = (byte *)FUN_002e2e80(PTR_FUN_04373078,
                                             (ulong)ppppppuVar21 & 0xfffffffffffffff0);
              local_180 = (undefined8 *******)((ulong)ppppppuVar21 & 0xfffffffffffffff0 | 1);
              ppppppuStack_178 = ppppppuVar15;
              local_170 = pbVar24;
LAB_00376724:
              memcpy(pbVar24,pbVar30,(size_t)ppppppuVar15);
            }
            else {
              local_180 = (undefined8 *******)(ulong)(byte)((int)ppppppuStack_70 << 1);
              pbVar24 = (byte *)((ulong)&local_180 | 1);
              if (ppppppuStack_70 != (undefined8 ******)0x0) goto LAB_00376724;
            }
            pbVar24[(long)ppppppuVar15] = 0;
            bVar4 = (byte)local_180;
            if (((ulong)local_180 & 1) == 0) goto LAB_00376524;
LAB_00376740:
            pbVar24 = local_170 + (long)ppppppuStack_178;
            pbVar30 = local_170;
            if (local_170 != pbVar24) goto LAB_00376538;
          }
LAB_00376750:
                    /* try { // try from 00376750 to 0037675b has its CatchHandler @ 00377d4c */
          ppppppuVar15 = (undefined8 ******)FUN_00342f48(lVar11,&local_180);
          if (((ulong)local_180 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_170);
          }
          if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_00376798;
        }
                    /* try { // try from 0037677c to 00376787 has its CatchHandler @ 00377dd0 */
        uVar9 = FUN_00378a9c(lVar11,&local_78);
        ppppppuVar15 = (undefined8 ******)0x0;
LAB_00375e7c:
        uVar10 = uVar9;
        if ((uVar10 & 1) != 0) goto LAB_00376794;
        if (*(char *)(param_1 + 0xe5) == '\0') {
                    /* try { // try from 003761b8 to 003761c7 has its CatchHandler @ 00377af4 */
          FUN_0034b2f0(&local_e0,"Message type \"",*(undefined8 *)(lVar11 + 8));
                    /* try { // try from 003761c8 to 003761db has its CatchHandler @ 00377ae4 */
          puVar16 = (undefined8 *)FUN_002e4094(&local_e0,"\" has no field named \"",0x16);
          uStack_b8 = puVar16[1];
          local_c0 = (undefined8 *******)*puVar16;
          local_b0 = (void *)puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
          ppppppuVar15 = (undefined8 ******)((ulong)local_78 >> 1 & 0x7f);
          pbVar30 = (byte *)((ulong)&local_78 | 1);
          if (((ulong)local_78 & 1) != 0) {
            ppppppuVar15 = ppppppuStack_70;
            pbVar30 = local_68;
          }
                    /* try { // try from 00376214 to 0037621b has its CatchHandler @ 00377ad4 */
          puVar16 = (undefined8 *)FUN_002e4094(&local_c0,pbVar30,ppppppuVar15);
          ppppppuStack_98 = (undefined8 ******)puVar16[1];
          local_a0 = (undefined8 *******)*puVar16;
          local_90 = (char *)puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
                    /* try { // try from 00376234 to 00376247 has its CatchHandler @ 00377ac4 */
          puVar16 = (undefined8 *)FUN_002e4094(&local_a0,&DAT_038c838e,2);
          ppppppuStack_178 = (undefined8 ******)puVar16[1];
          local_180 = (undefined8 *******)*puVar16;
          local_170 = (byte *)puVar16[2];
          puVar16[1] = 0;
          puVar16[2] = 0;
          *puVar16 = 0;
                    /* try { // try from 00376264 to 0037626f has its CatchHandler @ 00377ab4 */
          FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                       &local_180);
          goto LAB_00376270;
        }
                    /* try { // try from 00375e8c to 00375e9b has its CatchHandler @ 00377d44 */
        FUN_0034b2f0(&local_e0,"Message type \"",*(undefined8 *)(lVar11 + 8));
                    /* try { // try from 00375e9c to 00375eaf has its CatchHandler @ 00377d34 */
        puVar16 = (undefined8 *)FUN_002e4094(&local_e0,"\" has no field named \"",0x16);
        uStack_b8 = puVar16[1];
        local_c0 = (undefined8 *******)*puVar16;
        local_b0 = (void *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
        ppppppuVar15 = (undefined8 ******)((ulong)local_78 >> 1 & 0x7f);
        pbVar30 = (byte *)((ulong)&local_78 | 1);
        if (((ulong)local_78 & 1) != 0) {
          ppppppuVar15 = ppppppuStack_70;
          pbVar30 = local_68;
        }
                    /* try { // try from 00375ee8 to 00375eef has its CatchHandler @ 00377d24 */
        puVar16 = (undefined8 *)FUN_002e4094(&local_c0,pbVar30,ppppppuVar15);
        ppppppuStack_98 = (undefined8 ******)puVar16[1];
        local_a0 = (undefined8 *******)*puVar16;
        local_90 = (char *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
                    /* try { // try from 00375f08 to 00375f1b has its CatchHandler @ 00377cec */
        puVar16 = (undefined8 *)FUN_002e4094(&local_a0,&DAT_038c838e,2);
        ppppppuStack_178 = (undefined8 ******)puVar16[1];
        local_180 = (undefined8 *******)*puVar16;
        local_170 = (byte *)puVar16[2];
        puVar16[1] = 0;
        puVar16[2] = 0;
        *puVar16 = 0;
                    /* try { // try from 00375f38 to 00375f43 has its CatchHandler @ 00377c94 */
        FUN_003758fc(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
                     &local_180);
        if (((ulong)local_180 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_170);
        }
        if (((ulong)local_a0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_90);
        }
        if (((ulong)local_c0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_b0);
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
      }
      else {
        lVar13 = FUN_00343aac(lVar11,local_118[0]);
        if (lVar13 == 0) {
          lVar13 = FUN_00343b00(lVar11,local_118[0]);
          if (lVar13 == 0) {
                    /* try { // try from 00376ef4 to 00376efb has its CatchHandler @ 00377dd0 */
            ppppppuVar15 = (undefined8 ******)FUN_00342e08(lVar11,local_118[0]);
            goto LAB_00375e70;
          }
          uVar10 = 1;
        }
        else {
          plVar14 = *(long **)(param_1 + 8);
          if (plVar14 == (long *)0x0) {
                    /* try { // try from 0037629c to 003762a3 has its CatchHandler @ 00377dd0 */
            ppppppuVar15 = (undefined8 ******)
                           FUN_003425d4(*(undefined8 *)(*(long *)(lVar11 + 0x10) + 0x10),lVar11,
                                        local_118[0]);
          }
          else {
            ppppppuVar15 = (undefined8 ******)(**(code **)(*plVar14 + 0x18))(plVar14,lVar11);
          }
LAB_00375e70:
          uVar10 = 0;
          uVar9 = 0;
          if (ppppppuVar15 == (undefined8 ******)0x0) goto LAB_00375e7c;
LAB_00376794:
          if (ppppppuVar15 != (undefined8 ******)0x0) goto LAB_00376798;
        }
      }
LAB_0037683c:
      if ((*(char *)(param_1 + 0xe5) == '\0') &&
         ((uVar10 & 1) == 0 && *(char *)(param_1 + 0xe6) == '\0')) {
                    /* try { // try from 00376858 to 0037686f has its CatchHandler @ 00377aac */
        FUN_0030f640(&local_180,3,
                     "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                     ,0x1fb);
                    /* try { // try from 00376870 to 00376883 has its CatchHandler @ 00377a94 */
        uVar17 = FUN_0030f3ac(&local_180,
                              "CHECK failed: allow_unknown_field_ || allow_unknown_extension_ || reserved_field: "
                             );
                    /* try { // try from 00376884 to 0037688b has its CatchHandler @ 00377a90 */
        FUN_0030f41c(&local_a0,uVar17);
        FUN_0030f658(&local_180);
      }
      ppppppuStack_178 = (undefined8 ******)0x0;
      local_170 = (byte *)0x0;
      local_180 = (undefined8 *******)0x3a02;
      bVar4 = *(byte *)(param_1 + 0x30);
      uVar22 = (ulong)(bVar4 >> 1);
      uVar12 = uVar22;
      if ((bVar4 & 1) != 0) {
        uVar12 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar12 == 1) {
        if ((bVar4 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == ':') {
            pcVar27 = (char *)(param_1 + 0x32);
            pcVar28 = (char *)((ulong)&local_180 | 2);
            do {
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) goto LAB_00376ba8;
              cVar33 = *pcVar28;
              cVar34 = *pcVar27;
              pcVar27 = pcVar27 + 1;
              pcVar28 = pcVar28 + 1;
            } while (cVar34 == cVar33);
          }
        }
        else if (**(char **)(param_1 + 0x40) == ':') {
LAB_00376ba8:
                    /* try { // try from 00376ba8 to 00376baf has its CatchHandler @ 00377ab0 */
          FUN_003a0640(lVar20);
          ppppppuStack_98 = (undefined8 ******)0x0;
          local_90 = (char *)0x0;
          local_a0 = (undefined8 *******)0x7b02;
          bVar4 = *(byte *)(param_1 + 0x30);
          uVar22 = (ulong)(bVar4 >> 1);
          uVar12 = uVar22;
          if ((bVar4 & 1) != 0) {
            uVar12 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '{') {
                pcVar27 = (char *)(param_1 + 0x32);
                pcVar28 = (char *)((ulong)&local_a0 | 2);
                uVar29 = uVar22;
                do {
                  uVar29 = uVar29 - 1;
                  if (uVar29 == 0) goto LAB_00377510;
                  cVar33 = *pcVar28;
                  cVar34 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                  pcVar28 = pcVar28 + 1;
                } while (cVar34 == cVar33);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '{') goto LAB_00377510;
          }
          local_b0 = (void *)0x0;
          uStack_b8 = 0;
          local_c0 = (undefined8 *******)0x3c02;
          if (uVar12 == 1) {
            if ((bVar4 & 1) == 0) {
              if (*(char *)(param_1 + 0x31) == '<') {
                pcVar27 = (char *)(param_1 + 0x32);
                pcVar28 = (char *)((ulong)&local_c0 | 2);
                do {
                  uVar22 = uVar22 - 1;
                  if (uVar22 == 0) goto LAB_00377510;
                  cVar33 = *pcVar28;
                  cVar34 = *pcVar27;
                  pcVar27 = pcVar27 + 1;
                  pcVar28 = pcVar28 + 1;
                } while (cVar34 == cVar33);
              }
            }
            else if (**(char **)(param_1 + 0x40) == '<') goto LAB_00377510;
          }
          uVar10 = FUN_00378bf0(param_1);
          goto joined_r0x00377040;
        }
      }
LAB_00377510:
                    /* try { // try from 00377510 to 0037752f has its CatchHandler @ 00377dd4 */
      uVar10 = FUN_00379470(param_1);
      goto joined_r0x00377040;
    }
  }
LAB_003770d0:
  uVar10 = 0;
joined_r0x00377040:
  if (((ulong)local_78 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_68);
  }
  return uVar10 & 1;
}


