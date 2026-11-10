/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a41cc; name: FUN_001a41cc
 */


void FUN_001a41cc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  long lVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  float fVar26;
  undefined8 uVar27;
  long lVar28;
  float fVar31;
  undefined8 uVar29;
  float fVar32;
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
  long local_140;
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
  
  puVar18 = PTR_DAT_04372370;
  if ((int)param_1[1] != 0) {
    lVar17 = param_2[1];
    local_100 = param_1[2];
    lStack_f8 = param_1[3];
    lVar2 = param_3 + 0x1c0;
    lVar3 = param_3 + 0x200;
    local_f0 = param_1[4];
    lStack_e8 = param_1[5];
    uVar34 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    local_e0 = 0;
    local_d8 = (byte *)(*param_1 + (long)param_1);
    uVar27 = NEON_fmax(uVar34,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
    fVar26 = (float)((ulong)uVar27 >> 0x20);
    local_a0[0] = CONCAT44(fVar26 * fVar26,(float)uVar27 * (float)uVar27);
    FUN_0333e220(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_100,&local_160);
    iVar19 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,&local_160,local_a0,auStack_c0
                         );
    if (iVar19 != 0) {
      auVar30 = *(undefined1 (*) [16])(puVar18 + 0x1e0);
      auVar33 = NEON_ext(auVar30,auVar30,8,1);
      uVar27 = *(undefined8 *)PTR_PTR_04372408;
      auVar30 = NEON_ext(auVar33,auVar30,8,1);
      bVar7 = local_d8[3];
joined_r0x001a42c4:
      do {
        if ((bVar7 & 1) == 0) goto LAB_001a4648;
        while( true ) {
          local_140._0_4_ = local_e0 + 1;
          local_130 = (float)local_100;
          fStack_12c = (float)((ulong)local_100 >> 0x20);
          fStack_128 = (float)lStack_f8;
          local_110 = local_e0 + (local_d8[3] & 0xfe);
          local_138 = (byte *)((long)param_1 + (long)(int)local_140 * 4 + *param_1);
          local_108 = (byte *)((long)param_1 + (long)local_110 * 4 + *param_1);
          bVar8 = *local_138 >> 4;
          bVar7 = *local_138 & 0xf;
          fVar26 = ((float)local_f0 - local_130) * auVar30._0_4_;
          fVar31 = (local_f0._4_4_ - fStack_12c) * auVar30._4_4_;
          fVar32 = ((float)lStack_e8 - fStack_128) * auVar30._8_4_;
          bVar9 = local_138[1] >> 4;
          bVar4 = local_138[1] & 0xf;
          bVar10 = local_138[2] >> 4;
          bVar13 = local_138[2] & 0xf;
          bVar11 = *local_108 >> 4;
          bVar5 = *local_108 & 0xf;
          uStack_154 = 0;
          uStack_144 = 0;
          bVar12 = local_108[2] >> 4;
          local_160 = (float)(byte)(bVar8 * bVar8) * fVar26 + local_130;
          fStack_15c = (float)(byte)(bVar9 * bVar9) * fVar31 + fStack_12c;
          fStack_158 = (float)(byte)(bVar10 * bVar10) * fVar32 + fStack_128;
          local_150 = (float)local_f0 - (float)(byte)(bVar7 * bVar7) * fVar26;
          fStack_14c = local_f0._4_4_ - (float)(byte)(bVar4 * bVar4) * fVar31;
          bVar7 = local_108[2] & 0xf;
          local_148 = (float)lStack_e8 - (float)(byte)(bVar13 * bVar13) * fVar32;
          bVar13 = local_108[1] >> 4;
          uStack_114 = 0;
          bVar4 = local_108[1] & 0xf;
          uStack_124 = 0;
          local_130 = local_130 + (float)(byte)(bVar11 * bVar11) * fVar26;
          fStack_12c = (float)(byte)(bVar13 * bVar13) * fVar31 + fStack_12c;
          local_120 = (float)local_f0 - (float)(byte)(bVar5 * bVar5) * fVar26;
          fStack_128 = (float)(byte)(bVar12 * bVar12) * fVar32 + fStack_128;
          fStack_11c = local_f0._4_4_ - (float)(byte)(bVar4 * bVar4) * fVar31;
          fStack_118 = (float)lStack_e8 - (float)(byte)(bVar7 * bVar7) * fVar32;
          uVar29 = NEON_fmax(uVar34,*(undefined8 *)(*(long *)(param_3 + 0xe8) + 0x10),4);
          fVar26 = (float)((ulong)uVar29 >> 0x20);
          local_68 = CONCAT44(fVar26 * fVar26,(float)uVar29 * (float)uVar29);
          FUN_0333e220(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_160,local_a0);
          FUN_0333e220(*(undefined8 *)(*(long *)(param_3 + 0xe0) + 0x20),&local_130,auStack_c0);
          iVar19 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,local_a0,&local_68,
                                &uStack_c8);
          iVar20 = FUN_02fa6668(*(undefined8 *)(param_3 + 0xc0),lVar2,lVar3,auStack_c0,&local_68,
                                &local_d0);
          bVar7 = iVar19 != 0 | (iVar20 != 0) << 1;
          if (bVar7 == 3) break;
          if (bVar7 == 2) {
            local_100 = CONCAT44(fStack_12c,local_130);
            auVar33._8_4_ = fStack_128;
            auVar33._0_8_ = local_100;
            auVar33._12_4_ = uStack_124;
            local_f0 = CONCAT44(fStack_11c,local_120);
            auVar16._8_4_ = fStack_118;
            auVar16._0_8_ = local_f0;
            auVar16._12_4_ = uStack_114;
            lStack_f8 = auVar33._8_8_;
            lStack_e8 = auVar16._8_8_;
            bVar7 = local_108[3];
            local_e0 = local_110;
            local_d8 = local_108;
            goto joined_r0x001a42c4;
          }
          if (bVar7 == 1) {
            local_100 = CONCAT44(fStack_15c,local_160);
            auVar14._8_4_ = fStack_158;
            auVar14._0_8_ = local_100;
            auVar14._12_4_ = uStack_154;
            local_f0 = CONCAT44(fStack_14c,local_150);
            auVar15._8_4_ = local_148;
            auVar15._0_8_ = local_f0;
            auVar15._12_4_ = uStack_144;
            lStack_f8 = auVar14._8_8_;
            lStack_e8 = auVar15._8_8_;
            bVar7 = local_138[3];
            local_e0 = (int)local_140;
            local_d8 = local_138;
            goto joined_r0x001a42c4;
          }
          while( true ) {
            if ((int)param_2[1] <= (int)lVar17) {
              return;
            }
            iVar19 = (int)param_2[1] + -1;
            *(int *)(param_2 + 1) = iVar19;
            plVar22 = (long *)(*param_2 + (long)iVar19 * 0x30);
            local_e0 = (int)plVar22[4];
            local_d8 = (byte *)((long)param_1 + (long)(int)plVar22[4] * 4 + *param_1);
            local_100 = *plVar22;
            lStack_f8 = plVar22[1];
            lStack_e8 = SUB168(*(undefined1 (*) [16])(plVar22 + 2),8);
            local_f0 = SUB168(*(undefined1 (*) [16])(plVar22 + 2),0);
            if ((local_d8[3] & 1) != 0) break;
LAB_001a4648:
            FUN_001a2520(param_3,&local_100);
          }
        }
        fVar26 = (float)local_d0;
        fVar31 = (float)uStack_c8;
        *(uint *)(param_3 + 0x1b4) = (uint)(fVar26 < fVar31);
        iVar19 = (int)param_2[1];
        uVar21 = *(uint *)((long)param_2 + 0xc);
        uVar25 = (ulong)(fVar26 >= fVar31);
        uVar1 = iVar19 + 1;
        if (iVar19 < (int)(uVar21 & 0x3fffffff)) {
          lVar24 = *param_2;
        }
        else {
          lVar24 = *param_2;
          if (0x3ffffffe < iVar19) {
            FUN_032bd0a8(uVar1);
            uVar21 = *(uint *)((long)param_2 + 0xc);
          }
          uVar21 = (uVar21 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar21) {
            uVar21 = 0x3fffffff;
          }
          uVar6 = uVar1;
          if ((int)uVar1 <= (int)uVar21) {
            uVar6 = uVar21;
          }
          lVar24 = FUN_032bd1d4(uVar27,uVar6,0x30,lVar24,iVar19,(uint *)((long)param_2 + 0xc));
          *param_2 = lVar24;
          iVar19 = (int)param_2[1];
        }
        *(uint *)(param_2 + 1) = uVar1;
        lVar28 = (&local_140)[uVar25 * 6 + -4];
        plVar22 = (long *)(lVar24 + (long)iVar19 * 0x30);
        uVar23 = (ulong)(fVar26 < fVar31);
        plVar22[1] = (&local_140)[uVar25 * 6 + -3];
        *plVar22 = lVar28;
        lVar24 = (&local_140)[uVar25 * 6 + -2];
        plVar22[3] = (&local_140)[uVar25 * 6 + -1];
        plVar22[2] = lVar24;
        *(int *)(plVar22 + 4) = (int)(&local_140)[uVar25 * 6];
        local_e0 = (int)(&local_140)[uVar23 * 6];
        lStack_f8 = (&local_140)[uVar23 * 6 + -3];
        local_100 = (&local_140)[uVar23 * 6 + -4];
        lStack_e8 = (&local_140)[uVar23 * 6 + -1];
        local_f0 = (&local_140)[uVar23 * 6 + -2];
        local_d8 = (byte *)(&local_140)[uVar23 * 6 + 1];
        bVar7 = local_d8[3];
      } while( true );
    }
  }
  return;
}


