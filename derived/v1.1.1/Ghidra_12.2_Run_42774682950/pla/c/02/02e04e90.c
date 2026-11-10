/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e04e90; name: FUN_02e04e90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e04e90(undefined8 *param_1,float *param_2)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  float *pfVar4;
  unkbyte9 *pVar5;
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auVar25 [16];
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  pfVar3 = (float *)param_1[1];
  uVar14 = *(uint *)*param_1;
  lVar13 = param_1[2];
  *pfVar3 = param_2[(long)(int)uVar14 * 2] + *param_2;
  uVar2 = uVar14;
  if ((int)uVar14 < 0) {
    uVar2 = uVar14 + 1;
  }
  pfVar3[1] = *param_2 - param_2[(long)(int)uVar14 * 2];
  uVar12 = _UNK_03889f68;
  uVar11 = _DAT_03889f60;
  uVar10 = _UNK_038891d8;
  uVar9 = _DAT_038891d0;
  if (2 < uVar14 + 1) {
    uVar15 = 1;
    do {
      uVar14 = uVar14 - 2;
      auVar21 = NEON_ext(*(undefined1 (*) [16])(param_2 + (ulong)uVar14 * 2),
                         *(undefined1 (*) [16])(param_2 + (ulong)uVar14 * 2),8,1);
      pfVar4 = param_2 + uVar15 * 2;
      fVar16 = (float)uVar11;
      fVar20 = auVar21._0_4_ * fVar16;
      fVar17 = (float)((ulong)uVar11 >> 0x20);
      fVar22 = auVar21._4_4_ * fVar17;
      fVar18 = (float)uVar12;
      fVar23 = auVar21._8_4_ * fVar18;
      fVar19 = (float)((ulong)uVar12 >> 0x20);
      fVar24 = auVar21._12_4_ * fVar19;
      uVar1 = (int)uVar15 + 2;
      pVar5 = (unkbyte9 *)(lVar13 + (ulong)((int)uVar15 - 1) * 8);
      uVar8 = *(undefined8 *)((long)pVar5 + 8);
      uVar30 = (undefined1)((ulong)uVar8 >> 8);
      uVar31 = (undefined1)((ulong)uVar8 >> 0x10);
      uVar32 = (undefined1)((ulong)uVar8 >> 0x18);
      bVar33 = (byte)((ulong)uVar8 >> 0x20);
      bVar34 = (byte)((ulong)uVar8 >> 0x28);
      bVar35 = (byte)((ulong)uVar8 >> 0x30);
      bVar36 = (byte)((ulong)uVar8 >> 0x38);
      uVar8 = *(undefined8 *)pVar5;
      auVar6[9] = uVar30;
      auVar6._0_9_ = *pVar5;
      auVar6[10] = uVar31;
      auVar6[0xb] = uVar32;
      auVar7[9] = uVar30;
      auVar7._0_9_ = *pVar5;
      auVar7[10] = uVar31;
      auVar7[0xb] = uVar32;
      auVar37._0_4_ = *pfVar4 - fVar20;
      auVar37._4_4_ = pfVar4[1] - fVar22;
      auVar37._8_4_ = pfVar4[2] - fVar23;
      auVar37._12_4_ = pfVar4[3] - fVar24;
      bVar26 = (byte)((ulong)uVar8 >> 0x20);
      bVar27 = (byte)((ulong)uVar8 >> 0x28);
      bVar28 = (byte)((ulong)uVar8 >> 0x30);
      bVar29 = (byte)((ulong)uVar8 >> 0x38);
      fVar20 = fVar20 + *pfVar4;
      fVar22 = fVar22 + pfVar4[1];
      fVar23 = fVar23 + pfVar4[2];
      fVar24 = fVar24 + pfVar4[3];
      auVar21 = NEON_rev64(auVar37,4);
      fVar38 = auVar37._0_4_ * (float)*pVar5 +
               (float)CONCAT13(bVar29 ^ (byte)((ulong)uVar9 >> 0x18),
                               CONCAT12(bVar28 ^ (byte)((ulong)uVar9 >> 0x10),
                                        CONCAT11(bVar27 ^ (byte)((ulong)uVar9 >> 8),
                                                 bVar26 ^ (byte)uVar9))) * auVar21._0_4_;
      fVar39 = auVar37._4_4_ * (float)*pVar5 +
               (float)CONCAT13(bVar29 ^ (byte)((ulong)uVar9 >> 0x38),
                               CONCAT12(bVar28 ^ (byte)((ulong)uVar9 >> 0x30),
                                        CONCAT11(bVar27 ^ (byte)((ulong)uVar9 >> 0x28),
                                                 bVar26 ^ (byte)((ulong)uVar9 >> 0x20)))) *
               auVar21._4_4_;
      fVar40 = auVar37._8_4_ * auVar7._8_4_ +
               (float)CONCAT13(bVar36 ^ (byte)((ulong)uVar10 >> 0x18),
                               CONCAT12(bVar35 ^ (byte)((ulong)uVar10 >> 0x10),
                                        CONCAT11(bVar34 ^ (byte)((ulong)uVar10 >> 8),
                                                 bVar33 ^ (byte)uVar10))) * auVar21._8_4_;
      fVar41 = auVar37._12_4_ * auVar6._8_4_ +
               (float)CONCAT13(bVar36 ^ (byte)((ulong)uVar10 >> 0x38),
                               CONCAT12(bVar35 ^ (byte)((ulong)uVar10 >> 0x30),
                                        CONCAT11(bVar34 ^ (byte)((ulong)uVar10 >> 0x28),
                                                 bVar33 ^ (byte)((ulong)uVar10 >> 0x20)))) *
               auVar21._12_4_;
      auVar21._0_8_ = CONCAT44(fVar39 + fVar22,fVar38 + fVar20);
      auVar21._8_4_ = fVar40 + fVar23;
      auVar21._12_4_ = fVar41 + fVar24;
      auVar25._0_4_ = (fVar20 - fVar38) * fVar16;
      auVar25._4_4_ = (fVar22 - fVar39) * fVar17;
      auVar25._8_4_ = (fVar23 - fVar40) * fVar18;
      auVar25._12_4_ = (fVar24 - fVar41) * fVar19;
      auVar25 = NEON_ext(auVar25,auVar25,8,1);
      *(long *)(pfVar3 + uVar15 * 2 + 2) = auVar21._8_8_;
      *(undefined8 *)(pfVar3 + uVar15 * 2) = auVar21._0_8_;
      *(long *)(pfVar3 + (ulong)uVar14 * 2 + 2) = auVar25._8_8_;
      *(long *)(pfVar3 + (ulong)uVar14 * 2) = auVar25._0_8_;
      uVar15 = (ulong)uVar1;
    } while (uVar1 <= (uint)((int)uVar2 >> 1));
  }
  FUN_02e05960(*param_1,param_1[1]);
  return;
}


