/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a3b04; name: FUN_001a3b04
 */


void FUN_001a3b04(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  undefined1 auVar15 [12];
  long lVar16;
  undefined *puVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  long *plVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar35;
  undefined8 uVar32;
  float fVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined8 uVar38;
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
  
  puVar17 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar16 = param_2[1];
    local_100 = param_1[2];
    lStack_f8 = param_1[3];
    lVar2 = param_3 + 0x1c0;
    lVar3 = param_3 + 0x200;
    local_f0 = param_1[4];
    lStack_e8 = param_1[5];
    uVar38 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar31 = NEON_fmax(uVar38,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar30 = (float)((ulong)uVar31 >> 0x20);
    local_a0[0] = CONCAT44(fVar30 * fVar30,(float)uVar31 * (float)uVar31);
    FUN_0333e220(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_100,&local_160);
    iVar18 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,&local_160,local_a0,auStack_c0
                         );
    if (iVar18 != 0) {
      auVar33 = *(undefined1 (*) [16])(puVar17 + 0x1e0);
      auVar37 = NEON_ext(auVar33,auVar33,8,1);
      uVar31 = *(undefined8 *)PTR_PTR_04372408;
      auVar33 = NEON_ext(auVar37,auVar33,8,1);
      bVar8 = local_d8[3];
joined_r0x001a3c04:
      while ((char)bVar8 < '\0') {
        lVar4 = (long)(int)local_e0 + 1;
        local_f0._4_4_ = (float)((ulong)local_f0 >> 0x20);
        local_130 = (float)local_100;
        fStack_12c = (float)((ulong)local_100 >> 0x20);
        fStack_128 = (float)lStack_f8;
        local_140[0] = (uint)lVar4;
        lVar20 = (long)(int)local_e0 + (ulong)((uint)local_d8[4] | (local_d8[3] & 0x7f) << 8) * 2;
        local_110 = (uint)lVar20;
        local_138 = (byte *)((long)param_1 + lVar4 * 5 + *param_1);
        local_108 = (byte *)((long)param_1 + lVar20 * 5 + *param_1);
        fVar30 = ((float)local_f0 - local_130) * auVar33._0_4_;
        fVar35 = (local_f0._4_4_ - fStack_12c) * auVar33._4_4_;
        fVar36 = ((float)lStack_e8 - fStack_128) * auVar33._8_4_;
        bVar9 = *local_138 >> 4;
        bVar8 = *local_138 & 0xf;
        bVar10 = local_138[1] >> 4;
        bVar14 = local_138[1] & 0xf;
        bVar11 = local_138[2] >> 4;
        bVar5 = local_138[2] & 0xf;
        bVar12 = *local_108 >> 4;
        bVar6 = *local_108 & 0xf;
        uStack_154 = 0;
        uStack_144 = 0;
        bVar13 = local_108[2] >> 4;
        local_160 = (float)(byte)(bVar9 * bVar9) * fVar30 + local_130;
        fStack_15c = (float)(byte)(bVar10 * bVar10) * fVar35 + fStack_12c;
        fStack_158 = (float)(byte)(bVar11 * bVar11) * fVar36 + fStack_128;
        local_150 = (float)local_f0 - (float)(byte)(bVar8 * bVar8) * fVar30;
        fStack_14c = local_f0._4_4_ - (float)(byte)(bVar14 * bVar14) * fVar35;
        bVar8 = local_108[2] & 0xf;
        local_148 = (float)lStack_e8 - (float)(byte)(bVar5 * bVar5) * fVar36;
        bVar14 = local_108[1] >> 4;
        uStack_124 = 0;
        local_130 = local_130 + (float)(byte)(bVar12 * bVar12) * fVar30;
        fStack_12c = (float)(byte)(bVar14 * bVar14) * fVar35 + fStack_12c;
        uStack_114 = 0;
        local_120 = (float)local_f0 - (float)(byte)(bVar6 * bVar6) * fVar30;
        bVar14 = local_108[1] & 0xf;
        fStack_128 = (float)(byte)(bVar13 * bVar13) * fVar36 + fStack_128;
        fStack_11c = local_f0._4_4_ - (float)(byte)(bVar14 * bVar14) * fVar35;
        fStack_118 = (float)lStack_e8 - (float)(byte)(bVar8 * bVar8) * fVar36;
        uVar32 = NEON_fmax(uVar38,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
        fVar30 = (float)((ulong)uVar32 >> 0x20);
        local_68 = CONCAT44(fVar30 * fVar30,(float)uVar32 * (float)uVar32);
        FUN_0333e220(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_160,local_a0);
        FUN_0333e220(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_130,auStack_c0);
        iVar18 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,local_a0,&local_68,
                              &uStack_c8);
        iVar19 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,auStack_c0,&local_68,
                              &local_d0);
        bVar8 = iVar18 != 0 | (iVar19 != 0) << 1;
        if (bVar8 == 3) {
          fVar30 = (float)local_d0;
          fVar35 = (float)uStack_c8;
          *(uint *)(param_3 + 0x1b4) = (uint)(fVar30 < fVar35);
          iVar18 = (int)param_2[1];
          uVar21 = *(uint *)((long)param_2 + 0xc);
          uVar29 = (ulong)(fVar30 >= fVar35);
          uVar1 = iVar18 + 1;
          if (iVar18 < (int)(uVar21 & 0x3fffffff)) {
            lVar20 = *param_2;
          }
          else {
            lVar20 = *param_2;
            if (0x3ffffffe < iVar18) {
              FUN_032bd0a8(uVar1);
              uVar21 = *(uint *)((long)param_2 + 0xc);
            }
            uVar21 = (uVar21 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar21) {
              uVar21 = 0x3fffffff;
            }
            uVar7 = uVar1;
            if ((int)uVar1 <= (int)uVar21) {
              uVar7 = uVar21;
            }
            lVar20 = FUN_032bd1d4(uVar31,uVar7,0x30,lVar20,iVar18,(uint *)((long)param_2 + 0xc));
            *param_2 = lVar20;
            iVar18 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = uVar1;
          uVar32 = *(undefined8 *)(local_140 + uVar29 * 0xc + -8);
          puVar22 = (undefined8 *)(lVar20 + (long)iVar18 * 0x30);
          uVar24 = (ulong)(fVar30 < fVar35);
          puVar22[1] = *(undefined8 *)(local_140 + uVar29 * 0xc + -6);
          *puVar22 = uVar32;
          uVar32 = *(undefined8 *)(local_140 + uVar29 * 0xc + -4);
          puVar22[3] = *(undefined8 *)(local_140 + uVar29 * 0xc + -2);
          puVar22[2] = uVar32;
          *(uint *)(puVar22 + 4) = local_140[uVar29 * 0xc];
          local_e0 = local_140[uVar24 * 0xc];
          lStack_f8 = *(long *)(local_140 + uVar24 * 0xc + -6);
          local_100 = *(long *)(local_140 + uVar24 * 0xc + -8);
          lStack_e8 = *(long *)(local_140 + uVar24 * 0xc + -2);
          local_f0 = *(long *)(local_140 + uVar24 * 0xc + -4);
          local_d8 = *(byte **)(local_140 + uVar24 * 0xc + 2);
          bVar8 = local_d8[3];
        }
        else {
          if (bVar8 != 2) {
            if (bVar8 == 1) {
              local_e0 = local_140[0];
              auVar37._4_4_ = fStack_15c;
              auVar37._0_4_ = local_160;
              auVar37._8_4_ = fStack_158;
              auVar37._12_4_ = uStack_154;
              auVar34._4_4_ = fStack_14c;
              auVar34._0_4_ = local_150;
              auVar34._8_4_ = local_148;
              auVar34._12_4_ = uStack_144;
              local_d8 = local_138;
              goto LAB_001a4154;
            }
            iVar18 = (int)param_2[1];
            goto joined_r0x001a4178;
          }
          local_e0 = local_110;
          auVar37._4_4_ = fStack_12c;
          auVar37._0_4_ = local_130;
          auVar37._8_4_ = fStack_128;
          auVar37._12_4_ = uStack_124;
          auVar34._4_4_ = fStack_11c;
          auVar34._0_4_ = local_120;
          auVar34._8_4_ = fStack_118;
          auVar34._12_4_ = uStack_114;
          local_d8 = local_108;
LAB_001a4154:
          lStack_f8 = auVar37._8_8_;
          local_100 = auVar37._0_8_;
          lStack_e8 = auVar34._8_8_;
          bVar8 = local_d8[3];
          local_f0 = auVar34._0_8_;
        }
      }
      lVar20 = *(long *)(param_3 + 0xa8);
      if (lVar20 == 0) {
LAB_001a3fb8:
        lVar26 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar8,local_d8[4]) * 0x60 + param_1[8];
        lVar28 = *(long *)(param_3 + 0x50);
        lVar25 = *(long *)(lVar28 + 0x40);
        lVar20 = lVar25 + lVar28 + 0x40;
        lVar4 = 0;
        if (lVar25 != 0) {
          lVar4 = lVar20;
        }
        iVar18 = (int)(lVar26 - lVar4 >> 5) * -0x55555555;
        if (*(int *)(param_3 + 0x94) != iVar18 || *(int *)(param_3 + 0x98) != iVar18) {
          lVar20 = lVar20 + (long)iVar18 * 0x60;
          *(long *)(param_3 + 0x60) = lVar20;
          *(int *)(param_3 + 0x94) = iVar18;
          *(int *)(param_3 + 0x98) = iVar18;
          lVar25 = *(long *)(lVar28 + 0x70);
          lVar4 = 0;
          if (lVar25 != 0) {
            lVar4 = lVar25 + lVar28 + 0x70;
          }
          *(ulong *)(param_3 + 0x70) = lVar4 + (ulong)*(uint *)(lVar20 + 0x48) * 4;
          lVar25 = *(long *)(lVar28 + 0x80);
          lVar4 = 0;
          if (lVar25 != 0) {
            lVar4 = lVar25 + lVar28 + 0x80;
          }
          *(ulong *)(param_3 + 0x78) = lVar4 + (ulong)*(byte *)(lVar20 + 0x5b) * 0x80000;
          lVar25 = *(long *)(lVar28 + 0x60);
          lVar4 = 0;
          if (lVar25 != 0) {
            lVar4 = lVar25 + lVar28 + 0x60;
          }
          lVar4 = lVar4 + (ulong)*(uint *)(lVar20 + 0x4c) * 2;
          *(long *)(param_3 + 0x80) = lVar4;
          lVar27 = *(long *)(lVar28 + 0x90);
          lVar25 = 0;
          if (lVar27 != 0) {
            lVar25 = lVar27 + lVar28 + 0x90;
          }
          *(ulong *)(param_3 + 0x88) = lVar25 + (ulong)*(uint *)(lVar20 + 0x54) * 4;
          *(uint *)(param_3 + 0x90) = (uint)*(byte *)(lVar20 + 0x58);
          lVar27 = *(long *)(lVar28 + 0x50);
          lVar25 = 0;
          if (lVar27 != 0) {
            lVar25 = lVar27 + lVar28 + 0x50;
          }
          *(ulong *)(param_3 + 0x68) = lVar25 + (ulong)*(uint *)(lVar20 + 0x50) * 4;
          uVar32 = *(undefined8 *)(lVar20 + 0x30);
          *(undefined8 *)(param_3 + 0x38) = *(undefined8 *)(lVar20 + 0x38);
          *(undefined8 *)(param_3 + 0x30) = uVar32;
          auVar15 = *(undefined1 (*) [12])(lVar20 + 0x3c);
          *(ulong *)(param_3 + 0x48) = (ulong)auVar15._8_4_;
          *(long *)(param_3 + 0x40) = auVar15._0_8_;
          *(ulong *)(param_3 + 0x80) = lVar4 + (ulong)*(byte *)(lVar20 + 0x58) * -2;
        }
        FUN_001a41cc(lVar26,param_2,param_3);
      }
      else {
        lVar26 = *(long *)(lVar20 + 0x20);
        lVar4 = 0;
        if (lVar26 != 0) {
          lVar4 = lVar26 + lVar20 + 0x20;
        }
        lVar28 = *(long *)(lVar4 + 0x48);
        lVar26 = 0;
        if (lVar28 != 0) {
          lVar26 = lVar28 + lVar4 + 0x48;
        }
        uVar1 = local_e0 + 0x1f;
        if (-1 < (int)local_e0) {
          uVar1 = local_e0;
        }
        if ((1 << (ulong)(local_e0 & 0x1f) &
            *(uint *)(lVar20 + 0x28 +
                     (long)((int)uVar1 >> 5) * 4 +
                     (long)(*(int *)(lVar26 + 0x68) << 3) * 4 + *(long *)(lVar20 + 0x28))) != 0)
        goto LAB_001a3fb8;
      }
      iVar18 = (int)param_2[1];
joined_r0x001a4178:
      if ((int)lVar16 < iVar18) {
        *(int *)(param_2 + 1) = iVar18 + -1;
        plVar23 = (long *)(*param_2 + (long)(iVar18 + -1) * 0x30);
        local_e0 = *(uint *)(plVar23 + 4);
        local_d8 = (byte *)((long)param_1 + (long)(int)plVar23[4] * 5 + *param_1);
        local_100 = *plVar23;
        lStack_f8 = plVar23[1];
        lStack_e8 = SUB168(*(undefined1 (*) [16])(plVar23 + 2),8);
        bVar8 = local_d8[3];
        local_f0 = SUB168(*(undefined1 (*) [16])(plVar23 + 2),0);
        goto joined_r0x001a3c04;
      }
    }
  }
  return;
}


