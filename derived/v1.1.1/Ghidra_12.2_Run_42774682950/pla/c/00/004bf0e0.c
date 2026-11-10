/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bf0e0; name: FUN_004bf0e0
 */


/* WARNING: Removing unreachable block (ram,0x004cc75c) */
/* WARNING: Removing unreachable block (ram,0x004cc61c) */
/* WARNING: Removing unreachable block (ram,0x004cc3f8) */
/* WARNING: Removing unreachable block (ram,0x004cc724) */
/* WARNING: Removing unreachable block (ram,0x004c6d10) */
/* WARNING: Removing unreachable block (ram,0x004cc4ec) */
/* WARNING: Removing unreachable block (ram,0x004cc4a8) */
/* WARNING: Removing unreachable block (ram,0x004cc564) */
/* WARNING: Removing unreachable block (ram,0x004cc82c) */
/* WARNING: Removing unreachable block (ram,0x004cc4cc) */
/* WARNING: Removing unreachable block (ram,0x004df210) */
/* WARNING: Type propagation algorithm not settling */

int * FUN_004bf0e0(ulong *param_1,int *param_2,undefined8 *param_3,undefined8 *param_4,
                  ulong *param_5)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  int iVar17;
  int *piVar21;
  int *piVar22;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 *puVar23;
  undefined1 *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  uint uVar27;
  uint uVar28;
  ulong *puVar29;
  undefined *puVar30;
  ulong uVar31;
  ulong uVar32;
  uint uVar33;
  uint uVar34;
  ulong in_x12;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong extraout_x12_02;
  ulong extraout_x12_03;
  ulong extraout_x12_04;
  ulong *in_x13;
  ulong *extraout_x13;
  ulong *extraout_x13_00;
  ulong *extraout_x13_01;
  ulong *extraout_x13_02;
  ulong *extraout_x13_03;
  ulong *extraout_x13_04;
  ulong *unaff_x19;
  ulong uVar35;
  ulong *unaff_x21;
  ulong unaff_x22;
  ulong uVar36;
  ulong uVar37;
  ulong *puVar38;
  long lVar39;
  int *piVar40;
  int *unaff_x26;
  ulong unaff_x27;
  long lVar41;
  undefined8 *puVar42;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar43 [16];
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined1 auStack_7ffffffe [2147483446];
  int *local_c8;
  undefined8 *local_c0;
  long lStack_b8;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  ulong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte bVar44;
  undefined1 uVar45;
  
  auVar43._8_8_ = param_2;
  auVar43._0_8_ = (ulong)param_1;
  local_90 = param_4 + 1;
  uVar35 = 0;
  uVar36 = 1;
  local_98 = (undefined8 *)CONCAT44(local_98._4_4_,1);
  puVar23 = param_3;
  puVar38 = unaff_x21;
  local_88 = param_4;
LAB_004bf128:
  bVar44 = (byte)*param_1;
  puVar29 = (ulong *)(ulong)bVar44;
  lVar39 = 1;
  bVar13 = 0x3f < bVar44;
  bVar14 = bVar44 == 0x40;
  if (bVar44 < 0x41) goto LAB_004bf190;
switchD_004bf1a8_caseD_1:
  puVar29 = param_1;
  uVar31 = 0;
  local_78 = 0;
  local_70 = (undefined8 *)0x0;
  local_68 = 0;
  local_98 = (undefined8 *)CONCAT44((int)uVar35,(undefined4)local_98);
  param_1 = puVar29;
