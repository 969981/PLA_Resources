/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050a1b0; name: FUN_0050a1b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0050a1b0(undefined4 *param_1,byte *param_2,long param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  byte *pbVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  char cVar6;
  uint5 uVar7;
  uint6 uVar8;
  undefined1 *puVar9;
  ushort uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long lVar16;
  size_t sVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong *puVar23;
  uint uVar24;
  ulong *puVar25;
  long lVar26;
  ulong uVar27;
  ulong *puVar28;
  undefined1 *local_1f8;
  long local_1f0;
  undefined1 auStack_1e8 [32];
  byte local_1c8 [16];
  ulong local_1b8;
  undefined1 auStack_1b0 [32];
  byte *local_190;
  byte *local_188;
  long local_180;
  undefined8 local_178;
  ushort local_170;
  ulong *local_168;
  ulong *local_160;
  ulong *local_158;
  char local_150;
  undefined4 local_148 [2];
  ulong local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  long lStack_108;
  undefined8 uStack_100;
  long local_f8;
  long local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 *local_d0;
  ulong uStack_c8;
  ulong local_c0;
  undefined1 *local_b8;
  char *local_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  local_148[0] = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined4 **)(param_1 + 8) = param_1 + 10;
  local_170 = 0;
  local_158 = (ulong *)0x0;
  local_150 = '\0';
  local_178 = 3;
  puStack_128 = &local_120;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  local_140 = 0;
  uStack_138 = 0;
  local_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_168 = (ulong *)0x0;
  local_160 = (ulong *)0x0;
  uStack_c8 = 0;
  local_d0 = (undefined1 *)0x0;
  local_b8 = (undefined1 *)0x0;
  local_c0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  local_190 = param_2;
  local_188 = param_2;
  local_180 = param_3;
  if (param_3 != 0) {
    bVar4 = *param_2;
    local_188 = param_2 + 1;
    if (bVar4 != 0) {
      puVar1 = (undefined1 *)((long)&local_a8 + 1);
LAB_0050a280:
      uVar27 = local_178;
      local_180 = param_3 + -1;
      uVar21 = (ulong)bVar4;
      uVar18 = (uint)bVar4;
      uVar5 = (uint)local_178;
      uVar15 = local_178;
      if (uVar18 < 0x5c) {
        if (uVar18 < 0x2d) {
          if ((1L << (uVar21 & 0x3f) & 0x100002600U) == 0) {
            if (uVar21 == 0x2c) goto LAB_0050a37c;
            goto LAB_0050a328;
          }
          if ((uint)local_178 < 0x1c) {
            uVar5 = 1 << (ulong)((uint)local_178 & 0x1f);
            if ((uVar5 & 0xc00000d) != 0) goto switchD_0050a350_default;
            if ((uVar5 & 0x9c00) != 0) {
                    /* try { // try from 0050a2d8 to 0050a4e3 has its CatchHandler @ 0050b388 */
              uVar12 = FUN_0050b92c(&local_190);
              puVar9 = local_b8;
              uVar15 = local_c0;
              local_b0 = (char *)CONCAT44(local_b0._4_4_,3);
              local_a8 = 0;
              uStack_a0 = 0;
              local_98 = (undefined1 *)0x0;
              if ((uStack_c8 & 1) == 0) {
                local_98 = local_b8;
                uStack_a0 = local_c0;
                local_a8 = uStack_c8;
              }
              else {
                if (0xffffffffffffffef < local_c0) {
                    /* try { // try from 0050b250 to 0050b27f has its CatchHandler @ 0050b384 */
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (local_c0 < 0x17) {
                  local_a8 = (ulong)(byte)((int)local_c0 << 1);
                  puVar13 = puVar1;
                  if (local_c0 != 0) goto LAB_0050a578;
                }
                else {
                  uVar27 = local_c0 + 0x10 & 0xfffffffffffffff0;
                  puVar13 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar27);
                  local_a8 = uVar27 | 1;
                  uStack_a0 = uVar15;
                  local_98 = puVar13;
LAB_0050a578:
                  memcpy(puVar13,puVar9,uVar15);
                }
                puVar13[uVar15] = 0;
              }
              local_88 = 0;
              uStack_80 = 0;
              local_68 = 0;
              local_78 = 0;
              local_70 = 0;
                    /* try { // try from 0050a5a4 to 0050a5af has its CatchHandler @ 0050b2c0 */
              local_90 = &local_88;
              FUN_0050bf34(uVar12,&local_b0);
              lVar16 = local_78;
              lVar26 = local_70;
              if (local_78 != 0) {
                while (lVar26 != lVar16) {
                  FUN_0050beac(lVar26 + -0x50);
                  lVar26 = lVar26 + -0x50;
                }
                local_70 = lVar16;
                FUN_002e2ea0(PTR_LAB_04373088,local_78);
              }
              FUN_003e9f80(&local_90,local_88);
              if ((local_a8 & 1) != 0) {
                FUN_002e2ea0(PTR_LAB_04373088,local_98);
              }
              goto joined_r0x0050ab30;
            }
            if ((((uVar5 & 0x12) != 0) && (uVar18 == 0x20)) && (local_170 == 0)) {
              FUN_002e6a9c(&uStack_c8,0x20);
              uVar15 = local_178;
              goto switchD_0050a350_default;
            }
          }
          goto switchD_0050a350_caseD_1b;
        }
LAB_0050a328:
        uVar22 = local_178 & 0xffffffff;
        uVar10 = local_178._6_2_;
        uVar7 = (uint5)local_178;
        local_178._0_6_ = (uint6)(uint5)local_178;
        uVar8 = (uint6)local_178;
        uVar15 = local_178;
        uVar19 = local_178._4_4_;
        local_178._4_1_ = SUB81(uVar27,4);
        cVar6 = local_178._4_1_;
        local_178 = uVar15;
        switch(uVar22) {
        case 0:
          if (uVar18 == 0x22) {
            local_178 = CONCAT44(uVar19,1);
            goto joined_r0x0050a660;
          }
          goto switchD_0050a350_caseD_1b;
        case 1:
          if (local_170 == 0) {
            if (uVar18 == 0x22) {
              local_178 = CONCAT44(uVar19,2);
              if ((local_e0 & 1) != 0) {
                *local_d0 = 0;
                uStack_d8 = 0;
                if ((local_e0 & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,local_d0);
                }
              }
              local_d0 = local_b8;
              uStack_d8 = local_c0;
              local_e0 = uStack_c8;
LAB_0050ac9c:
              local_c0 = 0;
              local_b8 = (undefined1 *)0x0;
              uStack_c8 = 0;
joined_r0x0050a660:
              if (local_180 != 0) goto LAB_0050aa58;
              goto LAB_0050ad88;
            }
            if (0x1f < uVar18) {
              FUN_002e6a9c(&uStack_c8,uVar21);
              uVar15 = local_178;
              goto switchD_0050a350_default;
            }
          }
          goto switchD_0050a350_caseD_1b;
        case 2:
          if (uVar18 != 0x3a) goto switchD_0050a350_caseD_1b;
LAB_0050aa48:
          uVar19 = 3;
          break;
        case 3:
          switch(uVar18) {
          case 0x22:
switchD_0050a988_caseD_22:
            uVar19 = 4;
            break;
          default:
            goto switchD_0050a350_caseD_1b;
          case 0x2d:
          case 0x31:
          case 0x32:
          case 0x33:
          case 0x34:
          case 0x35:
          case 0x36:
          case 0x37:
          case 0x38:
          case 0x39:
            FUN_002e6a9c(&uStack_c8,uVar21);
            uVar19 = 10;
            break;
          case 0x30:
            FUN_002e6a9c(&uStack_c8,0x30);
            uVar19 = 0xc;
            break;
          case 0x5b:
            local_178._0_6_ = CONCAT15(1,uVar7);
            local_178 = CONCAT26(uVar10,(uint6)local_178);
            uVar27 = FUN_0050b4ac(&local_190,6);
            uVar15 = local_178;
            if ((uVar27 & 1) != 0) goto switchD_0050a350_default;
            goto switchD_0050a350_caseD_1b;
          case 0x66:
            uVar19 = 0x13;
            break;
          case 0x6e:
            uVar19 = 0x17;
            break;
          case 0x74:
            uVar19 = 0x10;
            break;
          case 0x7b:
            local_178._0_6_ = CONCAT15(1,uVar7);
            local_178 = CONCAT26(uVar10,(uint6)local_178);
            uVar27 = FUN_0050b4ac(&local_190,5);
            uVar15 = local_178;
            if ((uVar27 & 1) != 0) {
LAB_0050a3e0:
              local_178 = local_178 & 0xffffffff00000000;
              goto joined_r0x0050a3e8;
            }
            goto switchD_0050a350_caseD_1b;
          }
          break;
        case 4:
          if (local_170 == 0) {
            if (uVar18 == 0x22) {
              local_178 = CONCAT44(uVar19,0x1a);
              puVar14 = (undefined4 *)FUN_0050b92c(&local_190);
              *puVar14 = 4;
              puVar25 = (ulong *)(puVar14 + 2);
              if ((*puVar25 & 1) == 0) {
                *(undefined2 *)puVar25 = 0;
              }
              else {
                **(undefined1 **)(puVar14 + 6) = 0;
                *(undefined8 *)(puVar14 + 4) = 0;
                if ((*(byte *)(puVar14 + 2) & 1) != 0) {
                  FUN_002e2ea0(PTR_LAB_04373088,*(undefined8 *)(puVar14 + 6));
                  *(undefined8 *)(puVar14 + 2) = 0;
                }
              }
              *(undefined1 **)(puVar14 + 6) = local_b8;
              *(ulong *)(puVar14 + 4) = local_c0;
              *puVar25 = uStack_c8;
              goto LAB_0050ac9c;
            }
            if (0x1f < uVar18) {
              FUN_002e6a9c(&uStack_c8,uVar21);
              uVar15 = local_178;
              goto switchD_0050a350_default;
            }
          }
          goto switchD_0050a350_caseD_1b;
        case 5:
          uVar20 = 4;
          if (local_178._4_1_ != '\0') {
            uVar20 = 1;
          }
          local_178 = CONCAT44(uVar19,uVar20);
          uVar15 = local_178;
          if ((uVar18 != 0x75) && (local_170 != 0)) goto switchD_0050a350_caseD_1b;
          switch(uVar18) {
          case 0x62:
            FUN_002e6a9c(&uStack_c8,8);
            uVar15 = local_178;
            break;
          case 99:
          case 100:
          case 0x65:
          case 0x67:
          case 0x68:
          case 0x69:
          case 0x6a:
          case 0x6b:
          case 0x6c:
          case 0x6d:
          case 0x6f:
          case 0x70:
          case 0x71:
          case 0x73:
            goto switchD_0050a350_caseD_1b;
          case 0x66:
            FUN_002e6a9c(&uStack_c8,0xc);
            uVar15 = local_178;
            break;
          case 0x6e:
            FUN_002e6a9c(&uStack_c8,10);
            uVar15 = local_178;
            break;
          case 0x72:
            FUN_002e6a9c(&uStack_c8,0xd);
            uVar15 = local_178;
            break;
          case 0x74:
            FUN_002e6a9c(&uStack_c8,9);
            uVar15 = local_178;
            break;
          case 0x75:
            local_178 = CONCAT44(uVar19,6);
            local_178 = local_178 & 0xffffffffffff;
            goto joined_r0x0050a660;
          default:
            if ((uVar18 != 0x2f) && (uVar18 != 0x22)) goto switchD_0050a350_caseD_1b;
            FUN_002e6a9c(&uStack_c8,uVar21);
            uVar15 = local_178;
          }
          goto switchD_0050a350_default;
        case 6:
        case 7:
        case 8:
        case 9:
          uVar24 = uVar18 - 0x30;
          if (9 < uVar24) {
            if (uVar18 - 0x41 < 6) {
              uVar24 = uVar18 - 0x37;
            }
            else {
              if (5 < uVar18 - 0x61) goto switchD_0050a350_caseD_1b;
              uVar24 = uVar18 - 0x57;
            }
          }
          uVar24 = uVar24 | (uint)uVar10 << 4;
          local_178 = CONCAT26((ushort)uVar24,uVar8);
          switch(uVar5) {
          case 6:
            uVar19 = 7;
            break;
          case 7:
            uVar19 = 8;
            break;
          case 8:
            uVar19 = 9;
            break;
          case 9:
            uVar15 = local_178;
            if ((uVar24 & 0xfc00) == 0xdc00) {
              if (local_170 == 0) goto switchD_0050a350_caseD_1b;
              FUN_0050b848(&local_190,(uVar24 & 0xffff) + (uint)local_170 * 0x400 + -0x35fdc00);
              local_170 = 0;
              uVar10 = local_170;
              cVar6 = local_178._4_1_;
            }
            else if ((uVar24 & 0xfc00) == 0xd800) {
              uVar10 = (ushort)uVar24;
              if (local_170 != 0) goto switchD_0050a350_caseD_1b;
            }
            else {
              if (local_170 != 0) goto switchD_0050a350_caseD_1b;
              FUN_0050b848(&local_190,uVar24 & 0xffff);
              uVar10 = local_170;
              cVar6 = local_178._4_1_;
            }
            local_170 = uVar10;
            if (cVar6 == '\0') goto switchD_0050a988_caseD_22;
            uVar19 = 1;
            break;
          default:
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x26f,2,
                         "Should never reach here.");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          break;
        case 10:
          FUN_002e6a9c(&uStack_c8,uVar21);
          uVar15 = local_178;
          if (9 < uVar18 - 0x30) {
            if (uVar18 != 0x2e) goto LAB_0050a8e4;
            goto LAB_0050a9b4;
          }
          goto switchD_0050a350_default;
        case 0xb:
          FUN_002e6a9c(&uStack_c8,uVar21);
          uVar15 = local_178;
          if (uVar18 - 0x30 < 10) goto switchD_0050a350_default;
LAB_0050a8e4:
          if ((uVar18 == 0x65) || (uVar15 = local_178, uVar18 == 0x45)) {
            uVar19 = 0xe;
            break;
          }
          goto switchD_0050a350_caseD_1b;
        case 0xc:
          if (uVar18 != 0x2e) goto switchD_0050a350_caseD_1b;
          FUN_002e6a9c(&uStack_c8,0x2e);
LAB_0050a9b4:
          uVar19 = 0xd;
          break;
        case 0xd:
          FUN_002e6a9c(&uStack_c8,uVar21);
          uVar15 = local_178;
          if (9 < uVar18 - 0x30) goto switchD_0050a350_caseD_1b;
          uVar19 = 0xb;
          break;
        case 0xe:
          FUN_002e6a9c(&uStack_c8,uVar21);
          if (((9 < uVar18 - 0x30) && (uVar18 != 0x2d)) && (uVar15 = local_178, uVar18 != 0x2b))
          goto switchD_0050a350_caseD_1b;
          uVar19 = 0xf;
          break;
        case 0xf:
          FUN_002e6a9c(&uStack_c8,uVar21);
          uVar15 = local_178;
          if (uVar18 - 0x30 < 10) goto switchD_0050a350_default;
          goto switchD_0050a350_caseD_1b;
        case 0x10:
          if (uVar18 != 0x72) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x11;
          break;
        case 0x11:
          if (uVar18 != 0x75) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x12;
          break;
        case 0x12:
          if (uVar18 == 0x65) {
                    /* try { // try from 0050a7fc to 0050ad73 has its CatchHandler @ 0050b388 */
            puVar14 = (undefined4 *)FUN_0050b92c(&local_190);
            *puVar14 = 1;
            goto joined_r0x0050ab30;
          }
          goto switchD_0050a350_caseD_1b;
        case 0x13:
          if (uVar18 != 0x61) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x14;
          break;
        case 0x14:
          if (uVar18 != 0x6c) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x15;
          break;
        case 0x15:
          if (uVar18 != 0x73) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x16;
          break;
        case 0x16:
          if (uVar18 != 0x65) goto switchD_0050a350_caseD_1b;
          puVar14 = (undefined4 *)FUN_0050b92c(&local_190);
          *puVar14 = 2;
joined_r0x0050ab30:
          if ((uStack_c8 & 1) == 0) {
            uStack_c8 = uStack_c8 & 0xffffffffffff0000;
LAB_0050a628:
            uVar19 = 0x1a;
          }
          else {
            *local_b8 = 0;
            local_c0 = 0;
            uVar19 = 0x1a;
          }
          break;
        case 0x17:
          if (uVar18 != 0x75) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x18;
          break;
        case 0x18:
          if (uVar18 != 0x6c) goto switchD_0050a350_caseD_1b;
          uVar19 = 0x19;
          break;
        case 0x19:
          if (uVar18 == 0x6c) {
            FUN_0050b92c(&local_190);
            goto LAB_0050a628;
          }
          goto switchD_0050a350_caseD_1b;
        case 0x1a:
          if (((uVar18 == 0x2c) || (uVar18 == 0x7d)) || (uVar18 == 0x5d)) {
                    /* try { // try from 0050b210 to 0050b22f has its CatchHandler @ 0050b384 */
            FUN_002ebea0("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x323,2,
                         "Should never reach here.");
                    /* WARNING: Subroutine does not return */
            abort();
          }
        case 0x1b:
          goto switchD_0050a350_caseD_1b;
        default:
          goto switchD_0050a350_default;
        }
      }
      else {
        if (uVar18 != 0x5c) {
          if ((uVar18 != 0x5d) && (uVar18 != 0x7d)) goto LAB_0050a328;
LAB_0050a37c:
          if (0x1a < (uint)local_178) goto switchD_0050a350_caseD_1b;
          uVar5 = 1 << (ulong)((uint)local_178 & 0x1f);
          if ((uVar5 & 0x9c00) == 0) {
            uVar24 = (uint)local_178;
            if ((uVar5 & 0x4000009) == 0) {
              if (((uVar5 & 0x12) != 0) && (local_170 == 0)) {
                FUN_002e6a9c(&uStack_c8,uVar21);
                uVar15 = local_178;
                goto switchD_0050a350_default;
              }
              goto switchD_0050a350_caseD_1b;
            }
          }
          else {
            if (local_f8 == local_f0) goto switchD_0050a350_caseD_1b;
            if (uVar18 == 0x5d) {
              if (**(int **)(local_f0 + -8) != 6) goto switchD_0050a350_caseD_1b;
            }
            else if ((uVar18 == 0x7d) && (**(int **)(local_f0 + -8) != 5))
            goto switchD_0050a350_caseD_1b;
            uVar12 = FUN_0050b92c(&local_190);
            puVar9 = local_b8;
            uVar15 = local_c0;
            local_b0 = (char *)CONCAT44(local_b0._4_4_,3);
            local_a8 = 0;
            uStack_a0 = 0;
            local_98 = (undefined1 *)0x0;
            if ((uStack_c8 & 1) == 0) {
              local_98 = local_b8;
              uStack_a0 = local_c0;
              local_a8 = uStack_c8;
            }
            else {
              if (0xffffffffffffffef < local_c0) {
                    /* WARNING: Subroutine does not return */
                std::__basic_string_common<true>::__throw_length_error();
              }
              if (local_c0 < 0x17) {
                local_a8 = (ulong)(byte)((int)local_c0 << 1);
                puVar13 = puVar1;
                if (local_c0 != 0) goto LAB_0050a690;
              }
              else {
                uVar27 = local_c0 + 0x10 & 0xfffffffffffffff0;
                puVar13 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar27);
                local_a8 = uVar27 | 1;
                uStack_a0 = uVar15;
                local_98 = puVar13;
LAB_0050a690:
                memcpy(puVar13,puVar9,uVar15);
              }
              puVar13[uVar15] = 0;
            }
            local_88 = 0;
            uStack_80 = 0;
            local_68 = 0;
            local_78 = 0;
            local_70 = 0;
                    /* try { // try from 0050a6cc to 0050a6d7 has its CatchHandler @ 0050b290 */
            local_90 = &local_88;
            FUN_0050bf34(uVar12,&local_b0);
            lVar16 = local_78;
            lVar26 = local_70;
            if (local_78 != 0) {
              while (lVar26 != lVar16) {
                FUN_0050beac(lVar26 + -0x50);
                lVar26 = lVar26 + -0x50;
              }
              local_70 = lVar16;
              FUN_002e2ea0(PTR_LAB_04373088,local_78);
            }
            FUN_003e9f80(&local_90,local_88);
            if ((local_a8 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_98);
            }
            if ((uStack_c8 & 1) == 0) {
              uStack_c8 = uStack_c8 & 0xffffffffffff0000;
              local_178 = CONCAT44(local_178._4_4_,0x1a);
              uVar24 = 0x1a;
              uVar15 = local_178;
            }
            else {
              *local_b8 = 0;
              local_c0 = 0;
              local_178 = CONCAT44(local_178._4_4_,0x1a);
              uVar24 = 0x1a;
              uVar15 = local_178;
            }
          }
          if (uVar18 == 0x2c) {
            if ((uVar24 == 0x1a) && (local_f8 != local_f0)) {
              local_178 = uVar15;
              if (**(int **)(local_f0 + -8) == 6) goto LAB_0050aa48;
              if (**(int **)(local_f0 + -8) == 5) goto LAB_0050a3e0;
            }
            goto switchD_0050a350_caseD_1b;
          }
          if (local_f8 == local_f0) goto switchD_0050a350_caseD_1b;
          if (uVar18 == 0x5d) {
            if (**(int **)(local_f0 + -8) != 6) goto switchD_0050a350_caseD_1b;
            if (uVar24 == 3) {
LAB_0050a7cc:
              local_178._5_1_ = (char)(uVar15 >> 0x28);
              if (local_178._5_1_ == '\0') goto switchD_0050a350_caseD_1b;
            }
          }
          else if (uVar18 == 0x7d) {
            if (**(int **)(local_f0 + -8) != 5) goto switchD_0050a350_caseD_1b;
            if (uVar24 == 0) goto LAB_0050a7cc;
          }
          local_178._4_4_ = (undefined4)(uVar15 >> 0x20);
          local_178 = CONCAT44(local_178._4_4_,0x1a);
          local_f0 = local_f0 + -8;
          uVar15 = local_178;
          if (local_f8 != local_f0) goto switchD_0050a350_default;
          uVar19 = 0x1b;
          goto LAB_0050aa4c;
        }
        if ((uint)local_178 == 5) {
          if (local_170 == 0) {
                    /* try { // try from 0050a644 to 0050a64f has its CatchHandler @ 0050b388 */
            FUN_002e6a9c(&uStack_c8,0x5c);
            bVar3 = local_178._4_1_ == '\0';
            if (bVar3) goto switchD_0050a988_caseD_22;
            local_178 = CONCAT44(local_178._4_4_,1);
            goto joined_r0x0050a660;
          }
          goto switchD_0050a350_caseD_1b;
        }
        if ((uint)local_178 == 4) {
          local_178 = (ulong)local_178._5_3_ << 0x28;
          uVar19 = 5;
          goto LAB_0050aa4c;
        }
        if ((uint)local_178 != 1) goto switchD_0050a350_caseD_1b;
        local_178 = CONCAT35(local_178._5_3_,0x100000000);
        uVar19 = 5;
      }
LAB_0050aa4c:
      local_178 = CONCAT44(local_178._4_4_,uVar19);
      uVar15 = local_178;
switchD_0050a350_default:
      local_178 = uVar15;
joined_r0x0050a3e8:
      if (local_180 == 0) goto LAB_0050ad88;
LAB_0050aa58:
      pbVar2 = local_188 + 1;
      bVar4 = *local_188;
      local_188 = pbVar2;
      param_3 = local_180;
      if (bVar4 == 0) goto LAB_0050ad84;
      goto LAB_0050a280;
    }
