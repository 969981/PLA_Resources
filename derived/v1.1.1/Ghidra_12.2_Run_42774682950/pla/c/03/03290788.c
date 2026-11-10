/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03290788; name: FUN_03290788
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03290788(int *param_1,undefined1 (*param_2) [12])

{
  undefined1 (*pauVar1) [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 (*pauVar12) [12];
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  
  uVar10 = _UNK_03889f28;
  uVar9 = _DAT_03889f20;
  uVar17 = 0;
  uVar20 = 0;
  uVar14 = 0;
  uVar29 = NEON_fmov(0x40400000,4);
  uVar31 = NEON_fmov(0x40800000,4);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar27 = 0;
  uVar22 = 0;
  uVar24 = 0;
  uVar38 = 0;
  uVar36 = 0;
  lVar11 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  pauVar12 = param_2;
  do {
    if (*param_1 == 1) {
      auVar39._8_8_ = uVar10;
      auVar39._0_8_ = uVar9;
      auVar4._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
      auVar4._0_12_ = *pauVar12;
      auVar39 = a64_TBL(ZEXT816(0),auVar4,auVar39);
      fVar15 = auVar39._0_4_;
      fVar16 = auVar39._4_4_;
      auVar2._8_8_ = uVar10;
      auVar2._0_8_ = uVar9;
      auVar39 = a64_TBL(ZEXT816(0),
                        *(undefined1 (*) [16])
                         ((long)param_2 + (long)*(int *)((long)&DAT_0388a110 + lVar11) * 0x10),
                        auVar2);
      uVar40 = auVar39._0_8_;
    }
    else if (*param_1 == 0) {
      auVar41._8_8_ = _UNK_03889f38;
      auVar41._0_8_ = _DAT_03889f30;
      auVar3._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar12 + 8) >> 0x20);
      auVar3._0_12_ = *pauVar12;
      auVar39 = a64_TBL(ZEXT816(0),auVar3,auVar41);
      fVar15 = auVar39._0_4_;
      pauVar1 = (undefined1 (*) [12])
                ((long)param_2 + (long)*(int *)((long)&DAT_0388a110 + lVar11) * 0x10);
      fVar16 = auVar39._4_4_;
      auVar5._12_4_ = (int)((ulong)*(undefined8 *)(*pauVar1 + 8) >> 0x20);
      auVar5._0_12_ = *pauVar1;
      auVar39 = a64_TBL(ZEXT816(0),auVar5,auVar41);
      uVar40 = auVar39._0_8_;
    }
    else {
      fVar15 = (float)*(undefined8 *)*pauVar12;
      uVar40 = *(undefined8 *)((long)param_2 + (long)*(int *)((long)&DAT_0388a110 + lVar11) * 0x10);
      fVar16 = (float)((ulong)*(undefined8 *)*pauVar12 >> 0x20);
    }
    fVar37 = (float)uVar40;
    fVar49 = fVar37 * fVar37;
    fVar30 = (float)((ulong)uVar40 >> 0x20);
    fVar51 = fVar30 * fVar30;
    lVar11 = lVar11 + 4;
    pauVar12 = (undefined1 (*) [12])(pauVar12[1] + 4);
    fVar47 = fVar30 - fVar16;
    fVar48 = fVar30 - fVar16;
    fVar13 = (float)uVar29;
    fVar18 = (float)((ulong)uVar29 >> 0x20);
    fVar34 = fVar15 * (fVar37 + fVar37);
    fVar35 = fVar15 * (fVar37 + fVar37);
    fVar53 = fVar15 * fVar15;
    fVar55 = fVar15 * fVar15;
    fVar44 = fVar16 * fVar16;
    fVar46 = fVar16 * fVar16;
    fVar42 = fVar37 - fVar15;
    fVar43 = fVar37 - fVar15;
    fVar19 = (float)uVar31;
    fVar21 = (float)((ulong)uVar31 >> 0x20);
    fVar26 = (float)uVar27 + fVar47 * (fVar15 + fVar37);
    fVar28 = (float)((ulong)uVar27 >> 0x20) + fVar48 * (fVar15 + fVar37);
    uVar27 = CONCAT44(fVar28,fVar26);
    fVar33 = fVar16 * fVar44;
    fVar45 = fVar44 + (fVar16 + fVar30) * fVar30;
    fVar52 = fVar53 + (fVar15 + fVar37) * fVar37;
    fVar54 = fVar53 + fVar13 * fVar49 + fVar34;
    fVar56 = fVar55 + fVar18 * fVar49 + fVar35;
    fVar34 = fVar53 * fVar13 + fVar49 + fVar34;
    fVar35 = fVar55 * fVar18 + fVar49 + fVar35;
    fVar50 = fVar15 * fVar53 + fVar52 * fVar37;
    fVar32 = fVar33 + fVar45 * fVar30;
    fVar23 = (float)uVar24 + fVar47 * (fVar54 * fVar30 + fVar16 * fVar34);
    fVar25 = (float)((ulong)uVar24 >> 0x20) + fVar48 * (fVar56 * fVar30 + fVar16 * fVar35);
    uVar24 = CONCAT44(fVar25,fVar23);
    fVar34 = (float)uVar22 +
             fVar47 * ((fVar37 * fVar49 * fVar19 + fVar15 * fVar54) * fVar30 +
                      fVar16 * (fVar15 * fVar53 * fVar19 + fVar34 * fVar37));
    fVar35 = (float)((ulong)uVar22 >> 0x20) +
             fVar48 * ((fVar37 * fVar49 * fVar21 + fVar15 * fVar56) * fVar30 +
                      fVar16 * (fVar15 * fVar55 * fVar21 + fVar35 * fVar37));
    uVar22 = CONCAT44(fVar35,fVar34);
    fVar13 = (float)uVar14 +
             fVar42 * ((fVar33 + fVar44 * (fVar30 + fVar30) +
                                 fVar30 * fVar51 * fVar19 + fVar16 * fVar13 * fVar51) * fVar37 +
                      fVar15 * (fVar33 * fVar19 +
                               fVar44 * fVar13 * fVar30 +
                               fVar30 * fVar51 + fVar16 * (fVar51 + fVar51)));
    fVar15 = (float)((ulong)uVar14 >> 0x20) +
             fVar43 * ((fVar16 * fVar46 +
                       fVar46 * (fVar30 + fVar30) +
                       fVar30 * fVar51 * fVar21 + fVar16 * fVar18 * fVar51) * fVar37 +
                      fVar15 * (fVar16 * fVar46 * fVar21 +
                               fVar46 * fVar18 * fVar30 +
                               fVar30 * fVar51 + fVar16 * (fVar51 + fVar51)));
    uVar14 = CONCAT44(fVar15,fVar13);
    fVar33 = (float)uVar36 + fVar47 * fVar52;
    fVar46 = (float)((ulong)uVar36 >> 0x20) + fVar48 * fVar50;
    uVar36 = CONCAT44(fVar46,fVar33);
    fVar37 = (float)uVar38 + fVar47 * (fVar53 * fVar53 + fVar50 * fVar37);
    fVar47 = (float)((ulong)uVar38 >> 0x20) + fVar48 * 2.0;
    uVar38 = CONCAT44(fVar47,fVar37);
    fVar16 = (float)uVar17 + fVar42 * fVar45;
    fVar18 = (float)((ulong)uVar17 >> 0x20) + fVar43 * fVar32;
    uVar17 = CONCAT44(fVar18,fVar16);
    fVar19 = (float)uVar20 + fVar42 * (fVar44 * fVar44 + fVar32 * fVar30);
    fVar21 = (float)((ulong)uVar20 >> 0x20) + fVar43 * 2.0;
    uVar20 = CONCAT44(fVar21,fVar19);
    *(undefined8 *)(param_1 + 2) = uVar27;
    *(undefined8 *)(param_1 + 4) = uVar24;
    *(undefined8 *)(param_1 + 6) = uVar22;
    *(undefined8 *)(param_1 + 8) = uVar14;
    *(undefined8 *)(param_1 + 0xe) = uVar38;
    *(undefined8 *)(param_1 + 0xc) = uVar36;
    *(undefined8 *)(param_1 + 0x12) = uVar20;
    *(undefined8 *)(param_1 + 0x10) = uVar17;
  } while (lVar11 != 0xc);
  fVar32 = (float)_DAT_03889e70;
  uVar6 = (ulong)_DAT_03889e70 >> 0x20;
  fVar30 = (float)_DAT_03889b50;
  uVar7 = (ulong)_DAT_03889b50 >> 0x20;
  fVar42 = (float)_UNK_03889b58;
  uVar8 = (ulong)_UNK_03889b58 >> 0x20;
  *(ulong *)(param_1 + 0xe) =
       CONCAT44(fVar47 * (float)((ulong)_UNK_03889e78 >> 0x20),fVar37 * (float)_UNK_03889e78);
  *(ulong *)(param_1 + 0xc) = CONCAT44(fVar46 * (float)uVar6,fVar33 * fVar32);
  *(ulong *)(param_1 + 0x12) = CONCAT44(fVar21 * (float)uVar8,fVar19 * fVar42);
  *(ulong *)(param_1 + 0x10) = CONCAT44(fVar18 * (float)uVar7,fVar16 * fVar30);
  *(ulong *)(param_1 + 2) = CONCAT44(fVar28 * 0.5,fVar26 * 0.5);
  *(ulong *)(param_1 + 4) = CONCAT44(fVar25 * 0.041666668,fVar23 * 0.041666668);
  *(ulong *)(param_1 + 6) = CONCAT44(fVar35 * 0.016666668,fVar34 * 0.016666668);
  *(ulong *)(param_1 + 8) = CONCAT44(fVar15 * -0.016666668,fVar13 * -0.016666668);
  return;
}