switchD_004bf1a8_caseD_72:
  unaff_x29 = (undefined8 *)0x0;
  local_78 = CONCAT44((int)uVar31,(uint)local_78);
  puVar38 = puVar29;
  do {
    bVar44 = *(byte *)((long)puVar38 + (long)unaff_x29);
    unaff_x27 = (ulong)bVar44;
    uVar31 = (ulong)((bVar44 & 0xffffffdf) - 0x41);
    puVar29 = (ulong *)(ulong)(bVar44 - 0x30);
switchD_004bf1a8_caseD_bb:
    if (0x19 < ((uint)uVar31 & 0xff) && 9 < ((uint)puVar29 & 0xff)) {
      bVar13 = 0x3c < (uint)unaff_x27;
      bVar14 = (uint)unaff_x27 == 0x3d;
switchD_004bf1a8_caseD_64:
      if (bVar13 && !bVar14) goto LAB_004bf238;
switchD_004bf1a8_caseD_76:
      bVar14 = (1L << (unaff_x27 & 0x3f) & 0x2000600000000000U) == 0;
switchD_004bf1a8_caseD_74:
      if (bVar14) {
LAB_004bf238:
        iVar17 = (int)lVar39;
        if ((int)unaff_x29 == 0) {
          puVar23 = (undefined8 *)&DAT_00000118;
          auVar43 = FUN_004014b0(0x14,0xe6,0x118,"external/openssl/ssl/ssl_ciph.c",0x404);
          local_98 = (undefined8 *)((ulong)local_98 & 0xffffffff00000000);
          unaff_x19 = (ulong *)((byte *)((long)puVar38 + (long)unaff_x29) + 1);
          in_x12 = extraout_x12_01;
          in_x13 = extraout_x13_01;
          goto joined_r0x004bf448;
        }
        bVar14 = iVar17 == 5;
switchD_004bf1a8_caseD_70:
        if (bVar14) {
          uVar35 = (ulong)local_98 >> 0x20;
          unaff_x19 = (ulong *)((long)puVar38 + (long)unaff_x29);
          iVar17 = (int)unaff_x29;
joined_r0x004bf45c:
          if (iVar17 == 10) {
            puVar23 = (undefined8 *)&DAT_00000009;
            iVar17 = strncmp((char *)param_1,"SECLEVEL=",9);
            uVar25 = 0x4a9;
            if (iVar17 == 0) {
              uVar16 = *(byte *)((long)param_1 + 9) - 0x30;
              uVar25 = 0x4a3;
              if (uVar16 < 6) {
                uVar32 = 0xc00100100000001;
                *(uint *)(param_5 + 0x40) = uVar16;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = extraout_x1_00;
                auVar43 = auVar7 << 0x40;
                in_x12 = extraout_x12_02;
                in_x13 = extraout_x13_02;
                goto LAB_004bf5b4;
              }
            }
          }
          else {
            uVar25 = 0x4a9;
            if ((int)unaff_x29 == 8) {
              puVar23 = (undefined8 *)&DAT_00000008;
              iVar17 = strncmp((char *)param_1,"STRENGTH",8);
              uVar25 = 0x4a9;
              if (iVar17 == 0) {
                auVar43 = FUN_004bef30(param_2,param_3);
                uVar32 = 0xc00100100000001;
                in_x12 = extraout_x12_04;
                in_x13 = extraout_x13_04;
                if (auVar43._0_4_ != 0) goto LAB_004bf5b4;
                goto switchD_004bf1a8_caseD_82;
              }
            }
          }
          puVar23 = (undefined8 *)&DAT_00000118;
          auVar43 = FUN_004014b0(0x14,0xe6,0x118,"external/openssl/ssl/ssl_ciph.c",uVar25);
          uVar32 = 0xc00100100000001;
          in_x12 = extraout_x12_03;
          in_x13 = extraout_x13_03;
          goto LAB_004bf58c;
        }
        unaff_x19 = (ulong *)((long)puVar38 + (long)unaff_x29);
        unaff_x26 = (int *)*local_88;
        if (unaff_x26 == (int *)0x0) {
          uVar35 = 0;
          if ((int)unaff_x27 != 0x2b) goto LAB_004bf4c0;
          unaff_x19 = (ulong *)((long)unaff_x19 + 1);
          goto LAB_004bf4c0;
        }
        puVar29 = (ulong *)((long)unaff_x19 + 1);
        unaff_x28 = local_90;
switchD_004bf1a8_caseD_68:
        local_80 = puVar29;
        do {
          uVar35 = *(ulong *)(unaff_x26 + 2);
          auVar43._8_8_ = uVar35;
          auVar43._0_8_ = (ulong)puVar38;
switchD_004bf1a8_caseD_c3:
          puVar23 = unaff_x29;
          uVar16 = strncmp(auVar43._0_8_,auVar43._8_8_,(size_t)unaff_x29);
          auVar43._4_4_ = 0;
          auVar43._0_4_ = uVar16;
          auVar43._8_8_ = extraout_x1;
          in_x12 = extraout_x12_00;
          in_x13 = extraout_x13_00;
          if (uVar16 == 0) goto switchD_004bf1a8_caseD_c4;
LAB_004bf264:
          unaff_x26 = (int *)*unaff_x28;
          unaff_x28 = unaff_x28 + 1;
switchD_004bf1a8_caseD_c2:
        } while (unaff_x26 != (int *)0x0);
LAB_004bf51c:
        uVar35 = 0;
        if ((int)unaff_x27 == 0x2b) {
          unaff_x19 = (ulong *)((long)unaff_x19 + 1);
        }
        iVar17 = (int)lVar39;
joined_r0x004bf448:
        bVar14 = false;
        uVar31 = local_78;
        puVar42 = local_70;
joined_r0x004bf448:
        local_78 = uVar31;
        local_70 = puVar42;
        if (iVar17 != 5) {
          if (bVar14) {
            local_78._4_4_ = (uint)(uVar31 >> 0x20);
            uVar18 = local_78._4_4_;
            puVar23 = (undefined8 *)(local_68 >> 0x20);
            local_70._4_4_ = (undefined4)((ulong)puVar42 >> 0x20);
            uVar8 = local_70._4_4_;
            auVar43 = FUN_004bec30(uVar35,uVar31 & 0xffffffff,puVar23,local_68 & 0xffffffff,uVar8,
                                   uVar18,(ulong)puVar42 & 0xffffffff,lVar39);
            puVar29 = (ulong *)(ulong)(byte)*unaff_x19;
            in_x12 = extraout_x12;
            in_x13 = extraout_x13;
            local_c8 = param_2;
            local_c0 = param_3;
          }
          else {
LAB_004bf4c0:
            for (; puVar29 = (ulong *)(ulong)(byte)*unaff_x19,
                !((byte)*unaff_x19 < 0x3c &&
                 (1L << ((ulong)puVar29 & 0x3f) & 0xc00100100000001U) != 0);
                unaff_x19 = (ulong *)((long)unaff_x19 + 1)) {
            }
          }
LAB_004bf178:
          uVar16 = (uint)puVar29;
          if (uVar16 == 0) {
switchD_004bf1a8_caseD_0:
            return (int *)((ulong)local_98 & 0xffffffff);
          }
          lVar39 = 1;
          bVar13 = 0x3f < uVar16;
          bVar14 = uVar16 == 0x40;
          param_1 = unaff_x19;
          if (0x40 < uVar16) goto switchD_004bf1a8_caseD_1;
LAB_004bf190:
          puVar42 = auVar43._8_8_;
          piVar21 = auVar43._0_8_;
          uVar16 = (uint)in_x13;
          uVar27 = (uint)puVar29;
          lVar39 = 1;
          uVar33 = 0x3a26a08;
          uVar28 = 0x3a26a08;
          uVar34 = 0x3a26a08;
          uVar32 = (ulong)(&switchD_004bf1a8::switchdataD_03a26a08)[(long)puVar29];
          uVar31 = uVar32 * 4 + 0x4bf1ac;
          uVar9 = 0x3a26a08;
          uVar10 = 0x3a26a08;
          uVar11 = 0x3a26a08;
          uVar12 = 0x3a26a08;
          switch(puVar29) {
          case (ulong *)0x0:
            goto switchD_004bf1a8_caseD_0;
          default:
            goto switchD_004bf1a8_caseD_1;
          case (ulong *)0x20:
          case (ulong *)0x2c:
          case (ulong *)0x3a:
          case (ulong *)0x3b:
            param_1 = (ulong *)((long)param_1 + 1);
            goto LAB_004bf128;
          case (ulong *)0x21:
          case (ulong *)0x61:
          case (ulong *)0x63:
          case (ulong *)0x65:
          case (ulong *)0x67:
          case (ulong *)0x69:
          case (ulong *)0x6b:
          case (ulong *)0x6d:
          case (ulong *)0x6f:
          case (ulong *)0x71:
          case (ulong *)0x73:
          case (ulong *)0x75:
          case (ulong *)0x77:
          case (ulong *)0x78:
          case (ulong *)0x79:
          case (ulong *)0x7b:
          case (ulong *)0x7d:
          case (ulong *)0x7f:
          case (ulong *)0x81:
          case (ulong *)0x83:
          case (ulong *)0x85:
          case (ulong *)0x87:
          case (ulong *)0x89:
          case (ulong *)0x8b:
          case (ulong *)0x8d:
          case (ulong *)0x8f:
          case (ulong *)0x91:
          case (ulong *)0x93:
          case (ulong *)0x95:
          case (ulong *)0x97:
          case (ulong *)0x99:
          case (ulong *)0x9b:
          case (ulong *)0x9d:
          case (ulong *)0x9f:
          case (ulong *)0xa1:
          case (ulong *)0xa2:
          case (ulong *)0xa5:
          case (ulong *)0xa6:
          case (ulong *)0xa9:
          case (ulong *)0xaa:
          case (ulong *)0xad:
          case (ulong *)0xae:
          case (ulong *)0xb1:
          case (ulong *)0xb2:
          case (ulong *)0xb5:
          case (ulong *)0xb6:
          case (ulong *)0xb9:
          case (ulong *)0xba:
            param_1 = (ulong *)((long)param_1 + 1);
          case (ulong *)0x62:
          case (ulong *)0xa3:
            lVar39 = 2;
switchD_004bf1a8_caseD_66:
            goto switchD_004bf1a8_caseD_1;
          case (ulong *)0x2b:
            param_1 = (ulong *)((long)param_1 + 1);
          case (ulong *)0x6a:
          case (ulong *)0xab:
            lVar39 = 4;
switchD_004bf1a8_caseD_6c:
            goto switchD_004bf1a8_caseD_1;
          case (ulong *)0x2d:
            param_1 = (ulong *)((long)param_1 + 1);
            lVar39 = 3;
          case (ulong *)0x6e:
          case (ulong *)0xaf:
            goto switchD_004bf1a8_caseD_1;
          case (ulong *)0x40:
            lVar39 = 5;
            param_1 = (ulong *)((long)param_1 + 1);
            goto switchD_004bf1a8_caseD_1;
          case (ulong *)0x41:
            goto switchD_004bf1a8_caseD_41;
          case (ulong *)0x42:
            if (puVar42 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00404dd0("Assertion failed: written != NULL","external/openssl/ssl/packet.c",0x187
                          );
            }
            *puVar42 = *(undefined8 *)(piVar21 + 6);
            return (int *)0x1;
          case (ulong *)0x43:
          case (ulong *)0x45:
          case (ulong *)0x46:
          case (ulong *)0x47:
          case (ulong *)0x49:
          case (ulong *)0x4a:
          case (ulong *)0x4b:
          case (ulong *)0x4c:
          case (ulong *)0x4d:
          case (ulong *)0x4e:
          case (ulong *)0x4f:
          case (ulong *)0x51:
          case (ulong *)0x52:
          case (ulong *)0x53:
          case (ulong *)0x54:
          case (ulong *)0x55:
          case (ulong *)0x56:
          case (ulong *)0x57:
          case (ulong *)0x58:
          case (ulong *)0x59:
          case (ulong *)0x5a:
          case (ulong *)0x5b:
          case (ulong *)0x5c:
          case (ulong *)0x5d:
          case (ulong *)0x5e:
          case (ulong *)0x5f:
            FUN_004c99a0(uVar35);
            FUN_00423420(0);
            FUN_00400420(local_68,"external/openssl/ssl/statem/statem_srvr.c",0xb0a);
            FUN_00444950(unaff_x19);
            return (int *)0x0;
          case (ulong *)0x44:
            goto switchD_004bf1a8_caseD_44;
          case (ulong *)0x48:
            return piVar21;
          case (ulong *)0x50:
            piVar21 = (int *)FUN_004ccdc0(unaff_x19);
            if ((int)piVar21 != 0) {
              piVar21 = (int *)0x1;
            }
            return piVar21;
          case (ulong *)0x60:
            if ((auVar43._0_4_ >> 0xc & 1) != 0) {
              puVar29[0x25] = 1;
              puVar29[0x26] = 0x2000600000000000;
            }
            puVar29[0x23] = uVar35;
            puVar29[0x24] = 1;
            piVar21 = (int *)FUN_004bff70(unaff_x19);
            if ((int)piVar21 == 0) {
              return piVar21;
            }
            iVar17 = *(int *)unaff_x19[1];
            if (iVar17 == 0x1ffff) {
              iVar17 = 0xfefd;
            }
            else if ((char)*(byte *)((long)unaff_x19 + 0x5cd) < '\0') {
              *(undefined4 *)unaff_x19 = 0x100;
              pbVar1 = (byte *)((long)unaff_x19 + 0x5ec);
              pbVar1[0] = 0;
              pbVar1[1] = 1;
              pbVar1[2] = 0;
              pbVar1[3] = 0;
              return (int *)0x1;
            }
            *(int *)unaff_x19 = iVar17;
            return (int *)0x1;
          case (ulong *)0x64:
            goto switchD_004bf1a8_caseD_64;
          case (ulong *)0x66:
          case (ulong *)0xa7:
            goto switchD_004bf1a8_caseD_66;
          case (ulong *)0x68:
          case (ulong *)0xc1:
            goto switchD_004bf1a8_caseD_68;
          case (ulong *)0x6c:
            goto switchD_004bf1a8_caseD_6c;
          case (ulong *)0x70:
          case (ulong *)0xbd:
            goto switchD_004bf1a8_caseD_70;
          case (ulong *)0x72:
          case (ulong *)0xb3:
            goto switchD_004bf1a8_caseD_72;
          case (ulong *)0x74:
            goto switchD_004bf1a8_caseD_74;
          case (ulong *)0x76:
          case (ulong *)0xb7:
            goto switchD_004bf1a8_caseD_76;
          case (ulong *)0x7a:
            goto switchD_004bf1a8_caseD_7a;
          case (ulong *)0x7c:
            if (uVar27 != 0x1000) {
              return piVar21;
            }
            lVar39 = 0xc;
            goto switchD_004bf794_caseD_1;
          case (ulong *)0x7e:
            goto switchD_004bf1a8_caseD_7e;
          case (ulong *)0x80:
            lVar39 = 10;
switchD_004bf794_caseD_1:
            return (int *)(ulong)*(uint *)(&USHORT_03a26ad0 + lVar39 * 4);
          case (ulong *)0x82:
            goto switchD_004bf1a8_caseD_82;
          case (ulong *)0x84:
            if (!bVar14) {
              piVar21 = (int *)FUN_004cb590(puVar42,(ulong)puVar23 & 0xffffffff,1);
              if ((int)piVar21 != 0) {
                iVar17 = FUN_004cac70(puVar42,3);
                piVar21 = (int *)(ulong)(iVar17 != 0);
              }
              return piVar21;
            }
            return (int *)0x1;
          case (ulong *)0x86:
            piVar21 = (int *)FUN_0046f580(2);
            return piVar21;
          case (ulong *)0x88:
            return piVar21;
          case (ulong *)0x8a:
            iVar17 = *(int *)(*(long *)(uVar35 + 0xa8) + 0x108);
            goto switchD_004c00dc_caseD_5;
          case (ulong *)0x8c:
            if (puVar29 != (ulong *)0x0) {
              FUN_004e7610(unaff_x19);
              FUN_00423420(*(undefined8 *)(unaff_x19[0x15] + 0x408));
              uVar35 = unaff_x19[0x15];
              *(undefined8 *)(uVar35 + 0x408) = 0;
              FUN_00423420(*(undefined8 *)(uVar35 + 0x240));
              uVar35 = unaff_x19[0x15];
              *(undefined8 *)(uVar35 + 0x240) = 0;
              FUN_00400420(*(undefined8 *)(uVar35 + 0x250),"external/openssl/ssl/s3_lib.c",0xd03);
              FUN_004078c0(*(undefined8 *)(unaff_x19[0x15] + 0x260),PTR_FUN_04374178);
              FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x2a8),"external/openssl/ssl/s3_lib.c",
                           0xd05);
              FUN_00400620(*(undefined8 *)(unaff_x19[0x15] + 0x2b8),
                           *(undefined8 *)(unaff_x19[0x15] + 0x2c0),"external/openssl/ssl/s3_lib.c",
                           0xd06);
              FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x2e8),"external/openssl/ssl/s3_lib.c",
                           0xd07);
              FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x2f0),"external/openssl/ssl/s3_lib.c",
                           0xd08);
              FUN_004e76f0(unaff_x19);
              FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x3e0),"external/openssl/ssl/s3_lib.c",
                           0xd0a);
              FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x3f0),"external/openssl/ssl/s3_lib.c",
                           0xd0b);
              FUN_004d7200(unaff_x19);
              piVar21 = (int *)FUN_00400620(unaff_x19[0x15],0x410,"external/openssl/ssl/s3_lib.c",
                                            0xd10);
              unaff_x19[0x15] = 0;
            }
            return piVar21;
          case (ulong *)0x8e:
            if (!bVar14) goto LAB_004c11b0;
            if ((*(uint *)((long)unaff_x19 + 0x5cc) >> 0x16 & 1) == 0) {
              uVar36 = 0;
              piVar21 = (int *)unaff_x19[1];
              bVar44 = *(byte *)(*(long *)(piVar21 + 0x30) + 0x60);
              uVar32 = 1;
              uVar31 = uVar35;
              goto joined_r0x004c12a4;
            }
            if (((((*(uint *)((long)unaff_x19 + 0x5cc) >> 0x15 & 1) == 0) ||
                 (iVar17 = FUN_00407950(1), iVar17 < 1)) ||
                (lVar39 = FUN_00407970(1,0), *(int *)(lVar39 + 0x24) != 0x80000)) ||
               (iVar17 = FUN_00407950(uVar35), iVar17 < 1)) goto LAB_004c11b0;
            iVar19 = 0;
            goto LAB_004c14fc;
          case (ulong *)0x90:
            piVar21 = (int *)(&DAT_0417de78 + (0xa2 - ((ulong)piVar21 & 0xffffffff)) * 0x50);
            if (0xa2 < auVar43._0_4_) {
              piVar21 = (int *)0x0;
            }
            return piVar21;
          case (ulong *)0x92:
            FUN_004d7150(unaff_x19);
            FUN_00400420(unaff_x19[0x46],"external/openssl/ssl/ssl_lib.c",0xc51);
            FUN_00400420(unaff_x19[0x48],"external/openssl/ssl/ssl_lib.c",0xc52);
            FUN_00400420(unaff_x19[0x4b],"external/openssl/ssl/ssl_lib.c",0xc54);
            thunk_FUN_00400420(unaff_x19[0x40],"external/openssl/ssl/ssl_lib.c",0xc55);
            FUN_00400180(unaff_x19[0x6f]);
            piVar21 = (int *)FUN_00400420(unaff_x19,"external/openssl/ssl/ssl_lib.c",0xc59);
            return piVar21;
          case (ulong *)0x94:
          case (ulong *)0x9c:
          case (ulong *)0xa4:
            FUN_004078c0();
            piVar21 = *(int **)(unaff_x19[0x15] + 0x2a8);
