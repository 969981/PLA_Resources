/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc44ec; name: FUN_02fc44ec
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fc44ec(long *param_1,long *param_2,long *param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  long lVar12;
  undefined *puVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  undefined1 (*pauVar23) [16];
  undefined8 *puVar24;
  undefined1 uVar25;
  ulong uVar26;
  byte *pbVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  ulong uVar31;
  long *plVar32;
  ulong *puVar33;
  float *pfVar34;
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar50;
  float fVar51;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  undefined1 auVar63 [16];
  undefined8 uVar64;
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  float fStack_18c;
  float afStack_188 [2];
  undefined8 local_180;
  ulong local_178;
  undefined8 local_170;
  byte *local_168;
  float local_160;
  float fStack_15c;
  float fStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  float fStack_14c;
  float local_148;
  undefined4 uStack_144;
  undefined8 local_140;
  byte *local_138;
  uint local_130;
  undefined1 local_12c;
  undefined2 local_128;
  undefined4 local_124;
  ulong uStack_120;
  undefined4 local_118;
  int local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  uint local_e8;
  long local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90 [8];
  undefined8 local_68;
  
  puVar13 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    lVar12 = param_2[1];
    fVar40 = *(float *)(param_3 + 2);
    auVar45 = *(undefined1 (*) [16])(param_1 + 2);
    uVar31 = param_1[5];
    lVar17 = param_1[4];
    auVar65._0_4_ = (auVar45._0_4_ - fVar40) * *(float *)(param_3 + 6);
    auVar65._4_4_ =
         (auVar45._4_4_ - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar65._8_4_ = (auVar45._8_4_ - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar65._12_4_ =
         (auVar45._12_4_ - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar43._0_4_ = *(float *)(param_3 + 6) * ((float)lVar17 - fVar40);
    auVar43._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         ((float)((ulong)lVar17 >> 0x20) - *(float *)((long)param_3 + 0x14));
    auVar43._8_4_ = *(float *)(param_3 + 7) * ((float)uVar31 - *(float *)(param_3 + 3));
    auVar43._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         ((float)(uVar31 >> 0x20) - *(float *)((long)param_3 + 0x1c));
    auVar63 = NEON_fmin(auVar65,auVar43,4);
    auVar43 = NEON_fmax(auVar65,auVar43,4);
    uVar55 = NEON_fmaxp(auVar63._0_8_,auVar63._0_8_,4);
    uVar56 = NEON_fmax(CONCAT44(auVar63._8_4_,auVar63._8_4_),uVar55,4);
    uVar55 = NEON_fminp(auVar43._0_8_,auVar43._0_8_,4);
    uVar55 = NEON_fmin(CONCAT44(auVar43._8_4_,auVar43._8_4_),uVar55,4);
    uVar56 = NEON_fmax(uVar56,0,4);
    uVar55 = NEON_fmin(uVar55,*(undefined8 *)(*(long *)(*param_3 + 0x28) + 0x10),4);
    if ((float)uVar56 <= (float)uVar55) {
      puVar33 = (ulong *)((ulong)&local_d0 | 4);
      uVar19 = 0;
      pbVar27 = (byte *)(*param_1 + (long)param_1);
      bVar3 = pbVar27[3];
joined_r0x02fc4614:
      do {
        uVar14 = (uint)(char)bVar3;
        if (-1 < (char)bVar3) goto LAB_02fc4948;
        while( true ) {
          uVar26 = (long)(int)uVar19 + 1;
          fVar35 = (float)lVar17;
          local_160 = auVar45._0_4_;
          fStack_14c = (float)((ulong)lVar17 >> 0x20);
          fStack_15c = auVar45._4_4_;
          local_148 = (float)uVar31;
          fStack_158 = auVar45._8_4_;
          local_170 = CONCAT44(local_170._4_4_,(int)uVar26);
          uVar14 = (int)uVar19 + ((uint)*(ushort *)(pbVar27 + 4) | (pbVar27[3] & 0x7f) << 0x10) * 2;
          uVar19 = (ulong)uVar14;
          local_140 = CONCAT44(local_140._4_4_,uVar14);
          local_168 = (byte *)((long)param_1 + uVar26 * 6 + *param_1);
          local_138 = (byte *)((long)param_1 + (long)(int)uVar14 * 6 + *param_1);
          fVar40 = (fVar35 - local_160) * 0.0044247787;
          fVar50 = (fStack_14c - fStack_15c) * 0.0044247787;
          fVar51 = (local_148 - fStack_158) * 0.0044247787;
          bVar6 = *local_168 >> 4;
          bVar3 = *local_168 & 0xf;
          bVar7 = local_168[1] >> 4;
          bVar8 = local_168[2] >> 4;
          fVar52 = local_160 + (float)(byte)(bVar6 * bVar6) * fVar40;
          fStack_18c = fStack_15c + (float)(byte)(bVar7 * bVar7) * fVar50;
          bVar6 = local_168[2] & 0xf;
          bVar7 = local_168[1] & 0xf;
          bVar9 = *local_138 >> 4;
          bVar1 = *local_138 & 0xf;
          bVar10 = local_138[1] >> 4;
          afStack_188[1] = 0.0;
          local_190._0_2_ = SUB42(fVar52,0);
          local_190._2_2_ = (undefined2)((uint)fVar52 >> 0x10);
          afStack_188[0] = fStack_158 + (float)(byte)(bVar8 * bVar8) * fVar51;
          bVar8 = local_138[2] >> 4;
          fVar61 = fVar35 - (float)(byte)(bVar3 * bVar3) * fVar40;
          fVar66 = fStack_14c - (float)(byte)(bVar7 * bVar7) * fVar50;
          local_180 = CONCAT44(fVar66,fVar61);
          fVar62 = local_148 - (float)(byte)(bVar6 * bVar6) * fVar51;
          local_178 = (ulong)(uint)fVar62;
          uStack_154 = 0;
          uStack_144 = 0;
          local_160 = local_160 + (float)(byte)(bVar9 * bVar9) * fVar40;
          fStack_15c = fStack_15c + (float)(byte)(bVar10 * bVar10) * fVar50;
          fStack_158 = fStack_158 + (float)(byte)(bVar8 * bVar8) * fVar51;
          fVar35 = fVar35 - (float)(byte)(bVar1 * bVar1) * fVar40;
          bVar3 = local_138[1] & 0xf;
          bVar6 = local_138[2] & 0xf;
          local_150._0_2_ = SUB42(fVar35,0);
          local_150._2_2_ = (undefined2)((uint)fVar35 >> 0x10);
          local_148 = local_148 - (float)(byte)(bVar6 * bVar6) * fVar51;
          fStack_14c = fStack_14c - (float)(byte)(bVar3 * bVar3) * fVar50;
          fVar40 = *(float *)(param_3 + 2);
          fVar50 = *(float *)((long)param_3 + 0x14);
          fVar51 = *(float *)(param_3 + 3);
          fVar42 = *(float *)((long)param_3 + 0x1c);
          auVar11._4_4_ = fStack_18c;
          auVar11._0_4_ = fVar52;
          auVar11._8_4_ = afStack_188[0];
          auVar11._12_4_ = 0;
          fVar41 = *(float *)(param_3 + 6);
          fVar53 = *(float *)((long)param_3 + 0x34);
          fVar54 = *(float *)(param_3 + 7);
          fVar58 = *(float *)((long)param_3 + 0x3c);
          auVar44._0_4_ = (fVar52 - fVar40) * fVar41;
          auVar44._4_4_ = (fStack_18c - fVar50) * fVar53;
          auVar44._8_4_ = (afStack_188[0] - fVar51) * fVar54;
          auVar44._12_4_ = (0.0 - fVar42) * fVar58;
          auVar57._0_4_ = fVar41 * (fVar61 - fVar40);
          auVar57._4_4_ = fVar53 * (fVar66 - fVar50);
          auVar57._8_4_ = fVar54 * (fVar62 - fVar51);
          auVar57._12_4_ = fVar58 * (0.0 - fVar42);
          auVar43 = NEON_fmin(auVar44,auVar57,4);
          auVar45 = NEON_fmax(auVar44,auVar57,4);
          uVar55 = NEON_fmaxp(auVar43._0_8_,auVar43._0_8_,4);
          uVar56 = NEON_fmax(CONCAT44(auVar43._8_4_,auVar43._8_4_),uVar55,4);
          uVar55 = NEON_fminp(auVar45._0_8_,auVar45._0_8_,4);
          uVar55 = NEON_fmin(CONCAT44(auVar45._8_4_,auVar45._8_4_),uVar55,4);
          uVar68 = NEON_fmax(uVar56,0,4);
          auVar45._4_4_ = fStack_15c;
          auVar45._0_4_ = local_160;
          auVar45._8_4_ = fStack_158;
          auVar45._12_4_ = 0;
          lVar17 = CONCAT44(fStack_14c,fVar35);
          fVar61 = fVar41 * (local_160 - fVar40);
          fVar62 = fVar53 * (fStack_15c - fVar50);
          fVar66 = fVar54 * (fStack_158 - fVar51);
          fVar67 = fVar58 * (0.0 - fVar42);
          auVar59._0_4_ = fVar41 * (fVar35 - fVar40);
          auVar59._4_4_ = fVar53 * (fStack_14c - fVar50);
          auVar59._8_4_ = fVar54 * (local_148 - fVar51);
          auVar59._12_4_ = fVar58 * (0.0 - fVar42);
          uVar56 = *(undefined8 *)(*(long *)(*param_3 + 0x28) + 0x10);
          uVar64 = NEON_fmin(uVar55,uVar56,4);
          fVar50 = (float)uVar68;
          auVar63._4_4_ = fVar62;
          auVar63._0_4_ = fVar61;
          auVar63._8_4_ = fVar66;
          auVar63._12_4_ = fVar67;
          auVar65 = NEON_fmin(auVar63,auVar59,4);
          uVar55 = NEON_fmaxp(auVar65._0_8_,auVar65._0_8_,4);
          auVar4._4_4_ = fVar62;
          auVar4._0_4_ = fVar61;
          auVar4._8_4_ = fVar66;
          auVar4._12_4_ = fVar67;
          auVar43 = NEON_fmax(auVar4,auVar59,4);
          uVar68 = NEON_fmax(CONCAT44(auVar65._8_4_,auVar65._8_4_),uVar55,4);
          uVar55 = NEON_fminp(auVar43._0_8_,auVar43._0_8_,4);
          uVar55 = NEON_fmin(CONCAT44(auVar43._8_4_,auVar43._8_4_),uVar55,4);
          uVar68 = NEON_fmax(uVar68,0,4);
          fVar40 = (float)uVar68;
          uVar55 = NEON_fmin(uVar55,uVar56,4);
          bVar3 = fVar50 <= (float)uVar64 | (fVar40 <= (float)uVar55) << 1;
          local_190 = fVar52;
          local_150 = fVar35;
          if (bVar3 == 1) break;
          if (bVar3 == 2) {
            uVar31 = (ulong)(uint)local_148;
            bVar3 = local_138[3];
            pbVar27 = local_138;
            goto joined_r0x02fc4614;
          }
          if (bVar3 == 3) {
            *(uint *)(param_3 + 8) = (uint)(fVar40 < fVar50);
            iVar18 = (int)param_2[1];
            lVar17 = *param_2;
            uVar31 = (ulong)(fVar40 >= fVar50);
            iVar15 = iVar18 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar18) {
              lVar17 = FUN_02fb5338(puVar13,iVar15,lVar17,iVar18,(long)param_2 + 0xc);
              *param_2 = lVar17;
              iVar18 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar15;
            uVar55 = *(undefined8 *)(&local_190 + uVar31 * 0xc);
            puVar22 = (undefined8 *)(lVar17 + (long)iVar18 * 0x30);
            puVar22[1] = *(undefined8 *)(afStack_188 + uVar31 * 0xc);
            *puVar22 = uVar55;
            uVar55 = (&local_180)[uVar31 * 6];
            uVar26 = (ulong)(fVar40 < fVar50);
            puVar22[3] = (&local_178)[uVar31 * 6];
            puVar22[2] = uVar55;
            *(undefined4 *)(puVar22 + 4) = *(undefined4 *)(&local_170 + uVar31 * 6);
            auVar45 = *(undefined1 (*) [16])(&local_190 + uVar26 * 0xc);
            uVar31 = (&local_178)[uVar26 * 6];
            lVar17 = (&local_180)[uVar26 * 6];
            uVar19 = (ulong)*(uint *)(&local_170 + uVar26 * 6);
            pbVar27 = (&local_168)[uVar26 * 6];
            bVar3 = pbVar27[3];
            goto joined_r0x02fc4614;
          }
          while( true ) {
            if ((int)param_2[1] <= (int)lVar12) {
              return;
            }
            iVar15 = (int)param_2[1] + -1;
            pauVar23 = (undefined1 (*) [16])(*param_2 + (long)iVar15 * 0x30);
            *(int *)(param_2 + 1) = iVar15;
            uVar19 = (ulong)*(int *)pauVar23[2];
            auVar45 = *pauVar23;
            uVar31 = *(ulong *)(pauVar23[1] + 8);
            lVar17 = *(long *)pauVar23[1];
            pbVar27 = (byte *)((long)param_1 + uVar19 * 6 + *param_1);
            uVar14 = (uint)(char)pbVar27[3];
            if ((int)uVar14 < 0) break;
LAB_02fc4948:
            uVar2 = (uint)*(ushort *)(pbVar27 + 4) | (uVar14 & 0xff) << 0x10;
            plVar32 = (long *)*param_3;
            (**(code **)(**(long **)(*plVar32 + 0x50) + 0x68))
                      (*(long **)(*plVar32 + 0x50),uVar2,&local_c0);
            uVar14 = (**(code **)(**(long **)(*plVar32 + 0x50) + 0x78))
                               (*(long **)(*plVar32 + 0x50),uVar2);
            uVar14 = uVar14 & 7;
            iVar15 = (**(code **)(**(long **)(*plVar32 + 0x50) + 0x20))();
            uVar16 = (**(code **)(**(long **)(*plVar32 + 0x50) + 0x70))
                               (*(long **)(*plVar32 + 0x50),uVar2);
            uVar31 = 0;
            uVar19 = 1;
            pfVar34 = &local_a0;
            if (iVar15 <= (int)uVar2 && uVar14 != 7) {
              uVar19 = 2;
            }
            do {
              iVar15 = *(int *)(plVar32[3] + 0x1c);
              uVar5 = ((uVar2 << 1 | (uint)uVar31) + 1 <<
                      (ulong)(-((uint)*(byte *)(*plVar32 + 0x1c) + iVar15) & 0x1f)) - 1 |
                      (&DAT_03aa74b0)[iVar15] & *(uint *)(plVar32[3] + 0x18);
              local_d0 = *(undefined8 *)plVar32[4];
              uStack_c8 = ((undefined8 *)plVar32[4])[1];
              if (*(long *)plVar32[2] == 0) {
LAB_02fc4d98:
                local_68 = *(undefined8 *)(plVar32[5] + 0x10);
                if (uVar14 == 7) {
                  iVar15 = FUN_001d4650(plVar32[2] + 0x30,&local_c0,
                                        *(undefined4 *)(plVar32[2] + 0x60),&local_68,&local_110);
                }
                else {
                  iVar15 = FUN_001d42c0(param_3 + 2,&local_c0,pfVar34 + -4,pfVar34,
                                        *(undefined4 *)(plVar32[2] + 0x60),&local_68,&local_110);
                }
                if (iVar15 != 0) {
                  fVar40 = (float)local_110;
                  fVar50 = (float)((ulong)local_110 >> 0x20);
                  fVar51 = (float)uStack_108;
                  local_170._4_4_ = (undefined4)((ulong)local_170 >> 0x20);
                  local_170._0_4_ = 0x7f7fffee;
                  fStack_158 = -NAN;
                  local_180 = 0;
                  local_178 = 0;
                  local_190._0_2_ = 0;
                  local_190._2_2_ = 0;
                  fStack_18c = 0.0;
                  afStack_188[0] = 0.0;
                  afStack_188[1] = 0.0;
                  local_168 = (byte *)0xffffffffffffffff;
                  uVar21 = 0xffffff;
                  local_160 = 2.3509886e-38;
                  uVar55 = CONCAT44(fVar40 * fVar40 + fVar50 * fVar50 + fVar51 * fVar51,
                                    fVar40 * fVar40 + fVar50 * fVar50 + fVar51 * fVar51);
                  uVar56 = NEON_frsqrte(uVar55,4);
                  local_114 = 0;
                  local_118 = 1;
                  fVar42 = (float)uVar56;
                  fVar41 = (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frsqrts(uVar55,CONCAT44(fVar41 * fVar41,fVar42 * fVar42),4);
                  fVar42 = fVar42 * (float)uVar56;
                  fVar41 = fVar41 * (float)((ulong)uVar56 >> 0x20);
                  uVar55 = NEON_frsqrts(uVar55,CONCAT44(fVar41 * fVar41,fVar42 * fVar42),4);
                  fVar42 = (float)uVar55 * fVar42;
                  fVar41 = (float)((ulong)uVar55 >> 0x20) * fVar41;
                  local_110 = CONCAT44(fVar50 * fVar41,fVar40 * fVar42);
                  uStack_108 = CONCAT44((float)((ulong)uStack_108 >> 0x20) * fVar41,fVar51 * fVar42)
                  ;
                  lVar17 = plVar32[2];
                  local_150._0_2_ = *(undefined2 *)(lVar17 + 0x10);
                  uStack_144 = *(undefined4 *)(lVar17 + 0x1c);
                  fStack_14c = (float)*(undefined8 *)(lVar17 + 0x14);
                  local_148 = (float)((ulong)*(undefined8 *)(lVar17 + 0x14) >> 0x20);
                  uStack_154 = CONCAT31((int3)((uint)uStack_154 >> 8),0xf);
                  lVar20 = *(long *)plVar32[3];
                  if (lVar20 == 0) {
                    local_140 = 0xffffffffffffffff;
                  }
                  else {
                    local_140 = *(undefined8 *)(lVar20 + 0xb0);
                    uVar21 = *(undefined4 *)(lVar20 + 0x50);
                  }
                  local_138 = (byte *)CONCAT44((int)((ulong)local_138 >> 0x20),uVar21);
                  local_128 = (undefined2)local_d0;
                  local_124 = (undefined4)*puVar33;
                  uStack_120 = *puVar33 >> 0x20;
                  local_12c = *(undefined1 *)(lVar17 + 0x20);
                  fVar40 = (float)((ulong)local_68 >> 0x20);
                  auVar45 = *(undefined1 (*) [16])(lVar17 + 0x30);
                  local_1a0 = CONCAT44(auVar45._4_4_ + fVar40 * *(float *)(lVar17 + 0x44),
                                       auVar45._0_4_ + (float)local_68 * *(float *)(lVar17 + 0x40));
                  uStack_198 = CONCAT44(auVar45._12_4_ + fVar40 * *(float *)(lVar17 + 0x4c),
                                        auVar45._8_4_ + (float)local_68 * *(float *)(lVar17 + 0x48))
                  ;
                  local_130 = uVar5;
                  FUN_032cc384(&local_180,((long *)plVar32[3])[4],&local_110);
                  FUN_032cc3fc(&local_190,*(undefined8 *)(plVar32[3] + 0x20),&local_1a0);
                  local_170 = CONCAT44(local_170._4_4_,(int)local_68);
                  local_114 = iVar15;
                  (**(code **)(*(long *)plVar32[5] + 0x28))((long *)plVar32[5],&local_190);
                }
              }
              else {
                lVar17 = *(long *)(plVar32[1] + 0x10);
                fVar40 = (float)local_c0;
                fVar50 = (float)((ulong)local_c0 >> 0x20);
                fVar51 = (float)uStack_b8;
                fVar42 = (float)((ulong)uStack_b8 >> 0x20);
                if (uVar14 == 7) {
                  iVar15 = *(int *)(lVar17 + 0x40);
                  if (iVar15 == 0) {
                    puVar22 = (undefined8 *)0x0;
                  }
                  else {
                    puVar22 = (undefined8 *)((long)iVar15 + lVar17 + 0x40);
                  }
                  iVar15 = *(int *)(lVar17 + 0x48);
                  if (iVar15 == 0) {
                    puVar24 = (undefined8 *)0x0;
                  }
                  else {
                    puVar24 = (undefined8 *)((long)iVar15 + lVar17 + 0x48);
                  }
                  auVar36._0_4_ = local_b0 - fVar40;
                  auVar36._4_4_ = fStack_ac - fVar50;
                  auVar36._8_4_ = fStack_a8 - fVar51;
                  auVar36._12_4_ = fStack_a4 - fVar42;
                  auVar46._0_4_ = local_a0 - fVar40;
                  auVar46._4_4_ = fStack_9c - fVar50;
                  auVar46._8_4_ = fStack_98 - fVar51;
                  auVar46._12_4_ = fStack_94 - fVar42;
                  auVar43 = NEON_ext(auVar46,auVar46,4,1);
                  auVar45 = NEON_ext(auVar36,auVar36,4,1);
                  uVar25 = 3;
                  uVar21 = 4;
                  fVar41 = auVar36._0_4_ * auVar43._0_4_ - auVar46._0_4_ * auVar45._0_4_;
                  auVar47._0_8_ =
                       CONCAT44(auVar36._4_4_ * auVar43._4_4_ - auVar46._4_4_ * auVar45._4_4_,fVar41
                               );
                  auVar47._8_4_ = auVar36._8_4_ * auVar46._0_4_ - auVar46._8_4_ * auVar36._0_4_;
                  auVar47._12_4_ = auVar36._12_4_ * auVar46._4_4_ - auVar46._12_4_ * auVar36._4_4_;
                  auVar45 = NEON_ext(auVar47,auVar47,4,1);
                  fVar53 = auVar45._0_4_ * auVar45._0_4_;
                  fVar58 = auVar45._4_4_ * auVar45._4_4_;
                  auVar37._0_8_ = auVar45._0_8_;
                  auVar37._8_8_ = auVar47._0_8_;
                  fVar54 = fVar53 + fVar58 + fVar41 * fVar41;
                  fVar53 = fVar53 + fVar58 + fVar41 * fVar41;
                  uVar55 = CONCAT44(fVar53,fVar54);
                  uVar56 = NEON_frsqrte(uVar55,4);
                  fVar41 = (float)uVar56;
                  fVar58 = (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frsqrts(uVar55,CONCAT44(fVar58 * fVar58,fVar41 * fVar41),4);
                  fVar41 = fVar41 * (float)uVar56;
                  fVar58 = fVar58 * (float)((ulong)uVar56 >> 0x20);
                  uVar55 = NEON_frsqrts(uVar55,CONCAT44(fVar58 * fVar58,fVar41 * fVar41),4);
                  uVar56 = CONCAT44(-(uint)(fVar53 <= 0.0),-(uint)(fVar54 <= 0.0));
                  pfVar28 = &local_b0;
                  pfVar29 = local_90;
                  pfVar30 = &local_a0;
                }
                else {
                  iVar15 = *(int *)(lVar17 + 0x40);
                  if (iVar15 == 0) {
                    puVar22 = (undefined8 *)0x0;
                  }
                  else {
                    puVar22 = (undefined8 *)((long)iVar15 + lVar17 + 0x40);
                  }
                  iVar15 = *(int *)(lVar17 + 0x48);
                  if (iVar15 == 0) {
                    puVar24 = (undefined8 *)0x0;
                  }
                  else {
                    puVar24 = (undefined8 *)((long)iVar15 + lVar17 + 0x48);
                  }
                  pfVar28 = pfVar34 + -4;
                  uVar25 = 0;
                  auVar48._0_4_ = *pfVar28 - fVar40;
                  auVar48._4_4_ = pfVar34[-3] - fVar50;
                  auVar48._8_4_ = pfVar34[-2] - fVar51;
                  auVar48._12_4_ = pfVar34[-1] - fVar42;
                  auVar45 = NEON_ext(auVar48,auVar48,4,1);
                  auVar38._0_4_ = *pfVar34 - fVar40;
                  auVar38._4_4_ = pfVar34[1] - fVar50;
                  auVar38._8_4_ = pfVar34[2] - fVar51;
                  auVar38._12_4_ = pfVar34[3] - fVar42;
                  auVar43 = NEON_ext(auVar38,auVar38,4,1);
                  uVar21 = 3;
                  fVar41 = auVar48._0_4_ * auVar43._0_4_ - auVar38._0_4_ * auVar45._0_4_;
                  auVar49._0_8_ =
                       CONCAT44(auVar48._4_4_ * auVar43._4_4_ - auVar38._4_4_ * auVar45._4_4_,fVar41
                               );
                  auVar49._8_4_ = auVar48._8_4_ * auVar38._0_4_ - auVar38._8_4_ * auVar48._0_4_;
                  auVar49._12_4_ = auVar48._12_4_ * auVar38._4_4_ - auVar38._12_4_ * auVar48._4_4_;
                  auVar45 = NEON_ext(auVar49,auVar49,4,1);
                  fVar54 = auVar45._0_4_ * auVar45._0_4_;
                  fVar58 = auVar45._4_4_ * auVar45._4_4_;
                  auVar37._8_8_ = auVar49._0_8_;
                  auVar37._0_8_ = auVar45._0_8_;
                  fVar53 = fVar54 + fVar58 + fVar41 * fVar41;
                  fVar54 = fVar54 + fVar58 + fVar41 * fVar41;
                  uVar55 = CONCAT44(fVar54,fVar53);
                  uVar56 = NEON_frsqrte(uVar55,4);
                  fVar41 = (float)uVar56;
                  fVar58 = (float)((ulong)uVar56 >> 0x20);
                  uVar56 = NEON_frsqrts(uVar55,CONCAT44(fVar58 * fVar58,fVar41 * fVar41),4);
                  fVar41 = fVar41 * (float)uVar56;
                  fVar58 = fVar58 * (float)((ulong)uVar56 >> 0x20);
                  uVar56 = CONCAT44(-(uint)(fVar54 <= 0.0),-(uint)(fVar53 <= 0.0));
                  uVar55 = NEON_frsqrts(uVar55,CONCAT44(fVar58 * fVar58,fVar41 * fVar41),4);
                  pfVar29 = pfVar34;
                  pfVar30 = pfVar34;
                }
                fVar41 = (float)uVar55 * fVar41;
                fVar58 = (float)((ulong)uVar55 >> 0x20) * fVar58;
                auVar60._0_4_ = fVar40 * auVar37._0_4_;
                auVar60._4_4_ = fVar50 * auVar37._4_4_;
                auVar60._8_4_ = fVar51 * auVar37._8_4_;
                auVar60._12_4_ = fVar42 * auVar37._12_4_;
                fVar42 = (float)CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                         ~(byte)((ulong)uVar56 >> 0x18),
                                         CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                                  ~(byte)((ulong)uVar56 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar41 >> 8) &
                                                           ~(byte)((ulong)uVar56 >> 8),
                                                           SUB41(fVar41,0) & ~(byte)uVar56)));
                auVar45 = NEON_ext(auVar60,auVar60,8,1);
                *puVar22 = local_c0;
                *(float *)(puVar22 + 1) = fVar51;
                uVar55 = *(undefined8 *)(pfVar28 + 2);
                *(undefined8 *)((long)puVar22 + 0xc) = *(undefined8 *)pfVar28;
                *(int *)((long)puVar22 + 0x14) = (int)uVar55;
                uVar55 = *(undefined8 *)(pfVar30 + 2);
                puVar22[3] = *(undefined8 *)pfVar30;
                *(int *)(puVar22 + 4) = (int)uVar55;
                uVar55 = *(undefined8 *)(pfVar29 + 2);
                fVar40 = auVar37._0_4_ * fVar42;
                fVar51 = (float)(CONCAT17((byte)((uint)fVar58 >> 0x18) &
                                          ~(byte)((ulong)uVar56 >> 0x38),
                                          CONCAT16((byte)((uint)fVar58 >> 0x10) &
                                                   ~(byte)((ulong)uVar56 >> 0x30),
                                                   CONCAT15((byte)((uint)fVar58 >> 8) &
                                                            ~(byte)((ulong)uVar56 >> 0x28),
                                                            CONCAT14(SUB41(fVar58,0) &
                                                                     ~(byte)((ulong)uVar56 >> 0x20),
                                                                     fVar42)))) >> 0x20);
                fVar50 = auVar37._4_4_ * fVar51;
                auVar39._0_8_ = CONCAT44(fVar50,fVar40);
                auVar39._8_4_ = auVar37._8_4_ * fVar42;
                auVar39._12_4_ = -(auVar60._0_4_ + auVar60._4_4_ + auVar45._0_4_) * fVar51;
                *(undefined8 *)((long)puVar22 + 0x24) = *(undefined8 *)pfVar29;
                *(int *)((long)puVar22 + 0x2c) = (int)uVar55;
                *(undefined4 *)(lVar17 + 0x44) = uVar21;
                iVar15 = *(int *)(lVar17 + 0x58);
                lVar20 = 0;
                if (iVar15 != 0) {
                  lVar20 = (long)iVar15 + lVar17 + 0x58;
                }
                *(undefined1 *)(lVar20 + 3) = uVar25;
                *(undefined1 *)(lVar20 + 7) = uVar25;
                uVar55 = auVar39._8_8_;
                puVar24[1] = uVar55;
                *puVar24 = auVar39._0_8_;
                puVar24[3] = CONCAT44(-auVar39._12_4_,-auVar39._8_4_);
                puVar24[2] = CONCAT44(-fVar50,-fVar40);
                puVar24[5] = uVar55;
                puVar24[4] = auVar39._0_8_;
                puVar24[7] = uVar55;
                puVar24[6] = auVar39._0_8_;
                *(undefined4 *)(lVar17 + 0x20) = *(undefined4 *)(*plVar32 + 0x20);
                (**(code **)(**(long **)plVar32[2] + 0x40))
                          (*(long **)plVar32[2],uVar16,1,*(undefined8 *)plVar32[3],
                           ((undefined8 *)plVar32[3])[1],*plVar32,uVar5,lVar17,&local_d0);
                lVar20 = plVar32[2];
                if (*(long *)(lVar20 + 8) == 0) goto LAB_02fc4d98;
                local_190._0_2_ = *(undefined2 *)(lVar20 + 0x10);
                uVar21 = *(undefined4 *)(lVar20 + 0x1c);
                *(undefined8 *)((ulong)&local_190 | 4) = *(undefined8 *)(lVar20 + 0x14);
                *(undefined4 *)((undefined8 *)((ulong)&local_190 | 4) + 1) = uVar21;
                local_180 = 0;
                local_178 = 0;
                local_170 = 0;
                local_168 = (byte *)CONCAT44(local_168._4_4_,0xffffffff);
                local_110 = CONCAT62(local_110._2_6_,(undefined2)local_d0);
                uVar26 = *puVar33;
                local_160 = 0.0;
                fStack_15c = 0.0;
                *(int *)((ulong *)((ulong)&local_110 | 4) + 1) = (int)puVar33[1];
                *(ulong *)((ulong)&local_110 | 4) = uVar26;
                local_100 = *(undefined8 *)plVar32[3];
                local_f8 = ((undefined8 *)plVar32[3])[1];
                local_f0 = *plVar32;
                local_e8 = uVar5;
                local_e0 = lVar17;
                uVar26 = (**(code **)(**(long **)(lVar20 + 8) + 0x40))
                                   (*(long **)(lVar20 + 8),1,1,&local_190,&local_110);
                if ((uVar26 & 1) != 0) goto LAB_02fc4d98;
              }
              uVar31 = uVar31 + 1;
              pfVar34 = pfVar34 + 4;
            } while (uVar31 < uVar19);
          }
        }
        uVar19 = uVar26 & 0xffffffff;
        bVar3 = local_168[3];
        pbVar27 = local_168;
        lVar17 = local_180;
        uVar31 = local_178;
        auVar45 = auVar11;
      } while( true );
    }
  }
  return;
}


