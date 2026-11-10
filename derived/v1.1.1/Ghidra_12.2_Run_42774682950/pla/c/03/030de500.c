/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030de500; name: FUN_030de500
 */


void FUN_030de500(long param_1,long param_2,long param_3,ulong param_4,long param_5,float *param_6,
                 undefined8 *param_7,undefined8 *param_8)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  long lVar12;
  ulong uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  ulong uVar18;
  ulong uVar19;
  float *pfVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  iVar8 = (int)param_4;
  if (0 < iVar8) {
    uVar22 = param_7[1];
    uVar21 = *param_7;
    fVar23 = (float)((ulong)uVar22 >> 0x20);
    uVar25 = param_8[1];
    uVar24 = *param_8;
    fVar26 = (float)((ulong)uVar25 >> 0x20);
    uVar13 = -(param_4 >> 0x1f & 1) & 0xfffffffc00000000 | (param_4 & 0xffffffff) << 2;
    lVar12 = 0;
    pfVar14 = (float *)(param_1 + uVar13);
    pfVar15 = (float *)(param_1 + 4);
    pfVar17 = (float *)(param_5 + 0x50);
    uVar18 = 1;
    uVar19 = 0;
    pfVar16 = param_6;
    do {
      pfVar16 = pfVar16 + 1;
      pfVar9 = (float *)(param_5 + uVar19 * 0x30);
      fVar4 = *pfVar9;
      fVar5 = pfVar9[1];
      fVar6 = pfVar9[2];
      fVar7 = pfVar9[3];
      uVar39 = *(undefined8 *)(pfVar9 + 6);
      uVar36 = *(undefined8 *)(pfVar9 + 4);
      *(float *)(param_2 + uVar19 * 4) = pfVar9[3];
      *(float *)(param_3 + uVar19 * 4) = pfVar9[0xb];
      fVar46 = (float)*(undefined8 *)(pfVar9 + 10);
      fVar48 = (float)((ulong)*(undefined8 *)(pfVar9 + 10) >> 0x20);
      fVar44 = (float)*(undefined8 *)(pfVar9 + 8);
      fVar45 = (float)((ulong)*(undefined8 *)(pfVar9 + 8) >> 0x20);
      uVar1 = uVar19 + 1;
      fVar35 = (float)uVar36;
      fVar27 = (float)uVar21 * fVar35;
      fVar37 = (float)((ulong)uVar36 >> 0x20);
      fVar28 = (float)((ulong)uVar21 >> 0x20) * fVar37;
      fVar38 = (float)uVar39;
      fVar29 = (float)uVar22 * fVar38;
      fVar47 = (float)((ulong)uVar39 >> 0x20);
      fVar30 = fVar23 * fVar47;
      fVar31 = (float)uVar24 * fVar44;
      fVar32 = (float)((ulong)uVar24 >> 0x20) * fVar45;
      fVar33 = (float)uVar25 * fVar46;
      fVar34 = fVar26 * fVar48;
      fVar44 = fVar35 * fVar27 + fVar44 * fVar31;
      fVar45 = fVar37 * fVar28 + fVar45 * fVar32;
      fVar46 = fVar38 * fVar29 + fVar46 * fVar33;
      fVar47 = fVar47 * fVar30 + fVar48 * fVar34;
      fVar35 = fVar26 * -fVar4;
      fVar37 = fVar26 * -fVar5;
      fVar38 = fVar26 * -fVar6;
      auVar40._0_4_ = fVar4 * fVar23 * fVar4 + -fVar4 * fVar35;
      auVar40._4_4_ = fVar5 * fVar23 * fVar5 + -fVar5 * fVar37;
      auVar40._8_4_ = fVar6 * fVar23 * fVar6 + -fVar6 * fVar38;
      auVar40._12_4_ = fVar7 * fVar23 * fVar7 + fVar7 * fVar26 * fVar7;
      auVar41._4_4_ = fVar45;
      auVar41._0_4_ = fVar44;
      auVar41._8_4_ = fVar46;
      auVar41._12_4_ = fVar47;
      auVar42._4_4_ = fVar45;
      auVar42._0_4_ = fVar44;
      auVar42._8_4_ = fVar46;
      auVar42._12_4_ = fVar47;
      auVar42 = NEON_ext(auVar41,auVar42,8,1);
      auVar41 = NEON_ext(auVar40,auVar40,8,1);
      *(float *)(param_1 + (lVar12 + uVar19) * 4) =
           auVar40._0_4_ + auVar40._4_4_ + auVar41._0_4_ + fVar44 + fVar45 + auVar42._0_4_;
      if ((long)uVar1 < (long)iVar8) {
        fVar47 = param_6[uVar19];
        pfVar10 = pfVar17;
        pfVar11 = pfVar16;
        uVar19 = param_4 & 0xffffffff;
        pfVar20 = pfVar15;
        pfVar9 = pfVar14;
        do {
          uVar19 = uVar19 - 1;
          auVar43._0_4_ = fVar23 * fVar4 * pfVar10[-8] + fVar35 * -pfVar10[-8];
          auVar43._4_4_ = fVar23 * fVar5 * pfVar10[-7] + fVar37 * -pfVar10[-7];
          auVar43._8_4_ = fVar23 * fVar6 * pfVar10[-6] + fVar38 * -pfVar10[-6];
          auVar43._12_4_ = fVar23 * fVar7 * pfVar10[-5] + fVar26 * fVar7 * pfVar10[-5];
          auVar42 = NEON_ext(auVar43,auVar43,8,1);
          fVar44 = fVar27 * (float)*(undefined8 *)(pfVar10 + -4) + fVar31 * *pfVar10;
          fVar45 = fVar28 * (float)((ulong)*(undefined8 *)(pfVar10 + -4) >> 0x20) +
                   fVar32 * pfVar10[1];
          fVar46 = fVar29 * (float)*(undefined8 *)(pfVar10 + -2) + fVar33 * pfVar10[2];
          fVar48 = fVar30 * (float)((ulong)*(undefined8 *)(pfVar10 + -2) >> 0x20) +
                   fVar34 * pfVar10[3];
          auVar2._4_4_ = fVar45;
          auVar2._0_4_ = fVar44;
          auVar2._8_4_ = fVar46;
          auVar2._12_4_ = fVar48;
          auVar3._4_4_ = fVar45;
          auVar3._0_4_ = fVar44;
          auVar3._8_4_ = fVar46;
          auVar3._12_4_ = fVar48;
          auVar41 = NEON_ext(auVar2,auVar3,8,1);
          fVar44 = auVar43._0_4_ + auVar43._4_4_ + auVar42._0_4_ + fVar44 + fVar45 + auVar41._0_4_;
          *pfVar20 = fVar47 * fVar44;
          *pfVar9 = *pfVar11 * fVar44;
          pfVar9 = (float *)((long)pfVar9 + uVar13);
          pfVar10 = pfVar10 + 0xc;
          pfVar11 = pfVar11 + 1;
          pfVar20 = pfVar20 + 1;
        } while (uVar18 != uVar19);
      }
      lVar12 = lVar12 + iVar8;
      uVar18 = uVar18 + 1;
      pfVar14 = (float *)((long)pfVar14 + uVar13 + 4);
      pfVar15 = (float *)((long)pfVar15 + uVar13 + 4);
      pfVar17 = pfVar17 + 0xc;
      uVar19 = uVar1;
    } while (uVar1 != (param_4 & 0xffffffff));
  }
  return;
}