LAB_0050ad84:
    local_180 = 0;
  }
LAB_0050ad88:
  uVar15 = local_178;
  if (local_f8 == local_f0) {
    uVar11 = ((uint)local_178 | 1) != 0x1b;
  }
  else {
switchD_0050a350_caseD_1b:
    local_178 = uVar15;
    uVar11 = true;
  }
  if (local_150 != '\0') {
                    /* try { // try from 0050adc4 to 0050adef has its CatchHandler @ 0050b380 */
    FUN_002f2c60(&local_b0,
                 "too many errors encountered during JSON parsing -- fix reported errors and try again to see additional errors"
                );
    uVar15 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x33a,
                          &local_b0,0,0);
    if (local_160 < local_158) {
      *local_160 = uVar15;
      local_160 = local_160 + 1;
    }
    else {
      lVar26 = (long)local_160 - (long)local_168 >> 3;
      uVar27 = lVar26 + 1;
      if (uVar27 >> 0x3d != 0) {
                    /* try { // try from 0050b280 to 0050b287 has its CatchHandler @ 0050b380 */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      if ((ulong)((long)local_158 - (long)local_168 >> 3) < 0xfffffffffffffff) {
        uVar21 = (long)local_158 - (long)local_168 >> 2;
        if (uVar27 <= uVar21) {
          uVar27 = uVar21;
        }
        if (uVar27 != 0) goto LAB_0050ae5c;
        lVar16 = 0;
      }
      else {
        uVar27 = 0x1fffffffffffffff;
LAB_0050ae5c:
        lVar16 = FUN_002e2e80(PTR_FUN_04373078,uVar27 << 3);
      }
      puVar25 = (ulong *)(lVar16 + lVar26 * 8);
      puVar23 = (ulong *)(lVar16 + uVar27 * 8);
      *puVar25 = uVar15;
      sVar17 = (long)local_160 - (long)local_168;
      puVar28 = (ulong *)((long)puVar25 - sVar17);
      if (0 < (long)sVar17) {
        memcpy(puVar28,local_168,sVar17);
      }
      bVar3 = local_168 != (ulong *)0x0;
      local_168 = puVar28;
      local_160 = puVar25 + 1;
      local_158 = puVar23;
      if (bVar3) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
    }
  }
  if (!(bool)uVar11) goto LAB_0050b020;
  local_b0 = "JSON parse error at index ";
  local_a8 = 0x1a;
                    /* try { // try from 0050aedc to 0050af07 has its CatchHandler @ 0050b37c */
  local_1f0 = FUN_002ed6c0(local_188 + ~(ulong)local_190,auStack_1e8);
  local_1f0 = local_1f0 - (long)auStack_1e8;
  local_1f8 = auStack_1e8;
  if (local_1f0 < 0) {
                    /* try { // try from 0050b230 to 0050b24f has its CatchHandler @ 0050b37c */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  FUN_002eced0(local_1c8,&local_b0,&local_1f8);
  uVar15 = (ulong)local_1c8 | 1;
  if ((local_1c8[0] & 1) != 0) {
    uVar15 = local_1b8;
  }
                    /* try { // try from 0050af1c to 0050af3f has its CatchHandler @ 0050b324 */
  FUN_002f2ff0(auStack_1b0,uVar15);
  uVar15 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x344,
                        auStack_1b0,0,0);
  if (local_160 < local_158) {
    *local_160 = uVar15;
    local_160 = local_160 + 1;
  }
  else {
    lVar26 = (long)local_160 - (long)local_168 >> 3;
    uVar27 = lVar26 + 1;
    if (uVar27 >> 0x3d != 0) {
                    /* try { // try from 0050b288 to 0050b28f has its CatchHandler @ 0050b324 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)local_158 - (long)local_168 >> 3) < 0xfffffffffffffff) {
      uVar21 = (long)local_158 - (long)local_168 >> 2;
      if (uVar27 <= uVar21) {
        uVar27 = uVar21;
      }
      if (uVar27 != 0) goto LAB_0050afb0;
      lVar16 = 0;
    }
    else {
      uVar27 = 0x1fffffffffffffff;
LAB_0050afb0:
      lVar16 = FUN_002e2e80(PTR_FUN_04373078,uVar27 << 3);
    }
    puVar25 = (ulong *)(lVar16 + lVar26 * 8);
    *puVar25 = uVar15;
    puVar23 = (ulong *)(lVar16 + uVar27 * 8);
    sVar17 = (long)local_160 - (long)local_168;
    puVar28 = (ulong *)((long)puVar25 - sVar17);
    if (0 < (long)sVar17) {
      memcpy(puVar28,local_168,sVar17);
    }
    bVar3 = local_168 != (ulong *)0x0;
    local_168 = puVar28;
    local_160 = puVar25 + 1;
    local_158 = puVar23;
    if (bVar3) {
      FUN_002e2ea0(PTR_LAB_04373088);
    }
  }
  if ((local_1c8[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_1b8);
  }
LAB_0050b020:
  if (local_168 == local_160) {
    FUN_0050bf34(param_1,local_148);
    uVar12 = 0;
    puVar25 = local_160;
  }
  else {
                    /* try { // try from 0050b02c to 0050b08f has its CatchHandler @ 0050b384 */
    FUN_002f2c60(&local_b0,"JSON parsing failed");
    uVar12 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/json/json_reader.cc",0x348,
                          &local_b0,local_168,(long)local_160 - (long)local_168 >> 3);
    puVar25 = local_160;
    if (local_160 != local_168) {
      lVar26 = 0;
      uVar15 = *local_168;
      puVar25 = local_168;
      puVar23 = local_160;
      do {
        if (uVar15 < 5) {
          if ((ulong)((long)puVar23 - (long)puVar25 >> 3) <= lVar26 + 1U) break;
        }
        else {
                    /* try { // try from 0050b150 to 0050b15b has its CatchHandler @ 0050b38c */
          FUN_002f0430(uVar15,"external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xd5);
          puVar23 = local_160;
          puVar25 = local_168;
          if ((ulong)((long)local_160 - (long)local_168 >> 3) <= lVar26 + 1U) break;
        }
        lVar26 = lVar26 + 1;
        uVar15 = puVar25[lVar26];
      } while( true );
    }
  }
  local_160 = puVar25;
  if ((uStack_c8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_b8);
  }
  if ((local_e0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d0);
  }
  if (local_f8 != 0) {
    local_f0 = local_f8;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar16 = local_110;
  lVar26 = lStack_108;
  if (local_110 != 0) {
    while (lVar26 != lVar16) {
      FUN_0050beac(lVar26 + -0x50);
      lVar26 = lVar26 + -0x50;
    }
    lStack_108 = lVar16;
    FUN_002e2ea0(PTR_LAB_04373088,local_110);
  }
  FUN_003e9f80(&puStack_128,local_120);
  if ((local_140 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_130);
  }
  if (local_168 != (ulong *)0x0) {
    local_160 = local_168;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  *param_4 = uVar12;
  return;
}