switchD_004bf1a8_caseD_98:
            FUN_00400420(piVar21);
switchD_004bf1a8_caseD_a0:
            FUN_00400620(*(undefined8 *)(unaff_x19[0x15] + 0x2b8),
                         *(undefined8 *)(unaff_x19[0x15] + 0x2c0),uVar35,0xd1a);
            FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x2e8),uVar35,0xd1b);
            FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x2f0),uVar35,0xd1c);
            FUN_00423420(*(undefined8 *)(unaff_x19[0x15] + 0x240));
            FUN_00423420(*(undefined8 *)(unaff_x19[0x15] + 0x408));
            FUN_004e76f0(unaff_x19);
            FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x3e0),uVar35,0xd25);
            FUN_00400420(*(undefined8 *)(unaff_x19[0x15] + 0x3f0),uVar35,0xd26);
            memset((void *)unaff_x19[0x15],0,0x410);
            piVar21 = (int *)FUN_004c3060(unaff_x19);
            if ((int)piVar21 != 0) {
              *(undefined4 *)unaff_x19 = 0x300;
              FUN_00400420(unaff_x19[0xdb],"external/openssl/ssl/s3_lib.c",0xd31);
              piVar21 = (int *)0x1;
              unaff_x19[0xdc] = 0;
              unaff_x19[0xdb] = 0;
            }
            return piVar21;
          case (ulong *)0x96:
            FUN_004c99a0(unaff_x19,0x50,0x68,0x44,"external/openssl/ssl/record/rec_layer_s3.c",0x3e6
                        );
            puVar24 = auStack_7ffffffe + 0x8000099e;
            do {
              FUN_004cbb80(puVar24);
              lVar39 = lVar39 + -1;
              puVar24 = puVar24 + 0x30;
            } while (lVar39 != 0);
            return (int *)&DAT_ffffffff;
          case (ulong *)0x98:
            goto switchD_004bf1a8_caseD_98;
          case (ulong *)0x9a:
            FUN_004c99a0(unaff_x19);
            return (int *)&DAT_ffffffff;
          case (ulong *)0x9e:
            if (((&switchD_004bf1a8::switchdataD_03a26a08)[(long)puVar29] & 1) == 0) {
              if ((uVar16 & uVar27 == 0x74) == 0) {
                if (((uint)in_x12 & (uint)(uVar27 == 0x74)) == 0) {
                  iVar17 = (int)uVar31;
                  if (iVar17 == 0x329) {
                    if (uVar27 != 0x32b) {
                      return (int *)0x0;
                    }
                    puVar30 = &DAT_04182a28;
                  }
                  else if (iVar17 == 0x3d7) {
                    if (uVar27 != 0x3d4) {
                      return (int *)0x0;
                    }
                    puVar30 = &DAT_04182a00;
                  }
                  else {
                    if ((iVar17 != 0x3d6) || (uVar27 != 0x3d3)) {
                      return (int *)0x0;
                    }
                    puVar30 = &DAT_041829d8;
                  }
                }
                else {
                  puVar30 = &DAT_04182988;
                }
              }
              else {
                puVar30 = &DAT_04182960;
              }
            }
            else {
              puVar30 = &DAT_04182938;
            }
            uVar35 = *unaff_x19;
            uVar5 = *(undefined2 *)(puVar30 + 8);
            *unaff_x19 = uVar35 + 1;
            *(undefined2 *)((long)unaff_x19 + uVar35 * 2 + 8) = uVar5;
            if (uVar35 != 0) {
              uVar36 = 0;
              do {
                if (*(short *)((long)unaff_x19 + uVar36 * 2 + 8) ==
                    *(short *)((long)unaff_x19 + uVar35 * 2 + 8)) {
                  *unaff_x19 = uVar35;
                  return (int *)0x0;
                }
                uVar36 = uVar36 + 1;
              } while (uVar36 < uVar35);
            }
            return (int *)0x1;
          case (ulong *)0xa0:
          case (ulong *)0xa8:
            goto switchD_004bf1a8_caseD_a0;
          case (ulong *)0xac:
            iVar17 = FUN_00423920(piVar21,unaff_x19);
            if (iVar17 < 1) {
              FUN_00423420(piVar21);
            }
            else if (piVar21 != (int *)0x0) {
              uVar18 = FUN_00422d50(piVar21);
              iVar17 = FUN_004e2fc0(uVar35,0x40007,uVar18,0,piVar21);
              if (iVar17 == 0) {
                FUN_004014b0(0x14,0xd5,0x18a,"external/openssl/ssl/s3_lib.c",0xd66);
                FUN_00423420(piVar21);
                return (int *)0x0;
              }
              FUN_00423420(*(undefined8 *)(*(long *)(uVar35 + 0x488) + 8));
              *(int **)(*(long *)(uVar35 + 0x488) + 8) = piVar21;
              iVar17 = 1;
              goto switchD_004c00dc_caseD_5;
            }
            FUN_004014b0(0x14,0xd5,0x41,"external/openssl/ssl/s3_lib.c",0xd61);
            return (int *)0x0;
          case (ulong *)0xb0:
            iVar17 = *(int *)((long)puVar29 + 0x10c);
