/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001a6ac8; name: FUN_001a6ac8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_001a6ac8(long *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  byte bVar7;
  undefined1 auVar8 [16];
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [12];
  float fVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  byte *pbVar22;
  long lVar23;
  undefined1 (*pauVar24) [16];
  int iVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar38 [16];
  float fVar39;
  undefined8 uVar40;
  float fVar44;
  undefined1 auVar41 [16];
  float fVar43;
  undefined1 auVar42 [16];
  float fVar45;
  float fVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar52;
  undefined8 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined8 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  
  if (((int)param_1[1] != 0) && ((char)param_3[8] != '\0')) {
    uVar62 = *(undefined8 *)(PTR_DAT_04372370 + 0x50);
    auVar55 = *(undefined1 (*) [16])(param_1 + 2);
    auVar34 = *(undefined1 (*) [16])(param_1 + 4);
    auVar49._0_4_ = (auVar55._0_4_ - *(float *)(param_3 + 2)) * *(float *)(param_3 + 6);
    auVar49._4_4_ =
         (auVar55._4_4_ - *(float *)((long)param_3 + 0x14)) * *(float *)((long)param_3 + 0x34);
    auVar49._8_4_ = (auVar55._8_4_ - *(float *)(param_3 + 3)) * *(float *)(param_3 + 7);
    auVar49._12_4_ =
         (auVar55._12_4_ - *(float *)((long)param_3 + 0x1c)) * *(float *)((long)param_3 + 0x3c);
    auVar41._0_4_ = *(float *)(param_3 + 6) * (auVar34._0_4_ - *(float *)(param_3 + 2));
    auVar41._4_4_ =
         *(float *)((long)param_3 + 0x34) * (auVar34._4_4_ - *(float *)((long)param_3 + 0x14));
    auVar41._8_4_ = *(float *)(param_3 + 7) * (auVar34._8_4_ - *(float *)(param_3 + 3));
    auVar41._12_4_ =
         *(float *)((long)param_3 + 0x3c) * (auVar34._12_4_ - *(float *)((long)param_3 + 0x1c));
    auVar54 = NEON_fmin(auVar49,auVar41,4);
    auVar41 = NEON_fmax(auVar49,auVar41,4);
    uVar47 = NEON_fmaxp(auVar54._0_8_,auVar54._0_8_,4);
    uVar48 = NEON_fmax(CONCAT44(auVar54._8_4_,auVar54._8_4_),uVar47,4);
    uVar47 = NEON_fminp(auVar41._0_8_,auVar41._0_8_,4);
    uVar47 = NEON_fmin(CONCAT44(auVar41._8_4_,auVar41._8_4_),uVar47,4);
    uVar48 = NEON_fmax(uVar48,uVar62,4);
    uVar47 = NEON_fmin(uVar47,*(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10),4);
    if ((float)uVar48 <= (float)uVar47) {
      lVar16 = param_2[1];
      auVar41 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x1e0);
      auVar49 = NEON_ext(auVar41,auVar41,8,1);
      uVar47 = *(undefined8 *)PTR_PTR_04372408;
      auVar41 = NEON_ext(auVar49,auVar41,8,1);
      uVar18 = 0;
      pbVar22 = (byte *)(*param_1 + (long)param_1);
      bVar7 = pbVar22[3];
joined_r0x001a6bc8:
      uVar21 = (uint)uVar18;
      uVar19 = uVar18;
      while ((char)bVar7 < '\0') {
        while( true ) {
          uVar18 = (long)(int)uVar19 + 1;
          fVar31 = auVar34._0_4_;
          fVar35 = auVar55._0_4_;
          fVar32 = auVar34._4_4_;
          fVar45 = auVar55._4_4_;
          fVar37 = auVar34._8_4_;
          fVar36 = auVar55._8_4_;
          uVar19 = (long)(int)uVar19 + (ulong)((uint)pbVar22[4] | (pbVar22[3] & 0x7f) << 8) * 2;
          uVar21 = (uint)uVar19;
          pbVar22 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
          pbVar2 = (byte *)((long)param_1 + uVar19 * 5 + *param_1);
          fVar39 = (fVar31 - fVar35) * auVar41._0_4_;
          fVar43 = (fVar32 - fVar45) * auVar41._4_4_;
          fVar44 = (fVar37 - fVar36) * auVar41._8_4_;
          bVar10 = *pbVar22 >> 4;
          bVar11 = pbVar22[1] >> 4;
          bVar7 = pbVar22[1] & 0xf;
          bVar9 = *pbVar2 >> 4;
          bVar12 = pbVar22[2] >> 4;
          bVar13 = pbVar2[1] >> 4;
          bVar4 = pbVar22[2] & 0xf;
          bVar5 = pbVar2[1] & 0xf;
          fVar63 = fVar45 + (float)(byte)(bVar11 * bVar11) * fVar43;
          fVar60 = fVar35 + (float)(byte)(bVar10 * bVar10) * fVar39;
          fVar35 = fVar35 + (float)(byte)(bVar9 * bVar9) * fVar39;
          fVar64 = fVar36 + (float)(byte)(bVar12 * bVar12) * fVar44;
          bVar10 = *pbVar22 & 0xf;
          bVar11 = pbVar2[2] & 0xf;
          bVar9 = pbVar2[2] >> 4;
          fVar45 = fVar45 + (float)(byte)(bVar13 * bVar13) * fVar43;
          fVar61 = fVar32 - (float)(byte)(bVar7 * bVar7) * fVar43;
          fVar65 = fVar37 - (float)(byte)(bVar4 * bVar4) * fVar44;
          bVar7 = *pbVar2 & 0xf;
          fVar66 = fVar31 - (float)(byte)(bVar10 * bVar10) * fVar39;
          fVar31 = fVar31 - (float)(byte)(bVar7 * bVar7) * fVar39;
          fVar36 = fVar36 + (float)(byte)(bVar9 * bVar9) * fVar44;
          fVar32 = fVar32 - (float)(byte)(bVar5 * bVar5) * fVar43;
          fVar37 = fVar37 - (float)(byte)(bVar11 * bVar11) * fVar44;
          bVar7 = false;
          if ((char)param_3[8] != '\0') {
            fVar39 = *(float *)(param_3 + 2);
            fVar43 = *(float *)((long)param_3 + 0x14);
            fVar44 = *(float *)(param_3 + 3);
            fVar15 = *(float *)((long)param_3 + 0x1c);
            auVar34 = *(undefined1 (*) [16])(param_3 + 6);
            fVar46 = auVar34._0_4_;
            auVar42._0_4_ = fVar46 * (fVar66 - fVar39);
            fVar50 = auVar34._4_4_;
            auVar42._4_4_ = fVar50 * (fVar61 - fVar43);
            fVar51 = auVar34._8_4_;
            auVar42._8_4_ = fVar51 * (fVar65 - fVar44);
            fVar52 = auVar34._12_4_;
            auVar42._12_4_ = fVar52 * (0.0 - fVar15);
            auVar33._0_4_ = (fVar60 - fVar39) * fVar46;
            auVar33._4_4_ = (fVar63 - fVar43) * fVar50;
            auVar33._8_4_ = (fVar64 - fVar44) * fVar51;
            auVar33._12_4_ = (0.0 - fVar15) * fVar52;
            auVar55 = NEON_fmin(auVar33,auVar42,4);
            auVar34 = NEON_fmax(auVar33,auVar42,4);
            uVar48 = NEON_fmaxp(auVar55._0_8_,auVar55._0_8_,4);
            uVar40 = NEON_fmax(CONCAT44(auVar55._8_4_,auVar55._8_4_),uVar48,4);
            uVar48 = NEON_fminp(auVar34._0_8_,auVar34._0_8_,4);
            uVar48 = NEON_fmin(CONCAT44(auVar34._8_4_,auVar34._8_4_),uVar48,4);
            uVar40 = NEON_fmax(uVar40,uVar62,4);
            uVar53 = *(undefined8 *)(*(long *)(*param_3 + 0xd8) + 0x10);
            fVar56 = fVar46 * (fVar35 - fVar39);
            fVar57 = fVar50 * (fVar45 - fVar43);
            fVar58 = fVar51 * (fVar36 - fVar44);
            fVar59 = fVar52 * (0.0 - fVar15);
            uVar48 = NEON_fmin(uVar48,uVar53,4);
            auVar38._0_4_ = fVar46 * (fVar31 - fVar39);
            auVar38._4_4_ = fVar50 * (fVar32 - fVar43);
            auVar38._8_4_ = fVar51 * (fVar37 - fVar44);
            auVar38._12_4_ = fVar52 * (0.0 - fVar15);
            auVar54._4_4_ = fVar57;
            auVar54._0_4_ = fVar56;
            auVar54._8_4_ = fVar58;
            auVar54._12_4_ = fVar59;
            auVar34 = NEON_fmin(auVar54,auVar38,4);
            bVar7 = (float)uVar40 <= (float)uVar48;
            auVar8._4_4_ = fVar57;
            auVar8._0_4_ = fVar56;
            auVar8._8_4_ = fVar58;
            auVar8._12_4_ = fVar59;
            auVar55 = NEON_fmax(auVar8,auVar38,4);
            uVar48 = NEON_fmaxp(auVar34._0_8_,auVar34._0_8_,4);
            uVar48 = NEON_fmax(CONCAT44(auVar34._8_4_,auVar34._8_4_),uVar48,4);
            uVar40 = NEON_fminp(auVar55._0_8_,auVar55._0_8_,4);
            uVar40 = NEON_fmin(CONCAT44(auVar55._8_4_,auVar55._8_4_),uVar40,4);
            uVar48 = NEON_fmax(uVar48,uVar62,4);
            uVar40 = NEON_fmin(uVar40,uVar53,4);
            if ((float)uVar48 <= (float)uVar40) {
              bVar7 = bVar7 | 2;
            }
          }
          if (bVar7 != 3) break;
          iVar25 = (int)param_2[1];
          uVar17 = *(uint *)((long)param_2 + 0xc);
          uVar1 = iVar25 + 1;
          if (iVar25 < (int)(uVar17 & 0x3fffffff)) {
            lVar23 = *param_2;
          }
          else {
            lVar23 = *param_2;
            if (0x3ffffffe < iVar25) {
              FUN_032bd0a8(uVar1);
              uVar17 = *(uint *)((long)param_2 + 0xc);
            }
            uVar17 = (uVar17 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar17) {
              uVar17 = 0x3fffffff;
            }
            uVar6 = uVar1;
            if ((int)uVar1 <= (int)uVar17) {
              uVar6 = uVar17;
            }
            lVar23 = FUN_032bd1d4(uVar47,uVar6,0x30,lVar23,iVar25,(uint *)((long)param_2 + 0xc));
            iVar25 = (int)param_2[1];
            *param_2 = lVar23;
          }
          *(uint *)(param_2 + 1) = uVar1;
          puVar20 = (undefined8 *)(lVar23 + (long)iVar25 * 0x30);
          puVar20[1] = (ulong)(uint)fVar36;
          *puVar20 = CONCAT44(fVar45,fVar35);
          puVar20[3] = (ulong)(uint)fVar37;
          puVar20[2] = CONCAT44(fVar32,fVar31);
          *(uint *)(puVar20 + 4) = uVar21;
          uVar19 = uVar18 & 0xffffffff;
          uVar21 = (uint)uVar18;
          auVar55._4_4_ = fVar63;
          auVar55._0_4_ = fVar60;
          auVar55._8_4_ = fVar64;
          auVar55._12_4_ = 0;
          auVar34._4_4_ = fVar61;
          auVar34._0_4_ = fVar66;
          auVar34._8_4_ = fVar65;
          auVar34._12_4_ = 0;
          bVar7 = pbVar22[3];
          if (-1 < (char)bVar7) goto LAB_001a6f3c;
        }
        if (bVar7 != 2) {
          if (bVar7 != 1) goto LAB_001a70d8;
          auVar55._4_4_ = fVar63;
          auVar55._0_4_ = fVar60;
          auVar55._8_4_ = fVar64;
          auVar55._12_4_ = 0;
          auVar34._4_4_ = fVar61;
          auVar34._0_4_ = fVar66;
          auVar34._8_4_ = fVar65;
          auVar34._12_4_ = 0;
          bVar7 = pbVar22[3];
          goto joined_r0x001a6bc8;
        }
        auVar55._4_4_ = fVar45;
        auVar55._0_4_ = fVar35;
        auVar55._8_4_ = fVar36;
        auVar55._12_4_ = 0;
        auVar34._4_4_ = fVar32;
        auVar34._0_4_ = fVar31;
        auVar34._8_4_ = fVar37;
        auVar34._12_4_ = 0;
        uVar19 = uVar19 & 0xffffffff;
        pbVar22 = pbVar2;
        bVar7 = pbVar2[3];
      }
LAB_001a6f3c:
      lVar23 = *param_3;
      lVar26 = *(long *)(lVar23 + 0xa8);
      if (lVar26 == 0) {
LAB_001a6fa4:
        lVar30 = *(long *)(lVar23 + 0x50);
        lVar29 = (long)(param_1 + 8) + (ulong)CONCAT11(bVar7,pbVar22[4]) * 0x60 + param_1[8];
        lVar27 = *(long *)(lVar30 + 0x40);
        lVar26 = lVar27 + lVar30 + 0x40;
        lVar3 = 0;
        if (lVar27 != 0) {
          lVar3 = lVar26;
        }
        iVar25 = (int)(lVar29 - lVar3 >> 5) * -0x55555555;
        if ((*(int *)(lVar23 + 0x94) != iVar25) || (*(int *)(lVar23 + 0x98) != iVar25)) {
          lVar26 = lVar26 + (long)iVar25 * 0x60;
          *(long *)(lVar23 + 0x60) = lVar26;
          *(int *)(lVar23 + 0x94) = iVar25;
          *(int *)(lVar23 + 0x98) = iVar25;
          lVar27 = *(long *)(lVar30 + 0x70);
          lVar3 = 0;
          if (lVar27 != 0) {
            lVar3 = lVar27 + lVar30 + 0x70;
          }
          *(ulong *)(lVar23 + 0x70) = lVar3 + (ulong)*(uint *)(lVar26 + 0x48) * 4;
          lVar27 = *(long *)(lVar30 + 0x80);
          lVar3 = 0;
          if (lVar27 != 0) {
            lVar3 = lVar27 + lVar30 + 0x80;
          }
          *(ulong *)(lVar23 + 0x78) = lVar3 + (ulong)*(byte *)(lVar26 + 0x5b) * 0x80000;
          lVar27 = *(long *)(lVar30 + 0x60);
          lVar3 = 0;
          if (lVar27 != 0) {
            lVar3 = lVar27 + lVar30 + 0x60;
          }
          lVar3 = lVar3 + (ulong)*(uint *)(lVar26 + 0x4c) * 2;
          *(long *)(lVar23 + 0x80) = lVar3;
          lVar28 = *(long *)(lVar30 + 0x90);
          lVar27 = 0;
          if (lVar28 != 0) {
            lVar27 = lVar28 + lVar30 + 0x90;
          }
          *(ulong *)(lVar23 + 0x88) = lVar27 + (ulong)*(uint *)(lVar26 + 0x54) * 4;
          *(uint *)(lVar23 + 0x90) = (uint)*(byte *)(lVar26 + 0x58);
          lVar28 = *(long *)(lVar30 + 0x50);
          lVar27 = 0;
          if (lVar28 != 0) {
            lVar27 = lVar28 + lVar30 + 0x50;
          }
          *(ulong *)(lVar23 + 0x68) = lVar27 + (ulong)*(uint *)(lVar26 + 0x50) * 4;
          uVar48 = *(undefined8 *)(lVar26 + 0x30);
          *(undefined8 *)(lVar23 + 0x38) = *(undefined8 *)(lVar26 + 0x38);
          *(undefined8 *)(lVar23 + 0x30) = uVar48;
          auVar14 = *(undefined1 (*) [12])(lVar26 + 0x3c);
          *(ulong *)(lVar23 + 0x48) = (ulong)auVar14._8_4_;
          *(long *)(lVar23 + 0x40) = auVar14._0_8_;
          *(ulong *)(lVar23 + 0x80) = lVar3 + (ulong)*(byte *)(lVar26 + 0x58) * -2;
        }
        FUN_001a713c(lVar29,param_2,param_3);
      }
      else {
        lVar29 = *(long *)(lVar26 + 0x20);
        lVar3 = 0;
        if (lVar29 != 0) {
          lVar3 = lVar29 + lVar26 + 0x20;
        }
        lVar30 = *(long *)(lVar3 + 0x48);
        lVar29 = 0;
        if (lVar30 != 0) {
          lVar29 = lVar30 + lVar3 + 0x48;
        }
        uVar1 = uVar21 + 0x1f;
        if (-1 < (int)uVar21) {
          uVar1 = uVar21;
        }
        if ((*(uint *)(lVar26 + 0x28 +
                      (long)((int)uVar1 >> 5) * 4 +
                      (long)(*(int *)(lVar29 + 0x68) << 3) * 4 + *(long *)(lVar26 + 0x28)) &
            1 << (ulong)(uVar21 & 0x1f)) != 0) goto LAB_001a6fa4;
      }
LAB_001a70d8:
      if ((int)lVar16 < (int)param_2[1]) {
        iVar25 = (int)param_2[1] + -1;
        *(int *)(param_2 + 1) = iVar25;
        pauVar24 = (undefined1 (*) [16])(*param_2 + (long)iVar25 * 0x30);
        uVar18 = (ulong)*(int *)pauVar24[2];
        auVar55 = *pauVar24;
        auVar34 = pauVar24[1];
        pbVar22 = (byte *)((long)param_1 + uVar18 * 5 + *param_1);
        bVar7 = pbVar22[3];
        goto joined_r0x001a6bc8;
      }
    }
  }
  return;
}


