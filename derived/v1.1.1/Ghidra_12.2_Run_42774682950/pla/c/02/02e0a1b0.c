/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0a1b0; name: FUN_02e0a1b0
 */


void FUN_02e0a1b0(long param_1,ulong *param_2,uint param_3,uint param_4,float *param_5,
                 undefined8 *param_6,undefined8 *param_7,float *param_8)

{
  undefined1 (*pauVar1) [12];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 (*pauVar17) [12];
  float *pfVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar28 [16];
  undefined1 auVar27 [16];
  undefined1 auVar26 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 in_q18 [16];
  undefined1 auVar43 [16];
  undefined1 auVar42 [16];
  undefined1 auVar41 [16];
  undefined1 auVar40 [16];
  undefined1 auVar44 [16];
  undefined1 in_q19 [16];
  undefined1 auVar48 [16];
  undefined1 auVar47 [16];
  undefined1 auVar46 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar51;
  float fVar52;
  undefined1 auVar50 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  
  pfVar18 = (float *)(*(long *)(param_1 + 0x10) +
                      ((ulong)(*(uint *)(param_1 + 0x1c) << 5) & 0x20) * 4 +
                     ((ulong)(*(uint *)(param_1 + 0x1c) >> 1) & 1) * 0x60);
  pauVar17 = (undefined1 (*) [12])*param_2;
  fVar2 = *pfVar18;
  if (param_3 != 0) {
    fVar3 = pfVar18[1];
    fVar4 = pfVar18[2];
    fVar5 = pfVar18[3];
    fVar6 = pfVar18[4];
    puVar16 = *pauVar17;
    lVar19 = (ulong)(param_4 * 3) * 4;
    lVar20 = (ulong)(param_4 * 2) * 4;
    do {
      pauVar1 = (undefined1 (*) [12])(*pauVar17 + (ulong)param_4 * 4);
      uVar21 = (undefined4)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
      fVar55 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
      uVar34 = (undefined4)((ulong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
      fVar31 = (float)((ulong)*(undefined8 *)*pauVar17 >> 0x20);
      fVar49 = SUB124(*pauVar17,0);
      auVar40._4_12_ = in_q18._4_12_;
      auVar40._0_4_ = fVar49;
      auVar42._12_4_ = in_q18._12_4_;
      auVar42._0_8_ = auVar40._0_8_;
      auVar42._8_4_ = SUB124(*pauVar17,8);
      fVar51 = SUB124(*pauVar1,0);
      auVar41._8_8_ = auVar42._8_8_;
      auVar41._4_4_ = fVar51;
      auVar41._0_4_ = fVar49;
      auVar43._0_12_ = auVar41._0_12_;
      auVar43._12_4_ = SUB124(*pauVar1,8);
      pauVar1 = (undefined1 (*) [12])(*pauVar17 + lVar20);
      pfVar18 = (float *)(*pauVar17 + lVar19);
      fVar53 = *pfVar18;
      fVar57 = pfVar18[1];
      fVar52 = SUB124(*pauVar1,0);
      auVar45._4_12_ = in_q19._4_12_;
      auVar45._0_4_ = fVar52;
      auVar47._12_4_ = in_q19._12_4_;
      auVar47._0_8_ = auVar45._0_8_;
      auVar47._8_4_ = SUB124(*pauVar1,8);
      auVar46._8_8_ = auVar47._8_8_;
      auVar46._4_4_ = fVar53;
      auVar46._0_4_ = fVar52;
      auVar48._0_12_ = auVar46._0_12_;
      auVar48._12_4_ = pfVar18[2];
      fVar36 = *param_5;
      fVar37 = param_5[1];
      fVar38 = param_5[2];
      fVar39 = param_5[3];
      auVar50 = NEON_ext(auVar48,auVar43,8,1);
      fVar56 = SUB124(*pauVar1,4);
      auVar25 = NEON_ext(auVar43,auVar50,8,1);
      uVar15 = param_6[1];
      uVar14 = *param_6;
      auVar50._4_4_ = fVar55;
      auVar50._0_4_ = fVar31;
      auVar50._8_4_ = uVar34;
      auVar50._12_4_ = uVar21;
      auVar10._4_4_ = fVar57;
      auVar10._0_4_ = fVar56;
      auVar10._8_4_ = (int)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
      auVar10._12_4_ = pfVar18[3];
      auVar50 = NEON_ext(auVar10,auVar50,8,1);
      auVar44._4_4_ = fVar55;
      auVar44._0_4_ = fVar31;
      auVar44._8_4_ = uVar34;
      auVar44._12_4_ = uVar21;
      in_q19 = NEON_ext(auVar44,auVar50,8,1);
      fVar23 = (float)param_7[1];
      fVar24 = (float)((ulong)param_7[1] >> 0x20);
      fVar54 = (float)*param_7;
      fVar22 = (float)((ulong)*param_7 >> 0x20);
      auVar28._12_4_ = auVar25._12_4_;
      uVar9 = *(undefined8 *)(param_8 + 2);
      uVar8 = *(undefined8 *)param_8;
      *(long *)(param_5 + 2) = in_q19._8_8_;
      *(long *)param_5 = in_q19._0_8_;
      param_6[1] = auVar25._8_8_;
      *param_6 = auVar25._0_8_;
      fVar30 = fVar36 * fVar3 + fVar4 * (float)uVar14 + fVar2 * fVar49 + fVar5 * fVar54 +
               fVar6 * (float)uVar8;
      fVar32 = fVar37 * fVar3 + fVar4 * (float)((ulong)uVar14 >> 0x20) + fVar2 * fVar51 +
               fVar5 * fVar22 + fVar6 * (float)((ulong)uVar8 >> 0x20);
      fVar33 = fVar38 * fVar3 + fVar4 * (float)uVar15 + fVar2 * fVar52 + fVar5 * fVar23 +
               fVar6 * (float)uVar9;
      fVar35 = fVar39 * fVar3 + fVar4 * (float)((ulong)uVar15 >> 0x20) + fVar2 * fVar53 +
               fVar5 * fVar24 + fVar6 * (float)((ulong)uVar9 >> 0x20);
      fVar36 = fVar36 * fVar4 + fVar2 * fVar31 + fVar3 * fVar49 + fVar6 * fVar54 + fVar5 * fVar30;
      fVar37 = fVar37 * fVar4 + fVar2 * fVar55 + fVar3 * fVar51 + fVar6 * fVar22 + fVar5 * fVar32;
      fVar38 = fVar38 * fVar4 + fVar2 * fVar56 + fVar3 * fVar52 + fVar6 * fVar23 + fVar5 * fVar33;
      fVar39 = fVar39 * fVar4 + fVar2 * fVar57 + fVar3 * fVar53 + fVar6 * fVar24 + fVar5 * fVar35;
      fVar49 = auVar25._0_4_ * fVar2 + fVar3 * fVar31 + fVar4 * fVar49 + fVar6 * fVar30 +
               fVar5 * fVar36;
      fVar51 = auVar25._4_4_ * fVar2 + fVar3 * fVar55 + fVar4 * fVar51 + fVar6 * fVar32 +
               fVar5 * fVar37;
      fVar52 = auVar25._8_4_ * fVar2 + fVar3 * fVar56 + fVar4 * fVar52 + fVar6 * fVar33 +
               fVar5 * fVar38;
      fVar53 = auVar28._12_4_ * fVar2 + fVar3 * fVar57 + fVar4 * fVar53 + fVar6 * fVar35 +
               fVar5 * fVar39;
      fVar54 = in_q19._0_4_ * fVar2 + fVar3 * auVar25._0_4_ + fVar4 * fVar31 + fVar6 * fVar36 +
               fVar5 * fVar49;
      fVar55 = in_q19._4_4_ * fVar2 + fVar3 * auVar25._4_4_ + fVar4 * fVar55 + fVar6 * fVar37 +
               fVar5 * fVar51;
      fVar56 = in_q19._8_4_ * fVar2 + fVar3 * auVar25._8_4_ + fVar4 * fVar56 + fVar6 * fVar38 +
               fVar5 * fVar52;
      fVar57 = in_q19._12_4_ * fVar2 + fVar3 * auVar28._12_4_ + fVar4 * fVar57 + fVar6 * fVar39 +
               fVar5 * fVar53;
      auVar26._4_12_ = auVar25._4_12_;
      auVar26._0_4_ = fVar49;
      auVar28._0_8_ = auVar26._0_8_;
      auVar28._8_4_ = fVar52;
      auVar27._8_8_ = auVar28._8_8_;
      auVar27._0_8_ = CONCAT44(fVar54,fVar49);
      auVar29._0_12_ = auVar27._0_12_;
      auVar29._12_4_ = fVar56;
      param_7[1] = CONCAT44(fVar57,fVar56);
      *param_7 = CONCAT44(fVar55,fVar54);
      param_8[2] = fVar52;
      param_8[3] = fVar53;
      *param_8 = fVar49;
      param_8[1] = fVar51;
      auVar25._4_4_ = fVar36;
      auVar25._0_4_ = fVar30;
      auVar25._8_4_ = fVar33;
      auVar25._12_4_ = fVar38;
      auVar50 = NEON_ext(auVar29,auVar25,8,1);
      auVar11._4_4_ = fVar37;
      auVar11._0_4_ = fVar32;
      auVar11._8_4_ = fVar35;
      auVar11._12_4_ = fVar39;
      auVar13._4_4_ = fVar55;
      auVar13._0_4_ = fVar51;
      auVar13._8_4_ = fVar53;
      auVar13._12_4_ = fVar57;
      auVar44 = NEON_ext(auVar13,auVar11,8,1);
      auVar7._4_4_ = fVar36;
      auVar7._0_4_ = fVar30;
      auVar7._8_4_ = fVar33;
      auVar7._12_4_ = fVar38;
      auVar50 = NEON_ext(auVar7,auVar50,8,1);
      auVar12._4_4_ = fVar37;
      auVar12._0_4_ = fVar32;
      auVar12._8_4_ = fVar35;
      auVar12._12_4_ = fVar39;
      in_q18 = NEON_ext(auVar12,auVar44,8,1);
      *(undefined8 *)(*pauVar17 + 8) = auVar27._0_8_;
      *(ulong *)*pauVar17 = CONCAT44(fVar36,fVar30);
      *(ulong *)((long)(*pauVar17 + (ulong)param_4 * 4) + 8) = CONCAT44(fVar55,fVar51);
      *(ulong *)(*pauVar17 + (ulong)param_4 * 4) = CONCAT44(fVar37,fVar32);
      *(long *)((long)(*pauVar17 + lVar20) + 8) = auVar50._8_8_;
      *(long *)(*pauVar17 + lVar20) = auVar50._0_8_;
      *(long *)((long)(*pauVar17 + lVar19) + 8) = in_q18._8_8_;
      *(long *)(*pauVar17 + lVar19) = in_q18._0_8_;
      pauVar17 = (undefined1 (*) [12])(pauVar17[1] + 4);
      *param_2 = (ulong)pauVar17;
    } while (pauVar17 < (undefined1 (*) [12])(puVar16 + (ulong)param_3 * 4));
  }
  *param_2 = (ulong)(*pauVar17 + (ulong)(param_4 * 4 - param_3) * 4);
  return;
}


