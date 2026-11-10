/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0036031c; name: FUN_0036031c
 */


/* WARNING: Removing unreachable block (ram,0x00360740) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0036031c(long *param_1,long *param_2,int *******param_3,long *param_4)

{
  int *piVar1;
  bool bVar2;
  int ****ppppiVar3;
  int ****ppppiVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  int ******ppppppiVar18;
  ulong *puVar19;
  int ******extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar20;
  byte *pbVar21;
  long *plVar22;
  int *****pppppiVar23;
  ulong uVar24;
  byte *pbVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  size_t sVar29;
  ulong *__dest;
  ulong __n;
  int *****pppppiVar30;
  void *pvVar31;
  int *******pppppppiVar32;
  long *plVar33;
  ulong *puVar34;
  int *******pppppppiVar35;
  undefined1 auVar36 [16];
  int *******local_1b0;
  ulong *puStack_1a8;
  undefined8 local_1a0;
  int *******local_180;
  int *******pppppppiStack_178;
  char *local_170;
  undefined8 local_140;
  undefined8 local_130;
  ulong local_128;
  void *local_120;
  byte local_118 [16];
  undefined8 local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  int *******local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  int *******local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int *****local_a8;
  int *****local_a0;
  int *****local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  
  lVar26 = param_1[2];
  iVar15 = *(int *)(lVar26 + 0x20);
  if (iVar15 == 0) {
    local_170 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x20);
    uVar7 = s_Option_must_have_a_name__039b11c1._8_8_;
    uVar16 = s_Option_must_have_a_name__039b11c1._0_8_;
    pppppppiStack_178 = (int *******)_UNK_03889048;
    local_180 = (int *******)_DAT_03889040;
    *(undefined8 *)(local_170 + 0x10) = s_Option_must_have_a_name__039b11c1._16_8_;
    *(undefined8 *)(local_170 + 8) = uVar7;
    *(undefined8 *)local_170 = uVar16;
    local_170[0x18] = '\0';
                    /* try { // try from 00360494 to 0036049f has its CatchHandler @ 003618b4 */
    FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
