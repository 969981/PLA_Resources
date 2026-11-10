/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031934ec; name: FUN_031934ec
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_031934ec(long param_1,int *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int *piVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined1 uVar23;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar24 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  float fVar42;
  undefined1 auVar41 [16];
  int iVar43;
  undefined8 uVar44;
  byte bVar47;
  byte bVar48;
  byte bVar51;
  byte bVar52;
  undefined1 auVar45 [16];
  byte bVar49;
  int iVar50;
  byte bVar53;
  undefined1 auVar46 [16];
  float fVar54;
  float fVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar22 = *(long *)(param_1 + 0x20);
  iVar43 = *param_2;
  if (iVar43 < *(int *)(lVar22 + 0x20)) {
    lVar18 = *(long *)(lVar22 + 0x18);
    iVar50 = iVar43;
    if (*(int *)(lVar22 + 0x98) != 0) {
      iVar50 = *(int *)(*(long *)(lVar22 + 0x90) + (long)iVar43 * 4);
    }
    if (iVar50 != -1) {
      plVar16 = (long *)(lVar22 + 0xb0);
      iVar43 = iVar50;
      goto LAB_03193734;
    }
  }
  else {
    plVar16 = (long *)(lVar22 + 0xd0);
    iVar43 = iVar43 - *(int *)(lVar22 + 0x20);
LAB_03193734:
    lVar18 = *plVar16;
  }
  piVar11 = (int *)(lVar18 + (long)iVar43 * 0x10);
  iVar43 = *piVar11;
  sVar6 = (short)piVar11[2];
  iVar50 = *(int *)(lVar22 + 0x30);
  lVar15 = (long)iVar50;
  lVar14 = (long)iVar43;
  lVar18 = *(long *)(lVar22 + 0x28);
  if (iVar43 < iVar50) {
    iVar17 = iVar43;
    if (*(int *)(lVar22 + 0x78) != 0) {
      iVar17 = *(int *)(*(long *)(lVar22 + 0x70) + lVar14 * 4);
    }
    lVar20 = lVar18;
    iVar50 = iVar43;
    if (iVar17 == -1) goto LAB_0319357c;
    plVar16 = (long *)(lVar22 + 0xc0);
    iVar50 = iVar17;
  }
  else {
    iVar50 = iVar43 - iVar50;
    plVar16 = (long *)(lVar22 + 0xe0);
  }
  lVar20 = *plVar16;
LAB_0319357c:
  lVar19 = *(long *)(lVar22 + 0x38);
  iVar17 = *(int *)(lVar20 + (long)iVar50 * 0x14);
  iVar50 = *(int *)(lVar22 + 0x40);
  lVar20 = *(long *)(lVar22 + 0xf0);
  puVar2 = (undefined8 *)(lVar19 + (long)iVar17 * 0x10);
  if (iVar50 <= iVar17) {
    puVar2 = (undefined8 *)(lVar20 + (long)(iVar17 - iVar50) * 0x10);
  }
  if (sVar6 < 1) {
    uVar23 = 0;
    uVar25 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    fVar32 = 0.0;
    fVar33 = 0.0;
  }
  else {
    uVar21 = (long)sVar6 & 0xffffffff;
    fVar34 = (float)*puVar2;
    fVar35 = (float)((ulong)*puVar2 >> 0x20);
    fVar36 = (float)puVar2[1];
    fVar42 = (float)((ulong)puVar2[1] >> 0x20);
    if (*(int *)(lVar22 + 0x78) == 0) {
      piVar11 = (int *)(lVar18 + lVar14 * 0x14);
      uVar23 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      lVar18 = 0;
      lVar12 = lVar14;
      do {
        iVar43 = iVar43 + 1;
        lVar1 = lVar18 + lVar14;
        lVar18 = lVar18 + 1;
        piVar13 = piVar11;
        if (iVar43 != 0) {
          piVar13 = (int *)(*(long *)(lVar22 + 0xc0) + lVar1 * 0x14);
        }
        if (lVar15 <= lVar12) {
          piVar13 = (int *)(*(long *)(lVar22 + 0xe0) + (lVar1 - lVar15) * 0x14);
        }
        piVar11 = piVar11 + 5;
        iVar17 = *piVar13;
        iVar5 = piVar13[1];
        pfVar3 = (float *)(lVar19 + (long)iVar17 * 0x10);
        if (iVar50 <= iVar17) {
          pfVar3 = (float *)(lVar20 + (long)(iVar17 - iVar50) * 0x10);
        }
        pfVar4 = (float *)(lVar19 + (long)iVar5 * 0x10);
        if (iVar50 <= iVar5) {
          pfVar4 = (float *)(lVar20 + (long)(iVar5 - iVar50) * 0x10);
        }
        uVar21 = uVar21 - 1;
        auVar45._0_4_ = *pfVar3 - fVar34;
        auVar45._4_4_ = pfVar3[1] - fVar35;
        auVar45._8_4_ = pfVar3[2] - fVar36;
        auVar45._12_4_ = pfVar3[3] - fVar42;
        auVar46 = NEON_ext(auVar45,auVar45,4,1);
        auVar41._0_4_ = *pfVar4 - fVar34;
        auVar41._4_4_ = pfVar4[1] - fVar35;
        auVar41._8_4_ = pfVar4[2] - fVar36;
        auVar41._12_4_ = pfVar4[3] - fVar42;
        auVar57 = NEON_ext(auVar41,auVar41,4,1);
        auVar55._0_4_ = auVar45._0_4_ * auVar57._0_4_ - auVar46._0_4_ * auVar41._0_4_;
        auVar55._4_4_ = auVar45._4_4_ * auVar57._4_4_ - auVar46._4_4_ * auVar41._4_4_;
        auVar55._8_4_ = auVar45._8_4_ * auVar41._0_4_ - auVar45._0_4_ * auVar41._8_4_;
        auVar55._12_4_ = auVar45._12_4_ * auVar41._4_4_ - auVar45._4_4_ * auVar41._12_4_;
        auVar45 = NEON_ext(auVar55,auVar55,4,1);
        fVar54 = (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar23))) + auVar45._0_4_;
        uVar23 = SUB41(fVar54,0);
        uVar25 = (undefined1)((uint)fVar54 >> 8);
        uVar26 = (undefined1)((uint)fVar54 >> 0x10);
        uVar27 = (undefined1)((uint)fVar54 >> 0x18);
        fVar54 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) + auVar45._4_4_;
        uVar28 = SUB41(fVar54,0);
        uVar29 = (undefined1)((uint)fVar54 >> 8);
        uVar30 = (undefined1)((uint)fVar54 >> 0x10);
        uVar31 = (undefined1)((uint)fVar54 >> 0x18);
        fVar32 = fVar32 + auVar55._0_4_;
        fVar33 = fVar33 + auVar55._4_4_;
        lVar12 = lVar12 + 1;
      } while (uVar21 != 0);
    }
    else {
      piVar11 = (int *)(lVar18 + lVar14 * 0x14);
      uVar23 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      fVar32 = 0.0;
      fVar33 = 0.0;
      lVar18 = 0;
      lVar12 = lVar14;
      do {
        if (lVar12 < lVar15) {
          iVar43 = *(int *)(*(long *)(lVar22 + 0x70) + lVar12 * 4);
          piVar13 = piVar11;
          if (iVar43 != -1) {
            piVar13 = (int *)(*(long *)(lVar22 + 0xc0) + (long)iVar43 * 0x14);
          }
        }
        else {
          piVar13 = (int *)(*(long *)(lVar22 + 0xe0) + ((lVar18 + lVar14) - lVar15) * 0x14);
        }
        iVar43 = *piVar13;
        iVar17 = piVar13[1];
        pfVar3 = (float *)(lVar19 + (long)iVar43 * 0x10);
        if (iVar50 <= iVar43) {
          pfVar3 = (float *)(lVar20 + (long)(iVar43 - iVar50) * 0x10);
        }
        pfVar4 = (float *)(lVar19 + (long)iVar17 * 0x10);
        if (iVar50 <= iVar17) {
          pfVar4 = (float *)(lVar20 + (long)(iVar17 - iVar50) * 0x10);
        }
        uVar21 = uVar21 - 1;
        auVar46._0_4_ = *pfVar3 - fVar34;
        auVar46._4_4_ = pfVar3[1] - fVar35;
        auVar46._8_4_ = pfVar3[2] - fVar36;
        auVar46._12_4_ = pfVar3[3] - fVar42;
        auVar45 = NEON_ext(auVar46,auVar46,4,1);
        auVar40._0_4_ = *pfVar4 - fVar34;
        auVar40._4_4_ = pfVar4[1] - fVar35;
        auVar40._8_4_ = pfVar4[2] - fVar36;
        auVar40._12_4_ = pfVar4[3] - fVar42;
        auVar55 = NEON_ext(auVar40,auVar40,4,1);
        lVar18 = lVar18 + 1;
        piVar11 = piVar11 + 5;
        lVar12 = lVar12 + 1;
        auVar57._0_4_ = auVar46._0_4_ * auVar55._0_4_ - auVar45._0_4_ * auVar40._0_4_;
        auVar57._4_4_ = auVar46._4_4_ * auVar55._4_4_ - auVar45._4_4_ * auVar40._4_4_;
        auVar57._8_4_ = auVar46._8_4_ * auVar40._0_4_ - auVar46._0_4_ * auVar40._8_4_;
        auVar57._12_4_ = auVar46._12_4_ * auVar40._4_4_ - auVar46._4_4_ * auVar40._12_4_;
        auVar45 = NEON_ext(auVar57,auVar57,4,1);
        fVar54 = (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar23))) + auVar45._0_4_;
        uVar23 = SUB41(fVar54,0);
        uVar25 = (undefined1)((uint)fVar54 >> 8);
        uVar26 = (undefined1)((uint)fVar54 >> 0x10);
        uVar27 = (undefined1)((uint)fVar54 >> 0x18);
        fVar54 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) + auVar45._4_4_;
        uVar28 = SUB41(fVar54,0);
        uVar29 = (undefined1)((uint)fVar54 >> 8);
        uVar30 = (undefined1)((uint)fVar54 >> 0x10);
        uVar31 = (undefined1)((uint)fVar54 >> 0x18);
        fVar32 = fVar32 + auVar57._0_4_;
        fVar33 = fVar33 + auVar57._4_4_;
      } while (uVar21 != 0);
    }
  }
  fVar34 = (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar23))) *
           (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar23)));
  fVar36 = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) *
           (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28)));
  fVar35 = fVar34 + fVar36 + fVar32 * fVar32;
  fVar34 = fVar34 + fVar36 + fVar32 * fVar32;
  uVar44 = CONCAT44(fVar34,fVar35);
  uVar7 = (uint)(0.0 < fVar35);
  uVar8 = (uint)(0.0 < fVar34);
  if (uVar7 == 0 && uVar8 == 0) {
    auVar38._8_8_ = _UNK_03888d18;
    auVar38._0_8_ = _DAT_03888d10;
    uVar44 = 0;
  }
  else {
    uVar39 = NEON_frsqrte(uVar44,4);
    fVar36 = (float)uVar39;
    fVar42 = (float)((ulong)uVar39 >> 0x20);
    uVar39 = NEON_frsqrts(uVar44,CONCAT44(fVar42 * fVar42,fVar36 * fVar36),4);
    auVar37._0_4_ = (int)(uVar7 * -0x80000000) >> 0x1f;
    auVar37._4_4_ = (int)(uVar8 * -0x80000000) >> 0x1f;
    auVar37._8_4_ = (int)(uVar7 * -0x80000000) >> 0x1f;
    auVar37._12_4_ = (int)(uVar8 * -0x80000000) >> 0x1f;
    fVar36 = fVar36 * (float)uVar39;
    fVar42 = fVar42 * (float)((ulong)uVar39 >> 0x20);
    uVar44 = NEON_frsqrts(uVar44,CONCAT44(fVar42 * fVar42,fVar36 * fVar36),4);
    fVar36 = (float)uVar44 * fVar36;
    fVar42 = (float)((ulong)uVar44 >> 0x20) * fVar42;
    iVar43 = -(uint)(fVar35 <= 0.0);
    iVar50 = -(uint)(fVar34 <= 0.0);
    bVar47 = (byte)((uint)iVar43 >> 8);
    bVar48 = (byte)((uint)iVar43 >> 0x10);
    bVar49 = (byte)((uint)iVar43 >> 0x18);
    bVar51 = (byte)((uint)iVar50 >> 8);
    bVar52 = (byte)((uint)iVar50 >> 0x10);
    bVar53 = (byte)((uint)iVar50 >> 0x18);
    fVar54 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~bVar49,
                             CONCAT12((byte)((uint)fVar36 >> 0x10) & ~bVar48,
                                      CONCAT11((byte)((uint)fVar36 >> 8) & ~bVar47,
                                               SUB41(fVar36,0) & ~(byte)iVar43)));
    auVar56._0_4_ = (float)CONCAT13(uVar27,CONCAT12(uVar26,CONCAT11(uVar25,uVar23))) * fVar54;
    fVar58 = (float)(CONCAT17((byte)((uint)fVar42 >> 0x18) & ~bVar53,
                              CONCAT16((byte)((uint)fVar42 >> 0x10) & ~bVar52,
                                       CONCAT15((byte)((uint)fVar42 >> 8) & ~bVar51,
                                                CONCAT14(SUB41(fVar42,0) & ~(byte)iVar50,fVar54))))
                    >> 0x20);
    auVar56._4_4_ = (float)CONCAT13(uVar31,CONCAT12(uVar30,CONCAT11(uVar29,uVar28))) * fVar58;
    auVar56._8_4_ = fVar32 * fVar54;
    auVar56._12_4_ = fVar33 * fVar58;
    auVar9[1] = uVar25;
    auVar9[0] = uVar23;
    auVar9[2] = uVar26;
    auVar9[3] = uVar27;
    auVar9[4] = uVar28;
    auVar9[5] = uVar29;
    auVar9[6] = uVar30;
    auVar9[7] = uVar31;
    auVar9._8_4_ = fVar32;
    auVar9._12_4_ = fVar33;
    auVar10[1] = uVar25;
    auVar10[0] = uVar23;
    auVar10[2] = uVar26;
    auVar10[3] = uVar27;
    auVar10[4] = uVar28;
    auVar10[5] = uVar29;
    auVar10[6] = uVar30;
    auVar10[7] = uVar31;
    auVar10._8_4_ = fVar32;
    auVar10._12_4_ = fVar33;
    auVar38 = auVar10 ^ (auVar9 ^ auVar56) & auVar37;
    fVar32 = fVar35 * fVar36 * 0.5;
    fVar33 = fVar34 * fVar42 * 0.5;
    uVar44 = CONCAT17((byte)((uint)fVar33 >> 0x18) & ~bVar53,
                      CONCAT16((byte)((uint)fVar33 >> 0x10) & ~bVar52,
                               CONCAT15((byte)((uint)fVar33 >> 8) & ~bVar51,
                                        CONCAT14(SUB41(fVar33,0) & ~(byte)iVar50,
                                                 CONCAT13((byte)((uint)fVar32 >> 0x18) & ~bVar49,
                                                          CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                                   ~bVar48,CONCAT11((byte)((uint)
                                                  fVar32 >> 8) & ~bVar47,
                                                  SUB41(fVar32,0) & ~(byte)iVar43)))))));
  }
  uVar39 = 0;
  uStack_28 = auVar38._8_8_;
  local_30 = auVar38._0_8_;
  FUN_032cc384(param_3,param_1 + 0x60,&local_30);
  auVar24._8_4_ = (undefined4)uVar39;
  auVar24._12_4_ = (undefined4)((ulong)uVar39 >> 0x20);
  auVar24._0_8_ = uVar44;
  return auVar24;
}


