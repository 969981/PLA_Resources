/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035c068; name: FUN_0035c068
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0035c068(long *param_1,byte *param_2,long param_3)

{
  int *piVar1;
  long *plVar2;
  int *piVar3;
  undefined *puVar4;
  byte bVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  ulong *puVar13;
  ulong uVar14;
  size_t sVar15;
  long *plVar16;
  long extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  long extraout_x1_03;
  long extraout_x1_04;
  undefined8 uVar17;
  char *pcVar18;
  uint uVar19;
  undefined4 uVar20;
  long lVar21;
  byte *pbVar22;
  byte *pbVar23;
  long *plVar24;
  int *piVar25;
  ulong uVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  void *pvVar31;
  void *__dest;
  undefined8 *puVar32;
  undefined2 uVar33;
  undefined8 uVar34;
  byte local_278 [16];
  undefined8 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  byte *local_1d0;
  undefined4 local_1c8;
  undefined **local_1a0;
  undefined4 local_198;
  undefined *local_170;
  byte **local_168;
  byte *local_140;
  uint local_138;
  undefined8 local_130;
  byte *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong *local_e0;
  undefined8 uStack_d8;
  ulong *local_d0;
  ulong local_b0;
  uint uStack_a8;
  undefined2 uStack_a4;
  undefined2 uStack_a2;
  char cStack_a0;
  char acStack_9f [31];
  ulong local_80;
  ulong uStack_78;
  ulong *local_70;
  
  if (*(long *)(param_2 + 0x78) == 0) {
    uVar12 = FUN_003b6cf4();
    *(undefined8 *)(param_2 + 0x78) = uVar12;
  }
  FUN_00340464(param_1[0xb],param_2);
  if ((*(byte *)(param_3 + 0x10) >> 1 & 1) == 0) goto LAB_0035c0b8;
  uVar12 = *(undefined8 *)(param_3 + 0x20);
  iVar11 = FUN_0034ed20(param_1,uVar12,*(undefined8 *)(param_2 + 8),0,1);
  if (iVar11 != 0) {
    lVar21 = extraout_x1;
    if (iVar11 == 1) goto LAB_0035c374;
LAB_0035c2d8:
    if (iVar11 == 0) {
LAB_0035c3c4:
      FUN_0034dd44(param_1,*(undefined8 *)(param_2 + 8),param_3,3,*(undefined8 *)(param_3 + 0x20));
      return;
    }
    uVar17 = *(undefined8 *)(param_2 + 8);
    FUN_0034b2f0(&local_e0,&DAT_039042e1,*(undefined8 *)(param_3 + 0x20));
                    /* try { // try from 0035c2f4 to 0035c307 has its CatchHandler @ 0035d6a8 */
    puVar32 = (undefined8 *)FUN_002e4094(&local_e0,"\" is not a message type.",0x18);
    uVar34 = puVar32[1];
    uVar12 = puVar32[2];
    cStack_a0 = (char)uVar12;
    acStack_9f._0_5_ = SUB85((ulong)uVar12 >> 8,0);
    acStack_9f[5] = (char)((ulong)uVar12 >> 0x30);
    acStack_9f[6] = (char)((ulong)uVar12 >> 0x38);
    uStack_a8 = (uint)uVar34;
    uStack_a4 = (undefined2)((ulong)uVar34 >> 0x20);
    uStack_a2 = (undefined2)((ulong)uVar34 >> 0x30);
    local_b0._0_1_ = (byte)*puVar32;
    local_b0._1_7_ = (undefined7)((ulong)*puVar32 >> 8);
    puVar32[1] = 0;
    puVar32[2] = 0;
    *puVar32 = 0;
                    /* try { // try from 0035c320 to 0035c337 has its CatchHandler @ 0035d680 */
    FUN_0034db00(param_1,uVar17,param_3,3,&local_b0);
LAB_0035cd7c:
    if (((byte)local_b0 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,
                   CONCAT17(acStack_9f[6],
                            CONCAT16(acStack_9f[5],CONCAT51(acStack_9f._0_5_,cStack_a0))));
    }
    if (((ulong)local_e0 & 1) == 0) {
      return;
    }
    puVar13 = local_d0;
    goto LAB_0035d410;
  }
  if (*(char *)(*param_1 + 0x2a) == '\0') goto LAB_0035c3c4;
  iVar11 = FUN_0034f378(*param_1,uVar12,2);
  lVar21 = extraout_x1_00;
  if (iVar11 != 1) goto LAB_0035c2d8;
LAB_0035c374:
  *(long *)(param_2 + 0x50) = lVar21;
  lVar29 = (long)*(int *)(lVar21 + 0x7c);
  iVar11 = *(int *)(param_2 + 0x44);
  if (*(int *)(lVar21 + 0x7c) < 1) {
LAB_0035c4bc:
    if (*(char *)(*param_1 + 0x2a) != '\0') {
      pbVar23 = *(byte **)(param_3 + 0x20);
      bVar5 = *pbVar23;
      uVar14 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        uVar14 = *(ulong *)(pbVar23 + 8);
      }
      if (uVar14 == 0x21) {
        pbVar22 = *(byte **)(pbVar23 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar22 = pbVar23 + 1;
        }
        if (((*(long *)pbVar22 == 0x702e656c676f6f67 && *(long *)(pbVar22 + 8) == 0x2e6675626f746f72
             ) && (*(long *)(pbVar22 + 0x10) == 0x4d2e656764697262 &&
                  *(long *)(pbVar22 + 0x18) == 0x6553656761737365)) && pbVar22[0x20] == 0x74)
        goto LAB_0035c0b8;
      }
    }
    pbVar22 = *(byte **)(lVar21 + 8);
    pbVar23 = *(byte **)(pbVar22 + 0x10);
    if ((*pbVar22 & 1) == 0) {
      pbVar23 = pbVar22 + 1;
    }
    uVar12 = *(undefined8 *)(param_2 + 8);
    local_b0._0_1_ = (byte)pbVar23;
    local_b0._1_7_ = (undefined7)((ulong)pbVar23 >> 8);
    uStack_a8 = (uint)(*pbVar22 >> 1);
    if ((*pbVar22 & 1) != 0) {
      uStack_a8 = (uint)*(undefined8 *)(pbVar22 + 8);
    }
    local_e0 = (ulong *)FUN_00320300(iVar11,(long)&uStack_d8 + 4);
    sVar15 = strlen((char *)local_e0);
    uStack_108 = CONCAT44(uStack_108._4_4_,0xffffffff);
    local_138 = 0xffffffff;
    local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
    local_198 = 0xffffffff;
    local_1c8 = 0xffffffff;
    local_1f8 = 0xffffffff;
    local_228 = 0xffffffff;
    local_258 = 0xffffffff;
    uStack_d8 = CONCAT44(uStack_d8._4_4_,(int)sVar15);
    local_110 = (byte *)0x0;
    local_140 = (byte *)0x0;
    local_170 = (undefined *)0x0;
    local_1a0 = (undefined **)0x0;
    local_1d0 = (byte *)0x0;
    local_200 = 0;
    local_230 = 0;
    local_260 = 0;
    FUN_003c6830(&local_80,"\"$0\" does not declare $1 as an extension number.",&local_b0,&local_e0,
                 &local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,&local_230,
                 &local_260);
                    /* try { // try from 0035c63c to 0035c653 has its CatchHandler @ 0035d630 */
    FUN_0034db00(param_1,uVar12,param_3,1,&local_80);
    if ((local_80 & 1) == 0) goto LAB_0035c0b8;
    FUN_002e2ea0(PTR_LAB_04373088,local_70);
    lVar21 = *(long *)(param_2 + 0x58);
  }
  else {
    piVar25 = *(int **)(lVar21 + 0x48) + 1;
    if (**(int **)(lVar21 + 0x48) <= iVar11) goto LAB_0035c3b4;
    do {
      do {
        piVar3 = piVar25 + 4;
        lVar29 = lVar29 + -1;
        if (lVar29 == 0) goto LAB_0035c4bc;
        piVar1 = piVar25 + 3;
        piVar25 = piVar3;
      } while (iVar11 < *piVar1);
LAB_0035c3b4:
    } while (*piVar25 <= iVar11);
LAB_0035c0b8:
    lVar21 = *(long *)(param_2 + 0x58);
  }
  if ((lVar21 != 0) && (*(int *)(param_2 + 0x3c) != 1)) {
    FUN_0034dc2c(param_1,*(undefined8 *)(param_2 + 8),param_3,0,
                 "Fields of oneofs must themselves have label LABEL_OPTIONAL.");
  }
  uVar19 = *(uint *)(param_3 + 0x10);
  if ((uVar19 >> 2 & 1) == 0) {
    puVar13 = *(ulong **)(param_2 + 0x30);
    if (puVar13 != (ulong *)0x0) {
      local_110 = PTR_LAB_04373a98;
      local_140 = param_2;
      if (*puVar13 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)&local_110;
        local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
        uStack_a8 = (uint)&local_140;
        uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar19 = *(uint *)(param_2 + 0x38);
    if ((uVar19 | 1) == 0xb) {
LAB_0035c19c:
      uVar12 = *(undefined8 *)(param_2 + 8);
      pcVar18 = "Field with message or enum type missing type_name.";
LAB_0035c1a8:
      uVar17 = 2;
      goto LAB_0035c1b4;
    }
    puVar13 = *(ulong **)(param_2 + 0x30);
    if (puVar13 != (ulong *)0x0) {
      local_110 = PTR_LAB_04373a98;
      local_140 = param_2;
      if (*puVar13 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)&local_110;
        local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
        uStack_a8 = (uint)&local_140;
        uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar19 = *(uint *)(param_2 + 0x38);
    }
    if (uVar19 == 0xe) goto LAB_0035c19c;
LAB_0035c1b8:
    uVar14 = FUN_003406f8(param_1[0xb],param_2);
  }
  else {
    iVar11 = *(int *)(param_3 + 0x58);
    if (*(char *)(*param_1 + 0x2b) == '\0') {
      puVar4 = PTR_DAT_04373c20;
      if (*(undefined **)(param_3 + 0x40) != (undefined *)0x0) {
        puVar4 = *(undefined **)(param_3 + 0x40);
      }
      bVar8 = puVar4[0x4f] != '\0';
    }
    else {
      bVar8 = false;
    }
    uVar12 = *(undefined8 *)(param_3 + 0x28);
    bVar9 = *(char *)(*param_1 + 0x29) == '\0';
    iVar10 = FUN_0034ed20(param_1,uVar12,*(undefined8 *)(param_2 + 8),1,bVar8 | bVar9);
    lVar21 = extraout_x1_01;
    if (iVar10 == 0) {
      if (*(char *)(*param_1 + 0x2a) != '\0') {
        iVar10 = FUN_0034f378(*param_1,uVar12,uVar19 >> 3 & 1 | (uint)(iVar11 == 0xe));
        lVar21 = extraout_x1_02;
        goto joined_r0x0035c458;
      }
LAB_0035c488:
      if ((!bVar9 & (bVar8 ^ 1U)) != 0) {
        pbVar23 = *(byte **)(param_3 + 0x28);
        uStack_a8 = 0;
        uStack_a4 = 0;
        uStack_a2 = 0;
        cStack_a0 = '\0';
        acStack_9f[0] = '\0';
        acStack_9f[1] = '\0';
        acStack_9f[2] = '\0';
        acStack_9f[3] = '\0';
        acStack_9f[4] = '\0';
        acStack_9f[5] = 0;
        acStack_9f[6] = 0;
        local_b0._0_1_ = 0;
        local_b0._1_7_ = 0;
        if ((*pbVar23 & 1) == 0) {
          uVar17 = *(undefined8 *)(pbVar23 + 8);
          uVar12 = *(undefined8 *)(pbVar23 + 0x10);
          cStack_a0 = (char)uVar12;
          acStack_9f._0_5_ = SUB85((ulong)uVar12 >> 8,0);
          acStack_9f[5] = (char)((ulong)uVar12 >> 0x30);
          acStack_9f[6] = (char)((ulong)uVar12 >> 0x38);
          uStack_a8 = (uint)uVar17;
          uStack_a4 = (undefined2)((ulong)uVar17 >> 0x20);
          uStack_a2 = (undefined2)((ulong)uVar17 >> 0x30);
          local_b0._0_1_ = (byte)*(undefined8 *)pbVar23;
          local_b0._1_7_ = (undefined7)((ulong)*(undefined8 *)pbVar23 >> 8);
        }
        else {
          uVar14 = *(ulong *)(pbVar23 + 8);
          if (0xffffffffffffffef < uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar31 = *(void **)(pbVar23 + 0x10);
          if (uVar14 < 0x17) {
            local_b0._0_1_ = (byte)((int)uVar14 << 1);
            __dest = (void *)((ulong)&local_b0 | 1);
            if (uVar14 != 0) goto LAB_0035cdcc;
          }
          else {
            uVar26 = uVar14 + 0x10 & 0xfffffffffffffff0;
            __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar26);
            local_b0._0_1_ = (byte)uVar26 | 1;
            cStack_a0 = (char)__dest;
            acStack_9f._0_5_ = SUB85((ulong)__dest >> 8,0);
            acStack_9f[5] = (char)((ulong)__dest >> 0x30);
            acStack_9f[6] = (char)((ulong)__dest >> 0x38);
            local_b0._1_7_ = (undefined7)(uVar26 >> 8);
            uStack_a4 = (undefined2)(uVar14 >> 0x20);
            uStack_a2 = (undefined2)(uVar14 >> 0x30);
            uStack_a8 = (int)uVar14;
LAB_0035cdcc:
            memcpy(__dest,pvVar31,uVar14);
          }
          *(undefined1 *)((long)__dest + uVar14) = 0;
        }
                    /* try { // try from 0035cde4 to 0035cde7 has its CatchHandler @ 0035d6bc */
        uVar12 = FUN_00341288(param_1[1]);
        *(undefined8 *)(param_2 + 0x30) = uVar12;
        lVar21 = param_1[1];
        puVar13 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,0x18);
        if (puVar13 != (ulong *)0x0) {
          *puVar13 = 0;
          puVar13[1] = 0;
          puVar13[2] = 0;
          if (((byte)local_b0 & 1) == 0) {
            puVar13[2] = CONCAT17(acStack_9f[6],
                                  CONCAT16(acStack_9f[5],CONCAT51(acStack_9f._0_5_,cStack_a0)));
            puVar13[1] = CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
            *puVar13 = CONCAT71(local_b0._1_7_,(byte)local_b0);
          }
          else {
            uVar14 = CONCAT26(uStack_a2,CONCAT24(uStack_a4,uStack_a8));
            if (0xffffffffffffffef < uVar14) {
                    /* try { // try from 0035d4e0 to 0035d4e7 has its CatchHandler @ 0035d6bc */
                    /* WARNING: Subroutine does not return */
              std::__basic_string_common<true>::__throw_length_error();
            }
            pvVar31 = (void *)CONCAT17(acStack_9f[6],
                                       CONCAT16(acStack_9f[5],CONCAT51(acStack_9f._0_5_,cStack_a0)))
            ;
            if (uVar14 < 0x17) {
              pbVar23 = (byte *)((long)puVar13 + 1);
              *(byte *)puVar13 = (byte)(uStack_a8 << 1);
              if (uVar14 != 0) goto LAB_0035cfd0;
            }
            else {
              uVar26 = uVar14 + 0x10 & 0xfffffffffffffff0;
              pbVar23 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar26);
              *puVar13 = uVar26 | 1;
              puVar13[1] = uVar14;
              puVar13[2] = (ulong)pbVar23;
LAB_0035cfd0:
              memcpy(pbVar23,pvVar31,uVar14);
            }
            pbVar23[uVar14] = 0;
          }
        }
                    /* try { // try from 0035cfec to 0035d02f has its CatchHandler @ 0035d6bc */
        local_e0 = puVar13;
        FUN_003410d8(lVar21 + 0xd0,&local_e0);
        *(ulong **)(param_2 + 0x80) = puVar13;
        if ((*(byte *)(param_3 + 0x10) >> 3 & 1) != 0) {
          uVar12 = FUN_00340fec(param_1[1],*(undefined8 *)(param_3 + 0x30));
          *(undefined8 *)(param_2 + 0x88) = uVar12;
        }
        FUN_003406f8(param_1[0xb],param_2);
        if (param_2[0x43] != 0) {
          FUN_00340df4(param_1[1],param_2);
        }
        if (((byte)local_b0 & 1) == 0) {
          return;
        }
        puVar13 = (ulong *)CONCAT17(acStack_9f[6],
                                    CONCAT16(acStack_9f[5],CONCAT51(acStack_9f._0_5_,cStack_a0)));
        goto LAB_0035d410;
      }
      if (bVar8 == false) {
LAB_0035c6fc:
        FUN_0034dd44(param_1,*(undefined8 *)(param_2 + 8),param_3,2,*(undefined8 *)(param_3 + 0x28))
        ;
        return;
      }
      local_b0._0_1_ = 0x2a;
      acStack_9f[6] = 0;
      acStack_9f[0] = s_google_protobuf_Empty_03924c80[0x10];
      acStack_9f[1] = s_google_protobuf_Empty_03924c80[0x11];
      acStack_9f[2] = s_google_protobuf_Empty_03924c80[0x12];
      acStack_9f[3] = s_google_protobuf_Empty_03924c80[0x13];
      acStack_9f[4] = s_google_protobuf_Empty_03924c80[0x14];
      uStack_a8._1_3_ = s_google_protobuf_Empty_03924c80._8_3_;
      uStack_a4 = s_google_protobuf_Empty_03924c80._11_2_;
      uStack_a2 = s_google_protobuf_Empty_03924c80._13_2_;
      cStack_a0 = s_google_protobuf_Empty_03924c80[0xf];
      local_b0._1_7_ = s_google_protobuf_Empty_03924c80._0_7_;
      uStack_a8._0_1_ = s_google_protobuf_Empty_03924c80[7];
      acStack_9f[5] = 0;
                    /* try { // try from 0035c6a8 to 0035c6b7 has its CatchHandler @ 0035d5d0 */
      iVar10 = FUN_0034e9a0(param_1,&local_b0,1);
      if (((byte)local_b0 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,
                     CONCAT17(acStack_9f[6],
                              CONCAT16(acStack_9f[5],CONCAT51(acStack_9f._0_5_,cStack_a0))));
      }
      lVar21 = extraout_x1_03;
      if (iVar10 == 0) goto LAB_0035c6fc;
    }
    else {
joined_r0x0035c458:
      if (iVar10 == 0) goto LAB_0035c488;
    }
    if ((*(byte *)(param_3 + 0x11) >> 2 & 1) == 0) {
      if (iVar10 == 1) {
        uVar20 = 0xb;
      }
      else {
        if (iVar10 != 4) {
          uVar17 = *(undefined8 *)(param_2 + 8);
          FUN_0034b2f0(&local_e0,&DAT_039042e1,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 0035cca8 to 0035ccbb has its CatchHandler @ 0035d5c0 */
          puVar32 = (undefined8 *)FUN_002e4094(&local_e0,"\" is not a type.",0x10);
          uVar34 = puVar32[1];
          uVar12 = puVar32[2];
          cStack_a0 = (char)uVar12;
          acStack_9f._0_5_ = SUB85((ulong)uVar12 >> 8,0);
          acStack_9f[5] = (char)((ulong)uVar12 >> 0x30);
          acStack_9f[6] = (char)((ulong)uVar12 >> 0x38);
          uStack_a8 = (uint)uVar34;
          uStack_a4 = (undefined2)((ulong)uVar34 >> 0x20);
          uStack_a2 = (undefined2)((ulong)uVar34 >> 0x30);
          local_b0._0_1_ = (byte)*puVar32;
          local_b0._1_7_ = (undefined7)((ulong)*puVar32 >> 8);
          puVar32[1] = 0;
          puVar32[2] = 0;
          *puVar32 = 0;
                    /* try { // try from 0035ccd4 to 0035cceb has its CatchHandler @ 0035d5b0 */
          FUN_0034db00(param_1,uVar17,param_3,2,&local_b0);
          goto LAB_0035cd7c;
        }
        uVar20 = 0xe;
      }
      *(undefined4 *)(param_2 + 0x38) = uVar20;
    }
    puVar13 = *(ulong **)(param_2 + 0x30);
    if (puVar13 != (ulong *)0x0) {
      local_110 = PTR_LAB_04373a98;
      local_140 = param_2;
      if (*puVar13 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)&local_110;
        local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
        uStack_a8 = (uint)&local_140;
        uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
    }
    uVar19 = *(uint *)(param_2 + 0x38);
    if ((uVar19 | 1) == 0xb) {
      if (iVar10 != 1) {
        uVar17 = *(undefined8 *)(param_2 + 8);
        FUN_0034b2f0(&local_e0,&DAT_039042e1,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 0035cbe8 to 0035cbfb has its CatchHandler @ 0035d5f0 */
        puVar32 = (undefined8 *)FUN_002e4094(&local_e0,"\" is not a message type.",0x18);
        uVar34 = puVar32[1];
        uVar12 = puVar32[2];
        cStack_a0 = (char)uVar12;
        acStack_9f._0_5_ = SUB85((ulong)uVar12 >> 8,0);
        acStack_9f[5] = (char)((ulong)uVar12 >> 0x30);
        acStack_9f[6] = (char)((ulong)uVar12 >> 0x38);
        uStack_a8 = (uint)uVar34;
        uStack_a4 = (undefined2)((ulong)uVar34 >> 0x20);
        uStack_a2 = (undefined2)((ulong)uVar34 >> 0x30);
        local_b0._0_1_ = (byte)*puVar32;
        local_b0._1_7_ = (undefined7)((ulong)*puVar32 >> 8);
        puVar32[1] = 0;
        puVar32[2] = 0;
        *puVar32 = 0;
                    /* try { // try from 0035cc14 to 0035cc2b has its CatchHandler @ 0035d5e0 */
        FUN_0034db00(param_1,uVar17,param_3,2,&local_b0);
        goto LAB_0035cd7c;
      }
      *(long *)(param_2 + 0x68) = lVar21;
      if (param_2[0x40] == 0) goto LAB_0035c1b8;
      uVar12 = *(undefined8 *)(param_2 + 8);
      pcVar18 = "Messages can\'t have default values.";
LAB_0035c7c8:
      uVar17 = 4;
LAB_0035c1b4:
      FUN_0034dc2c(param_1,uVar12,param_3,uVar17,pcVar18);
      goto LAB_0035c1b8;
    }
    puVar13 = *(ulong **)(param_2 + 0x30);
    if (puVar13 != (ulong *)0x0) {
      local_110 = PTR_LAB_04373a98;
      local_140 = param_2;
      if (*puVar13 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)&local_110;
        local_b0._1_7_ = (undefined7)((ulong)&local_110 >> 8);
        uStack_a8 = (uint)&local_140;
        uStack_a4 = (undefined2)((ulong)&local_140 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_140 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373aa0);
      }
      uVar19 = *(uint *)(param_2 + 0x38);
    }
    if (uVar19 != 0xe) {
      uVar12 = *(undefined8 *)(param_2 + 8);
      pcVar18 = "Field with primitive type has type_name.";
      goto LAB_0035c1a8;
    }
    if (iVar10 != 4) {
      uVar17 = *(undefined8 *)(param_2 + 8);
      FUN_0034b2f0(&local_e0,&DAT_039042e1,*(undefined8 *)(param_3 + 0x28));
                    /* try { // try from 0035cd38 to 0035cd4b has its CatchHandler @ 0035d5a0 */
      puVar32 = (undefined8 *)FUN_002e4094(&local_e0,"\" is not an enum type.",0x16);
      uVar34 = puVar32[1];
      uVar12 = puVar32[2];
      cStack_a0 = (char)uVar12;
      acStack_9f._0_5_ = SUB85((ulong)uVar12 >> 8,0);
      acStack_9f[5] = (char)((ulong)uVar12 >> 0x30);
      acStack_9f[6] = (char)((ulong)uVar12 >> 0x38);
      uStack_a8 = (uint)uVar34;
      uStack_a4 = (undefined2)((ulong)uVar34 >> 0x20);
      uStack_a2 = (undefined2)((ulong)uVar34 >> 0x30);
      local_b0._0_1_ = (byte)*puVar32;
      local_b0._1_7_ = (undefined7)((ulong)*puVar32 >> 8);
      puVar32[1] = 0;
      puVar32[2] = 0;
      *puVar32 = 0;
                    /* try { // try from 0035cd64 to 0035cd7b has its CatchHandler @ 0035d590 */
      FUN_0034db00(param_1,uVar17,param_3,2,&local_b0);
      goto LAB_0035cd7c;
    }
    puVar13 = *(ulong **)(param_2 + 0x30);
    *(long *)(param_2 + 0x70) = lVar21;
    if (puVar13 != (ulong *)0x0) {
      local_110 = param_2;
      if (*puVar13 != 0xffffffffffffffff) {
        local_b0._0_1_ = (byte)PTR_LAB_04373a98;
        local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_04373a98 >> 8);
        uStack_a8 = (uint)&local_110;
        uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      lVar21 = *(long *)(param_2 + 0x70);
    }
    if (*(char *)(lVar21 + 0x28) == '\0') {
      if (param_2[0x40] == 0) goto LAB_0035c888;
      uVar14 = FUN_003a14e8(*(undefined8 *)(param_3 + 0x30));
      if ((uVar14 & 1) == 0) {
        uVar12 = *(undefined8 *)(param_2 + 8);
        pcVar18 = "Default value for an enum field must be an identifier.";
        goto LAB_0035c7c8;
      }
      uVar12 = *(undefined8 *)(param_3 + 0x30);
      puVar13 = *(ulong **)(param_2 + 0x30);
      if ((puVar13 != (ulong *)0x0) && (local_110 = param_2, *puVar13 != 0xffffffffffffffff)) {
        local_b0._0_1_ = (byte)PTR_LAB_04373a98;
        local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_04373a98 >> 8);
        uStack_a8 = (uint)&local_110;
        uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
        uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
        local_e0 = &local_b0;
        std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373b88);
      }
      iVar11 = FUN_0034ed20(param_1,uVar12,*(undefined8 *)(*(long *)(param_2 + 0x70) + 8),0,1);
      if (iVar11 == 5) {
        lVar21 = *(long *)(extraout_x1_04 + 0x18);
        puVar13 = *(ulong **)(param_2 + 0x30);
        if ((puVar13 != (ulong *)0x0) && (local_110 = param_2, *puVar13 != 0xffffffffffffffff)) {
          local_b0._0_1_ = (byte)PTR_LAB_04373a98;
          local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_04373a98 >> 8);
          uStack_a8 = (uint)&local_110;
          uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
          uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
          local_e0 = &local_b0;
          std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        if (lVar21 != *(long *)(param_2 + 0x70)) goto LAB_0035d158;
        *(long *)(param_2 + 0x90) = extraout_x1_04;
        uVar14 = FUN_003406f8(param_1[0xb],param_2);
      }
      else {
LAB_0035d158:
        uVar12 = *(undefined8 *)(param_2 + 8);
        puVar13 = *(ulong **)(param_2 + 0x30);
        if ((puVar13 != (ulong *)0x0) && (local_1d0 = param_2, *puVar13 != 0xffffffffffffffff)) {
          local_168 = &local_1d0;
          local_170 = PTR_LAB_04373a98;
          local_1a0 = &local_170;
          std::__call_once(puVar13,&local_1a0,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        FUN_0034b2f0(&local_140,"Enum type \"",*(undefined8 *)(*(long *)(param_2 + 0x70) + 8));
                    /* try { // try from 0035d1b4 to 0035d1c7 has its CatchHandler @ 0035d57c */
        puVar32 = (undefined8 *)FUN_002e4094(&local_140,"\" has no value named \"",0x16);
        uStack_108 = puVar32[1];
        local_110 = (byte *)*puVar32;
        local_100 = puVar32[2];
        puVar32[1] = 0;
        puVar32[2] = 0;
        *puVar32 = 0;
        pbVar22 = *(byte **)(param_3 + 0x30);
        uVar14 = *(ulong *)(pbVar22 + 8);
        pbVar23 = *(byte **)(pbVar22 + 0x10);
        if ((*pbVar22 & 1) == 0) {
          pbVar23 = pbVar22 + 1;
          uVar14 = (ulong)(*pbVar22 >> 1);
        }
                    /* try { // try from 0035d1fc to 0035d203 has its CatchHandler @ 0035d554 */
        puVar32 = (undefined8 *)FUN_002e4094(&local_110,pbVar23,uVar14);
        uStack_d8 = puVar32[1];
        local_e0 = (ulong *)*puVar32;
        local_d0 = (ulong *)puVar32[2];
        puVar32[1] = 0;
        puVar32[2] = 0;
        *puVar32 = 0;
                    /* try { // try from 0035d21c to 0035d22f has its CatchHandler @ 0035d52c */
        puVar32 = (undefined8 *)FUN_002e4094(&local_e0,&DAT_038c838e,2);
        uVar34 = puVar32[1];
        uVar17 = puVar32[2];
        cStack_a0 = (char)uVar17;
        acStack_9f._0_5_ = SUB85((ulong)uVar17 >> 8,0);
        acStack_9f[5] = (char)((ulong)uVar17 >> 0x30);
        acStack_9f[6] = (char)((ulong)uVar17 >> 0x38);
        uStack_a8 = (uint)uVar34;
        uStack_a4 = (undefined2)((ulong)uVar34 >> 0x20);
        uStack_a2 = (undefined2)((ulong)uVar34 >> 0x30);
        local_b0._0_1_ = (byte)*puVar32;
        local_b0._1_7_ = (undefined7)((ulong)*puVar32 >> 8);
        puVar32[1] = 0;
        puVar32[2] = 0;
        *puVar32 = 0;
                    /* try { // try from 0035d248 to 0035d25f has its CatchHandler @ 0035d4e8 */
        FUN_0034db00(param_1,uVar12,param_3,4,&local_b0);
        if (((byte)local_b0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,
                       CONCAT17(acStack_9f[6],
                                CONCAT16(acStack_9f[5],CONCAT51(acStack_9f._0_5_,cStack_a0))));
        }
        if (((ulong)local_e0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
        if (((ulong)local_110 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_100);
        }
        if (((ulong)local_140 & 1) == 0) goto LAB_0035c1b8;
        FUN_002e2ea0(PTR_LAB_04373088,local_130);
        uVar14 = FUN_003406f8(param_1[0xb],param_2);
      }
    }
    else {
      param_2[0x40] = 0;
LAB_0035c888:
      puVar13 = *(ulong **)(param_2 + 0x30);
      if (puVar13 != (ulong *)0x0) {
        local_110 = param_2;
        if (*puVar13 != 0xffffffffffffffff) {
          local_b0._0_1_ = (byte)PTR_LAB_04373a98;
          local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_04373a98 >> 8);
          uStack_a8 = (uint)&local_110;
          uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
          uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
          local_e0 = &local_b0;
          std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        lVar21 = *(long *)(param_2 + 0x70);
      }
      if (*(int *)(lVar21 + 0x2c) < 1) goto LAB_0035c1b8;
      puVar13 = *(ulong **)(param_2 + 0x30);
      if (puVar13 != (ulong *)0x0) {
        local_110 = param_2;
        if (*puVar13 != 0xffffffffffffffff) {
          local_b0._0_1_ = (byte)PTR_LAB_04373a98;
          local_b0._1_7_ = (undefined7)((ulong)PTR_LAB_04373a98 >> 8);
          uStack_a8 = (uint)&local_110;
          uStack_a4 = (undefined2)((ulong)&local_110 >> 0x20);
          uStack_a2 = (undefined2)((ulong)&local_110 >> 0x30);
          local_e0 = &local_b0;
          std::__call_once(puVar13,&local_e0,(_func_void_void_ptr *)PTR_LAB_04373b88);
        }
        lVar21 = *(long *)(param_2 + 0x70);
      }
      *(undefined8 *)(param_2 + 0x90) = *(undefined8 *)(lVar21 + 0x30);
      uVar14 = FUN_003406f8(param_1[0xb],param_2);
    }
  }
  if ((uVar14 & 1) == 0) {
    lVar29 = param_1[0xb];
    lVar21 = *(long *)(param_2 + 0x50);
    uVar14 = *(ulong *)(lVar29 + 0xa0);
    if (uVar14 != 0) {
      uVar12 = CONCAT17(POPCOUNT((char)(uVar14 >> 0x38)),
                        CONCAT16(POPCOUNT((char)(uVar14 >> 0x30)),
                                 CONCAT15(POPCOUNT((char)(uVar14 >> 0x28)),
                                          CONCAT14(POPCOUNT((char)(uVar14 >> 0x20)),
                                                   CONCAT13(POPCOUNT((char)(uVar14 >> 0x18)),
                                                            CONCAT12(POPCOUNT((char)(uVar14 >> 0x10)
                                                                             ),
                                                                     CONCAT11(POPCOUNT((char)(uVar14
                                                                                             >> 8)),
                                                                              POPCOUNT((char)uVar14)
                                                                             )))))));
      iVar11 = *(int *)(param_2 + 0x44);
      uVar33 = NEON_uaddlv(uVar12,1);
      uVar26 = (long)iVar11 * 0x1000193 ^ lVar21 * 0x100011b;
      uVar30 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar33) & 0xffffffff;
      if (uVar30 < 2) {
        uVar28 = uVar26 & uVar14 - 1;
LAB_0035ca48:
        plVar24 = *(long **)(*(long *)(lVar29 + 0x98) + uVar28 * 8);
      }
      else {
        uVar28 = uVar26;
        if (uVar26 < uVar14) goto LAB_0035ca48;
        uVar28 = 0;
        if (uVar14 != 0) {
          uVar28 = uVar26 / uVar14;
        }
        uVar28 = uVar26 - uVar28 * uVar14;
        plVar24 = *(long **)(*(long *)(lVar29 + 0x98) + uVar28 * 8);
      }
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar30 < 2) {
          uVar30 = plVar24[1];
          if (uVar26 == uVar30) goto LAB_0035c9d8;
          while ((uVar30 & uVar14 - 1) == uVar28) {
            while( true ) {
              plVar24 = (long *)*plVar24;
              if (plVar24 == (long *)0x0) goto LAB_0035ca54;
              uVar30 = plVar24[1];
              if (uVar26 != uVar30) break;
LAB_0035c9d8:
              if ((plVar24[2] == lVar21) && ((int)plVar24[3] == iVar11)) goto LAB_0035ce58;
            }
          }
        }
        else {
          do {
            uVar30 = plVar24[1];
            if (uVar26 == uVar30) {
              if ((plVar24[2] == lVar21) && ((int)plVar24[3] == iVar11)) goto LAB_0035ce58;
            }
            else {
              if (uVar14 <= uVar30) {
                uVar6 = 0;
                if (uVar14 != 0) {
                  uVar6 = uVar30 / uVar14;
                }
                uVar30 = uVar30 - uVar6 * uVar14;
              }
              if (uVar30 != uVar28) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
LAB_0035ca54:
    puVar32 = (undefined8 *)0x0;
    goto joined_r0x0035ce5c;
  }
  if (param_2[0x43] == 0) {
    s_google_protobuf_Empty_03924c80[0] = s_google_protobuf_Empty_03924c80[0];
    s_google_protobuf_Empty_03924c80[1] = s_google_protobuf_Empty_03924c80[1];
    s_google_protobuf_Empty_03924c80[2] = s_google_protobuf_Empty_03924c80[2];
    s_google_protobuf_Empty_03924c80[3] = s_google_protobuf_Empty_03924c80[3];
    s_google_protobuf_Empty_03924c80[4] = s_google_protobuf_Empty_03924c80[4];
    s_google_protobuf_Empty_03924c80[5] = s_google_protobuf_Empty_03924c80[5];
    s_google_protobuf_Empty_03924c80[6] = s_google_protobuf_Empty_03924c80[6];
    s_google_protobuf_Empty_03924c80[7] = s_google_protobuf_Empty_03924c80[7];
    s_google_protobuf_Empty_03924c80[8] = s_google_protobuf_Empty_03924c80[8];
    s_google_protobuf_Empty_03924c80[9] = s_google_protobuf_Empty_03924c80[9];
    s_google_protobuf_Empty_03924c80[10] = s_google_protobuf_Empty_03924c80[10];
    s_google_protobuf_Empty_03924c80[0xb] = s_google_protobuf_Empty_03924c80[0xb];
    s_google_protobuf_Empty_03924c80[0xc] = s_google_protobuf_Empty_03924c80[0xc];
    s_google_protobuf_Empty_03924c80[0xd] = s_google_protobuf_Empty_03924c80[0xd];
    s_google_protobuf_Empty_03924c80[0xe] = s_google_protobuf_Empty_03924c80[0xe];
    s_google_protobuf_Empty_03924c80[0xf] = s_google_protobuf_Empty_03924c80[0xf];
    s_google_protobuf_Empty_03924c80[0x10] = s_google_protobuf_Empty_03924c80[0x10];
    s_google_protobuf_Empty_03924c80[0x11] = s_google_protobuf_Empty_03924c80[0x11];
    s_google_protobuf_Empty_03924c80[0x12] = s_google_protobuf_Empty_03924c80[0x12];
    s_google_protobuf_Empty_03924c80[0x13] = s_google_protobuf_Empty_03924c80[0x13];
    s_google_protobuf_Empty_03924c80[0x14] = s_google_protobuf_Empty_03924c80[0x14];
    return;
  }
  uVar14 = FUN_00340df4(param_1[1],param_2);
  if ((uVar14 & 1) != 0) {
    return;
  }
  uVar14 = *(ulong *)(param_2 + 0x50);
  iVar11 = *(int *)(param_2 + 0x44);
  plVar24 = *(long **)(param_1[1] + 0x188);
  if (plVar24 != (long *)0x0) {
    plVar2 = (long *)(param_1[1] + 0x188);
    uVar26 = plVar24[4];
    plVar16 = plVar2;
    if (uVar14 <= uVar26) goto LAB_0035c22c;
LAB_0035c20c:
    do {
      plVar24 = plVar24 + 1;
      plVar27 = plVar16;
      do {
        plVar7 = (long *)*plVar24;
        plVar16 = plVar27;
        while( true ) {
          plVar24 = plVar7;
          if (plVar24 == (long *)0x0) {
            if (((plVar16 == plVar2) || (uVar14 < (ulong)plVar16[4])) ||
               ((uVar14 <= (ulong)plVar16[4] && (iVar11 < (int)plVar16[5])))) goto LAB_0035c27c;
            lVar21 = plVar16[6];
            goto joined_r0x0035d288;
          }
          uVar26 = plVar24[4];
          if (uVar26 < uVar14) goto LAB_0035c20c;
LAB_0035c22c:
          if (uVar26 <= uVar14) break;
          plVar7 = (long *)*plVar24;
          plVar16 = plVar24;
        }
        plVar27 = plVar24;
      } while (iVar11 <= (int)plVar24[5]);
    } while( true );
  }
LAB_0035c27c:
  lVar21 = 0;
joined_r0x0035d288:
  if (uVar14 == 0) {
    local_70 = (ulong *)0x0;
    uStack_78 = 0;
    local_80 = 0x6e776f6e6b6e750e;
  }
  else {
    puVar13 = *(ulong **)(uVar14 + 8);
    local_70 = (ulong *)0x0;
    uStack_78 = 0;
    local_80 = 0;
    if ((*puVar13 & 1) == 0) {
      uStack_78 = puVar13[1];
      local_80 = *puVar13;
      local_70 = (ulong *)puVar13[2];
    }
    else {
      uVar14 = puVar13[1];
      if (0xffffffffffffffef < uVar14) goto LAB_0035d4d0;
      pvVar31 = (void *)puVar13[2];
      if (uVar14 < 0x17) {
        local_80 = (ulong)(byte)((int)uVar14 << 1);
        puVar13 = (ulong *)((ulong)&local_80 | 1);
        if (uVar14 != 0) goto LAB_0035d06c;
      }
      else {
        uVar26 = uVar14 + 0x10 & 0xfffffffffffffff0;
        puVar13 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar26);
        local_80 = uVar26 | 1;
        uStack_78 = uVar14;
        local_70 = puVar13;
LAB_0035d06c:
        memcpy(puVar13,pvVar31,uVar14);
      }
      *(byte *)((long)puVar13 + uVar14) = 0;
      iVar11 = *(int *)(param_2 + 0x44);
    }
  }
                    /* try { // try from 0035d2c0 to 0035d2c3 has its CatchHandler @ 0035d614 */
  pcVar18 = (char *)FUN_00320300(iVar11,&uStack_a4);
  local_b0._0_1_ = (byte)pcVar18;
  local_b0._1_7_ = (undefined7)((ulong)pcVar18 >> 8);
  sVar15 = strlen(pcVar18);
  uStack_a8 = (uint)sVar15;
  uVar19 = (uint)((byte)local_80 >> 1);
  local_e0 = (ulong *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    uVar19 = (uint)uStack_78;
    local_e0 = local_70;
  }
  uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar19);
  pbVar23 = *(byte **)(lVar21 + 8);
  local_110 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    local_110 = pbVar23 + 1;
  }
  uVar19 = (uint)(*pbVar23 >> 1);
  if ((*pbVar23 & 1) != 0) {
    uVar19 = (uint)*(undefined8 *)(pbVar23 + 8);
  }
  uStack_108 = CONCAT44(uStack_108._4_4_,uVar19);
  pbVar23 = (byte *)**(undefined8 **)(lVar21 + 0x28);
  local_140 = *(byte **)(pbVar23 + 0x10);
  if ((*pbVar23 & 1) == 0) {
    local_140 = pbVar23 + 1;
  }
  local_170 = (undefined *)0x0;
  local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
  local_1a0 = (undefined **)0x0;
  local_198 = 0xffffffff;
  local_1d0 = (byte *)0x0;
  local_1c8 = 0xffffffff;
  local_200 = 0;
  local_1f8 = 0xffffffff;
  local_230 = 0;
  local_228 = 0xffffffff;
  local_260 = 0;
  local_258 = 0xffffffff;
  local_138 = (uint)(*pbVar23 >> 1);
  if ((*pbVar23 & 1) != 0) {
    local_138 = (uint)*(undefined8 *)(pbVar23 + 8);
  }
                    /* try { // try from 0035d394 to 0035d3d3 has its CatchHandler @ 0035d610 */
  FUN_003c6830(local_278,
               "Extension number $0 has already been used in \"$1\" by extension \"$2\" defined in $3."
               ,&local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
               &local_200,&local_230,&local_260);
                    /* try { // try from 0035d3d8 to 0035d3eb has its CatchHandler @ 0035d600 */
  FUN_0034e3c0(param_1,*(undefined8 *)(param_2 + 8),param_3,1,local_278);
LAB_0035d3ec:
  if ((local_278[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_268);
  }
  if ((local_80 & 1) == 0) {
    return;
  }
  puVar13 = local_70;
LAB_0035d410:
  FUN_002e2ea0(PTR_LAB_04373088,puVar13);
  return;
LAB_0035ce58:
  puVar32 = (undefined8 *)plVar24[4];
joined_r0x0035ce5c:
  if (lVar21 == 0) {
    local_70 = (ulong *)0x0;
    uStack_78 = 0;
    local_80 = 0x6e776f6e6b6e750e;
    bVar5 = param_2[0x43];
    uVar12 = *(undefined8 *)(param_2 + 8);
  }
  else {
    puVar13 = *(ulong **)(lVar21 + 8);
    local_70 = (ulong *)0x0;
    uStack_78 = 0;
    local_80 = 0;
    if ((*puVar13 & 1) == 0) {
      uStack_78 = puVar13[1];
      local_80 = *puVar13;
      local_70 = (ulong *)puVar13[2];
      bVar5 = param_2[0x43];
      uVar12 = *(undefined8 *)(param_2 + 8);
    }
    else {
      uVar14 = puVar13[1];
      if (0xffffffffffffffef < uVar14) {
LAB_0035d4d0:
        local_70 = (ulong *)0x0;
        uStack_78 = 0;
        local_80 = 0;
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      pvVar31 = (void *)puVar13[2];
      if (uVar14 < 0x17) {
        local_80 = (ulong)(byte)((int)uVar14 << 1);
        puVar13 = (ulong *)((ulong)&local_80 | 1);
        if (uVar14 != 0) goto LAB_0035cc6c;
      }
      else {
        uVar26 = uVar14 + 0x10 & 0xfffffffffffffff0;
        puVar13 = (ulong *)FUN_002e2e80(PTR_FUN_04373078,uVar26);
        local_80 = uVar26 | 1;
        uStack_78 = uVar14;
        local_70 = puVar13;
LAB_0035cc6c:
        memcpy(puVar13,pvVar31,uVar14);
      }
      *(byte *)((long)puVar13 + uVar14) = 0;
      bVar5 = param_2[0x43];
      uVar12 = *(undefined8 *)(param_2 + 8);
    }
  }
  if (bVar5 == 0) {
                    /* try { // try from 0035ca9c to 0035ca9f has its CatchHandler @ 0035d62c */
    pcVar18 = (char *)FUN_00320300(*(undefined4 *)(param_2 + 0x44),&uStack_a4);
    local_b0._0_1_ = (byte)pcVar18;
    local_b0._1_7_ = (undefined7)((ulong)pcVar18 >> 8);
    sVar15 = strlen(pcVar18);
    uStack_a8 = (uint)sVar15;
    uVar19 = (uint)((byte)local_80 >> 1);
    local_e0 = (ulong *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar19 = (uint)uStack_78;
      local_e0 = local_70;
    }
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar19);
    pbVar23 = (byte *)*puVar32;
    local_110 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      local_110 = pbVar23 + 1;
    }
    local_140 = (byte *)0x0;
    local_138 = 0xffffffff;
    local_170 = (undefined *)0x0;
    local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
    local_1a0 = (undefined **)0x0;
    local_198 = 0xffffffff;
    local_1d0 = (byte *)0x0;
    local_1c8 = 0xffffffff;
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_230 = 0;
    local_228 = 0xffffffff;
    local_260 = 0;
    local_258 = 0xffffffff;
    uVar19 = (uint)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      uVar19 = (uint)*(undefined8 *)(pbVar23 + 8);
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,uVar19);
                    /* try { // try from 0035cb44 to 0035cb83 has its CatchHandler @ 0035d628 */
    FUN_003c6830(local_278,"Field number $0 has already been used in \"$1\" by field \"$2\".",
                 &local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
                 &local_200,&local_230,&local_260);
                    /* try { // try from 0035cb84 to 0035cb9b has its CatchHandler @ 0035d618 */
    FUN_0034db00(param_1,uVar12,param_3,1,local_278);
  }
  else {
                    /* try { // try from 0035cea4 to 0035cea7 has its CatchHandler @ 0035d66c */
    pcVar18 = (char *)FUN_00320300(*(undefined4 *)(param_2 + 0x44),&uStack_a4);
    local_b0._0_1_ = (byte)pcVar18;
    local_b0._1_7_ = (undefined7)((ulong)pcVar18 >> 8);
    sVar15 = strlen(pcVar18);
    uStack_a8 = (uint)sVar15;
    uVar19 = (uint)((byte)local_80 >> 1);
    local_e0 = (ulong *)((ulong)&local_80 | 1);
    if ((local_80 & 1) != 0) {
      uVar19 = (uint)uStack_78;
      local_e0 = local_70;
    }
    uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar19);
    pbVar23 = (byte *)puVar32[1];
    local_110 = *(byte **)(pbVar23 + 0x10);
    if ((*pbVar23 & 1) == 0) {
      local_110 = pbVar23 + 1;
    }
    local_140 = (byte *)0x0;
    local_138 = 0xffffffff;
    local_170 = (undefined *)0x0;
    local_168 = (byte **)CONCAT44(local_168._4_4_,0xffffffff);
    local_1a0 = (undefined **)0x0;
    local_198 = 0xffffffff;
    local_1d0 = (byte *)0x0;
    local_1c8 = 0xffffffff;
    local_200 = 0;
    local_1f8 = 0xffffffff;
    local_230 = 0;
    local_228 = 0xffffffff;
    local_260 = 0;
    local_258 = 0xffffffff;
    uVar19 = (uint)(*pbVar23 >> 1);
    if ((*pbVar23 & 1) != 0) {
      uVar19 = (uint)*(undefined8 *)(pbVar23 + 8);
    }
    uStack_108 = CONCAT44(uStack_108._4_4_,uVar19);
                    /* try { // try from 0035cf4c to 0035cf8b has its CatchHandler @ 0035d668 */
    FUN_003c6830(local_278,
                 "Extension number $0 has already been used in \"$1\" by extension \"$2\".",
                 &local_b0,&local_e0,&local_110,&local_140,&local_170,&local_1a0,&local_1d0,
                 &local_200,&local_230,&local_260);
                    /* try { // try from 0035cf8c to 0035cfa3 has its CatchHandler @ 0035d640 */
    FUN_0034db00(param_1,uVar12,param_3,1,local_278);
  }
  goto LAB_0035d3ec;
}