LAB_00360c50:
    if (((ulong)local_180 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_170);
    }
    return 0;
  }
  if (iVar15 < 1) {
    FUN_0030f640(&local_180,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x69e);
                    /* try { // try from 00360374 to 00360387 has its CatchHandler @ 00361898 */
    uVar16 = FUN_0030f3ac(&local_180,"CHECK failed: (index) < (current_size_): ");
                    /* try { // try from 00360388 to 0036038f has its CatchHandler @ 00361894 */
    FUN_0030f41c(&local_1b0,uVar16);
    FUN_0030f658(&local_180);
  }
  pbVar21 = *(byte **)(*(long *)(*(long *)(lVar26 + 0x28) + 8) + 0x18);
  bVar5 = *pbVar21;
  uVar28 = (ulong)(bVar5 >> 1);
  if ((bVar5 & 1) != 0) {
    uVar28 = *(ulong *)(pbVar21 + 8);
  }
  if (uVar28 == 0x14) {
    pbVar25 = *(byte **)(pbVar21 + 0x10);
    if ((bVar5 & 1) == 0) {
      pbVar25 = pbVar21 + 1;
    }
    if ((*(long *)pbVar25 == 0x707265746e696e75 && *(long *)(pbVar25 + 8) == 0x706f5f6465746572) &&
        *(int *)(pbVar25 + 0x10) == 0x6e6f6974) {
      local_170 = (char *)FUN_002e2e80(PTR_FUN_04373078,0x40);
      uVar10 = s_Option_must_not_use_reserved_nam_0392e5d2._24_8_;
      uVar9 = s_Option_must_not_use_reserved_nam_0392e5d2._16_8_;
      uVar8 = s_Option_must_not_use_reserved_nam_0392e5d2._8_8_;
      uVar7 = s_Option_must_not_use_reserved_nam_0392e5d2._0_8_;
      uVar16 = CONCAT17(s_Option_must_not_use_reserved_nam_0392e5d2[0x30],
                        s_Option_must_not_use_reserved_nam_0392e5d2._41_7_);
      pppppppiStack_178 = (int *******)_UNK_03889218;
      local_180 = (int *******)_DAT_03889210;
      *(undefined8 *)(local_170 + 0x31) = s_Option_must_not_use_reserved_nam_0392e5d2._49_8_;
      *(undefined8 *)(local_170 + 0x29) = uVar16;
      uVar11 = s_Option_must_not_use_reserved_nam_0392e5d2._32_8_;
      uVar16 = CONCAT71(s_Option_must_not_use_reserved_nam_0392e5d2._41_7_,
                        s_Option_must_not_use_reserved_nam_0392e5d2[0x28]);
      *(undefined8 *)(local_170 + 8) = uVar8;
      *(undefined8 *)local_170 = uVar7;
      *(undefined8 *)(local_170 + 0x18) = uVar10;
      *(undefined8 *)(local_170 + 0x10) = uVar9;
      *(undefined8 *)(local_170 + 0x28) = uVar16;
      *(undefined8 *)(local_170 + 0x20) = uVar11;
      local_170[0x39] = '\0';
                    /* try { // try from 00360c44 to 00360c4f has its CatchHandler @ 0036187c */
      FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
      goto LAB_00360c50;
    }
  }
  lVar27 = *param_1;
  lVar26 = (**(code **)(*param_2 + 0x98))(param_2);
  iVar15 = FUN_0034e7dc(lVar27,*(undefined8 *)(lVar26 + 8),1);
  ppppppiVar18 = extraout_x1;
  if (iVar15 != 1) {
    ppppppiVar18 = (int ******)(**(code **)(*param_2 + 0x98))(param_2);
  }
  if (ppppppiVar18 == (int ******)0x0) {
    FUN_0030f640(&local_180,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1974);
                    /* try { // try from 003604d4 to 003604e7 has its CatchHandler @ 00361890 */
    uVar16 = FUN_0030f3ac(&local_180,"CHECK failed: options_descriptor: ");
                    /* try { // try from 003604e8 to 003604ef has its CatchHandler @ 0036188c */
    FUN_0030f41c(&local_1b0,uVar16);
    FUN_0030f658(&local_180);
  }
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_a8 = (int *****)0x0;
  local_80 = 0;
  local_78 = (ulong *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = (int *****)0x0;
  local_98 = (int *****)0x0;
  if (param_4[1] - *param_4 != 0) {
    uVar28 = param_4[1] - *param_4 >> 2;
    if (uVar28 >> 0x3e != 0) {
                    /* try { // try from 0036155c to 00361563 has its CatchHandler @ 0036158c */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_a8 = (int *****)FUN_002e2e80(PTR_FUN_04373078);
    local_98 = (int *****)((long)local_a8 + uVar28 * 4);
    sVar29 = param_4[1] - *param_4;
    local_a0 = local_a8;
    if (0 < (long)sVar29) {
      memcpy(local_a8,(void *)*param_4,sVar29);
      local_a0 = (int *****)((long)local_a0 + sVar29);
    }
  }
  puVar12 = PTR_LAB_04373088;
  if (0 < *(int *)(param_1[2] + 0x20)) {
    iVar15 = 0;
    pppppppiVar32 = (int *******)0x0;
    lVar26 = *param_1;
    if ((*(byte *)(lVar26 + 0xb0) & 1) == 0) goto LAB_003605d4;
LAB_003605dc:
    **(undefined1 **)(lVar26 + 0xc0) = 0;
    *(undefined8 *)(lVar26 + 0xb8) = 0;
    do {
                    /* try { // try from 003605f0 to 00360633 has its CatchHandler @ 00361a68 */
      lVar26 = FUN_003669e8(param_1[2] + 0x18,iVar15);
      pbVar21 = *(byte **)(lVar26 + 0x18);
      uVar28 = local_90 >> 1 & 0x7f;
      if ((local_90 & 1) != 0) {
        uVar28 = local_88;
      }
      if (uVar28 != 0) {
        FUN_002e4094(&local_90,&DAT_0389ff53,1);
      }
      lVar26 = FUN_003669e8(param_1[2] + 0x18,iVar15);
      if (*(char *)(lVar26 + 0x20) != '\0') {
                    /* try { // try from 0036063c to 0036064f has its CatchHandler @ 00361a60 */
        FUN_0034b2f0(&local_1b0,&DAT_03979c4d,pbVar21);
                    /* try { // try from 00360650 to 00360663 has its CatchHandler @ 00361a38 */
        puVar17 = (undefined8 *)FUN_002e4094(&local_1b0,&DAT_039a0269,1);
        pppppppiStack_178 = (int *******)puVar17[1];
        local_180 = (int *******)*puVar17;
        local_170 = (char *)puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        pppppppiVar35 = (int *******)((ulong)local_180 >> 1 & 0x7f);
        uVar28 = (ulong)&local_180 | 1;
        if (((ulong)local_180 & 1) != 0) {
          pppppppiVar35 = pppppppiStack_178;
          uVar28 = (ulong)local_170;
        }
                    /* try { // try from 00360694 to 0036069b has its CatchHandler @ 00361a10 */
        FUN_002e4094(&local_90,uVar28,pppppppiVar35);
        if (((ulong)local_180 & 1) != 0) {
          FUN_002e2ea0(puVar12,local_170);
        }
        if (((ulong)local_1b0 & 1) != 0) {
          FUN_002e2ea0(puVar12,local_1a0);
        }
        plVar22 = (long *)*param_1;
                    /* try { // try from 003606c8 to 003606f7 has its CatchHandler @ 00361a64 */
        auVar36 = FUN_0034ed20(plVar22,pbVar21,param_1[1],0,1);
        if (auVar36._0_4_ == 0) {
          lVar26 = *plVar22;
          if (*(char *)(lVar26 + 0x2a) == '\0') {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = auVar36._8_8_;
            auVar36 = auVar6 << 0x40;
          }
          else {
            auVar36 = FUN_0034f378(lVar26,pbVar21,0);
          }
        }
        uVar16 = auVar36._0_8_;
        pppppppiVar35 = auVar36._8_8_;
        if (auVar36._0_4_ != 2) {
          pppppppiVar35 = pppppppiVar32;
        }
LAB_00360940:
        pppppppiVar32 = pppppppiVar35;
        if (pppppppiVar35 != (int *******)0x0) goto LAB_00360754;
LAB_00360c70:
        plVar22 = (long *)*param_1;
        if (*(char *)(*plVar22 + 0x2a) != '\0') {
                    /* try { // try from 00360c84 to 00360caf has its CatchHandler @ 00361878 */
          FUN_00361a8c(uVar16,param_1[2],param_2);
          goto LAB_00360c8c;
        }
        if ((*(byte *)(plVar22 + 0x16) & 1) == 0) {
          if (*(byte *)(plVar22 + 0x16) >> 1 != 0) goto LAB_003610d4;
LAB_00360ecc:
                    /* try { // try from 00360ecc to 00360edf has its CatchHandler @ 0036160c */
          FUN_0034b2f0(&local_c0,"Option \"",&local_90);
                    /* try { // try from 00360ee0 to 00360ef3 has its CatchHandler @ 003615f8 */
          puVar17 = (undefined8 *)FUN_002e4094(&local_c0,"\" unknown. Ensure that your proto",0x21);
          puStack_1a8 = (ulong *)puVar17[1];
          local_1b0 = (int *******)*puVar17;
          local_1a0 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 00360f0c to 00360f1f has its CatchHandler @ 003615d0 */
          puVar17 = (undefined8 *)
                    FUN_002e4094(&local_1b0,
                                 " definition file imports the proto which defines the option.",0x3c
                                );
          pppppppiStack_178 = (int *******)puVar17[1];
          local_180 = (int *******)*puVar17;
          local_170 = (char *)puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 00360f44 to 00360f4f has its CatchHandler @ 00361594 */
          FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
          if (((ulong)local_180 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_170);
          }
          if (((ulong)local_1b0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_1a0);
          }
          if (((ulong)local_c0 & 1) == 0) goto LAB_003614dc;
          local_108 = local_b0;
        }
        else {
          if (plVar22[0x17] == 0) goto LAB_00360ecc;
LAB_003610d4:
                    /* try { // try from 003610d4 to 003610e7 has its CatchHandler @ 0036174c */
          FUN_0034b2f0(local_118,"Option \"",&local_90);
                    /* try { // try from 003610e8 to 003610fb has its CatchHandler @ 00361738 */
          puVar19 = (ulong *)FUN_002e4094(local_118,"\" is resolved to \"(",0x13);
          uStack_f8 = puVar19[1];
          local_100 = *puVar19;
          local_f0 = puVar19[2];
          puVar19[1] = 0;
          puVar19[2] = 0;
          *puVar19 = 0;
          lVar27 = *param_1;
          uVar28 = (ulong)(*(byte *)(lVar27 + 0xb0) >> 1);
          lVar26 = lVar27 + 0xb1;
          if ((*(byte *)(lVar27 + 0xb0) & 1) != 0) {
            uVar28 = *(ulong *)(lVar27 + 0xb8);
            lVar26 = *(long *)(lVar27 + 0xc0);
          }
                    /* try { // try from 00361134 to 0036113b has its CatchHandler @ 00361728 */
          puVar17 = (undefined8 *)FUN_002e4094(&local_100,lVar26,uVar28);
          uStack_d8 = puVar17[1];
          local_e0 = (int *******)*puVar17;
          local_d0 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 00361154 to 00361167 has its CatchHandler @ 00361718 */
          puVar17 = (undefined8 *)
                    FUN_002e4094(&local_e0,
                                 ")\", which is not defined. The innermost scope is searched first in name resolution. Consider using a leading \'.\'(i.e., \"(."
                                 ,0x7a);
          uStack_b8 = puVar17[1];
          local_c0 = (int *******)*puVar17;
          local_b0 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
          uVar28 = local_90 >> 1 & 0x7f;
          if ((local_90 & 1) != 0) {
            uVar28 = local_88;
          }
          local_130 = 0;
          local_128 = 0;
          local_120 = (void *)0x0;
          if (uVar28 == 0) {
                    /* try { // try from 00361564 to 00361573 has its CatchHandler @ 0036157c */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_out_of_range();
          }
          __n = uVar28 - 1;
          uVar24 = (ulong)&local_90 | 1;
          if ((local_90 & 1) != 0) {
            uVar24 = local_80;
          }
          if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          if (__n < 0x17) {
            local_130 = (ulong)(byte)((int)__n << 1);
            pvVar31 = (void *)((ulong)&local_130 | 1);
            if (__n != 0) goto LAB_00361298;
          }
          else {
            uVar28 = uVar28 + 0xf & 0xfffffffffffffff0;
            pvVar31 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar28);
            local_130 = uVar28 | 1;
            local_128 = __n;
            local_120 = pvVar31;
LAB_00361298:
            memcpy(pvVar31,(void *)(uVar24 + 1),__n);
          }
          *(undefined1 *)((long)pvVar31 + __n) = 0;
          if ((local_130 & 1) == 0) {
            uVar28 = local_130 >> 1 & 0x7f;
            pvVar31 = (void *)((long)&local_130 + 1);
          }
          else {
            uVar28 = local_128;
            pvVar31 = local_120;
          }
                    /* try { // try from 003612c4 to 003612cb has its CatchHandler @ 003616a8 */
          puVar17 = (undefined8 *)FUN_002e4094(&local_c0,pvVar31,uVar28);
          puStack_1a8 = (ulong *)puVar17[1];
          local_1b0 = (int *******)*puVar17;
          local_1a0 = puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 003612e4 to 003612f7 has its CatchHandler @ 00361680 */
          puVar17 = (undefined8 *)
                    FUN_002e4094(&local_1b0,"\") to start from the outermost scope.",0x25);
          pppppppiStack_178 = (int *******)puVar17[1];
          local_180 = (int *******)*puVar17;
          local_170 = (char *)puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 0036131c to 00361327 has its CatchHandler @ 00361624 */
          FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
          if (((ulong)local_180 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_170);
          }
          if (((ulong)local_1b0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_1a0);
          }
          if ((local_130 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_120);
          }
          if (((ulong)local_c0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          }
          if (((ulong)local_e0 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_d0);
          }
          if ((local_100 & 1) != 0) {
            FUN_002e2ea0(PTR_LAB_04373088,local_f0);
          }
          if ((local_118[0] & 1) == 0) goto LAB_003614dc;
        }
LAB_003614d0:
        FUN_002e2ea0(PTR_LAB_04373088,local_108);
        goto LAB_003614dc;
      }
      uVar28 = *(ulong *)(pbVar21 + 8);
      pbVar25 = *(byte **)(pbVar21 + 0x10);
      if ((*pbVar21 & 1) == 0) {
        pbVar25 = pbVar21 + 1;
        uVar28 = (ulong)(*pbVar21 >> 1);
      }
                    /* try { // try from 00360714 to 0036072f has its CatchHandler @ 00361a68 */
      FUN_002e4094(&local_90,pbVar25,uVar28);
      auVar36 = FUN_00364cf4(ppppppiVar18[2][0x12],ppppppiVar18,pbVar21);
      pppppppiVar32 = auVar36._8_8_;
      uVar16 = auVar36._0_8_;
      pppppppiVar35 = (int *******)0x0;
      if ((auVar36._0_4_ == 0) || (auVar36._0_4_ != 2)) goto LAB_00360940;
      if (*(char *)((long)pppppppiVar32 + 0x43) != '\0') {
        pppppppiVar32 = (int *******)0x0;
      }
      if (pppppppiVar32 == (int *******)0x0) goto LAB_00360c70;
LAB_00360754:
      if (pppppppiVar32[10] != ppppppiVar18) {
        if (*(char *)((long)pppppppiVar32[10] + 0x8c) != '\0') {
          FUN_00361a8c(uVar16,param_1[2],param_2);
LAB_00360c8c:
          uVar16 = 1;
          goto joined_r0x00360c94;
        }
                    /* try { // try from 00360fe8 to 00360ffb has its CatchHandler @ 003617f8 */
        FUN_0034b2f0(&local_e0,"Option field \"",&local_90);
                    /* try { // try from 00360ffc to 0036100f has its CatchHandler @ 003617e4 */
        puVar17 = (undefined8 *)
                  FUN_002e4094(&local_e0,"\" is not a field or extension of message \"",0x2a);
        uStack_b8 = puVar17[1];
        local_c0 = (int *******)*puVar17;
        local_b0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
        pppppiVar23 = *ppppppiVar18;
        ppppiVar3 = pppppiVar23[1];
        ppppiVar4 = pppppiVar23[2];
        if ((*(byte *)pppppiVar23 & 1) == 0) {
          ppppiVar4 = (int ****)((long)pppppiVar23 + 1);
          ppppiVar3 = (int ****)(ulong)(*(byte *)pppppiVar23 >> 1);
        }
                    /* try { // try from 00361044 to 0036104b has its CatchHandler @ 003617bc */
        puVar17 = (undefined8 *)FUN_002e4094(&local_c0,ppppiVar4,ppppiVar3);
        puStack_1a8 = (ulong *)puVar17[1];
        local_1b0 = (int *******)*puVar17;
        local_1a0 = puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
                    /* try { // try from 00361064 to 00361077 has its CatchHandler @ 00361794 */
        puVar17 = (undefined8 *)FUN_002e4094(&local_1b0,&DAT_038c838e,2);
        pppppppiStack_178 = (int *******)puVar17[1];
        local_180 = (int *******)*puVar17;
        local_170 = (char *)puVar17[2];
        puVar17[1] = 0;
        puVar17[2] = 0;
        *puVar17 = 0;
                    /* try { // try from 0036109c to 003610a7 has its CatchHandler @ 00361750 */
        FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
        if (((ulong)local_180 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_170);
        }
        if (((ulong)local_1b0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_1a0);
        }
        local_108 = local_d0;
        if (((ulong)local_c0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_b0);
          local_108 = local_d0;
        }
        local_d0 = local_108;
        if (((ulong)local_e0 & 1) != 0) goto LAB_003614d0;
        goto LAB_003614dc;
      }
      iVar20 = *(int *)((long)pppppppiVar32 + 0x44);
      if (local_a0 < local_98) {
        *(int *)local_a0 = iVar20;
        local_a0 = (int *****)((long)local_a0 + 4);
      }
      else {
        lVar26 = (long)local_a0 - (long)local_a8 >> 2;
        uVar28 = lVar26 + 1;
        if (uVar28 >> 0x3e != 0) {
                    /* try { // try from 0036154c to 00361553 has its CatchHandler @ 00361590 */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_98 - (long)local_a8 >> 2) < 0x1fffffffffffffff) {
          uVar24 = (long)local_98 - (long)local_a8 >> 1;
          if (uVar28 <= uVar24) {
            uVar28 = uVar24;
          }
          if (uVar28 != 0) goto LAB_003607c0;
          lVar27 = 0;
        }
        else {
          uVar28 = 0x3fffffffffffffff;
LAB_003607c0:
          lVar27 = FUN_002e2e80(PTR_FUN_04373078,uVar28 << 2);
        }
        piVar1 = (int *)(lVar27 + lVar26 * 4);
        sVar29 = (long)local_a0 - (long)local_a8;
        pppppiVar23 = (int *****)(lVar27 + uVar28 * 4);
        *piVar1 = iVar20;
        pppppiVar30 = (int *****)((long)piVar1 - sVar29);
        if (0 < (long)sVar29) {
          memcpy(pppppiVar30,local_a8,sVar29);
        }
        bVar2 = local_a8 != (int *****)0x0;
        local_a8 = pppppiVar30;
        local_a0 = (int *****)(piVar1 + 1);
        local_98 = pppppiVar23;
        if (bVar2) {
          FUN_002e2ea0(puVar12);
        }
      }
      iVar20 = *(int *)(param_1[2] + 0x20);
      if (iVar15 < iVar20 + -1) {
        ppppppiVar18 = pppppppiVar32[6];
        if (ppppppiVar18 != (int ******)0x0) {
          local_c0 = (int *******)PTR_LAB_04373a98;
          local_e0 = pppppppiVar32;
          if (*ppppppiVar18 != (int *****)0xffffffffffffffff) {
            pppppppiStack_178 = (int *******)&local_e0;
            local_180 = (int *******)&local_c0;
            local_1b0 = (int *******)&local_180;
                    /* try { // try from 00360864 to 003608ef has its CatchHandler @ 00361a68 */
            std::__call_once((ulong *)ppppppiVar18,&local_1b0,
                             (_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
        }
        if ((*(uint *)(pppppppiVar32 + 7) | 1) == 0xb) {
          if (*(int *)((long)pppppppiVar32 + 0x3c) != 3) {
            if (local_70 == local_68) {
              lVar26 = (long)local_70 - (long)local_78 >> 3;
              uVar28 = lVar26 + 1;
              if (uVar28 >> 0x3d != 0) {
                    /* try { // try from 00361554 to 0036155b has its CatchHandler @ 00361878 */
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              if ((ulong)((long)local_68 - (long)local_78 >> 3) < 0xfffffffffffffff) {
                uVar24 = (long)local_68 - (long)local_78 >> 2;
                if (uVar28 <= uVar24) {
                  uVar28 = uVar24;
                }
                if (uVar28 != 0) goto LAB_0036094c;
                lVar27 = 0;
              }
              else {
                uVar28 = 0x1fffffffffffffff;
LAB_0036094c:
                lVar27 = FUN_002e2e80(PTR_FUN_04373078,uVar28 << 3);
              }
              puVar19 = (ulong *)(lVar27 + lVar26 * 8);
              puVar34 = (ulong *)(lVar27 + uVar28 * 8);
              *puVar19 = (ulong)pppppppiVar32;
              sVar29 = (long)local_70 - (long)local_78;
              __dest = (ulong *)((long)puVar19 - sVar29);
              if (0 < (long)sVar29) {
                memcpy(__dest,local_78,sVar29);
              }
              bVar2 = local_78 != (ulong *)0x0;
              local_78 = __dest;
              local_70 = puVar19 + 1;
              local_68 = puVar34;
              if (bVar2) {
                FUN_002e2ea0(puVar12);
              }
              ppppppiVar18 = pppppppiVar32[6];
            }
            else {
              *local_70 = (ulong)pppppppiVar32;
              local_70 = local_70 + 1;
              ppppppiVar18 = pppppppiVar32[6];
            }
            if ((ppppppiVar18 != (int ******)0x0) &&
               (local_c0 = pppppppiVar32, *ppppppiVar18 != (int *****)0xffffffffffffffff)) {
              pppppppiStack_178 = (int *******)&local_c0;
              local_1b0 = (int *******)&local_180;
              local_180 = (int *******)PTR_LAB_04373a98;
              std::__call_once((ulong *)ppppppiVar18,&local_1b0,
                               (_func_void_void_ptr *)PTR_LAB_04373b88);
            }
            ppppppiVar18 = pppppppiVar32[0xd];
            iVar20 = *(int *)(param_1[2] + 0x20);
            goto LAB_003605bc;
          }
                    /* try { // try from 00360d10 to 00360d23 has its CatchHandler @ 00361838 */
          FUN_0034b2f0(&local_1b0,"Option field \"",&local_90);
                    /* try { // try from 00360d24 to 00360d37 has its CatchHandler @ 00361828 */
          puVar17 = (undefined8 *)
                    FUN_002e4094(&local_1b0,
                                 "\" is a repeated message. Repeated message options must be initialized using an aggregate value."
                                 ,0x5f);
          pppppppiStack_178 = (int *******)puVar17[1];
          local_180 = (int *******)*puVar17;
          local_170 = (char *)puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 00360d5c to 00360d67 has its CatchHandler @ 00361818 */
          FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
        }
        else {
                    /* try { // try from 00360cb4 to 00360cc7 has its CatchHandler @ 0036185c */
          FUN_0034b2f0(&local_1b0,"Option \"",&local_90);
                    /* try { // try from 00360cc8 to 00360cdb has its CatchHandler @ 0036184c */
          puVar17 = (undefined8 *)
                    FUN_002e4094(&local_1b0,"\" is an atomic type, not a message.",0x23);
          pppppppiStack_178 = (int *******)puVar17[1];
          local_180 = (int *******)*puVar17;
          local_170 = (char *)puVar17[2];
          puVar17[1] = 0;
          puVar17[2] = 0;
          *puVar17 = 0;
                    /* try { // try from 00360d00 to 00360d0b has its CatchHandler @ 0036183c */
          FUN_0034db00(*param_1,param_1[1] + 0x18,param_1[2],7,&local_180);
        }
        if (((ulong)local_180 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_170);
        }
        if (((ulong)local_1b0 & 1) != 0) {
          local_108 = local_1a0;
          goto LAB_003614d0;
        }
        goto LAB_003614dc;
      }
LAB_003605bc:
      iVar15 = iVar15 + 1;
      if (iVar20 <= iVar15) goto LAB_003609b0;
      lVar26 = *param_1;
      if ((*(byte *)(lVar26 + 0xb0) & 1) != 0) goto LAB_003605dc;
LAB_003605d4:
      *(undefined2 *)(lVar26 + 0xb0) = 0;
    } while( true );
  }
  pppppppiVar32 = (int *******)0x0;
LAB_003609b0:
  puVar34 = local_70;
  puVar19 = local_78;
  if (*(int *)((long)pppppppiVar32 + 0x3c) != 3) {
                    /* try { // try from 003609c8 to 003609f7 has its CatchHandler @ 003618dc */
    (**(code **)(*param_2 + 0x98))(param_2);
    uVar16 = FUN_00380d50(extraout_x1_00,param_2);
    uVar28 = FUN_00361c04(param_1,puVar19,puVar34,pppppppiVar32,&local_90,uVar16);
    if ((uVar28 & 1) == 0) {
LAB_003614dc:
      uVar16 = 0;
      goto joined_r0x00360c94;
    }
  }
  plVar22 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x18);
  if (plVar22 != (long *)0x0) {
    *plVar22 = 0;
    plVar22[1] = 0;
    plVar22[2] = 0;
  }
                    /* try { // try from 00360a1c to 00360a2b has its CatchHandler @ 003618ec */
  uVar28 = FUN_00361ff0(param_1,pppppppiVar32,plVar22);
  puVar14 = PTR_LAB_04373a98;
  puVar13 = PTR_LAB_04373088;
  puVar12 = PTR_FUN_04373078;
  plVar33 = plVar22;
  if ((uVar28 & 1) == 0) {
LAB_00360e6c:
    uVar16 = 0;
    plVar22 = plVar33;
  }
  else {
    puVar19 = local_70;
    if (local_70 != local_78) {
      do {
        plVar22 = (long *)FUN_002e2e80(puVar12,0x18);
        if (plVar22 != (long *)0x0) {
          *plVar22 = 0;
          plVar22[1] = 0;
          plVar22[2] = 0;
        }
        puVar34 = puVar19 + -1;
        pppppppiVar35 = (int *******)*puVar34;
        ppppppiVar18 = pppppppiVar35[6];
        if (ppppppiVar18 != (int ******)0x0) {
          local_c0 = (int *******)puVar14;
          local_e0 = pppppppiVar35;
          if (*ppppppiVar18 != (int *****)0xffffffffffffffff) {
            pppppppiStack_178 = (int *******)&local_e0;
            local_180 = (int *******)&local_c0;
            local_1b0 = (int *******)&local_180;
                    /* try { // try from 00360ad0 to 00360adf has its CatchHandler @ 00361934 */
            std::__call_once((ulong *)ppppppiVar18,&local_1b0,
                             (_func_void_void_ptr *)PTR_LAB_04373aa0);
          }
        }
        if (*(int *)(pppppppiVar35 + 7) == 10) {
                    /* try { // try from 00360bdc to 00360beb has its CatchHandler @ 00361934 */
          uVar16 = FUN_0030d9d0(plVar22,*(undefined4 *)(puVar19[-1] + 0x44));
          FUN_0030cefc(uVar16,plVar33);
        }
        else {
          if (*(int *)(pppppppiVar35 + 7) != 0xb) {
                    /* try { // try from 00360d90 to 00360da7 has its CatchHandler @ 00361800 */
            FUN_0030f640(&local_180,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                         ,0x1a0c);
                    /* try { // try from 00360da8 to 00360e0f has its CatchHandler @ 00361860 */
            uVar16 = FUN_0030f3ac(&local_180,"Invalid wire type for CPPTYPE_MESSAGE: ");
            uVar28 = puVar19[-1];
            puVar19 = *(ulong **)(uVar28 + 0x30);
            if (puVar19 != (ulong *)0x0) {
              local_e0 = (int *******)puVar14;
              local_100 = uVar28;
              if (*puVar19 != 0xffffffffffffffff) {
                local_1b0 = (int *******)&local_e0;
                puStack_1a8 = &local_100;
                local_c0 = (int *******)&local_1b0;
                std::__call_once(puVar19,&local_c0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
              }
            }
            uVar16 = FUN_0030f52c(uVar16,*(undefined4 *)(uVar28 + 0x38));
                    /* try { // try from 00360e10 to 00360e17 has its CatchHandler @ 003617fc */
            FUN_0030f41c(&local_1b0,uVar16);
            FUN_0030f658(&local_180);
            if (plVar22 == (long *)0x0) goto LAB_00360e6c;
            lVar26 = *plVar22;
            if (lVar26 != plVar22[1]) {
                    /* try { // try from 00360e30 to 00360e37 has its CatchHandler @ 00361610 */
              FUN_0030cac0(plVar22);
              lVar26 = *plVar22;
            }
            if (lVar26 != 0) {
              plVar22[1] = lVar26;
              FUN_002e2ea0(PTR_LAB_04373088);
            }
            FUN_002e2ea0(PTR_LAB_04373088,plVar22);
            uVar16 = 0;
            plVar22 = plVar33;
            goto joined_r0x00360e64;
          }
                    /* try { // try from 00360afc to 00360b0f has its CatchHandler @ 00361914 */
          uVar16 = FUN_0030d8b4(plVar22,*(undefined4 *)(puVar19[-1] + 0x44));
          FUN_0030e55c(&local_c0,uVar16);
                    /* try { // try from 00360b10 to 00360b1f has its CatchHandler @ 003618e0 */
          FUN_00311640(&local_180,&local_c0,1);
                    /* try { // try from 00360b24 to 00360b3b has its CatchHandler @ 00361920 */
          local_140 = FUN_00311a94(plVar33,local_140,&local_180);
          uVar28 = FUN_0031e974(&local_180);
          if ((uVar28 & 1) != 0) {
                    /* try { // try from 00360b40 to 00360b57 has its CatchHandler @ 003618ac */
            FUN_0030f640(&local_1b0,3,
                         "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                         ,0x19ff);
                    /* try { // try from 00360b58 to 00360b8b has its CatchHandler @ 003618f8 */
            uVar16 = FUN_0030f3ac(&local_1b0,"CHECK failed: !out.HadError(): ");
            uVar16 = FUN_0030f3ac(uVar16,"Unexpected failure while serializing option submessage ");
            uVar16 = FUN_0030f3e8(uVar16,&local_90);
            uVar16 = FUN_0030f3ac(uVar16,&DAT_038c838e);
                    /* try { // try from 00360b8c to 00360b93 has its CatchHandler @ 003618b0 */
            FUN_0030f41c(&local_e0,uVar16);
            FUN_0030f658(&local_1b0);
          }
          FUN_00311700(&local_180);
        }
        if (plVar33 != (long *)0x0) {
          lVar26 = *plVar33;
          if (lVar26 != plVar33[1]) {
                    /* try { // try from 00360bb4 to 00360bbb has its CatchHandler @ 003618c8 */
            FUN_0030cac0(plVar33);
            lVar26 = *plVar33;
          }
          if (lVar26 != 0) {
            plVar33[1] = lVar26;
            FUN_002e2ea0(puVar13);
          }
          FUN_002e2ea0(puVar13,plVar33);
        }
        plVar33 = plVar22;
        puVar19 = puVar34;
      } while (puVar34 != local_78);
    }
                    /* try { // try from 00360f78 to 00360f93 has its CatchHandler @ 003618ec */
    (**(code **)(*param_2 + 0x98))(param_2);
    uVar16 = FUN_00380d6c(extraout_x1_01,param_2);
    FUN_0030cefc(uVar16,plVar22);
    if (*(int *)((long)pppppppiVar32 + 0x3c) == 3) {
      local_180 = (int *******)&local_a8;
                    /* try { // try from 00360fac to 00360fc3 has its CatchHandler @ 0036180c */
      lVar26 = FUN_0037016c(param_1 + 6,&local_a8,&DAT_039fad46,&local_180,&local_1b0);
      iVar15 = *(int *)(lVar26 + 0x38);
      *(int *)(lVar26 + 0x38) = iVar15 + 1;
      if (local_a0 == local_98) {
        lVar26 = (long)local_a0 - (long)local_a8 >> 2;
        uVar28 = lVar26 + 1;
        if (uVar28 >> 0x3e != 0) {
                    /* try { // try from 00361574 to 0036157b has its CatchHandler @ 0036180c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_98 - (long)local_a8 >> 2) < 0x1fffffffffffffff) {
          uVar24 = (long)local_98 - (long)local_a8 >> 1;
          if (uVar28 <= uVar24) {
            uVar28 = uVar24;
          }
          if (uVar28 != 0) goto LAB_00361400;
          lVar27 = 0;
        }
        else {
          uVar28 = 0x3fffffffffffffff;
LAB_00361400:
          lVar27 = FUN_002e2e80(PTR_FUN_04373078,uVar28 << 2);
        }
        piVar1 = (int *)(lVar27 + lVar26 * 4);
        sVar29 = (long)local_a0 - (long)local_a8;
        pppppiVar23 = (int *****)(lVar27 + uVar28 * 4);
        *piVar1 = iVar15;
        pppppiVar30 = (int *****)((long)piVar1 - sVar29);
        if (0 < (long)sVar29) {
          memcpy(pppppiVar30,local_a8,sVar29);
        }
        bVar2 = local_a8 != (int *****)0x0;
        local_a8 = pppppiVar30;
        local_a0 = (int *****)(piVar1 + 1);
        local_98 = pppppiVar23;
        if (bVar2) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
      }
      else {
        *(int *)local_a0 = iVar15;
        local_a0 = (int *****)((long)local_a0 + 4);
      }
    }
                    /* try { // try from 00361464 to 0036148f has its CatchHandler @ 003618ec */
    local_180 = param_3;
    lVar26 = FUN_003703e8(param_1 + 3,param_3,&DAT_039fad46,&local_180,&local_1b0);
    if ((int ******)(lVar26 + 0x38) != &local_a8) {
      FUN_00370668((int *****)(lVar26 + 0x38),local_a8,local_a0);
    }
    uVar16 = 1;
  }
joined_r0x00360e64:
  if (plVar22 != (long *)0x0) {
    lVar26 = *plVar22;
    if (lVar26 != plVar22[1]) {
                    /* try { // try from 00360e80 to 00360e87 has its CatchHandler @ 00361874 */
      FUN_0030cac0(plVar22);
      lVar26 = *plVar22;
    }
    if (lVar26 != 0) {
      plVar22[1] = lVar26;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar22);
  }
joined_r0x00360c94:
  if (local_a8 != (int *****)0x0) {
    local_a0 = local_a8;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  if ((local_90 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_80);
  }
  if (local_78 != (ulong *)0x0) {
    local_70 = local_78;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar16;
}


