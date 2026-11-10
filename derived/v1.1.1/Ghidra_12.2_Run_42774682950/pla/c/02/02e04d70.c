/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e04d70; name: FUN_02e04d70
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e04d70(undefined8 *param_1,undefined8 param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  unkbyte9 *pVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float *pfVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  float fVar19;
  float fVar21;
  float fVar22;
  undefined1 auVar20 [16];
  float fVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  
  uVar16 = *(uint *)*param_1;
  lVar18 = (long)(int)uVar16;
  FUN_02e05960((uint *)*param_1,param_2,param_1[1]);
  uVar13 = _UNK_03889f68;
  uVar12 = _DAT_03889f60;
  uVar11 = _UNK_038899a8;
  uVar10 = _DAT_038899a0;
  uVar9 = _UNK_038891d8;
  uVar8 = _DAT_038891d0;
  pfVar14 = (float *)param_1[1];
  uVar2 = uVar16;
  if ((int)uVar16 < 0) {
    uVar2 = uVar16 + 1;
  }
  if (2 < uVar16 + 1) {
    lVar15 = param_1[2];
    uVar17 = 1;
    do {
      uVar16 = uVar16 - 2;
      auVar20 = NEON_ext(*(undefined1 (*) [16])(pfVar14 + (ulong)uVar16 * 2),
                         *(undefined1 (*) [16])(pfVar14 + (ulong)uVar16 * 2),8,1);
      pfVar3 = pfVar14 + uVar17 * 2;
      fVar19 = auVar20._0_4_ * (float)uVar12;
      fVar21 = auVar20._4_4_ * (float)((ulong)uVar12 >> 0x20);
      fVar22 = auVar20._8_4_ * (float)uVar13;
      fVar23 = auVar20._12_4_ * (float)((ulong)uVar13 >> 0x20);
      uVar1 = (int)uVar17 + 2;
      pVar4 = (unkbyte9 *)(lVar15 + (ulong)((int)uVar17 - 1) * 8);
      uVar7 = *(undefined8 *)((long)pVar4 + 8);
      uVar28 = (undefined1)((ulong)uVar7 >> 8);
      uVar29 = (undefined1)((ulong)uVar7 >> 0x10);
      uVar30 = (undefined1)((ulong)uVar7 >> 0x18);
      bVar31 = (byte)((ulong)uVar7 >> 0x20);
      bVar32 = (byte)((ulong)uVar7 >> 0x28);
      bVar33 = (byte)((ulong)uVar7 >> 0x30);
      bVar34 = (byte)((ulong)uVar7 >> 0x38);
      uVar7 = *(undefined8 *)pVar4;
      auVar5[9] = uVar28;
      auVar5._0_9_ = *pVar4;
      auVar5[10] = uVar29;
      auVar5[0xb] = uVar30;
      auVar6[9] = uVar28;
      auVar6._0_9_ = *pVar4;
      auVar6[10] = uVar29;
      auVar6[0xb] = uVar30;
      auVar35._0_4_ = *pfVar3 - fVar19;
      auVar35._4_4_ = pfVar3[1] - fVar21;
      auVar35._8_4_ = pfVar3[2] - fVar22;
      auVar35._12_4_ = pfVar3[3] - fVar23;
      bVar24 = (byte)((ulong)uVar7 >> 0x20);
      bVar25 = (byte)((ulong)uVar7 >> 0x28);
      bVar26 = (byte)((ulong)uVar7 >> 0x30);
      bVar27 = (byte)((ulong)uVar7 >> 0x38);
      fVar19 = fVar19 + *pfVar3;
      fVar21 = fVar21 + pfVar3[1];
      fVar22 = fVar22 + pfVar3[2];
      fVar23 = fVar23 + pfVar3[3];
      auVar20 = NEON_rev64(auVar35,4);
      fVar36 = auVar35._0_4_ * (float)*pVar4 +
               (float)CONCAT13(bVar27 ^ (byte)((ulong)uVar8 >> 0x18),
                               CONCAT12(bVar26 ^ (byte)((ulong)uVar8 >> 0x10),
                                        CONCAT11(bVar25 ^ (byte)((ulong)uVar8 >> 8),
                                                 bVar24 ^ (byte)uVar8))) * auVar20._0_4_;
      fVar37 = auVar35._4_4_ * (float)*pVar4 +
               (float)CONCAT13(bVar27 ^ (byte)((ulong)uVar8 >> 0x38),
                               CONCAT12(bVar26 ^ (byte)((ulong)uVar8 >> 0x30),
                                        CONCAT11(bVar25 ^ (byte)((ulong)uVar8 >> 0x28),
                                                 bVar24 ^ (byte)((ulong)uVar8 >> 0x20)))) *
               auVar20._4_4_;
      fVar38 = auVar35._8_4_ * auVar6._8_4_ +
               (float)CONCAT13(bVar34 ^ (byte)((ulong)uVar9 >> 0x18),
                               CONCAT12(bVar33 ^ (byte)((ulong)uVar9 >> 0x10),
                                        CONCAT11(bVar32 ^ (byte)((ulong)uVar9 >> 8),
                                                 bVar31 ^ (byte)uVar9))) * auVar20._8_4_;
      fVar39 = auVar35._12_4_ * auVar5._8_4_ +
               (float)CONCAT13(bVar34 ^ (byte)((ulong)uVar9 >> 0x38),
                               CONCAT12(bVar33 ^ (byte)((ulong)uVar9 >> 0x30),
                                        CONCAT11(bVar32 ^ (byte)((ulong)uVar9 >> 0x28),
                                                 bVar31 ^ (byte)((ulong)uVar9 >> 0x20)))) *
               auVar20._12_4_;
      auVar20._0_4_ = (fVar19 - fVar36) * (float)uVar10;
      auVar20._4_4_ = (fVar21 - fVar37) * (float)((ulong)uVar10 >> 0x20);
      auVar20._8_4_ = (fVar22 - fVar38) * (float)uVar11;
      auVar20._12_4_ = (fVar23 - fVar39) * (float)((ulong)uVar11 >> 0x20);
      auVar20 = NEON_ext(auVar20,auVar20,8,1);
      pfVar3 = param_3 + uVar17 * 2;
      pfVar3[2] = (fVar38 + fVar22) * 0.5;
      pfVar3[3] = (fVar39 + fVar23) * 0.5;
      *pfVar3 = (fVar36 + fVar19) * 0.5;
      pfVar3[1] = (fVar37 + fVar21) * 0.5;
      *(long *)(param_3 + (ulong)uVar16 * 2 + 2) = auVar20._8_8_;
      *(long *)(param_3 + (ulong)uVar16 * 2) = auVar20._0_8_;
      uVar17 = (ulong)uVar1;
    } while (uVar1 <= (uint)((int)uVar2 >> 1));
  }
  fVar19 = *pfVar14;
  fVar21 = pfVar14[1];
  *param_3 = fVar21 + fVar19;
  param_3[lVar18 * 2] = fVar19 - fVar21;
  param_3[1] = 0.0;
  (param_3 + lVar18 * 2)[1] = 0.0;
  return;
}