switchD_004c00dc_caseD_5:
            return (int *)(long)iVar17;
          case (ulong *)0xb4:
            iVar17 = FUN_004dc4d0();
            return (int *)(long)iVar17;
          case (ulong *)0xb8:
            uVar35 = FUN_004dc120(uVar35,(ulong)puVar38 & 0xffffffff);
            if (puVar38 == (ulong *)0xffffffffffffffff) {
              return (int *)(uVar35 & 0xffff);
            }
            piVar21 = (int *)FUN_004dbff0();
            if (piVar21 == (int *)0x0) {
              return (int *)0x0;
            }
            return (int *)(long)*piVar21;
          case (ulong *)0xbb:
            goto switchD_004bf1a8_caseD_bb;
          case (ulong *)0xbc:
          case (ulong *)0xbe:
          case (ulong *)0xbf:
          case (ulong *)0xc0:
          case (ulong *)0xc5:
          case (ulong *)0xc6:
          case (ulong *)0xc7:
          case (ulong *)0xc8:
          case (ulong *)0xc9:
          case (ulong *)0xca:
          case (ulong *)0xcb:
          case (ulong *)0xcc:
          case (ulong *)0xcd:
          case (ulong *)0xce:
          case (ulong *)0xcf:
          case (ulong *)0xd0:
          case (ulong *)0xd1:
          case (ulong *)0xd2:
          case (ulong *)0xd3:
          case (ulong *)0xd4:
          case (ulong *)0xd5:
          case (ulong *)0xd6:
          case (ulong *)0xd7:
          case (ulong *)0xd8:
          case (ulong *)0xd9:
          case (ulong *)0xda:
          case (ulong *)0xdb:
          case (ulong *)0xdc:
          case (ulong *)0xdd:
          case (ulong *)0xde:
          case (ulong *)0xdf:
          case (ulong *)0xe0:
          case (ulong *)0xe1:
          case (ulong *)0xe2:
          case (ulong *)0xe3:
          case (ulong *)0xe4:
          case (ulong *)0xe5:
          case (ulong *)0xe6:
          case (ulong *)0xe7:
          case (ulong *)0xe8:
          case (ulong *)0xe9:
          case (ulong *)0xea:
          case (ulong *)0xeb:
          case (ulong *)0xec:
          case (ulong *)0xed:
          case (ulong *)0xef:
          case (ulong *)0xf1:
          case (ulong *)0xf2:
          case (ulong *)0xf3:
          case (ulong *)0xf4:
          case (ulong *)0xf5:
          case (ulong *)0xf6:
          case (ulong *)0xf7:
          case (ulong *)0xff:
            iVar17 = FUN_00407950();
            if (iVar17 < 1) {
              return (int *)0x0;
            }
            iVar19 = 0;
            do {
              piVar21 = (int *)FUN_00407970(uVar35,iVar19);
              if (*piVar21 == (int)unaff_x19) {
                return piVar21;
              }
              iVar19 = iVar19 + 1;
            } while (iVar17 != iVar19);
            return (int *)0x0;
          case (ulong *)0xc2:
            goto switchD_004bf1a8_caseD_c2;
          case (ulong *)0xc3:
            goto switchD_004bf1a8_caseD_c3;
          case (ulong *)0xc4:
            goto switchD_004bf1a8_caseD_c4;
          case (ulong *)0xee:
            goto switchD_004bf1a8_caseD_ee;
          case (ulong *)0xf0:
            goto switchD_004bf1a8_caseD_f0;
          case (ulong *)0xf8:
            goto switchD_004bf1a8_caseD_f8;
          case (ulong *)0xf9:
            goto switchD_004bf1a8_caseD_f9;
          case (ulong *)0xfa:
            goto switchD_004bf1a8_caseD_fa;
          case (ulong *)0xfb:
            goto switchD_004bf1a8_caseD_fb;
          case (ulong *)0xfc:
            goto switchD_004bf1a8_caseD_fc;
          case (ulong *)0xfd:
            goto switchD_004bf1a8_caseD_fd;
          case (ulong *)0xfe:
            goto switchD_004bf1a8_caseD_fe;
          }
        }
        iVar17 = (int)unaff_x29;
        param_1 = puVar38;
        goto joined_r0x004bf45c;
      }
    }
    unaff_x29 = (undefined8 *)((long)unaff_x29 + 1);
  } while( true );
