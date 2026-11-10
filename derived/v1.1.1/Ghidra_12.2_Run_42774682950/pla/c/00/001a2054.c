/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a2054; name: FUN_001a2054
 */


void FUN_001a2054(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  long lVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar27;
  undefined8 uVar25;
  float fVar28;
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  float local_150;
  float fStack_14c;
  float local_148;
  undefined4 uStack_144;
  int local_140 [2];
  byte *local_138;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  undefined4 uStack_114;
  int local_110;
  byte *local_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  long lStack_e8;
  int local_e0;
  byte *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0 [6];
  undefined8 local_68;
  
  puVar14 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar13 = param_2[1];
    lVar2 = param_3 + 0x170;
    local_100 = param_1[2];
    lStack_f8 = param_1[3];
    local_f0 = param_1[4];
    lStack_e8 = param_1[5];
    uVar30 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar24 = NEON_fmax(uVar30,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar23 = (float)((ulong)uVar24 >> 0x20);
    local_a0[0] = CONCAT44(fVar23 * fVar23,(float)uVar24 * (float)uVar24);
    FUN_0333e220(lVar2,&local_100,&local_160);
    iVar15 = FUN_02fa5bf4(*(undefined8 *)(param_3 + 0xc0),&local_160,local_a0,auStack_c0);
    if (iVar15 != 0) {
      auVar26 = *(undefined1 (*) [16])(puVar14 + 0x1e0);
      auVar29 = NEON_ext(auVar26,auVar26,8,1);
      uVar24 = *(undefined8 *)PTR_PTR_04372408;
      auVar26 = NEON_ext(auVar29,auVar26,8,1);
      bVar5 = local_d8[3];
joined_r0x001a213c:
      do {
        if ((bVar5 & 1) == 0) goto LAB_001a249c;
        while( true ) {
          local_140[0] = local_e0 + 1;
          local_130 = (float)local_100;
          fStack_12c = (float)((ulong)local_100 >> 0x20);
          fStack_128 = (float)lStack_f8;
          local_110 = local_e0 + (local_d8[3] & 0xfe);
          local_138 = (byte *)((long)param_1 + (long)local_140[0] * 4 + *param_1);
          local_108 = (byte *)((long)param_1 + (long)local_110 * 4 + *param_1);
          fVar23 = ((float)local_f0 - local_130) * auVar26._0_4_;
          fVar27 = (local_f0._4_4_ - fStack_12c) * auVar26._4_4_;
          fVar28 = ((float)lStack_e8 - fStack_128) * auVar26._8_4_;
          bVar7 = *local_138 >> 4;
          bVar8 = local_138[1] >> 4;
          bVar5 = local_138[1] & 0xf;
          bVar9 = *local_138 & 0xf;
          bVar3 = local_138[2] & 0xf;
          bVar6 = local_138[2] >> 4;
          local_160 = (float)(byte)(bVar7 * bVar7) * fVar23 + local_130;
          fStack_15c = (float)(byte)(bVar8 * bVar8) * fVar27 + fStack_12c;
          uStack_154 = 0;
          fStack_158 = (float)(byte)(bVar6 * bVar6) * fVar28 + fStack_128;
          local_150 = (float)local_f0 - (float)(byte)(bVar9 * bVar9) * fVar23;
          uStack_144 = 0;
          fStack_14c = local_f0._4_4_ - (float)(byte)(bVar5 * bVar5) * fVar27;
          bVar5 = *local_108 >> 4;
          local_148 = (float)lStack_e8 - (float)(byte)(bVar3 * bVar3) * fVar28;
          bVar9 = local_108[1] >> 4;
          local_130 = local_130 + (float)(byte)(bVar5 * bVar5) * fVar23;
          bVar6 = local_108[2] >> 4;
          bVar5 = local_108[2] & 0xf;
          uStack_114 = 0;
          fStack_12c = (float)(byte)(bVar9 * bVar9) * fVar27 + fStack_12c;
          bVar9 = *local_108 & 0xf;
          bVar3 = local_108[1] & 0xf;
          uStack_124 = 0;
          fStack_128 = (float)(byte)(bVar6 * bVar6) * fVar28 + fStack_128;
          local_120 = (float)local_f0 - (float)(byte)(bVar9 * bVar9) * fVar23;
          fStack_11c = local_f0._4_4_ - (float)(byte)(bVar3 * bVar3) * fVar27;
          fStack_118 = (float)lStack_e8 - (float)(byte)(bVar5 * bVar5) * fVar28;
          uVar25 = NEON_fmax(uVar30,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
          fVar23 = (float)((ulong)uVar25 >> 0x20);
          local_68 = CONCAT44(fVar23 * fVar23,(float)uVar25 * (float)uVar25);
          FUN_0333e220(lVar2,&local_160,local_a0);
          FUN_0333e220(lVar2,&local_130,auStack_c0);
          iVar15 = FUN_02fa5bf4(*(undefined8 *)(param_3 + 0xc0),local_a0,&local_68,&uStack_c8);
          iVar16 = FUN_02fa5bf4(*(undefined8 *)(param_3 + 0xc0),auStack_c0,&local_68,&local_d0);
          bVar5 = iVar15 != 0 | (iVar16 != 0) << 1;
          if (bVar5 == 3) break;
          if (bVar5 == 2) {
            local_100 = CONCAT44(fStack_12c,local_130);
            auVar29._8_4_ = fStack_128;
            auVar29._0_8_ = local_100;
            auVar29._12_4_ = uStack_124;
            local_f0 = CONCAT44(fStack_11c,local_120);
            auVar12._8_4_ = fStack_118;
            auVar12._0_8_ = local_f0;
            auVar12._12_4_ = uStack_114;
            lStack_f8 = auVar29._8_8_;
            lStack_e8 = auVar12._8_8_;
            bVar5 = local_108[3];
            local_e0 = local_110;
            local_d8 = local_108;
            goto joined_r0x001a213c;
          }
          if (bVar5 == 1) {
            local_100 = CONCAT44(fStack_15c,local_160);
            auVar10._8_4_ = fStack_158;
            auVar10._0_8_ = local_100;
            auVar10._12_4_ = uStack_154;
            local_f0 = CONCAT44(fStack_14c,local_150);
            auVar11._8_4_ = local_148;
            auVar11._0_8_ = local_f0;
            auVar11._12_4_ = uStack_144;
            lStack_f8 = auVar10._8_8_;
            lStack_e8 = auVar11._8_8_;
            bVar5 = local_138[3];
            local_e0 = local_140[0];
            local_d8 = local_138;
            goto joined_r0x001a213c;
          }
          while( true ) {
            if ((int)param_2[1] <= (int)lVar13) {
              return;
            }
            iVar15 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar15;
            plVar19 = (long *)(*param_2 + (long)iVar15 * 0x30);
            local_e0 = (int)plVar19[4];
            local_d8 = (byte *)((long)param_1 + (long)(int)plVar19[4] * 4 + *param_1);
            local_100 = *plVar19;
            lStack_f8 = plVar19[1];
            lStack_e8 = SUB168(*(undefined1 (*) [16])(plVar19 + 2),8);
            local_f0 = SUB168(*(undefined1 (*) [16])(plVar19 + 2),0);
            if ((local_d8[3] & 1) != 0) break;
LAB_001a249c:
            FUN_001a2520(param_3,&local_100);
          }
        }
        fVar23 = (float)local_d0;
        fVar27 = (float)uStack_c8;
        *(uint *)(param_3 + 0x1b4) = (uint)(fVar23 < fVar27);
        uVar21 = (ulong)(fVar23 >= fVar27);
        iVar15 = (int)param_2[1];
        uVar17 = *(uint *)((long)param_2 + 0xc);
        uVar1 = iVar15 + 1;
        if (iVar15 < (int)(uVar17 & 0x3fffffff)) {
          lVar22 = *param_2;
        }
        else {
          lVar22 = *param_2;
          if (0x3ffffffe < iVar15) {
            FUN_032bd0a8(uVar1);
            uVar17 = *(uint *)((long)param_2 + 0xc);
          }
          uVar17 = (uVar17 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar17) {
            uVar17 = 0x3fffffff;
          }
          uVar4 = uVar1;
          if ((int)uVar1 <= (int)uVar17) {
            uVar4 = uVar17;
          }
          lVar22 = FUN_032bd1d4(uVar24,uVar4,0x30,lVar22,iVar15,(uint *)((long)param_2 + 0xc));
          *param_2 = lVar22;
          iVar15 = (int)param_2[1];
        }
        *(uint *)(param_2 + 1) = uVar1;
        uVar25 = *(undefined8 *)(local_140 + uVar21 * 0xc + -8);
        puVar18 = (undefined8 *)(lVar22 + (long)iVar15 * 0x30);
        puVar18[1] = *(undefined8 *)(local_140 + uVar21 * 0xc + -6);
        *puVar18 = uVar25;
        uVar25 = *(undefined8 *)(local_140 + uVar21 * 0xc + -4);
        uVar20 = (ulong)(fVar23 < fVar27);
        puVar18[3] = *(undefined8 *)(local_140 + uVar21 * 0xc + -2);
        puVar18[2] = uVar25;
        *(int *)(puVar18 + 4) = local_140[uVar21 * 0xc];
        local_e0 = local_140[uVar20 * 0xc];
        local_d8 = *(byte **)(local_140 + uVar20 * 0xc + 2);
        lStack_f8 = SUB168(*(undefined1 (*) [16])(local_140 + uVar20 * 0xc + -8),8);
        local_100 = SUB168(*(undefined1 (*) [16])(local_140 + uVar20 * 0xc + -8),0);
        lStack_e8 = SUB168(*(undefined1 (*) [16])(local_140 + uVar20 * 0xc + -4),8);
        local_f0 = SUB168(*(undefined1 (*) [16])(local_140 + uVar20 * 0xc + -4),0);
        bVar5 = local_d8[3];
      } while( true );
    }
  }
  return;
}


