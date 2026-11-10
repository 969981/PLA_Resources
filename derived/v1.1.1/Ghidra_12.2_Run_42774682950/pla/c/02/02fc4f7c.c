/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fc4f7c; name: FUN_02fc4f7c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02fc4f7c(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  uint uVar6;
  byte bVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined1 auVar16 [16];
  long lVar17;
  undefined *puVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  long *plVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined1 (*pauVar30) [16];
  ulong uVar31;
  byte *pbVar32;
  undefined8 *puVar33;
  undefined1 uVar34;
  float *pfVar35;
  undefined4 uVar36;
  float *pfVar37;
  float *pfVar38;
  float *pfVar39;
  long *plVar40;
  byte *pbVar41;
  byte *pbVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  float fVar54;
  float fVar55;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  undefined2 local_1a0 [8];
  undefined8 local_190;
  undefined8 local_188;
  long local_180;
  uint local_178;
  long local_170;
  undefined2 local_168 [8];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  float fStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 local_108;
  byte *local_100 [2];
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  byte *pbStack_c8;
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
  
  puVar18 = PTR_PTR_0434a080;
  if ((int)param_1[1] != 0) {
    auVar58 = *(undefined1 (*) [16])(param_1 + 2);
    pbVar42 = (byte *)param_1[5];
    pbVar41 = (byte *)param_1[4];
    auVar77._0_4_ =
         ((auVar58._0_4_ - *(float *)(param_3 + 8)) - *(float *)(param_3 + 2)) *
         *(float *)(param_3 + 6);
    auVar77._4_4_ =
         ((auVar58._4_4_ - *(float *)((long)param_3 + 0x44)) - *(float *)((long)param_3 + 0x14)) *
         *(float *)((long)param_3 + 0x34);
    auVar77._8_4_ =
         ((auVar58._8_4_ - *(float *)(param_3 + 9)) - *(float *)(param_3 + 3)) *
         *(float *)(param_3 + 7);
    auVar77._12_4_ =
         ((auVar58._12_4_ - *(float *)((long)param_3 + 0x4c)) - *(float *)((long)param_3 + 0x1c)) *
         *(float *)((long)param_3 + 0x3c);
    auVar49._0_4_ =
         *(float *)(param_3 + 6) *
         ((SUB84(pbVar41,0) + *(float *)(param_3 + 8)) - *(float *)(param_3 + 2));
    auVar49._4_4_ =
         *(float *)((long)param_3 + 0x34) *
         (((float)((ulong)pbVar41 >> 0x20) + *(float *)((long)param_3 + 0x44)) -
         *(float *)((long)param_3 + 0x14));
    auVar49._8_4_ =
         *(float *)(param_3 + 7) *
         ((SUB84(pbVar42,0) + *(float *)(param_3 + 9)) - *(float *)(param_3 + 3));
    auVar49._12_4_ =
         *(float *)((long)param_3 + 0x3c) *
         (((float)((ulong)pbVar42 >> 0x20) + *(float *)((long)param_3 + 0x4c)) -
         *(float *)((long)param_3 + 0x1c));
    auVar64 = NEON_fmin(auVar77,auVar49,4);
    auVar49 = NEON_fmax(auVar77,auVar49,4);
    uVar56 = NEON_fmaxp(auVar64._0_8_,auVar64._0_8_,4);
    uVar57 = NEON_fmax(CONCAT44(auVar64._8_4_,auVar64._8_4_),uVar56,4);
    uVar56 = NEON_fminp(auVar49._0_8_,auVar49._0_8_,4);
    uVar56 = NEON_fmin(CONCAT44(auVar49._8_4_,auVar49._8_4_),uVar56,4);
    uVar57 = NEON_fmax(uVar57,0,4);
    uVar56 = NEON_fmin(uVar56,*(undefined8 *)(*(long *)(*param_3 + 0x80) + 0x10),4);
    if ((float)uVar57 <= (float)uVar56) {
      lVar17 = param_2[1];
      NEON_fmov(0x3f800000,4);
      uVar27 = 0;
      pbVar32 = (byte *)(*param_1 + (long)param_1);
      bVar7 = pbVar32[3];
joined_r0x02fc50a8:
      do {
        uVar28 = (uint)(char)bVar7;
        if (-1 < (char)bVar7) goto LAB_02fc53f0;
        while( true ) {
          uVar31 = (long)(int)uVar27 + 1;
          local_e0 = SUB84(pbVar41,0);
          local_f0 = auVar58._0_4_;
          fStack_dc = (float)((ulong)pbVar41 >> 0x20);
          fStack_ec = auVar58._4_4_;
          fStack_d8 = SUB84(pbVar42,0);
          fStack_e8 = auVar58._8_4_;
          local_100[0] = (byte *)CONCAT44(local_100[0]._4_4_,(int)uVar31);
          uVar28 = (int)uVar27 + ((uint)*(ushort *)(pbVar32 + 4) | (pbVar32[3] & 0x7f) << 0x10) * 2;
          uVar27 = (ulong)uVar28;
          local_d0 = CONCAT44(local_d0._4_4_,uVar28);
          local_100[1] = (byte *)((long)param_1 + uVar31 * 6 + *param_1);
          pbStack_c8 = (byte *)((long)param_1 + (long)(int)uVar28 * 6 + *param_1);
          fVar47 = (local_e0 - local_f0) * 0.0044247787;
          fVar54 = (fStack_dc - fStack_ec) * 0.0044247787;
          fVar55 = (fStack_d8 - fStack_e8) * 0.0044247787;
          bVar12 = *local_100[1] >> 4;
          bVar7 = *local_100[1] & 0xf;
          bVar13 = local_100[1][1] >> 4;
          bVar14 = local_100[1][2] >> 4;
          local_120._4_4_ = fStack_ec + (float)(byte)(bVar13 * bVar13) * fVar54;
          bVar13 = local_100[1][2] & 0xf;
          bVar3 = local_100[1][1] & 0xf;
          bVar15 = *pbStack_c8 >> 4;
          bVar4 = *pbStack_c8 & 0xf;
          uStack_114 = 0;
          local_120._0_4_ = local_f0 + (float)(byte)(bVar12 * bVar12) * fVar47;
          fStack_118 = fStack_e8 + (float)(byte)(bVar14 * bVar14) * fVar55;
          bVar12 = pbStack_c8[1] >> 4;
          fVar61 = local_e0 - (float)(byte)(bVar7 * bVar7) * fVar47;
          fVar71 = fStack_dc - (float)(byte)(bVar3 * bVar3) * fVar54;
          local_110 = (byte *)CONCAT44(fVar71,fVar61);
          fVar62 = fStack_d8 - (float)(byte)(bVar13 * bVar13) * fVar55;
          local_108 = (byte *)(ulong)(uint)fVar62;
          bVar7 = pbStack_c8[2] >> 4;
          uStack_d4 = 0;
          local_f0 = local_f0 + (float)(byte)(bVar15 * bVar15) * fVar47;
          fStack_ec = fStack_ec + (float)(byte)(bVar12 * bVar12) * fVar54;
          fStack_e8 = fStack_e8 + (float)(byte)(bVar7 * bVar7) * fVar55;
          local_e0 = local_e0 - (float)(byte)(bVar4 * bVar4) * fVar47;
          bVar7 = pbStack_c8[1] & 0xf;
          bVar13 = pbStack_c8[2] & 0xf;
          fStack_dc = fStack_dc - (float)(byte)(bVar7 * bVar7) * fVar54;
          fStack_d8 = fStack_d8 - (float)(byte)(bVar13 * bVar13) * fVar55;
          auVar16._4_4_ = local_120._4_4_;
          auVar16._0_4_ = (float)local_120;
          auVar16._8_4_ = fStack_118;
          auVar16._12_4_ = 0;
          fVar47 = *(float *)(param_3 + 8);
          fVar54 = *(float *)((long)param_3 + 0x44);
          fVar55 = *(float *)(param_3 + 9);
          fVar48 = *(float *)((long)param_3 + 0x4c);
          auVar58._4_4_ = fStack_ec;
          auVar58._0_4_ = local_f0;
          auVar58._8_4_ = fStack_e8;
          auVar58._12_4_ = 0;
          pbVar41 = (byte *)CONCAT44(fStack_dc,local_e0);
          uVar76 = *(undefined8 *)(*(long *)(*param_3 + 0x80) + 0x10);
          fVar72 = (float)param_3[2];
          fVar73 = (float)((ulong)param_3[2] >> 0x20);
          fVar74 = (float)param_3[3];
          fVar75 = (float)((ulong)param_3[3] >> 0x20);
          fVar66 = (float)param_3[6];
          fVar61 = fVar66 * ((fVar47 + fVar61) - fVar72);
          fVar67 = (float)((ulong)param_3[6] >> 0x20);
          fVar71 = fVar67 * ((fVar54 + fVar71) - fVar73);
          fVar68 = (float)param_3[7];
          fVar62 = fVar68 * ((fVar55 + fVar62) - fVar74);
          fVar70 = (float)((ulong)param_3[7] >> 0x20);
          fVar69 = fVar70 * ((fVar48 + 0.0) - fVar75);
          auVar65._0_4_ = (((float)local_120 - fVar47) - fVar72) * fVar66;
          auVar65._4_4_ = ((local_120._4_4_ - fVar54) - fVar73) * fVar67;
          auVar65._8_4_ = ((fStack_118 - fVar55) - fVar74) * fVar68;
          auVar65._12_4_ = ((0.0 - fVar48) - fVar75) * fVar70;
          auVar59._0_4_ = fVar66 * ((fVar47 + local_e0) - fVar72);
          auVar59._4_4_ = fVar67 * ((fVar54 + fStack_dc) - fVar73);
          auVar59._8_4_ = fVar68 * ((fVar55 + fStack_d8) - fVar74);
          auVar59._12_4_ = fVar70 * ((fVar48 + 0.0) - fVar75);
          auVar64._4_4_ = fVar71;
          auVar64._0_4_ = fVar61;
          auVar64._8_4_ = fVar62;
          auVar64._12_4_ = fVar69;
          auVar77 = NEON_fmin(auVar65,auVar64,4);
          auVar9._4_4_ = fVar71;
          auVar9._0_4_ = fVar61;
          auVar9._8_4_ = fVar62;
          auVar9._12_4_ = fVar69;
          auVar49 = NEON_fmax(auVar65,auVar9,4);
          uVar56 = NEON_fmaxp(auVar77._0_8_,auVar77._0_8_,4);
          uVar56 = NEON_fmax(CONCAT44(auVar77._8_4_,auVar77._8_4_),uVar56,4);
          uVar57 = NEON_fminp(auVar49._0_8_,auVar49._0_8_,4);
          uVar57 = NEON_fmin(CONCAT44(auVar49._8_4_,auVar49._8_4_),uVar57,4);
          uVar56 = NEON_fmax(uVar56,0,4);
          fVar66 = ((local_f0 - fVar47) - fVar72) * fVar66;
          fVar67 = ((fStack_ec - fVar54) - fVar73) * fVar67;
          fVar68 = ((fStack_e8 - fVar55) - fVar74) * fVar68;
          fVar70 = ((0.0 - fVar48) - fVar75) * fVar70;
          uVar57 = NEON_fmin(uVar57,uVar76,4);
          fVar54 = (float)uVar56;
          auVar10._4_4_ = fVar67;
          auVar10._0_4_ = fVar66;
          auVar10._8_4_ = fVar68;
          auVar10._12_4_ = fVar70;
          auVar77 = NEON_fmin(auVar10,auVar59,4);
          auVar11._4_4_ = fVar67;
          auVar11._0_4_ = fVar66;
          auVar11._8_4_ = fVar68;
          auVar11._12_4_ = fVar70;
          auVar49 = NEON_fmax(auVar11,auVar59,4);
          uVar56 = NEON_fmaxp(auVar77._0_8_,auVar77._0_8_,4);
          uVar63 = NEON_fmax(CONCAT44(auVar77._8_4_,auVar77._8_4_),uVar56,4);
          uVar56 = NEON_fminp(auVar49._0_8_,auVar49._0_8_,4);
          uVar56 = NEON_fmin(CONCAT44(auVar49._8_4_,auVar49._8_4_),uVar56,4);
          uVar63 = NEON_fmax(uVar63,0,4);
          fVar47 = (float)uVar63;
          uVar56 = NEON_fmin(uVar56,uVar76,4);
          bVar7 = fVar54 <= (float)uVar57 | (fVar47 <= (float)uVar56) << 1;
          if (bVar7 == 1) break;
          if (bVar7 == 2) {
            pbVar42 = (byte *)(ulong)(uint)fStack_d8;
            bVar7 = pbStack_c8[3];
            pbVar32 = pbStack_c8;
            goto joined_r0x02fc50a8;
          }
          if (bVar7 == 3) {
            *(uint *)(param_3 + 10) = (uint)(fVar47 < fVar54);
            iVar26 = (int)param_2[1];
            lVar24 = *param_2;
            uVar27 = (ulong)(fVar47 >= fVar54);
            iVar20 = iVar26 + 1;
            if ((int)(*(uint *)((long)param_2 + 0xc) & 0x3fffffff) <= iVar26) {
              lVar24 = FUN_02fb5338(puVar18,iVar20,lVar24,iVar26,(long)param_2 + 0xc);
              *param_2 = lVar24;
              iVar26 = (int)param_2[1];
            }
            *(int *)(param_2 + 1) = iVar20;
            pbVar41 = local_100[uVar27 * 6 + -4];
            puVar29 = (undefined8 *)(lVar24 + (long)iVar26 * 0x30);
            puVar29[1] = local_100[uVar27 * 6 + -3];
            *puVar29 = pbVar41;
            pbVar41 = local_100[uVar27 * 6 + -2];
            uVar31 = (ulong)(fVar47 < fVar54);
            puVar29[3] = local_100[uVar27 * 6 + -1];
            puVar29[2] = pbVar41;
            *(undefined4 *)(puVar29 + 4) = *(undefined4 *)(local_100 + uVar27 * 6);
            auVar58 = *(undefined1 (*) [16])(local_100 + uVar31 * 6 + -4);
            pbVar42 = local_100[uVar31 * 6 + -1];
            pbVar41 = local_100[uVar31 * 6 + -2];
            uVar27 = (ulong)*(uint *)(local_100 + uVar31 * 6);
            pbVar32 = local_100[uVar31 * 6 + 1];
            bVar7 = pbVar32[3];
            goto joined_r0x02fc50a8;
          }
LAB_02fc58a8:
          if ((int)param_2[1] <= (int)lVar17) {
            return;
          }
          iVar20 = (int)param_2[1] + -1;
          pauVar30 = (undefined1 (*) [16])(*param_2 + (long)iVar20 * 0x30);
          *(int *)(param_2 + 1) = iVar20;
          uVar27 = (ulong)*(int *)pauVar30[2];
          auVar58 = *pauVar30;
          pbVar42 = *(byte **)(pauVar30[1] + 8);
          pbVar41 = *(byte **)pauVar30[1];
          pbVar32 = (byte *)((long)param_1 + uVar27 * 6 + *param_1);
          uVar28 = (uint)(char)pbVar32[3];
          if (-1 < (int)uVar28) {
LAB_02fc53f0:
            uVar28 = (uint)*(ushort *)(pbVar32 + 4) | (uVar28 & 0xff) << 0x10;
            plVar40 = (long *)*param_3;
            (**(code **)(**(long **)(*plVar40 + 0x50) + 0x68))
                      (*(long **)(*plVar40 + 0x50),uVar28,&local_c0);
            uVar19 = (**(code **)(**(long **)(*plVar40 + 0x50) + 0x78))
                               (*(long **)(*plVar40 + 0x50),uVar28);
            iVar20 = (**(code **)(**(long **)(*plVar40 + 0x50) + 0x20))();
            uVar21 = (**(code **)(**(long **)(*plVar40 + 0x50) + 0x70))
                               (*(long **)(*plVar40 + 0x50),uVar28);
            uVar27 = 0;
            lVar24 = *(long *)(plVar40[10] + 0x10);
            *(undefined4 *)(lVar24 + 0x20) = *(undefined4 *)(*plVar40 + 0x20);
            piVar1 = (int *)(lVar24 + 0x40);
            piVar2 = (int *)(lVar24 + 0x48);
            uVar31 = 1;
            if (iVar20 <= (int)uVar28 && (uVar19 & 7) != 7) {
              uVar31 = 2;
            }
            pfVar39 = &local_a0;
            do {
              iVar20 = (uVar28 << 1 | (uint)uVar27) + 1;
              bVar7 = *(byte *)(*plVar40 + 0x1c);
              uVar6 = *(uint *)(plVar40[0xe] + 0x18);
              iVar26 = *(int *)(plVar40[0xe] + 0x1c);
              fVar47 = (float)local_c0;
              fVar54 = (float)((ulong)local_c0 >> 0x20);
              fVar55 = (float)uStack_b8;
              fVar48 = (float)((ulong)uStack_b8 >> 0x20);
              if ((uVar19 & 7) == 7) {
                if (*piVar1 == 0) {
                  puVar29 = (undefined8 *)0x0;
                  iVar8 = *piVar2;
                  if (iVar8 == 0) goto LAB_02fc5900;
LAB_02fc554c:
                  puVar33 = (undefined8 *)((long)iVar8 + (long)piVar2);
                }
                else {
                  puVar29 = (undefined8 *)((long)*piVar1 + (long)piVar1);
                  iVar8 = *piVar2;
                  if (iVar8 != 0) goto LAB_02fc554c;
LAB_02fc5900:
                  puVar33 = (undefined8 *)0x0;
                }
                auVar43._0_4_ = local_b0 - fVar47;
                auVar43._4_4_ = fStack_ac - fVar54;
                auVar43._8_4_ = fStack_a8 - fVar55;
                auVar43._12_4_ = fStack_a4 - fVar48;
                auVar50._0_4_ = local_a0 - fVar47;
                auVar50._4_4_ = fStack_9c - fVar54;
                auVar50._8_4_ = fStack_98 - fVar55;
                auVar50._12_4_ = fStack_94 - fVar48;
                auVar49 = NEON_ext(auVar50,auVar50,4,1);
                auVar58 = NEON_ext(auVar43,auVar43,4,1);
                uVar34 = 3;
                uVar36 = 4;
                fVar61 = auVar43._0_4_ * auVar49._0_4_ - auVar50._0_4_ * auVar58._0_4_;
                auVar51._0_8_ =
                     CONCAT44(auVar43._4_4_ * auVar49._4_4_ - auVar50._4_4_ * auVar58._4_4_,fVar61);
                auVar51._8_4_ = auVar43._8_4_ * auVar50._0_4_ - auVar50._8_4_ * auVar43._0_4_;
                auVar51._12_4_ = auVar43._12_4_ * auVar50._4_4_ - auVar50._12_4_ * auVar43._4_4_;
                auVar58 = NEON_ext(auVar51,auVar51,4,1);
                fVar62 = auVar58._0_4_ * auVar58._0_4_;
                fVar71 = auVar58._4_4_ * auVar58._4_4_;
                auVar44._0_8_ = auVar58._0_8_;
                auVar44._8_8_ = auVar51._0_8_;
                fVar66 = fVar62 + fVar71 + fVar61 * fVar61;
                fVar62 = fVar62 + fVar71 + fVar61 * fVar61;
                uVar56 = CONCAT44(fVar62,fVar66);
                uVar57 = NEON_frsqrte(uVar56,4);
                fVar61 = (float)uVar57;
                fVar71 = (float)((ulong)uVar57 >> 0x20);
                uVar57 = NEON_frsqrts(uVar56,CONCAT44(fVar71 * fVar71,fVar61 * fVar61),4);
                fVar61 = fVar61 * (float)uVar57;
                fVar71 = fVar71 * (float)((ulong)uVar57 >> 0x20);
                uVar56 = NEON_frsqrts(uVar56,CONCAT44(fVar71 * fVar71,fVar61 * fVar61),4);
                uVar57 = CONCAT44(-(uint)(fVar62 <= 0.0),-(uint)(fVar66 <= 0.0));
                pfVar35 = &local_b0;
                pfVar37 = local_90;
                pfVar38 = &local_a0;
              }
              else {
                if (*piVar1 == 0) {
                  puVar29 = (undefined8 *)0x0;
                  iVar8 = *piVar2;
                  if (iVar8 == 0) goto LAB_02fc5914;
LAB_02fc55dc:
                  puVar33 = (undefined8 *)((long)iVar8 + (long)piVar2);
                }
                else {
                  puVar29 = (undefined8 *)((long)*piVar1 + (long)piVar1);
                  iVar8 = *piVar2;
                  if (iVar8 != 0) goto LAB_02fc55dc;
LAB_02fc5914:
                  puVar33 = (undefined8 *)0x0;
                }
                pfVar35 = pfVar39 + -4;
                uVar34 = 0;
                auVar52._0_4_ = *pfVar35 - fVar47;
                auVar52._4_4_ = pfVar39[-3] - fVar54;
                auVar52._8_4_ = pfVar39[-2] - fVar55;
                auVar52._12_4_ = pfVar39[-1] - fVar48;
                auVar58 = NEON_ext(auVar52,auVar52,4,1);
                auVar45._0_4_ = *pfVar39 - fVar47;
                auVar45._4_4_ = pfVar39[1] - fVar54;
                auVar45._8_4_ = pfVar39[2] - fVar55;
                auVar45._12_4_ = pfVar39[3] - fVar48;
                auVar49 = NEON_ext(auVar45,auVar45,4,1);
                uVar36 = 3;
                fVar61 = auVar52._0_4_ * auVar49._0_4_ - auVar45._0_4_ * auVar58._0_4_;
                auVar53._0_8_ =
                     CONCAT44(auVar52._4_4_ * auVar49._4_4_ - auVar45._4_4_ * auVar58._4_4_,fVar61);
                auVar53._8_4_ = auVar52._8_4_ * auVar45._0_4_ - auVar45._8_4_ * auVar52._0_4_;
                auVar53._12_4_ = auVar52._12_4_ * auVar45._4_4_ - auVar45._12_4_ * auVar52._4_4_;
                auVar58 = NEON_ext(auVar53,auVar53,4,1);
                fVar66 = auVar58._0_4_ * auVar58._0_4_;
                fVar71 = auVar58._4_4_ * auVar58._4_4_;
                auVar44._8_8_ = auVar53._0_8_;
                auVar44._0_8_ = auVar58._0_8_;
                fVar62 = fVar66 + fVar71 + fVar61 * fVar61;
                fVar66 = fVar66 + fVar71 + fVar61 * fVar61;
                uVar56 = CONCAT44(fVar66,fVar62);
                uVar57 = NEON_frsqrte(uVar56,4);
                fVar61 = (float)uVar57;
                fVar71 = (float)((ulong)uVar57 >> 0x20);
                uVar57 = NEON_frsqrts(uVar56,CONCAT44(fVar71 * fVar71,fVar61 * fVar61),4);
                fVar61 = fVar61 * (float)uVar57;
                fVar71 = fVar71 * (float)((ulong)uVar57 >> 0x20);
                uVar57 = CONCAT44(-(uint)(fVar66 <= 0.0),-(uint)(fVar62 <= 0.0));
                uVar56 = NEON_frsqrts(uVar56,CONCAT44(fVar71 * fVar71,fVar61 * fVar61),4);
                pfVar37 = pfVar39;
                pfVar38 = pfVar39;
              }
              fVar61 = (float)uVar56 * fVar61;
              fVar71 = (float)((ulong)uVar56 >> 0x20) * fVar71;
              auVar60._0_4_ = fVar47 * auVar44._0_4_;
              auVar60._4_4_ = fVar54 * auVar44._4_4_;
              auVar60._8_4_ = fVar55 * auVar44._8_4_;
              auVar60._12_4_ = fVar48 * auVar44._12_4_;
              fVar48 = (float)CONCAT13((byte)((uint)fVar61 >> 0x18) & ~(byte)((ulong)uVar57 >> 0x18)
                                       ,CONCAT12((byte)((uint)fVar61 >> 0x10) &
                                                 ~(byte)((ulong)uVar57 >> 0x10),
                                                 CONCAT11((byte)((uint)fVar61 >> 8) &
                                                          ~(byte)((ulong)uVar57 >> 8),
                                                          SUB41(fVar61,0) & ~(byte)uVar57)));
              auVar58 = NEON_ext(auVar60,auVar60,8,1);
              *puVar29 = local_c0;
              *(float *)(puVar29 + 1) = fVar55;
              uVar56 = *(undefined8 *)(pfVar35 + 2);
              *(undefined8 *)((long)puVar29 + 0xc) = *(undefined8 *)pfVar35;
              *(int *)((long)puVar29 + 0x14) = (int)uVar56;
              uVar56 = *(undefined8 *)(pfVar38 + 2);
              puVar29[3] = *(undefined8 *)pfVar38;
              *(int *)(puVar29 + 4) = (int)uVar56;
              uVar56 = *(undefined8 *)(pfVar37 + 2);
              fVar47 = auVar44._0_4_ * fVar48;
              fVar55 = (float)(CONCAT17((byte)((uint)fVar71 >> 0x18) &
                                        ~(byte)((ulong)uVar57 >> 0x38),
                                        CONCAT16((byte)((uint)fVar71 >> 0x10) &
                                                 ~(byte)((ulong)uVar57 >> 0x30),
                                                 CONCAT15((byte)((uint)fVar71 >> 8) &
                                                          ~(byte)((ulong)uVar57 >> 0x28),
                                                          CONCAT14(SUB41(fVar71,0) &
                                                                   ~(byte)((ulong)uVar57 >> 0x20),
                                                                   fVar48)))) >> 0x20);
              fVar54 = auVar44._4_4_ * fVar55;
              auVar46._0_8_ = CONCAT44(fVar54,fVar47);
              auVar46._8_4_ = auVar44._8_4_ * fVar48;
              auVar46._12_4_ = -(auVar60._0_4_ + auVar60._4_4_ + auVar58._0_4_) * fVar55;
              *(undefined8 *)((long)puVar29 + 0x24) = *(undefined8 *)pfVar37;
              *(int *)((long)puVar29 + 0x2c) = (int)uVar56;
              lVar5 = 0;
              if (*(int *)(lVar24 + 0x58) != 0) {
                lVar5 = (long)*(int *)(lVar24 + 0x58) + lVar24 + 0x58;
              }
              *(undefined4 *)(lVar24 + 0x44) = uVar36;
              *(undefined1 *)(lVar5 + 3) = uVar34;
              *(undefined1 *)(lVar5 + 7) = uVar34;
              uVar56 = auVar46._8_8_;
              puVar33[1] = uVar56;
              *puVar33 = auVar46._0_8_;
              puVar33[3] = CONCAT44(-auVar46._12_4_,-auVar46._8_4_);
              puVar33[2] = CONCAT44(-fVar54,-fVar47);
              puVar33[5] = uVar56;
              puVar33[4] = auVar46._0_8_;
              puVar33[7] = uVar56;
              puVar33[6] = auVar46._0_8_;
              puVar29 = (undefined8 *)plVar40[0xe];
              local_120._0_4_ = (float)*puVar29;
              local_120._4_4_ = (float)((ulong)*puVar29 >> 0x20);
              fStack_118 = (float)puVar29[1];
              uStack_114 = (undefined4)((ulong)puVar29[1] >> 0x20);
              local_100[0] = (byte *)puVar29[4];
              local_100[1] = (byte *)0x0;
              local_f0 = (float)CONCAT31((int3)((uint)local_f0 >> 8),*(undefined1 *)(puVar29 + 6));
              fStack_ec = *(float *)((long)puVar29 + 0x34);
              fStack_d8 = (float)puVar29[9];
              uStack_d4 = (undefined4)((ulong)puVar29[9] >> 0x20);
              local_e0 = (float)puVar29[8];
              fStack_dc = (float)((ulong)puVar29[8] >> 0x20);
              pbStack_c8 = (byte *)puVar29[0xb];
              local_d0 = puVar29[10];
              fStack_e8 = *(float *)(puVar29 + 7);
              local_110 = (byte *)*plVar40;
              iVar8 = *(int *)((long)puVar29 + 0x1c) + (uint)local_110[0x1c];
              local_108 = (byte *)CONCAT44(iVar8,(iVar20 << (ulong)(-iVar8 & 0x1f)) - 1U |
                                                 (&DAT_03aa74b0)[*(int *)((long)puVar29 + 0x1c)] &
                                                 *(uint *)(puVar29 + 3));
              local_130 = *(undefined8 *)plVar40[0xd];
              uStack_128 = ((undefined8 *)plVar40[0xd])[1];
              plVar25 = (long *)plVar40[0xb];
              plVar22 = (long *)*plVar25;
              if (plVar22 != (long *)0x0) {
                uVar6 = (iVar20 << (ulong)(-((uint)bVar7 + iVar26) & 0x1f)) - 1U |
                        (&DAT_03aa74b0)[iVar26] & uVar6;
                (**(code **)(*plVar22 + 0x40))
                          (plVar22,uVar21,2,*puVar29,puVar29[1],local_110,uVar6,lVar24,&local_130);
                plVar25 = (long *)plVar40[0xb];
                if (plVar25[1] != 0) {
                  local_168[0] = (undefined2)plVar25[2];
                  uVar56 = *(undefined8 *)((long)plVar25 + 0x14);
                  *(undefined4 *)((undefined8 *)((ulong)local_168 | 4) + 1) =
                       *(undefined4 *)((long)plVar25 + 0x1c);
                  *(undefined8 *)((ulong)local_168 | 4) = uVar56;
                  puVar29 = (undefined8 *)plVar40[0xc];
                  local_158 = *puVar29;
                  local_150 = puVar29[1];
                  local_148 = puVar29[2];
                  local_140 = *(undefined4 *)(puVar29 + 3);
                  local_138 = plVar25[5];
                  local_1a0[0] = (undefined2)local_130;
                  uVar56 = *(undefined8 *)((ulong)&local_130 | 4);
                  *(undefined4 *)((undefined8 *)((ulong)local_1a0 | 4) + 1) =
                       *(undefined4 *)((undefined8 *)((ulong)&local_130 | 4) + 1);
                  *(undefined8 *)((ulong)local_1a0 | 4) = uVar56;
                  local_190 = *(undefined8 *)plVar40[0xe];
                  local_188 = ((undefined8 *)plVar40[0xe])[1];
                  local_180 = *plVar40;
                  local_178 = uVar6;
                  local_170 = lVar24;
                  uVar23 = (**(code **)(*(long *)plVar25[1] + 0x40))
                                     ((long *)plVar25[1],2,(char)plVar40[0xf] == '\0',local_168,
                                      local_1a0);
                  if ((uVar23 & 1) == 0) break;
                  plVar25 = (long *)plVar40[0xb];
                }
              }
              FUN_02f91438(*(undefined8 *)plVar40[10],(undefined8 *)plVar40[10],plVar25,plVar40[0xc]
                           ,lVar24,&local_130,&local_120,plVar40 + 2,(char)plVar40[0xf],
                           plVar40[0x10],plVar40[0x11]);
              uVar27 = uVar27 + 1;
              pfVar39 = pfVar39 + 4;
            } while (uVar27 < uVar31);
            goto LAB_02fc58a8;
          }
        }
        uVar27 = uVar31 & 0xffffffff;
        bVar7 = local_100[1][3];
        pbVar32 = local_100[1];
        pbVar41 = local_110;
        pbVar42 = local_108;
        auVar58 = auVar16;
      } while( true );
    }
  }
  return;
}


