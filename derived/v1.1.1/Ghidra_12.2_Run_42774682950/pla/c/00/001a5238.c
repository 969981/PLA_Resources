/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a5238; name: FUN_001a5238
 */


void FUN_001a5238(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  undefined1 auVar13 [12];
  long lVar14;
  undefined *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar33;
  undefined8 uVar30;
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined8 uVar36;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 uStack_144;
  uint local_140 [2];
  byte *local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  uint local_110;
  byte *local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  uint local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0 [6];
  undefined8 local_68;
  
  puVar15 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar14 = param_2[1];
    lVar2 = param_3 + 0x240;
    local_100 = param_1[2];
    lStack_f8 = param_1[3];
    lVar3 = param_3 + 0x1c0;
    local_f0 = param_1[4];
    lStack_e8 = param_1[5];
    uVar36 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    lVar4 = param_3 + 0x200;
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar29 = NEON_fmax(uVar36,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar28 = (float)((ulong)uVar29 >> 0x20);
    local_a0[0] = CONCAT44(fVar28 * fVar28,(float)uVar29 * (float)uVar29);
    FUN_0333e220(lVar2,&local_100,&local_160);
    iVar16 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar3,lVar4,&local_160,local_a0,auStack_c0
                         );
    if (iVar16 != 0) {
      auVar31 = *(undefined1 (*) [16])(puVar15 + 0x1e0);
      auVar35 = NEON_ext(auVar31,auVar31,8,1);
      uVar29 = *(undefined8 *)PTR_PTR_04372408;
      auVar31 = NEON_ext(auVar35,auVar31,8,1);
      bVar8 = local_d8[3];
joined_r0x001a5338:
      while ((char)bVar8 < '\0') {
        lVar5 = (long)(int)local_e0 + 1;
        local_f0._4_4_ = (float)((ulong)local_f0 >> 0x20);
        local_130 = (float)local_100;
        fStack_12c = (float)((ulong)local_100 >> 0x20);
        fStack_128 = (float)lStack_f8;
        local_140[0] = (uint)lVar5;
        lVar18 = (long)(int)local_e0 + (ulong)((uint)local_d8[4] | (local_d8[3] & 0x7f) << 8) * 2;
        local_110 = (uint)lVar18;
        local_138 = (byte *)((long)param_1 + lVar5 * 5 + *param_1);
        local_108 = (byte *)((long)param_1 + lVar18 * 5 + *param_1);
        fVar28 = ((float)local_f0 - local_130) * auVar31._0_4_;
        fVar33 = (local_f0._4_4_ - fStack_12c) * auVar31._4_4_;
        fVar34 = ((float)lStack_e8 - fStack_128) * auVar31._8_4_;
        bVar10 = *local_138 >> 4;
        bVar11 = local_138[1] >> 4;
        bVar8 = local_138[1] & 0xf;
        bVar6 = *local_138 & 0xf;
        bVar12 = local_138[2] & 0xf;
        bVar9 = local_138[2] >> 4;
        local_160 = (float)(byte)(bVar10 * bVar10) * fVar28 + local_130;
        fStack_15c = (float)(byte)(bVar11 * bVar11) * fVar33 + fStack_12c;
        uStack_154 = 0;
        fStack_158 = (float)(byte)(bVar9 * bVar9) * fVar34 + fStack_128;
        local_150 = (float)local_f0 - (float)(byte)(bVar6 * bVar6) * fVar28;
        uStack_144 = 0;
        fStack_14c = local_f0._4_4_ - (float)(byte)(bVar8 * bVar8) * fVar33;
        local_148 = (float)lStack_e8 - (float)(byte)(bVar12 * bVar12) * fVar34;
        bVar12 = *local_108 >> 4;
        bVar9 = local_108[1] >> 4;
        bVar8 = *local_108 & 0xf;
        bVar6 = local_108[1] & 0xf;
        local_130 = local_130 + (float)(byte)(bVar12 * bVar12) * fVar28;
        bVar10 = local_108[2] >> 4;
        bVar12 = local_108[2] & 0xf;
        uStack_114 = 0;
        uStack_124 = 0;
        fStack_12c = (float)(byte)(bVar9 * bVar9) * fVar33 + fStack_12c;
        fStack_128 = (float)(byte)(bVar10 * bVar10) * fVar34 + fStack_128;
        local_120 = (float)local_f0 - (float)(byte)(bVar8 * bVar8) * fVar28;
        fStack_11c = local_f0._4_4_ - (float)(byte)(bVar6 * bVar6) * fVar33;
        fStack_118 = (float)lStack_e8 - (float)(byte)(bVar12 * bVar12) * fVar34;
        uVar30 = NEON_fmax(uVar36,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar28 = (float)((ulong)uVar30 >> 0x20);
        local_68 = CONCAT44(fVar28 * fVar28,(float)uVar30 * (float)uVar30);
        FUN_0333e220(lVar2,&local_160,local_a0);
        FUN_0333e220(lVar2,&local_130,auStack_c0);
        iVar16 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar3,lVar4,local_a0,&local_68,
                              &uStack_c8);
        iVar17 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar3,lVar4,auStack_c0,&local_68,
                              &local_d0);
        bVar8 = iVar16 != 0 | (iVar17 != 0) << 1;
        if (bVar8 == 3) {
          fVar28 = (float)local_d0;
          fVar33 = (float)uStack_c8;
          *(uint *)(param_3 + 0x1b4) = (uint)(fVar28 < fVar33);
          iVar16 = (int)param_2[1];
          uVar19 = *(uint *)((long)param_2 + 0xc);
          uVar27 = (ulong)(fVar28 >= fVar33);
          uVar1 = iVar16 + 1;
          if (iVar16 < (int)(uVar19 & 0x3fffffff)) {
            lVar18 = *param_2;
          }
          else {
            lVar18 = *param_2;
            if (0x3ffffffe < iVar16) {
              FUN_032bd0a8(uVar1);
              uVar19 = *(uint *)((long)param_2 + 0xc);
            }
            uVar19 = (uVar19 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar19) {
              uVar19 = 0x3fffffff;
            }
            uVar7 = uVar1;
            if ((int)uVar1 <= (int)uVar19) {
              uVar7 = uVar19;
            }
            lVar18 = FUN_032bd1d4(uVar29,uVar7,0x30,lVar18,iVar16,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar18;
            iVar16 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar1;
          uVar30 = *(undefined8 *)(local_140 + uVar27 * 0xc + -8);
          puVar20 = (undefined8 *)(lVar18 + (long)iVar16 * 0x30);
          uVar22 = (ulong)(fVar28 < fVar33);
          puVar20[1] = *(undefined8 *)(local_140 + uVar27 * 0xc + -6);
          *puVar20 = uVar30;
          uVar30 = *(undefined8 *)(local_140 + uVar27 * 0xc + -4);
          puVar20[3] = *(undefined8 *)(local_140 + uVar27 * 0xc + -2);
          puVar20[2] = uVar30;
          *(uint *)(puVar20 + 4) = local_140[uVar27 * 0xc];
          local_e0 = local_140[uVar22 * 0xc];
          lStack_f8 = *(long *)(local_140 + uVar22 * 0xc + -6);
          local_100 = *(long *)(local_140 + uVar22 * 0xc + -8);
          lStack_e8 = *(long *)(local_140 + uVar22 * 0xc + -2);
          local_f0 = *(long *)(local_140 + uVar22 * 0xc + -4);
          local_d8 = *(byte **)(local_140 + uVar22 * 0xc + 2);
          bVar8 = local_d8[3];
        }
        else {
          if (bVar8 != 2) {
            if (bVar8 == 1) {
              local_e0 = local_140[0];
              auVar35._4_4_ = fStack_15c;
              auVar35._0_4_ = local_160;
              auVar35._8_4_ = fStack_158;
              auVar35._12_4_ = uStack_154;
              auVar32._4_4_ = fStack_14c;
              auVar32._0_4_ = local_150;
              auVar32._8_4_ = local_148;
              auVar32._12_4_ = uStack_144;
              local_d8 = local_138;
              goto LAB_001a5888;
            }
            iVar16 = (int)param_2[1];
            goto joined_r0x001a58ac;
          }
          local_e0 = local_110;
          auVar35._4_4_ = fStack_12c;
          auVar35._0_4_ = local_130;
          auVar35._8_4_ = fStack_128;
          auVar35._12_4_ = uStack_124;
          auVar32._4_4_ = fStack_11c;
          auVar32._0_4_ = local_120;
          auVar32._8_4_ = fStack_118;
          auVar32._12_4_ = uStack_114;
          local_d8 = local_108;
LAB_001a5888:
          lStack_f8 = auVar35._8_8_;
          local_100 = auVar35._0_8_;
          lStack_e8 = auVar32._8_8_;
          bVar8 = local_d8[3];
          local_f0 = auVar32._0_8_;
        }
      }
      lVar18 = *(long *)(param_3 + 0xa8);
      if (lVar18 == 0) {
LAB_001a56e4:
        lVar24 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar8,local_d8[4]) * 0x60 + param_1[8];
        lVar26 = *(long *)(param_3 + 0x50);
        lVar23 = *(long *)(lVar26 + 0x40);
        lVar18 = lVar23 + lVar26 + 0x40;
        lVar5 = 0;
        if (lVar23 != 0) {
          lVar5 = lVar18;
        }
        iVar16 = (int)(lVar24 - lVar5 >> 5) * -0x55555555;
        if (*(int *)(param_3 + 0x94) != iVar16 || *(int *)(param_3 + 0x98) != iVar16) {
          lVar18 = lVar18 + (long)iVar16 * 0x60;
          *(long *)(param_3 + 0x60) = lVar18;
          *(int *)(param_3 + 0x94) = iVar16;
          *(int *)(param_3 + 0x98) = iVar16;
          lVar23 = *(long *)(lVar26 + 0x70);
          lVar5 = 0;
          if (lVar23 != 0) {
            lVar5 = lVar23 + lVar26 + 0x70;
          }
          *(ulong *)(param_3 + 0x70) = lVar5 + (ulong)*(uint *)(lVar18 + 0x48) * 4;
          lVar23 = *(long *)(lVar26 + 0x80);
          lVar5 = 0;
          if (lVar23 != 0) {
            lVar5 = lVar23 + lVar26 + 0x80;
          }
          *(ulong *)(param_3 + 0x78) = lVar5 + (ulong)*(byte *)(lVar18 + 0x5b) * 0x80000;
          lVar23 = *(long *)(lVar26 + 0x60);
          lVar5 = 0;
          if (lVar23 != 0) {
            lVar5 = lVar23 + lVar26 + 0x60;
          }
          lVar5 = lVar5 + (ulong)*(uint *)(lVar18 + 0x4c) * 2;
          *(long *)(param_3 + 0x80) = lVar5;
          lVar25 = *(long *)(lVar26 + 0x90);
          lVar23 = 0;
          if (lVar25 != 0) {
            lVar23 = lVar25 + lVar26 + 0x90;
          }
          *(ulong *)(param_3 + 0x88) = lVar23 + (ulong)*(uint *)(lVar18 + 0x54) * 4;
          *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar18 + 0x58);
          lVar25 = *(long *)(lVar26 + 0x50);
          lVar23 = 0;
          if (lVar25 != 0) {
            lVar23 = lVar25 + lVar26 + 0x50;
          }
          *(ulong *)(param_3 + 0x68) = lVar23 + (ulong)*(uint *)(lVar18 + 0x50) * 4;
          uVar30 = *(undefined8 *)(lVar18 + 0x30);
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar18 + 0x38);
          *(undefined8 *)(param_3 + 0x30) = uVar30;
          auVar13 = *(undefined1 (*) [12])(lVar18 + 0x3c);
          *(ulong *)(param_3 + 0x48) = (ulong)auVar13._8_4_;
          *(long *)(param_3 + 0x40) = auVar13._0_8_;
          *(ulong *)(param_3 + 0x80) = lVar5 + (ulong)*(byte *)(lVar18 + 0x58) * -2;
        }
        FUN_001a5900(lVar24,param_2,param_3);
      }
      else {
        lVar24 = *(long *)(lVar18 + 0x20);
        lVar5 = 0;
        if (lVar24 != 0) {
          lVar5 = lVar24 + lVar18 + 0x20;
        }
        lVar26 = *(long *)(lVar5 + 0x48);
        lVar24 = 0;
        if (lVar26 != 0) {
          lVar24 = lVar26 + lVar5 + 0x48;
        }
        uVar1 = local_e0 + 0x1f;
        if (-1 < (int)local_e0) {
          uVar1 = local_e0;
        }
        if ((1 << (ulong)(local_e0 & 0x1f) &
            *(uint *)(lVar18 + 0x28 +
                     (long)((int)uVar1 >> 5) * 4 +
                     (long)(*(int *)(lVar24 + 0x68) << 3) * 4 + *(long *)(lVar18 + 0x28))) != 0)
        goto LAB_001a56e4;
      }
      iVar16 = (int)param_2[1];
joined_r0x001a58ac:
      if ((int)lVar14 < iVar16) {
        *(int *)(param_2 + 1) = iVar16 + -1;
        plVar21 = (long *)(*param_2 + (long)(iVar16 + -1) * 0x30);
        local_e0 = *(uint *)(plVar21 + 4);
        local_d8 = (byte *)((long)param_1 + (long)(int)plVar21[4] * 5 + *param_1);
        local_100 = *plVar21;
        lStack_f8 = plVar21[1];
        lStack_e8 = SUB168(*(undefined1 (*) [16])(plVar21 + 2),8);
        bVar8 = local_d8[3];
        local_f0 = SUB168(*(undefined1 (*) [16])(plVar21 + 2),0);
        goto joined_r0x001a5338;
      }
    }
  }
  return;
}


