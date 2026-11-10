/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a46cc; name: FUN_001a46cc
 */


void FUN_001a46cc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [12];
  long lVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar31;
  undefined8 uVar28;
  float fVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined8 uVar34;
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
  
  puVar13 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar12 = param_2[1];
    lVar2 = param_3 + 0x1c0;
    local_100 = param_1[2];
    lStack_f8 = param_1[3];
    uVar34 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    local_f0 = param_1[4];
    lStack_e8 = param_1[5];
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar27 = NEON_fmax(uVar34,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar26 = (float)((ulong)uVar27 >> 0x20);
    local_a0[0] = CONCAT44(fVar26 * fVar26,(float)uVar27 * (float)uVar27);
    FUN_0333e220(lVar2,&local_100,&local_160);
    iVar14 = FUN_02fa5bf4(*(undefined8 *)(param_3 + 0xc0),&local_160,local_a0,auStack_c0);
    if (iVar14 != 0) {
      auVar29 = *(undefined1 (*) [16])(puVar13 + 0x1e0);
      auVar33 = NEON_ext(auVar29,auVar29,8,1);
      uVar27 = *(undefined8 *)PTR_PTR_04372408;
      auVar29 = NEON_ext(auVar33,auVar29,8,1);
      bVar6 = local_d8[3];
joined_r0x001a47c4:
      while ((char)bVar6 < '\0') {
        lVar3 = (long)(int)local_e0 + 1;
        local_f0._4_4_ = (float)((ulong)local_f0 >> 0x20);
        local_130 = (float)local_100;
        fStack_12c = (float)((ulong)local_100 >> 0x20);
        fStack_128 = (float)lStack_f8;
        local_140[0] = (uint)lVar3;
        lVar16 = (long)(int)local_e0 + (ulong)((uint)local_d8[4] | (local_d8[3] & 0x7f) << 8) * 2;
        local_110 = (uint)lVar16;
        local_138 = (byte *)((long)param_1 + lVar3 * 5 + *param_1);
        local_108 = (byte *)((long)param_1 + lVar16 * 5 + *param_1);
        fVar26 = ((float)local_f0 - local_130) * auVar29._0_4_;
        fVar31 = (local_f0._4_4_ - fStack_12c) * auVar29._4_4_;
        fVar32 = ((float)lStack_e8 - fStack_128) * auVar29._8_4_;
        bVar8 = *local_138 >> 4;
        bVar9 = local_138[1] >> 4;
        bVar6 = local_138[1] & 0xf;
        bVar4 = *local_138 & 0xf;
        bVar10 = local_138[2] & 0xf;
        bVar7 = local_138[2] >> 4;
        local_160 = (float)(byte)(bVar8 * bVar8) * fVar26 + local_130;
        fStack_15c = (float)(byte)(bVar9 * bVar9) * fVar31 + fStack_12c;
        uStack_154 = 0;
        fStack_158 = (float)(byte)(bVar7 * bVar7) * fVar32 + fStack_128;
        local_150 = (float)local_f0 - (float)(byte)(bVar4 * bVar4) * fVar26;
        uStack_144 = 0;
        fStack_14c = local_f0._4_4_ - (float)(byte)(bVar6 * bVar6) * fVar31;
        local_148 = (float)lStack_e8 - (float)(byte)(bVar10 * bVar10) * fVar32;
        bVar10 = *local_108 >> 4;
        bVar7 = local_108[1] >> 4;
        bVar6 = *local_108 & 0xf;
        bVar4 = local_108[1] & 0xf;
        local_130 = local_130 + (float)(byte)(bVar10 * bVar10) * fVar26;
        bVar8 = local_108[2] >> 4;
        bVar10 = local_108[2] & 0xf;
        uStack_114 = 0;
        uStack_124 = 0;
        fStack_12c = (float)(byte)(bVar7 * bVar7) * fVar31 + fStack_12c;
        fStack_128 = (float)(byte)(bVar8 * bVar8) * fVar32 + fStack_128;
        local_120 = (float)local_f0 - (float)(byte)(bVar6 * bVar6) * fVar26;
        fStack_11c = local_f0._4_4_ - (float)(byte)(bVar4 * bVar4) * fVar31;
        fStack_118 = (float)lStack_e8 - (float)(byte)(bVar10 * bVar10) * fVar32;
        uVar28 = NEON_fmax(uVar34,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar26 = (float)((ulong)uVar28 >> 0x20);
        local_68 = CONCAT44(fVar26 * fVar26,(float)uVar28 * (float)uVar28);
        FUN_0333e220(lVar2,&local_160,local_a0);
        FUN_0333e220(lVar2,&local_130,auStack_c0);
        iVar14 = FUN_02fa5bf4(*(undefined8 *)(param_3 + 0xc0),local_a0,&local_68,&uStack_c8);
        iVar15 = FUN_02fa5bf4(*(undefined8 *)(param_3 + 0xc0),auStack_c0,&local_68,&local_d0);
        bVar6 = iVar14 != 0 | (iVar15 != 0) << 1;
        if (bVar6 == 3) {
          fVar26 = (float)local_d0;
          fVar31 = (float)uStack_c8;
          *(uint *)(param_3 + 0x1b4) = (uint)(fVar26 < fVar31);
          iVar14 = (int)param_2[1];
          uVar17 = *(uint *)((long)param_2 + 0xc);
          uVar25 = (ulong)(fVar26 >= fVar31);
          uVar1 = iVar14 + 1;
          if (iVar14 < (int)(uVar17 & 0x3fffffff)) {
            lVar16 = *param_2;
          }
          else {
            lVar16 = *param_2;
            if (0x3ffffffe < iVar14) {
              FUN_032bd0a8(uVar1);
              uVar17 = *(uint *)((long)param_2 + 0xc);
            }
            uVar17 = (uVar17 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar17) {
              uVar17 = 0x3fffffff;
            }
            uVar5 = uVar1;
            if ((int)uVar1 <= (int)uVar17) {
              uVar5 = uVar17;
            }
            lVar16 = FUN_032bd1d4(uVar27,uVar5,0x30,lVar16,iVar14,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar16;
            iVar14 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar1;
          uVar28 = *(undefined8 *)(local_140 + uVar25 * 0xc + -8);
          puVar18 = (undefined8 *)(lVar16 + (long)iVar14 * 0x30);
          uVar20 = (ulong)(fVar26 < fVar31);
          puVar18[1] = *(undefined8 *)(local_140 + uVar25 * 0xc + -6);
          *puVar18 = uVar28;
          uVar28 = *(undefined8 *)(local_140 + uVar25 * 0xc + -4);
          puVar18[3] = *(undefined8 *)(local_140 + uVar25 * 0xc + -2);
          puVar18[2] = uVar28;
          *(uint *)(puVar18 + 4) = local_140[uVar25 * 0xc];
          local_e0 = local_140[uVar20 * 0xc];
          lStack_f8 = *(long *)(local_140 + uVar20 * 0xc + -6);
          local_100 = *(long *)(local_140 + uVar20 * 0xc + -8);
          lStack_e8 = *(long *)(local_140 + uVar20 * 0xc + -2);
          local_f0 = *(long *)(local_140 + uVar20 * 0xc + -4);
          local_d8 = *(byte **)(local_140 + uVar20 * 0xc + 2);
          bVar6 = local_d8[3];
        }
        else {
          if (bVar6 != 2) {
            if (bVar6 == 1) {
              local_e0 = local_140[0];
              auVar33._4_4_ = fStack_15c;
              auVar33._0_4_ = local_160;
              auVar33._8_4_ = fStack_158;
              auVar33._12_4_ = uStack_154;
              auVar30._4_4_ = fStack_14c;
              auVar30._0_4_ = local_150;
              auVar30._8_4_ = local_148;
              auVar30._12_4_ = uStack_144;
              local_d8 = local_138;
              goto LAB_001a4cf4;
            }
            iVar14 = (int)param_2[1];
            goto joined_r0x001a4d18;
          }
          local_e0 = local_110;
          auVar33._4_4_ = fStack_12c;
          auVar33._0_4_ = local_130;
          auVar33._8_4_ = fStack_128;
          auVar33._12_4_ = uStack_124;
          auVar30._4_4_ = fStack_11c;
          auVar30._0_4_ = local_120;
          auVar30._8_4_ = fStack_118;
          auVar30._12_4_ = uStack_114;
          local_d8 = local_108;
LAB_001a4cf4:
          lStack_f8 = auVar33._8_8_;
          local_100 = auVar33._0_8_;
          lStack_e8 = auVar30._8_8_;
          bVar6 = local_d8[3];
          local_f0 = auVar30._0_8_;
        }
      }
      lVar16 = *(long *)(param_3 + 0xa8);
      if (lVar16 == 0) {
LAB_001a4b60:
        lVar22 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar6,local_d8[4]) * 0x60 + param_1[8];
        lVar24 = *(long *)(param_3 + 0x50);
        lVar21 = *(long *)(lVar24 + 0x40);
        lVar16 = lVar21 + lVar24 + 0x40;
        lVar3 = 0;
        if (lVar21 != 0) {
          lVar3 = lVar16;
        }
        iVar14 = (int)(lVar22 - lVar3 >> 5) * -0x55555555;
        if (*(int *)(param_3 + 0x94) != iVar14 || *(int *)(param_3 + 0x98) != iVar14) {
          lVar16 = lVar16 + (long)iVar14 * 0x60;
          *(long *)(param_3 + 0x60) = lVar16;
          *(int *)(param_3 + 0x94) = iVar14;
          *(int *)(param_3 + 0x98) = iVar14;
          lVar21 = *(long *)(lVar24 + 0x70);
          lVar3 = 0;
          if (lVar21 != 0) {
            lVar3 = lVar21 + lVar24 + 0x70;
          }
          *(ulong *)(param_3 + 0x70) = lVar3 + (ulong)*(uint *)(lVar16 + 0x48) * 4;
          lVar21 = *(long *)(lVar24 + 0x80);
          lVar3 = 0;
          if (lVar21 != 0) {
            lVar3 = lVar21 + lVar24 + 0x80;
          }
          *(ulong *)(param_3 + 0x78) = lVar3 + (ulong)*(byte *)(lVar16 + 0x5b) * 0x80000;
          lVar21 = *(long *)(lVar24 + 0x60);
          lVar3 = 0;
          if (lVar21 != 0) {
            lVar3 = lVar21 + lVar24 + 0x60;
          }
          lVar3 = lVar3 + (ulong)*(uint *)(lVar16 + 0x4c) * 2;
          *(long *)(param_3 + 0x80) = lVar3;
          lVar23 = *(long *)(lVar24 + 0x90);
          lVar21 = 0;
          if (lVar23 != 0) {
            lVar21 = lVar23 + lVar24 + 0x90;
          }
          *(ulong *)(param_3 + 0x88) = lVar21 + (ulong)*(uint *)(lVar16 + 0x54) * 4;
          *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar16 + 0x58);
          lVar23 = *(long *)(lVar24 + 0x50);
          lVar21 = 0;
          if (lVar23 != 0) {
            lVar21 = lVar23 + lVar24 + 0x50;
          }
          *(ulong *)(param_3 + 0x68) = lVar21 + (ulong)*(uint *)(lVar16 + 0x50) * 4;
          uVar28 = *(undefined8 *)(lVar16 + 0x30);
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar16 + 0x38);
          *(undefined8 *)(param_3 + 0x30) = uVar28;
          auVar11 = *(undefined1 (*) [12])(lVar16 + 0x3c);
          *(ulong *)(param_3 + 0x48) = (ulong)auVar11._8_4_;
          *(long *)(param_3 + 0x40) = auVar11._0_8_;
          *(ulong *)(param_3 + 0x80) = lVar3 + (ulong)*(byte *)(lVar16 + 0x58) * -2;
        }
        FUN_001a4d6c(lVar22,param_2,param_3);
      }
      else {
        lVar22 = *(long *)(lVar16 + 0x20);
        lVar3 = 0;
        if (lVar22 != 0) {
          lVar3 = lVar22 + lVar16 + 0x20;
        }
        lVar24 = *(long *)(lVar3 + 0x48);
        lVar22 = 0;
        if (lVar24 != 0) {
          lVar22 = lVar24 + lVar3 + 0x48;
        }
        uVar1 = local_e0 + 0x1f;
        if (-1 < (int)local_e0) {
          uVar1 = local_e0;
        }
        if ((1 << (ulong)(local_e0 & 0x1f) &
            *(uint *)(lVar16 + 0x28 +
                     (long)((int)uVar1 >> 5) * 4 +
                     (long)(*(int *)(lVar22 + 0x68) << 3) * 4 + *(long *)(lVar16 + 0x28))) != 0)
        goto LAB_001a4b60;
      }
      iVar14 = (int)param_2[1];
joined_r0x001a4d18:
      if ((int)lVar12 < iVar14) {
        *(int *)(param_2 + 1) = iVar14 + -1;
        plVar19 = (long *)(*param_2 + (long)(iVar14 + -1) * 0x30);
        local_e0 = *(uint *)(plVar19 + 4);
        local_d8 = (byte *)((long)param_1 + (long)(int)plVar19[4] * 5 + *param_1);
        local_100 = *plVar19;
        lStack_f8 = plVar19[1];
        lStack_e8 = SUB168(*(undefined1 (*) [16])(plVar19 + 2),8);
        bVar6 = local_d8[3];
        local_f0 = SUB168(*(undefined1 (*) [16])(plVar19 + 2),0);
        goto joined_r0x001a47c4;
      }
    }
  }
  return;
}