switchD_004bf1a8_caseD_c4:
  if (*(char *)(uVar35 + (long)unaff_x29) != '\0') goto LAB_004bf264;
  puVar29 = (ulong *)(ulong)(uint)unaff_x26[7];
switchD_004bf1a8_caseD_ee:
  uVar27 = (uint)puVar29;
  if (uVar27 == 0) {
LAB_004bf2cc:
    uVar32 = (ulong)local_70 & 0xffffffff;
    in_x12 = (ulong)local_70 >> 0x20;
switchD_004bf1a8_caseD_fa:
    in_x13 = (ulong *)(local_68 >> 0x20);
    uVar16 = (uint)(local_68 >> 0x20);
    uVar34 = unaff_x26[8];
    uVar28 = (uint)local_68;
  }
  else {
    if ((uint)local_78 == 0) {
switchD_004bf1a8_caseD_f9:
      local_78 = CONCAT44(local_78._4_4_,uVar27);
      goto LAB_004bf2cc;
    }
    uVar32 = (ulong)local_70 & 0xffffffff;
    in_x12 = (ulong)local_70 >> 0x20;
    bVar14 = (uVar27 & (uint)local_78) == 0;
    in_x13 = (ulong *)(local_68 >> 0x20);
    local_78 = CONCAT44(local_78._4_4_,uVar27 & (uint)local_78);
    uVar12 = (uint)local_68;
switchD_004bf1a8_caseD_7a:
    uVar33 = uVar12;
    if (bVar14) goto LAB_004bf4e8;
switchD_004bf1a8_caseD_f0:
    uVar16 = (uint)in_x13;
    uVar34 = unaff_x26[8];
    uVar28 = uVar33;
  }
  if (uVar34 == 0) {
switchD_004bf1a8_caseD_fb:
    uVar27 = unaff_x26[9];
    uVar10 = uVar28;
switchD_004bf1a8_caseD_41:
    uVar34 = uVar10;
    local_68._4_4_ = (uint)in_x13;
    if (uVar27 == 0) goto LAB_004bf308;
LAB_004bf2e8:
    local_68 = (long)in_x13 << 0x20;
    uVar16 = (uint)in_x12;
    if (uVar34 != 0) {
switchD_004bf1a8_caseD_fc:
      uVar34 = uVar27 & uVar34;
      if (uVar34 == 0) {
        local_68 = (ulong)local_68._4_4_ << 0x20;
        goto LAB_004bf51c;
      }
      goto LAB_004bf308;
    }
    uVar28 = unaff_x26[10];
    local_68._4_4_ = (uint)in_x13;
    local_68 = CONCAT44(local_68._4_4_,uVar27);
    if (uVar28 != 0) goto LAB_004bf314;
LAB_004bf334:
    uVar34 = unaff_x26[0xf];
    uVar16 = uVar34 & 0x1f;
    local_70 = (undefined8 *)(in_x12 << 0x20);
    if (uVar16 == 0) goto LAB_004bf374;
LAB_004bf344:
    if ((uVar32 & 0x1f) != 0) {
      uVar16 = (uVar34 | 0xffffffe0) & (uint)uVar32;
      uVar32 = (ulong)uVar16;
      if ((uVar16 & 0x1f) == 0) goto LAB_004bf4e0;
      goto LAB_004bf374;
    }
    uVar32 = (ulong)uVar16;
    if ((uVar34 >> 5 & 1) != 0) goto LAB_004bf378;
switchD_004bf1a8_caseD_7e:
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,(int)uVar32);
    if (*unaff_x26 == 0) goto LAB_004bf3d0;
LAB_004bf3b8:
    uVar35 = (ulong)(uint)unaff_x26[6];
    uVar31 = local_78 >> 0x20;
  }
  else {
    puVar29 = (ulong *)(ulong)uVar34;
    uVar9 = uVar28;
    uVar11 = uVar28;
    if (uVar16 != 0) {
switchD_004bf1a8_caseD_f8:
      uVar28 = uVar11;
      uVar16 = (uint)puVar29 & uVar16;
      in_x13 = (ulong *)(ulong)uVar16;
      if (uVar16 == 0) {
        local_68 = local_68 & 0xffffffff;
        goto LAB_004bf51c;
      }
      goto switchD_004bf1a8_caseD_fb;
    }
switchD_004bf1a8_caseD_fd:
    uVar34 = uVar9;
    uVar27 = unaff_x26[9];
    local_68._4_4_ = (uint)puVar29;
    in_x13 = puVar29;
    if (uVar27 != 0) goto LAB_004bf2e8;
LAB_004bf308:
    uVar16 = (uint)in_x12;
    uVar28 = unaff_x26[10];
    local_68 = CONCAT44(local_68._4_4_,uVar34);
    if (uVar28 == 0) goto LAB_004bf334;
LAB_004bf314:
    if (uVar16 != 0) {
      bVar14 = (uVar28 & uVar16) == 0;
      in_x12 = (ulong)(uVar28 & uVar16);
switchD_004bf1a8_caseD_fe:
      if (bVar14) {
        local_70 = (undefined8 *)((ulong)local_70 & 0xffffffff);
        goto LAB_004bf51c;
      }
      goto LAB_004bf334;
    }
    in_x12 = (ulong)uVar28;
    uVar34 = unaff_x26[0xf];
    uVar16 = uVar34 & 0x1f;
    local_70 = (undefined8 *)((ulong)uVar28 << 0x20);
    if (uVar16 != 0) goto LAB_004bf344;
LAB_004bf374:
    uVar16 = (uint)uVar32;
    if ((uVar34 >> 5 & 1) == 0) goto switchD_004bf1a8_caseD_7e;
LAB_004bf378:
    if ((uVar16 >> 5 & 1) != 0) {
      uVar16 = uVar16 & (uVar34 | 0xffffffdf);
      uVar32 = (ulong)uVar16;
      if ((uVar16 >> 5 & 1) == 0) {
LAB_004bf4e0:
        local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar16);
        goto LAB_004bf51c;
      }
      goto switchD_004bf1a8_caseD_7e;
    }
    local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar16 | uVar34 & 0x20);
    if (*unaff_x26 != 0) goto LAB_004bf3b8;
LAB_004bf3d0:
    uVar16 = unaff_x26[0xb];
    uVar31 = (ulong)uVar16;
    if (uVar16 == 0) {
      uVar31 = (ulong)local_78._4_4_;
      uVar35 = 0;
      iVar17 = (int)unaff_x27;
      puVar29 = local_80;
      uVar16 = local_78._4_4_;
      goto joined_r0x004bf400;
    }
    uVar35 = 0;
    if ((local_78._4_4_ != 0) && (local_78._4_4_ != uVar16)) goto LAB_004bf51c;
  }
  uVar16 = (uint)uVar31;
  iVar17 = (int)unaff_x27;
  puVar29 = local_80;
joined_r0x004bf400:
  local_80 = puVar29;
  if (iVar17 == 0x2b) goto switchD_004bf1a8_caseD_72;
  bVar14 = true;
  local_78 = CONCAT44(uVar16,(uint)local_78);
  iVar17 = (int)lVar39;
  uVar31 = local_78;
  puVar42 = local_70;
  goto joined_r0x004bf448;
