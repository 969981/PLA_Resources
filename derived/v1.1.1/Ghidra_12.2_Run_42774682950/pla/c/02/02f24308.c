/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f24308; name: FUN_02f24308
 */


void FUN_02f24308(long param_1,long *param_2,uint param_3,uint param_4,undefined8 *param_5,
                 undefined8 *param_6,float *param_7,float *param_8,long *param_9)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  float *pfVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar24 [16];
  undefined1 auVar23 [16];
  undefined1 auVar22 [16];
  undefined1 auVar21 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar38 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [16];
  float fVar40;
  float fVar45;
  float fVar46;
  undefined1 auVar44 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  float fVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  float fVar61;
  float fVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  float fVar65;
  
  pfVar14 = (float *)(*(long *)(param_1 + 0x10) +
                      ((ulong)(*(uint *)(param_1 + 0x1c) << 5) & 0x20) * 4 +
                     ((ulong)(*(uint *)(param_1 + 0x1c) >> 1) & 1) * 0x60);
  pauVar12 = (undefined1 (*) [16])*param_2;
  fVar2 = *pfVar14;
  if (param_3 == 0) {
    lVar18 = *param_9;
  }
  else {
    fVar3 = pfVar14[1];
    fVar4 = pfVar14[2];
    fVar5 = pfVar14[3];
    fVar6 = pfVar14[4];
    puVar11 = *pauVar12;
    lVar15 = (ulong)(param_4 * 3) * 4;
    lVar16 = (ulong)(param_4 * 2) * 4;
    pauVar13 = pauVar12;
    do {
      auVar48 = *(undefined1 (*) [16])(*pauVar13 + (ulong)param_4 * 4);
      fVar53 = (float)param_5[1];
      fVar52 = (float)((ulong)param_5[1] >> 0x20);
      fVar49 = (float)*param_5;
      fVar51 = (float)((ulong)*param_5 >> 0x20);
      uVar63 = param_6[1];
      uVar59 = *param_6;
      pauVar1 = (undefined1 (*) [12])(*pauVar13 + lVar16);
      pfVar14 = (float *)(*pauVar13 + lVar15);
      fVar40 = *pfVar14;
      fVar10 = pfVar14[1];
      uVar64 = *(undefined8 *)(param_7 + 2);
      uVar60 = *(undefined8 *)param_7;
      pauVar12 = pauVar13 + 1;
      auVar35 = *pauVar13;
      fVar45 = auVar35._0_4_;
      fVar50 = auVar48._0_4_;
      fVar47 = auVar35._4_4_;
      auVar21._4_12_ = auVar48._4_12_;
      auVar21._0_4_ = fVar47;
      auVar23._12_4_ = auVar48._12_4_;
      auVar23._0_8_ = auVar21._0_8_;
      auVar23._8_4_ = auVar35._12_4_;
      fVar20 = auVar48._4_4_;
      auVar22._8_8_ = auVar23._8_8_;
      auVar22._0_8_ = CONCAT44(fVar20,fVar47);
      auVar24._0_12_ = auVar22._0_12_;
      auVar24._12_4_ = auVar23._12_4_;
      fVar46 = SUB124(*pauVar1,0);
      auVar41._4_12_ = auVar35._4_12_;
      auVar41._0_4_ = fVar46;
      auVar43._0_8_ = auVar41._0_8_;
      auVar43._8_4_ = SUB124(*pauVar1,8);
      auVar43._12_4_ = auVar35._12_4_;
      auVar42._8_8_ = auVar43._8_8_;
      auVar42._4_4_ = fVar40;
      auVar42._0_4_ = fVar46;
      auVar44._0_12_ = auVar42._0_12_;
      auVar44._12_4_ = pfVar14[2];
      fVar19 = SUB124(*pauVar1,4);
      auVar7._4_4_ = fVar50;
      auVar7._0_4_ = fVar45;
      auVar7._8_4_ = auVar35._8_4_;
      auVar7._12_4_ = auVar48._8_4_;
      auVar34 = NEON_ext(auVar44,auVar7,8,1);
      auVar8._4_4_ = fVar50;
      auVar8._0_4_ = fVar45;
      auVar8._8_4_ = auVar35._8_4_;
      auVar8._12_4_ = auVar48._8_4_;
      auVar35 = NEON_ext(auVar8,auVar34,8,1);
      auVar48._4_4_ = fVar10;
      auVar48._0_4_ = fVar19;
      auVar48._8_4_ = (int)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
      auVar48._12_4_ = pfVar14[3];
      auVar48 = NEON_ext(auVar48,auVar24,8,1);
      auVar48 = NEON_ext(auVar24,auVar48,8,1);
      auVar25._12_4_ = fVar10;
      auVar25._8_4_ = fVar19;
      auVar25._0_8_ = auVar22._0_8_;
      fVar30 = *param_8;
      fVar31 = param_8[1];
      fVar32 = param_8[2];
      fVar33 = param_8[3];
      auVar38._12_4_ = auVar35._12_4_;
      param_5[1] = auVar48._8_8_;
      *param_5 = auVar48._0_8_;
      param_6[1] = auVar35._8_8_;
      *param_6 = auVar35._0_8_;
      fVar58 = (float)uVar60;
      fVar61 = (float)((ulong)uVar60 >> 0x20);
      fVar62 = (float)uVar64;
      fVar65 = (float)((ulong)uVar64 >> 0x20);
      fVar54 = fVar49 * fVar3 + fVar4 * (float)uVar59 + fVar2 * fVar45 + fVar5 * fVar58 +
               fVar6 * fVar30;
      fVar55 = fVar51 * fVar3 + fVar4 * (float)((ulong)uVar59 >> 0x20) + fVar2 * fVar50 +
               fVar5 * fVar61 + fVar6 * fVar31;
      fVar56 = fVar53 * fVar3 + fVar4 * (float)uVar63 + fVar2 * fVar46 + fVar5 * fVar62 +
               fVar6 * fVar32;
      fVar57 = fVar52 * fVar3 + fVar4 * (float)((ulong)uVar63 >> 0x20) + fVar2 * fVar40 +
               fVar5 * fVar65 + fVar6 * fVar33;
      fVar30 = fVar49 * fVar4 + fVar2 * fVar47 + fVar3 * fVar45 + fVar6 * fVar58 + fVar5 * fVar54;
      fVar31 = fVar51 * fVar4 + fVar2 * fVar20 + fVar3 * fVar50 + fVar6 * fVar61 + fVar5 * fVar55;
      fVar32 = fVar53 * fVar4 + fVar2 * fVar19 + fVar3 * fVar46 + fVar6 * fVar62 + fVar5 * fVar56;
      fVar33 = fVar52 * fVar4 + fVar2 * fVar10 + fVar3 * fVar40 + fVar6 * fVar65 + fVar5 * fVar57;
      fVar49 = auVar35._0_4_ * fVar2 + fVar3 * fVar47 + fVar4 * fVar45 + fVar6 * fVar54 +
               fVar5 * fVar30;
      fVar50 = auVar35._4_4_ * fVar2 + fVar3 * fVar20 + fVar4 * fVar50 + fVar6 * fVar55 +
               fVar5 * fVar31;
      fVar51 = auVar35._8_4_ * fVar2 + fVar3 * fVar19 + fVar4 * fVar46 + fVar6 * fVar56 +
               fVar5 * fVar32;
      fVar53 = auVar38._12_4_ * fVar2 + fVar3 * fVar10 + fVar4 * fVar40 + fVar6 * fVar57 +
               fVar5 * fVar33;
      fVar40 = auVar48._0_4_ * fVar2 + fVar3 * auVar35._0_4_ + fVar4 * fVar47 + fVar6 * fVar30 +
               fVar5 * fVar49;
      fVar45 = auVar48._4_4_ * fVar2 + fVar3 * auVar35._4_4_ + fVar4 * fVar20 + fVar6 * fVar31 +
               fVar5 * fVar50;
      fVar46 = auVar48._8_4_ * fVar2 + fVar3 * auVar35._8_4_ + fVar4 * fVar19 + fVar6 * fVar32 +
               fVar5 * fVar51;
      fVar47 = auVar48._12_4_ * fVar2 + fVar3 * auVar38._12_4_ + fVar4 * fVar10 + fVar6 * fVar33 +
               fVar5 * fVar53;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fVar54;
      auVar28._0_8_ = auVar26._0_8_;
      auVar28._8_4_ = fVar56;
      auVar28._12_4_ = fVar10;
      auVar27._8_8_ = auVar28._8_8_;
      auVar27._0_8_ = CONCAT44(fVar30,fVar54);
      auVar29._0_12_ = auVar27._0_12_;
      auVar29._12_4_ = fVar32;
      auVar36._4_12_ = auVar35._4_12_;
      auVar36._0_4_ = fVar50;
      auVar38._0_8_ = auVar36._0_8_;
      auVar38._8_4_ = fVar53;
      auVar37._8_8_ = auVar38._8_8_;
      auVar37._0_8_ = CONCAT44(fVar45,fVar50);
      auVar39._0_12_ = auVar37._0_12_;
      auVar39._12_4_ = fVar47;
      param_7[2] = fVar46;
      param_7[3] = fVar47;
      *param_7 = fVar40;
      param_7[1] = fVar45;
      *(ulong *)(param_8 + 2) = CONCAT44(fVar53,fVar51);
      *(ulong *)param_8 = CONCAT44(fVar50,fVar49);
      puVar17 = (undefined8 *)*param_9;
      puVar17[1] = CONCAT44(fVar40,fVar49);
      *puVar17 = auVar27._0_8_;
      auVar9._4_4_ = fVar40;
      auVar9._0_4_ = fVar49;
      auVar9._8_4_ = fVar51;
      auVar9._12_4_ = fVar46;
      auVar48 = NEON_ext(auVar9,auVar29,8,1);
      auVar48 = NEON_ext(auVar29,auVar48,8,1);
      puVar17 = (undefined8 *)(*param_9 + (ulong)param_4 * 4);
      puVar17[1] = auVar37._0_8_;
      *puVar17 = CONCAT44(fVar31,fVar55);
      puVar17 = (undefined8 *)(*param_9 + lVar16);
      puVar17[1] = auVar48._8_8_;
      *puVar17 = auVar48._0_8_;
      auVar35._4_4_ = fVar31;
      auVar35._0_4_ = fVar55;
      auVar35._8_4_ = fVar57;
      auVar35._12_4_ = fVar33;
      auVar48 = NEON_ext(auVar39,auVar35,8,1);
      auVar34._4_4_ = fVar31;
      auVar34._0_4_ = fVar55;
      auVar34._8_4_ = fVar57;
      auVar34._12_4_ = fVar33;
      auVar48 = NEON_ext(auVar34,auVar48,8,1);
      puVar17 = (undefined8 *)(*param_9 + lVar15);
      puVar17[1] = auVar48._8_8_;
      *puVar17 = auVar48._0_8_;
      *param_2 = (long)pauVar12;
      lVar18 = *param_9 + 0x10;
      *param_9 = lVar18;
      pauVar13 = pauVar12;
    } while (pauVar12 < (undefined1 (*) [16])(puVar11 + (ulong)param_3 * 4));
  }
  lVar15 = (ulong)(param_4 * 4 - param_3) * 4;
  *param_2 = (long)(*pauVar12 + lVar15);
  *param_9 = lVar18 + lVar15;
  return;
}