LAB_004c14fc:
  lVar39 = FUN_00407970(uVar35,iVar19);
  if (*(int *)(lVar39 + 0x24) != 0x80000) goto code_r0x004c1514;
  uVar36 = FUN_00407210(0,iVar17);
  if (uVar36 != 0) {
    FUN_00407800(uVar36,lVar39);
    iVar19 = iVar19 + 1;
    if (iVar19 < iVar17) {
      do {
        lVar39 = FUN_00407970(uVar35,iVar19);
        if (*(int *)(lVar39 + 0x24) == 0x80000) {
          FUN_00407800(uVar36,lVar39);
        }
        iVar19 = iVar19 + 1;
      } while (iVar17 != iVar19);
    }
    iVar19 = 0;
    do {
      lVar39 = FUN_00407970(uVar35,iVar19);
      if (*(int *)(lVar39 + 0x24) != 0x80000) {
        FUN_00407800(uVar36,lVar39);
      }
      iVar19 = iVar19 + 1;
    } while (iVar17 != iVar19);
    uVar31 = 1;
    piVar21 = (int *)unaff_x19[1];
    bVar44 = *(byte *)(*(long *)(piVar21 + 0x30) + 0x60);
    uVar32 = uVar36;
joined_r0x004c12a4:
    uVar35 = uVar32;
    if ((bVar44 >> 3 & 1) == 0) goto LAB_004c11c8;
    goto LAB_004c12a8;
  }
  goto LAB_004c11b4;
code_r0x004c1514:
  iVar19 = iVar19 + 1;
  if (iVar17 == iVar19) goto LAB_004c11b0;
  goto LAB_004c14fc;
switchD_004bf1a8_caseD_82:
LAB_004bf58c:
  local_98 = (undefined8 *)((ulong)local_98 & 0xffffffff00000000);
LAB_004bf5b4:
  for (; puVar29 = (ulong *)(ulong)(byte)*unaff_x19,
      0x3b < (byte)*unaff_x19 || (1L << ((ulong)puVar29 & 0x3f) & uVar32) == 0;
      unaff_x19 = (ulong *)((long)unaff_x19 + 1)) {
  }
  goto LAB_004bf178;
LAB_004bf4e8:
  uVar35 = 0;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)unaff_x27 == 0x2b) {
    unaff_x19 = (ulong *)((long)unaff_x19 + 1);
  }
  iVar17 = (int)lVar39;
  goto joined_r0x004bf448;
switchD_004bf1a8_caseD_44:
  bVar44 = (byte)(unaff_x22 >> 0x20);
  if (bVar13) goto LAB_004cc2f4;
  iVar17 = FUN_004cd310(unaff_x19,&local_90);
  puVar38 = (ulong *)((ulong)puVar38 & 0xffffffff);
LAB_004cc3d4:
  if (1 < iVar17 + 3U) {
    return (int *)0x0;
  }
  do {
    lVar39 = FUN_004f5d10(*(undefined8 *)(unaff_x19[0x16] + 0x118));
    if (lVar39 != 0) {
      do {
        lVar41 = *(long *)(lVar39 + 8);
        uVar36 = unaff_x19[0x16];
        if (*(ushort *)(uVar36 + 0x110) <= *(ushort *)(lVar41 + 0x10)) {
          if (*(ushort *)(uVar36 + 0x110) == *(ushort *)(lVar41 + 0x10) &&
              *(long *)(lVar41 + 0x60) == 0) {
            uVar31 = *(ulong *)(lVar41 + 0x20);
            FUN_004f5d20(*(undefined8 *)(uVar36 + 0x118));
            iVar17 = FUN_004cd690(unaff_x19,lVar41);
            if (iVar17 == 0) {
              if (*(int *)(lVar41 + 0x28) != 0) {
                FUN_0041b550(*(undefined8 *)(lVar41 + 0x30));
                FUN_00444950(*(undefined8 *)(lVar41 + 0x38));
              }
              FUN_00400420(*(undefined8 *)(lVar41 + 0x58),uVar35,puVar38);
              FUN_00400420(*(undefined8 *)(lVar41 + 0x60),uVar35,0x68);
              FUN_00400420(lVar41,uVar35,(ulong)unaff_x28 & 0xffffffff);
              FUN_004f5be0(lVar39);
              iVar17 = 0;
              unaff_x19[0x13] = 0;
              goto LAB_004cc3d4;
            }
            if (*(size_t *)(lVar41 + 0x20) != 0) {
              memcpy((void *)(*(long *)(unaff_x19[0x11] + 8) + *(long *)(lVar41 + 0x18) + 0xc),
                     *(void **)(lVar41 + 0x58),*(size_t *)(lVar41 + 0x20));
            }
            if (*(int *)(lVar41 + 0x28) != 0) {
              FUN_0041b550(*(undefined8 *)(lVar41 + 0x30));
              FUN_00444950(*(undefined8 *)(lVar41 + 0x38));
            }
            FUN_00400420(*(undefined8 *)(lVar41 + 0x58),uVar35,puVar38);
            FUN_00400420(*(undefined8 *)(lVar41 + 0x60),uVar35,0x68);
            FUN_00400420(lVar41,uVar35,(ulong)unaff_x28 & 0xffffffff);
            FUN_004f5be0(lVar39);
            unaff_x19[0x13] = uVar31;
            goto LAB_004cc8f8;
          }
          break;
        }
        FUN_004f5d20(*(undefined8 *)(uVar36 + 0x118));
        if (lVar41 != 0) {
          if (*(int *)(lVar41 + 0x28) != 0) {
            FUN_0041b550(*(undefined8 *)(lVar41 + 0x30));
            FUN_00444950(*(undefined8 *)(lVar41 + 0x38));
          }
          FUN_00400420(*(undefined8 *)(lVar41 + 0x58),uVar35,puVar38);
          FUN_00400420(*(undefined8 *)(lVar41 + 0x60),uVar35,0x68);
          FUN_00400420(lVar41,uVar35,(ulong)unaff_x28 & 0xffffffff);
        }
        FUN_004f5be0(lVar39);
        lVar39 = FUN_004f5d10(*(undefined8 *)(unaff_x19[0x16] + 0x118));
      } while (lVar39 != 0);
    }
    iVar17 = (**(code **)(unaff_x19[1] + 0x68))
                       (unaff_x19,0x16,(long)register0x00000008 + -0x30,
                        (long)register0x00000008 + -0x2c,0xc,0,&local_98);
    if (iVar17 < 1) {
LAB_004cc3e4:
      iVar17 = 0;
      *(undefined4 *)(unaff_x19 + 5) = 3;
      goto LAB_004cc3d4;
    }
    if ((int)unaff_x22 == 0x14) {
      if (bVar44 == 1) {
        memcpy(*(void **)(unaff_x19[0x11] + 8),(void *)((long)register0x00000008 + -0x2c),
               (size_t)local_98);
        unaff_x19[0x13] = (long)local_98 - 1U;
        unaff_x19[0x12] = *(long *)(unaff_x19[0x11] + 8) + 1;
        uVar35 = unaff_x19[0x15];
        *(undefined4 *)(uVar35 + 0x230) = 0x101;
        *(ulong *)(uVar35 + 0x228) = (long)local_98 - 1U;
        goto LAB_004cc8f8;
      }
      uVar25 = 10;
      uVar26 = 0x304;
      puVar29 = puVar38;
      goto LAB_004cc550;
    }
    if (local_98 != (undefined8 *)0xc) {
      uVar25 = 10;
      uVar26 = 0x314;
      puVar29 = (ulong *)0xf4;
      goto LAB_004cc550;
    }
    puVar42 = (undefined8 *)
              ((unaff_x22 >> 0x28 & 0xff) << 0x10 | (unaff_x22 >> 0x30 & 0xff) << 8 |
              unaff_x22 >> 0x38);
    uVar36 = ((ulong)unaff_x21 >> 0x10 & 0xff) << 0x10 | ((ulong)unaff_x21 >> 0x18 & 0xff) << 8 |
             (ulong)unaff_x21 >> 0x20 & 0xff;
    uVar45 = (undefined1)((ulong)unaff_x21 >> 8);
    uVar4 = CONCAT11((char)unaff_x21,uVar45);
    uVar16 = (uint)uVar4;
    unaff_x29 = (undefined8 *)
                (((ulong)unaff_x21 >> 0x28 & 0xff) << 0x10 | ((ulong)unaff_x21 >> 0x30 & 0xff) << 8
                | (ulong)unaff_x21 >> 0x38);
    local_90 = (undefined8 *)(ulong)bVar44;
    local_68 = 0;
    local_80 = (ulong *)(ulong)uVar4;
    local_88 = puVar42;
    local_78 = uVar36;
    local_70 = unaff_x29;
    puVar23 = (undefined8 *)FUN_004c8120(param_3);
    if (puVar23 < unaff_x29) {
      FUN_004c99a0(unaff_x19,0x2f,0x172,0x10f,uVar35,0x325);
      iVar17 = 0;
      unaff_x19[0x13] = 0;
      goto LAB_004cc3d4;
    }
    puVar29 = (ulong *)unaff_x19[0x16];
    if (uVar16 != (ushort)puVar29[0x22]) {
      if (puVar42 < (undefined8 *)((long)unaff_x29 + uVar36)) {
        iVar17 = 0;
        goto LAB_004cc3d4;
      }
      uStack00000000000000e8 = ((ulong)unaff_x21 & 0xff) << 0x30;
      uStack00000000000000e8 = CONCAT17(uVar45,(undefined7)uStack00000000000000e8);
      lVar39 = FUN_004f5d40(puVar29[0x23],&uStack00000000000000e8);
      uVar4 = *(ushort *)(unaff_x19[0x16] + 0x110);
      if (((uVar16 <= uVar4) || (unaff_x29 == puVar42 && lVar39 != 0)) ||
         ((uVar4 + 10 < uVar16 || ((bVar44 == 0x14 && (uVar4 == 0)))))) break;
      if (unaff_x29 != puVar42) {
        iVar17 = FUN_004cd310(unaff_x19,&local_90);
        goto LAB_004cc3d4;
      }
      puVar23 = (undefined8 *)unaff_x19[0xbc];
      if (puVar23 < (undefined8 *)0x454d) {
        puVar23 = (undefined8 *)0x454c;
      }
      if (puVar23 < puVar42) {
        iVar17 = 0;
        goto LAB_004cc3d4;
      }
      puVar23 = (undefined8 *)FUN_00400260(0x68,uVar35,0x3e);
      if (puVar23 == (undefined8 *)0x0) {
        FUN_004014b0(0x14,0x26f,0x41,uVar35,0x3f);
        iVar17 = 0;
        goto LAB_004cc3d4;
      }
      if (puVar42 == (undefined8 *)0x0) {
        puVar23[0xb] = 0;
        puVar23[0xc] = 0;
        puVar23[1] = local_88;
        *puVar23 = local_90;
        puVar23[3] = local_78;
        puVar23[2] = local_80;
        puVar23[10] = 0;
        puVar23[7] = 0;
        puVar23[6] = 0;
        puVar23[9] = 0;
        puVar23[8] = 0;
        puVar23[5] = local_68;
        puVar23[4] = local_70;
LAB_004cc854:
        lVar39 = FUN_004f5b70(&uStack00000000000000e8,puVar23);
        if (lVar39 != 0) {
          lVar39 = FUN_004f5c60(*(undefined8 *)(unaff_x19[0x16] + 0x118),lVar39);
          if (lVar39 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: item != NULL",
                         "external/openssl/ssl/statem/statem_dtls.c",0x2d5);
          }
          goto LAB_004cc610;
        }
LAB_004cc87c:
        if (*(int *)(puVar23 + 5) != 0) {
          FUN_0041b550(puVar23[6]);
          FUN_00444950(puVar23[7]);
        }
        FUN_00400420(puVar23[0xb],uVar35,puVar38);
        FUN_00400420(puVar23[0xc],uVar35,0x68);
        uVar36 = (ulong)unaff_x28 & 0xffffffff;
      }
      else {
        lVar39 = FUN_00400260(puVar42,uVar35,0x44);
        if (lVar39 != 0) {
          puVar23[0xb] = lVar39;
          puVar23[0xc] = 0;
          puVar23[1] = local_88;
          *puVar23 = local_90;
          puVar23[3] = local_78;
          puVar23[2] = local_80;
          puVar23[10] = 0;
          puVar23[7] = 0;
          puVar23[6] = 0;
          puVar23[9] = 0;
          puVar23[8] = 0;
          puVar23[5] = local_68;
          puVar23[4] = local_70;
          iVar17 = (**(code **)(unaff_x19[1] + 0x68))
                             (unaff_x19,0x16,0,lVar39,puVar42,0,&uStack00000000000000e0);
          if ((0 < iVar17) && (uStack00000000000000e0 == puVar42)) goto LAB_004cc854;
          goto LAB_004cc87c;
        }
        FUN_004014b0(0x14,0x26f,0x41,uVar35,0x45);
        uVar36 = 0x46;
      }
      FUN_00400420(puVar23,uVar35,uVar36);
      goto LAB_004cc8ec;
    }
    if (unaff_x29 != (undefined8 *)0x0) {
      bVar13 = puVar42 <= unaff_x29;
      goto switchD_004bf1a8_caseD_44;
    }
LAB_004cc2f4:
    puVar38 = (ulong *)((ulong)puVar38 & 0xffffffff);
    if (((((int)unaff_x19[7] != 0) || (puVar29[0x35] != 0)) ||
        (*(int *)((long)unaff_x19 + 0x5c) == 1)) || (bVar44 != 0)) {
      iVar17 = FUN_004cd690(unaff_x19,&local_90);
      if (iVar17 == 0) goto LAB_004cc554;
      if (unaff_x29 == (undefined8 *)0x0) {
        local_98 = (undefined8 *)0x0;
      }
      else {
        iVar17 = (**(code **)(unaff_x19[1] + 0x68))
                           (unaff_x19,0x16,0,*(long *)(unaff_x19[0x11] + 8) + uVar36 + 0xc,unaff_x29
                            ,0,&local_98);
        if (iVar17 < 1) goto LAB_004cc3e4;
        if (local_98 != unaff_x29) {
          uVar25 = 0x2f;
          puVar29 = (ulong *)0x10f;
          uVar26 = 0x372;
          goto LAB_004cc550;
        }
      }
      unaff_x19[0x13] = (ulong)unaff_x29;
LAB_004cc8f8:
      iVar17 = *(int *)(unaff_x19[0x15] + 0x230);
      *param_2 = iVar17;
      puVar24 = *(undefined1 **)(unaff_x19[0x11] + 8);
      *param_5 = unaff_x19[0x13];
      if (iVar17 == 0x101) {
        if ((code *)unaff_x19[0x17] != (code *)0x0) {
          (*(code *)unaff_x19[0x17])(0,(int)*unaff_x19,0x14,puVar24,1,unaff_x19,unaff_x19[0x18]);
          return (int *)0x1;
        }
      }
      else {
        lVar39 = *(long *)(lStack_b8 + 0x198);
        *puVar24 = *(undefined1 *)(lStack_b8 + 400);
        uVar45 = (undefined1)((ulong)lVar39 >> 8);
        puVar24[2] = uVar45;
        uVar6 = (undefined1)((ulong)lVar39 >> 0x10);
        puVar24[1] = uVar6;
        puVar24[3] = (char)lVar39;
        puVar24[4] = *(undefined1 *)(lStack_b8 + 0x1a1);
        puVar24[5] = *(undefined1 *)(lStack_b8 + 0x1a0);
        *(undefined2 *)(puVar24 + 6) = 0;
        puVar24[8] = 0;
        puVar24[9] = uVar6;
        puVar24[10] = uVar45;
        puVar24[0xb] = (char)lVar39;
        bVar14 = (int)*unaff_x19 != 0x100;
        if (bVar14) {
          lVar39 = lVar39 + 0xc;
        }
        puVar3 = puVar24 + 0xc;
        if (bVar14) {
          puVar3 = puVar24;
        }
        if ((*param_2 == 0x14) && (iVar17 = FUN_004d9a60(unaff_x19), iVar17 == 0)) {
          return (int *)0x0;
        }
        iVar17 = FUN_004e7730(unaff_x19,puVar3,lVar39);
        if (iVar17 == 0) {
          return (int *)0x0;
        }
        if ((code *)unaff_x19[0x17] != (code *)0x0) {
          (*(code *)unaff_x19[0x17])(0,(int)*unaff_x19,0x16,puVar3,lVar39,unaff_x19,unaff_x19[0x18])
          ;
        }
        local_c0[10] = 0;
        local_c0[7] = 0;
        local_c0[6] = 0;
        local_c0[9] = 0;
        local_c0[8] = 0;
        local_c0[1] = 0;
        *local_c0 = 0;
        local_c0[3] = 0;
        local_c0[2] = 0;
        local_c0[5] = 0;
        local_c0[4] = 0;
        *(short *)(unaff_x19[0x16] + 0x110) = *(short *)(unaff_x19[0x16] + 0x110) + 1;
        unaff_x19[0x12] = *(long *)(unaff_x19[0x11] + 8) + 0xc;
      }
      return (int *)0x1;
    }
    if (((char)(unaff_x22 >> 0x30) != '\0' || (char)(unaff_x22 >> 0x28) != '\0') ||
        (char)(unaff_x22 >> 0x38) != '\0') goto LAB_004cc4f0;
    if ((code *)unaff_x19[0x17] != (code *)0x0) {
      (*(code *)unaff_x19[0x17])
                (0,(int)*unaff_x19,0x16,(long)register0x00000008 + -0x2c,0xc,unaff_x19,
                 unaff_x19[0x18]);
    }
    unaff_x19[0x13] = 0;
  } while( true );
joined_r0x004cc5c8:
  if (unaff_x29 == (undefined8 *)0x0) goto LAB_004cc610;
  puVar23 = unaff_x29;
  if ((undefined8 *)0xff < unaff_x29) {
    puVar23 = (undefined8 *)&DAT_00000100;
  }
  iVar17 = (**(code **)(unaff_x19[1] + 0x68))
                     (unaff_x19,0x16,0,(long)register0x00000008 + -0x20,puVar23,0,
                      &uStack00000000000000e0);
  if (iVar17 < 1) goto LAB_004cc8ec;
  unaff_x29 = (undefined8 *)((long)unaff_x29 - (long)uStack00000000000000e0);
  goto joined_r0x004cc5c8;
LAB_004cc610:
  iVar17 = -3;
  goto LAB_004cc3d4;
LAB_004cc8ec:
  iVar17 = 0;
  goto LAB_004cc3d4;
LAB_004cc4f0:
  uVar25 = 10;
  puVar29 = (ulong *)0xf4;
  uVar26 = 0x34e;
LAB_004cc550:
  FUN_004c99a0(unaff_x19,uVar25,0x172,puVar29,uVar35,uVar26);
LAB_004cc554:
  iVar17 = 0;
  unaff_x19[0x13] = 0;
  goto LAB_004cc3d4;
LAB_004c11b0:
  uVar36 = 0;
LAB_004c11b4:
  uVar31 = 1;
  piVar21 = (int *)unaff_x19[1];
  if ((*(byte *)(*(long *)(piVar21 + 0x30) + 0x60) >> 3 & 1) == 0) {
LAB_004c11c8:
    if ((*piVar21 < 0x304) || (*piVar21 == 0x10000)) goto LAB_004c12a8;
    if ((((((unaff_x19[0xb0] != 0) &&
           ((uVar32 = unaff_x19[0x91], *(long *)(uVar32 + 0x20) == 0 ||
            (*(long *)(uVar32 + 0x28) == 0)))) &&
          ((*(long *)(uVar32 + 0x48) == 0 || (*(long *)(uVar32 + 0x50) == 0)))) &&
         ((((*(long *)(uVar32 + 0x70) == 0 || (*(long *)(uVar32 + 0x78) == 0)) &&
           ((*(long *)(uVar32 + 0x98) == 0 || (*(long *)(uVar32 + 0xa0) == 0)))) &&
          ((*(long *)(uVar32 + 0xc0) == 0 || (*(long *)(uVar32 + 200) == 0)))))) &&
        ((*(long *)(uVar32 + 0xe8) == 0 || (*(long *)(uVar32 + 0xf0) == 0)))) &&
       ((((*(long *)(uVar32 + 0x110) == 0 || (*(long *)(uVar32 + 0x118) == 0)) &&
         ((*(long *)(uVar32 + 0x138) == 0 || (*(long *)(uVar32 + 0x140) == 0)))) &&
        ((*(long *)(uVar32 + 0x160) == 0 || (*(long *)(uVar32 + 0x168) == 0)))))) {
      bVar14 = true;
      goto LAB_004c12bc;
    }
  }
  else {
LAB_004c12a8:
    FUN_004dff80(unaff_x19);
    FUN_004c48e0(unaff_x19);
  }
  bVar14 = false;
LAB_004c12bc:
  iVar17 = FUN_00407950(uVar35);
  if (iVar17 < 1) {
    piVar21 = (int *)0x0;
  }
  else {
    piVar40 = (int *)0x0;
    uVar37 = 0;
    uVar32 = 0;
    iVar17 = 0;
    do {
      lVar39 = FUN_00407970(uVar35,iVar17);
      iVar19 = (int)*unaff_x19;
      if ((*(byte *)(*(long *)((int *)unaff_x19[1] + 0x30) + 0x60) >> 3 & 1) == 0) {
        if ((*(int *)(lVar39 + 0x2c) <= iVar19) && (iVar19 <= *(int *)(lVar39 + 0x30))) {
          iVar19 = *(int *)unaff_x19[1];
          if ((iVar19 < 0x304) || (iVar19 == 0x10000)) goto LAB_004c1384;
          goto LAB_004c13d0;
        }
      }
      else {
        iVar20 = 0xff00;
        if (iVar19 != 0x100) {
          iVar20 = iVar19;
        }
        iVar19 = 0xff00;
        if (*(int *)(lVar39 + 0x34) != 0x100) {
          iVar19 = *(int *)(lVar39 + 0x34);
        }
        if (iVar20 <= iVar19) {
          iVar19 = 0xff00;
          if (*(int *)(lVar39 + 0x38) != 0x100) {
            iVar19 = *(int *)(lVar39 + 0x38);
          }
          if (iVar19 <= iVar20) {
LAB_004c1384:
            uVar16 = *(uint *)(lVar39 + 0x1c);
            uVar32 = (ulong)uVar16;
            uVar37 = (ulong)*(uint *)(lVar39 + 0x20);
            if (((uVar16 & 0x1c8) == 0) || (unaff_x19[0xb0] != 0)) {
              bVar13 = ((unaff_x19[0xfd] & 0x20 | (ulong)*(uint *)(unaff_x19[0x15] + 0x334)) &
                       uVar32) != 0;
              bVar15 = (((ulong)*(uint *)(unaff_x19[0x15] + 0x338) | (unaff_x19[0xfd] & 0x20) << 1)
                       & uVar37) != 0;
              if ((uVar16 >> 2 & 1) == 0) {
                if (bVar13 && bVar15) goto LAB_004c13d0;
              }
              else if ((bVar13 && bVar15) &&
                      (iVar19 = FUN_004dc830(unaff_x19,*(undefined4 *)(lVar39 + 0x18)), iVar19 != 0)
                      ) {
LAB_004c13d0:
                iVar19 = FUN_00407710(uVar31,lVar39);
                if (-1 < iVar19) {
                  iVar20 = FUN_004e2fc0(unaff_x19,0x10002,*(undefined4 *)(lVar39 + 0x44),0,lVar39);
                  if (iVar20 != 0) {
                    if (((((uint)uVar32 >> 2 & 1) == 0) || (((uint)uVar37 >> 3 & 1) == 0)) ||
                       (*(char *)(unaff_x19[0x15] + 0x404) == '\0')) {
                      piVar21 = (int *)FUN_00407970(uVar31,iVar19);
                      if (!bVar14) break;
                      piVar22 = (int *)FUN_004bda40(piVar21[0x10]);
                      piVar2 = piVar21;
                      if (piVar22 != local_c8 && piVar40 != (int *)0x0) {
                        piVar2 = piVar40;
                      }
                      piVar40 = piVar2;
                      if (piVar22 == local_c8) break;
                    }
                    else if (piVar40 == (int *)0x0) {
                      piVar40 = (int *)FUN_00407970(uVar31,iVar19);
                    }
                  }
                }
              }
            }
          }
        }
      }
      iVar17 = iVar17 + 1;
      iVar19 = FUN_00407950(uVar35);
      piVar21 = piVar40;
    } while (iVar17 < iVar19);
  }
  FUN_00407010(uVar36);
  return piVar21;
}


