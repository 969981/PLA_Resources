/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03263b60; name: FUN_03263b60
 */


undefined8
FUN_03263b60(undefined8 *param_1,undefined8 *param_2,undefined1 (*param_3) [12],long param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  undefined1 uVar27;
  undefined1 uVar28;
  undefined1 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar39;
  undefined8 uVar40;
  undefined1 auVar41 [16];
  float fVar47;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iVar49;
  undefined8 uVar50;
  int iVar55;
  ulong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar56;
  float fVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  long local_a0;
  undefined8 local_98;
  long local_90;
  uint local_88;
  long local_80;
  undefined8 local_78;
  long local_70;
  uint local_68;
  
  fVar65 = (float)*(undefined8 *)(*param_3 + 8);
  fVar66 = (float)((ulong)*(undefined8 *)(*param_3 + 8) >> 0x20);
  auVar8 = *param_3;
  auVar7 = *param_3;
  fVar63 = (float)*(undefined8 *)*param_3;
  fVar64 = (float)((ulong)*(undefined8 *)*param_3 >> 0x20);
  uVar24 = (long)param_2 - (long)param_1;
  uVar23 = uVar24 >> 4;
  uVar22 = (uint)uVar23;
  if (uVar22 == 3) {
    if (*(int *)(param_4 + 0x50) == 0) {
      return 1;
    }
    fVar39 = (float)param_1[1];
    fVar47 = (float)((ulong)param_1[1] >> 0x20);
    fVar31 = (float)*param_1;
    auVar59._0_4_ = *(float *)(param_1 + 2) - fVar31;
    fVar25 = (float)((ulong)*param_1 >> 0x20);
    auVar59._4_4_ = *(float *)((long)param_1 + 0x14) - fVar25;
    auVar59._8_4_ = *(float *)(param_1 + 3) - fVar39;
    auVar59._12_4_ = *(float *)((long)param_1 + 0x1c) - fVar47;
    auVar33._0_4_ = *(float *)(param_1 + 4) - fVar31;
    auVar33._4_4_ = *(float *)((long)param_1 + 0x24) - fVar25;
    auVar33._8_4_ = *(float *)(param_1 + 5) - fVar39;
    auVar33._12_4_ = *(float *)((long)param_1 + 0x2c) - fVar47;
    auVar52 = NEON_ext(auVar33,auVar33,4,1);
    auVar41 = NEON_ext(auVar59,auVar59,4,1);
    lVar13 = (long)*(int *)(param_4 + 0x50) << 4;
    auVar60._0_4_ = auVar59._0_4_ * auVar52._0_4_ - auVar33._0_4_ * auVar41._0_4_;
    auVar60._4_4_ = auVar59._4_4_ * auVar52._4_4_ - auVar33._4_4_ * auVar41._4_4_;
    auVar60._8_4_ = auVar59._8_4_ * auVar33._0_4_ - auVar33._8_4_ * auVar59._0_4_;
    auVar60._12_4_ = auVar59._12_4_ * auVar33._4_4_ - auVar33._12_4_ * auVar59._4_4_;
    auVar41 = NEON_ext(auVar60,auVar60,4,1);
    fVar30 = auVar41._0_4_;
    fVar31 = fVar31 * fVar30;
    fVar38 = auVar41._4_4_;
    fVar25 = fVar25 * fVar38;
    uVar27 = (undefined1)((uint)fVar25 >> 8);
    uVar28 = (undefined1)((uint)fVar25 >> 0x10);
    uVar29 = (undefined1)((uint)fVar25 >> 0x18);
    auVar41[4] = SUB41(fVar25,0);
    auVar41._0_4_ = fVar31;
    auVar41[5] = uVar27;
    auVar41[6] = uVar28;
    auVar41[7] = uVar29;
    auVar41._8_4_ = fVar39 * auVar60._0_4_;
    auVar41._12_4_ = fVar47 * auVar60._4_4_;
    auVar52[4] = SUB41(fVar25,0);
    auVar52._0_4_ = fVar31;
    auVar52[5] = uVar27;
    auVar52[6] = uVar28;
    auVar52[7] = uVar29;
    auVar52._8_4_ = fVar39 * auVar60._0_4_;
    auVar52._12_4_ = fVar47 * auVar60._4_4_;
    auVar41 = NEON_ext(auVar41,auVar52,8,1);
    fVar39 = fVar63 * fVar30 + fVar64 * fVar38 + fVar65 * auVar60._0_4_;
    fVar47 = fVar63 * fVar30 + fVar64 * fVar38 + fVar65 * auVar60._0_4_;
    uVar32 = CONCAT44(-fVar47,-fVar39);
    iVar49 = -(uint)(fVar39 == 0.0);
    iVar55 = -(uint)(fVar47 == 0.0);
    uVar40 = NEON_frecpe(uVar32,4);
    uVar50 = NEON_frecps(uVar32,uVar40,4);
    fVar39 = (float)uVar40 * (float)uVar50;
    fVar47 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
    uVar32 = NEON_frecps(uVar32,CONCAT44(fVar47,fVar39),4);
    uVar23 = CONCAT44(fVar47 * (float)((ulong)uVar32 >> 0x20),fVar39 * (float)uVar32) &
             CONCAT17(~(byte)((uint)iVar55 >> 0x18),
                      CONCAT16(~(byte)((uint)iVar55 >> 0x10),
                               CONCAT15(~(byte)((uint)iVar55 >> 8),
                                        CONCAT14(~(byte)iVar55,
                                                 CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                                                          CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                                                   CONCAT11(~(byte)((uint)iVar49 >>
                                                                                   8),~(byte)iVar49)
                                                                  ))))));
    fVar39 = (float)uVar23;
    fVar47 = (float)(uVar23 >> 0x20);
    fVar31 = -(fVar31 + fVar25 + auVar41._0_4_) * fVar47;
    pfVar19 = *(float **)(param_4 + 0x48);
    do {
      lVar13 = lVar13 + -0x10;
      auVar42._0_4_ = fVar30 * fVar39 * *pfVar19;
      auVar42._4_4_ = fVar38 * fVar47 * pfVar19[1];
      auVar42._8_4_ = auVar60._0_4_ * fVar39 * pfVar19[2];
      auVar42._12_4_ = fVar31 * pfVar19[3];
      auVar41 = NEON_ext(auVar42,auVar42,8,1);
      fVar26 = auVar41._0_4_ + fVar31;
      fVar25 = auVar42._0_4_ + auVar42._4_4_ + fVar26;
      fVar26 = auVar42._0_4_ + auVar42._4_4_ + fVar26;
      pfVar19[2] = pfVar19[2] + fVar65 * fVar25;
      pfVar19[3] = pfVar19[3] + fVar66 * fVar26;
      *pfVar19 = *pfVar19 + fVar63 * fVar25;
      pfVar19[1] = pfVar19[1] + fVar64 * fVar26;
      pfVar19 = pfVar19 + 4;
    } while (lVar13 != 0);
    return 1;
  }
  if (param_1 == param_2) {
    auVar43 = ZEXT816(0);
  }
  else {
    auVar43 = ZEXT816(0);
    uVar12 = ((uint)(uVar24 - 0x10 >> 4) & 0xfffffff) + 1;
    uVar11 = (ulong)uVar12 & 3;
    puVar16 = param_1;
    if ((uVar12 & 3) != 0) {
      puVar15 = param_1;
      auVar41 = auVar43;
      do {
        puVar16 = puVar15 + 2;
        uVar11 = uVar11 - 1;
        auVar43._0_4_ = auVar41._0_4_ + (float)*puVar15;
        auVar43._4_4_ = auVar41._4_4_ + (float)((ulong)*puVar15 >> 0x20);
        auVar43._8_4_ = auVar41._8_4_ + (float)puVar15[1];
        auVar43._12_4_ = auVar41._12_4_ + (float)((ulong)puVar15[1] >> 0x20);
        puVar15 = puVar16;
        auVar41 = auVar43;
      } while (uVar11 != 0);
    }
    if (0x2f < uVar24 - 0x10) {
      do {
        puVar15 = puVar16 + 1;
        uVar32 = *puVar16;
        pfVar19 = (float *)(puVar16 + 2);
        pfVar4 = (float *)((long)puVar16 + 0x14);
        pfVar5 = (float *)(puVar16 + 3);
        pfVar6 = (float *)((long)puVar16 + 0x1c);
        fVar31 = auVar43._4_4_;
        fVar25 = auVar43._8_4_;
        fVar39 = auVar43._12_4_;
        auVar41 = *(undefined1 (*) [16])(puVar16 + 4);
        auVar52 = *(undefined1 (*) [16])(puVar16 + 6);
        puVar16 = puVar16 + 8;
        auVar43._0_4_ = auVar43._0_4_ + (float)uVar32 + *pfVar19 + auVar41._0_4_ + auVar52._0_4_;
        auVar43._4_4_ =
             fVar31 + (float)((ulong)uVar32 >> 0x20) + *pfVar4 + auVar41._4_4_ + auVar52._4_4_;
        auVar43._8_4_ = fVar25 + (float)*puVar15 + *pfVar5 + auVar41._8_4_ + auVar52._8_4_;
        auVar43._12_4_ =
             fVar39 + (float)((ulong)*puVar15 >> 0x20) + *pfVar6 + auVar41._12_4_ + auVar52._12_4_;
      } while (puVar16 != param_2);
    }
  }
  local_80 = 0;
  local_78 = 0x8000000000000000;
  lVar13 = tpidr_el0;
  local_68 = uVar22;
  if (uVar22 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(lVar13 + 0x38d490);
    if (lVar14 == 0) {
      lVar14 = FUN_0333d16c(0,1);
      *(long *)(lVar13 + 0x38d490) = lVar14;
    }
    lVar10 = *(long *)(lVar14 + 8);
    uVar11 = (long)((uVar24 << 0x20 & 0xfffffff000000000) + 0x7f00000000) >> 0x20 &
             0xffffffffffffff80;
    if (uVar11 <= *(ulong *)(lVar10 + 0x10)) {
      lVar14 = *(long *)(lVar10 + 0x18);
      uVar11 = uVar11 + lVar14;
      if (uVar11 <= *(ulong *)(lVar10 + 0x20)) {
        *(ulong *)(lVar10 + 0x18) = uVar11;
        goto LAB_03263d48;
      }
    }
    lVar14 = FUN_032ce670();
  }
LAB_03263d48:
  puVar9 = PTR_PTR_0434a080;
  local_78 = CONCAT44(uVar22,(uint)local_78) | 0x8000000000000000;
  local_80 = lVar14;
  local_70 = lVar14;
  if ((int)uVar22 < 0x40000000) {
    if (uVar22 != 0) {
LAB_03263d78:
      local_78 = CONCAT44(local_78._4_4_,uVar22);
    }
  }
  else {
    FUN_032bd0a8(uVar23 & 0xffffffff);
    uVar12 = (uint)(uVar24 >> 3) & 0x7ffffffe;
    if (0x3ffffffe < uVar12) {
      uVar12 = 0x3fffffff;
    }
    uVar18 = uVar22;
    if ((int)uVar22 <= (int)uVar12) {
      uVar18 = uVar12;
    }
    local_80 = FUN_032bd1d4(puVar9,uVar18,0x10,lVar14,0,(long)&local_78 + 4);
    if ((uint)local_78 != uVar22) goto LAB_03263d78;
  }
  local_98 = 0x8000000000000000;
  local_88 = uVar22;
  if (uVar22 == 0) {
    local_a0 = 0;
    local_98._0_4_ = 0;
    local_90 = 0;
    local_98._4_4_ = 0x80000000;
    goto LAB_03263df4;
  }
  lVar14 = *(long *)(lVar13 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar14;
  }
  lVar14 = *(long *)(lVar14 + 8);
  uVar11 = (long)((uVar24 << 0x20 & 0xfffffff000000000) + 0x7f00000000) >> 0x20 & 0xffffffffffffff80
  ;
  if (*(ulong *)(lVar14 + 0x10) < uVar11) {
LAB_0326425c:
    local_a0 = FUN_032ce670();
  }
  else {
    local_a0 = *(long *)(lVar14 + 0x18);
    uVar11 = uVar11 + local_a0;
    if (*(ulong *)(lVar14 + 0x20) < uVar11) goto LAB_0326425c;
    *(ulong *)(lVar14 + 0x18) = uVar11;
  }
  uVar12 = (uint)local_98;
  local_98._4_4_ = uVar22 | 0x80000000;
  local_90 = local_a0;
  if (0x3fffffff < (int)uVar22) {
    FUN_032bd0a8(uVar23 & 0xffffffff);
    uVar18 = (local_98._4_4_ & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar18) {
      uVar18 = 0x3fffffff;
    }
    uVar20 = uVar22;
    if ((int)uVar22 <= (int)uVar18) {
      uVar20 = uVar18;
    }
    local_a0 = FUN_032bd1d4(puVar9,uVar20,0x10,local_a0,uVar12,(long)&local_98 + 4);
  }
LAB_03263df4:
  uVar12 = local_88;
  lVar14 = local_90;
  if ((uint)local_98 != uVar22) {
    local_98._0_4_ = uVar22;
  }
  if (0 < (int)uVar22) {
    uVar32 = NEON_scvtf(CONCAT17((char)(uVar23 >> 0x18),
                                 CONCAT16((char)(uVar23 >> 0x10),
                                          CONCAT15((char)(uVar23 >> 8),CONCAT14((char)uVar23,uVar22)
                                                  ))),4);
    uVar40 = NEON_frecpe(uVar32,4);
    uVar50 = NEON_frecps(uVar32,uVar40,4);
    fVar31 = (float)uVar40 * (float)uVar50;
    fVar39 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
    uVar32 = NEON_frecps(uVar32,CONCAT44(fVar39,fVar31),4);
    fVar31 = fVar31 * (float)uVar32;
    fVar39 = fVar39 * (float)((ulong)uVar32 >> 0x20);
    uVar11 = (long)(int)uVar22 - 1;
    pfVar19 = (float *)(param_1 + uVar11 * 2);
    fVar25 = fVar31 * auVar43._0_4_;
    fVar47 = fVar39 * auVar43._4_4_;
    fVar30 = fVar31 * auVar43._8_4_;
    fVar31 = (float)(CONCAT17((char)((uint)fVar39 >> 0x18),
                              CONCAT16((char)((uint)fVar39 >> 0x10),
                                       CONCAT15((char)((uint)fVar39 >> 8),
                                                CONCAT14(SUB41(fVar39,0),fVar31)))) >> 0x20) *
             auVar43._12_4_;
    auVar46._0_4_ = *pfVar19 - fVar25;
    auVar46._4_4_ = pfVar19[1] - fVar47;
    auVar46._8_4_ = pfVar19[2] - fVar30;
    auVar46._12_4_ = pfVar19[3] - fVar31;
    auVar2._12_4_ = fVar66;
    auVar2._0_12_ = auVar7;
    auVar3._12_4_ = fVar66;
    auVar3._0_12_ = auVar8;
    auVar41 = NEON_ext(auVar2,auVar3,4,1);
    uVar23 = 0;
    do {
      pfVar19 = (float *)(param_1 + uVar23 * 2);
      auVar52 = NEON_ext(auVar46,auVar46,4,1);
      fVar26 = auVar46._0_4_;
      fVar48 = auVar46._4_4_;
      uVar21 = -(uVar11 >> 0x1f & 1) & 0xfffffff000000000 | (uVar11 & 0xffffffff) << 4;
      uVar11 = uVar23 & 0xffffffff;
      fVar39 = *pfVar19 - fVar25;
      fVar38 = pfVar19[1] - fVar47;
      auVar34._0_8_ = CONCAT44(fVar38,fVar39);
      auVar34._8_4_ = pfVar19[2] - fVar30;
      auVar34._12_4_ = pfVar19[3] - fVar31;
      auVar59 = NEON_ext(auVar34,auVar34,4,1);
      uVar23 = uVar23 + 1;
      fVar56 = fVar63 * auVar52._0_4_ - auVar41._0_4_ * fVar26;
      fVar58 = fVar64 * auVar52._4_4_ - auVar41._4_4_ * fVar48;
      auVar57._0_8_ = CONCAT44(fVar58,fVar56);
      auVar57._8_4_ = fVar65 * fVar26 - fVar63 * auVar46._8_4_;
      auVar57._12_4_ = fVar66 * fVar48 - fVar64 * auVar46._12_4_;
      auVar60 = NEON_ext(auVar57,auVar57,4,1);
      auVar61._0_8_ = auVar60._0_8_;
      auVar61._8_8_ = auVar57._0_8_;
      auVar44._0_4_ = fVar26 * auVar59._0_4_ - auVar52._0_4_ * fVar39;
      auVar44._4_4_ = fVar48 * auVar59._4_4_ - auVar52._4_4_ * fVar38;
      auVar44._8_4_ = auVar46._8_4_ * fVar39 - fVar26 * auVar34._8_4_;
      auVar44._12_4_ = auVar46._12_4_ * fVar38 - fVar48 * auVar34._12_4_;
      auVar52 = NEON_ext(auVar44,auVar44,4,1);
      auVar53._0_4_ = fVar25 * auVar60._0_4_;
      auVar53._4_4_ = fVar47 * auVar60._4_4_;
      auVar53._8_4_ = fVar30 * fVar56;
      auVar53._12_4_ = fVar31 * fVar58;
      auVar59 = NEON_ext(auVar53,auVar53,8,1);
      fVar26 = auVar52._0_4_;
      auVar54._0_4_ = fVar25 * fVar26;
      fVar48 = auVar52._4_4_;
      auVar54._4_4_ = fVar47 * fVar48;
      auVar54._8_4_ = fVar30 * auVar44._0_4_;
      auVar54._12_4_ = fVar31 * auVar44._4_4_;
      auVar52 = NEON_ext(auVar54,auVar54,8,1);
      auVar62._0_12_ = auVar61._0_12_;
      auVar45._0_4_ = fVar25 * auVar60._0_4_;
      auVar45._4_4_ = fVar47 * auVar60._4_4_;
      auVar45._8_4_ = fVar30 * fVar56;
      auVar45._12_4_ = fVar31 * -(auVar53._0_4_ + auVar53._4_4_ + auVar59._0_4_);
      auVar59 = NEON_ext(auVar45,auVar45,8,1);
      fVar39 = fVar63 * fVar26 + fVar64 * fVar48 + fVar65 * auVar44._0_4_;
      fVar38 = fVar63 * fVar26 + fVar64 * fVar48 + fVar65 * auVar44._0_4_;
      uVar32 = CONCAT44(-fVar38,-fVar39);
      iVar49 = -(uint)(fVar39 == 0.0);
      iVar55 = -(uint)(fVar38 == 0.0);
      uVar40 = NEON_frecpe(uVar32,4);
      auVar62._12_4_ = -(auVar45._0_4_ + auVar45._4_4_ + auVar59._0_4_);
      auVar46._8_8_ = auVar34._8_8_;
      auVar46._0_8_ = auVar34._0_8_;
      puVar16 = (undefined8 *)(local_80 + uVar21);
      puVar16[1] = auVar62._8_8_;
      *puVar16 = auVar61._0_8_;
      uVar50 = NEON_frecps(uVar32,uVar40,4);
      fVar39 = (float)uVar40 * (float)uVar50;
      fVar38 = (float)((ulong)uVar40 >> 0x20) * (float)((ulong)uVar50 >> 0x20);
      uVar32 = NEON_frecps(uVar32,CONCAT44(fVar38,fVar39),4);
      uVar51 = CONCAT44(fVar38 * (float)((ulong)uVar32 >> 0x20),fVar39 * (float)uVar32) &
               CONCAT17(~(byte)((uint)iVar55 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar55 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar55 >> 8),
                                          CONCAT14(~(byte)iVar55,
                                                   CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar49
                                                                                     >> 8),
                                                                              ~(byte)iVar49)))))));
      fVar39 = (float)uVar51;
      fVar38 = (float)(uVar51 >> 0x20);
      pfVar19 = (float *)(local_a0 + uVar21);
      pfVar19[2] = auVar44._0_4_ * fVar39;
      pfVar19[3] = -(auVar54._0_4_ + auVar54._4_4_ + auVar52._0_4_) * fVar38;
      *pfVar19 = fVar26 * fVar39;
      pfVar19[1] = fVar48 * fVar38;
    } while ((uVar24 >> 4 & 0xffffffff) != uVar23);
  }
  iVar49 = *(int *)(param_4 + 0x50);
  if (iVar49 != 0) {
    puVar15 = *(undefined8 **)(param_4 + 0x48);
    uVar18 = 0;
    puVar16 = puVar15;
    do {
      fVar31 = (float)puVar16[1];
      fVar25 = (float)((ulong)puVar16[1] >> 0x20);
      uVar20 = uVar18;
      do {
        uVar1 = 0;
        if (uVar20 + 1 != uVar22) {
          uVar1 = uVar20 + 1;
        }
        pfVar19 = (float *)(local_80 + (long)(int)uVar1 * 0x10);
        fVar39 = (float)*puVar16;
        auVar35._0_4_ = fVar39 * *pfVar19;
        fVar47 = (float)((ulong)*puVar16 >> 0x20);
        auVar35._4_4_ = fVar47 * pfVar19[1];
        auVar35._8_4_ = fVar31 * pfVar19[2];
        auVar35._12_4_ = fVar25 * pfVar19[3];
        auVar41 = NEON_ext(auVar35,auVar35,8,1);
        fVar30 = auVar35._0_4_ + auVar35._4_4_ + auVar41._0_4_ + pfVar19[3];
        if (0.0 <= fVar30) {
          uVar20 = uVar1;
        }
      } while ((uVar1 != uVar18) && (0.0 <= fVar30));
      uVar18 = uVar20;
      do {
        pfVar19 = (float *)(local_80 + (long)(int)uVar18 * 0x10);
        auVar36._0_4_ = fVar39 * *pfVar19;
        auVar36._4_4_ = fVar47 * pfVar19[1];
        auVar36._8_4_ = fVar31 * pfVar19[2];
        auVar36._12_4_ = fVar25 * pfVar19[3];
        auVar41 = NEON_ext(auVar36,auVar36,8,1);
        if (0.0 <= auVar36._0_4_ + auVar36._4_4_ + auVar41._0_4_ + pfVar19[3]) goto LAB_03263fdc;
        uVar1 = uVar22;
        if (uVar18 != 0) {
          uVar1 = uVar18;
        }
        uVar18 = uVar1 - 1;
      } while (uVar18 != uVar20);
      uVar18 = uVar20;
LAB_03263fdc:
      pfVar19 = (float *)(local_a0 + (long)(int)uVar18 * 0x10);
      auVar37._0_4_ = fVar39 * *pfVar19;
      auVar37._4_4_ = fVar47 * pfVar19[1];
      auVar37._8_4_ = fVar31 * pfVar19[2];
      auVar37._12_4_ = fVar25 * pfVar19[3];
      auVar41 = NEON_ext(auVar37,auVar37,8,1);
      fVar38 = auVar41._0_4_ + pfVar19[3];
      fVar30 = auVar37._0_4_ + auVar37._4_4_ + fVar38;
      fVar38 = auVar37._0_4_ + auVar37._4_4_ + fVar38;
      fVar47 = fVar47 + fVar64 * fVar38;
      puVar17 = puVar16 + 2;
      puVar16[1] = CONCAT44(fVar25 + fVar66 * fVar38,fVar31 + fVar65 * fVar30);
      *puVar16 = CONCAT17((char)((uint)fVar47 >> 0x18),
                          CONCAT16((char)((uint)fVar47 >> 0x10),
                                   CONCAT15((char)((uint)fVar47 >> 8),
                                            CONCAT14(SUB41(fVar47,0),fVar39 + fVar63 * fVar30))));
      puVar16 = puVar17;
    } while (puVar17 != puVar15 + (long)iVar49 * 2);
  }
  if (local_90 == local_a0) {
    local_98._0_4_ = 0;
  }
  lVar10 = *(long *)(lVar13 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar10;
  }
  lVar10 = *(long *)(lVar10 + 8);
  uVar23 = (ulong)(int)(uVar12 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar10 + 0x10) < uVar23) || (*(long *)(lVar10 + 0x18) != uVar23 + lVar14)) ||
     (*(long *)(lVar10 + 0x28) == lVar14)) {
    FUN_032cedf0(lVar10,lVar14);
  }
  else {
    *(long *)(lVar10 + 0x18) = lVar14;
  }
  uVar22 = local_98._4_4_;
  local_98 = (ulong)local_98._4_4_ << 0x20;
  if ((-1 < (int)uVar22) && (local_a0 != 0)) {
    FUN_032cf244(puVar9,local_a0,0x10,uVar22 & 0x3fffffff);
  }
  uVar22 = local_68;
  lVar14 = local_70;
  if (local_70 == local_80) {
    local_78 = local_78 & 0xffffffff00000000;
  }
  lVar10 = *(long *)(lVar13 + 0x38d490);
  if (lVar10 == 0) {
    lVar10 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar10;
  }
  lVar13 = *(long *)(lVar10 + 8);
  uVar23 = (ulong)(int)(uVar22 * 0x10 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar13 + 0x10) < uVar23) || (*(long *)(lVar13 + 0x18) != uVar23 + lVar14)) ||
     (*(long *)(lVar13 + 0x28) == lVar14)) {
    FUN_032cedf0(lVar13,lVar14);
  }
  else {
    *(long *)(lVar13 + 0x18) = lVar14;
  }
  uVar23 = local_78;
  uVar22 = local_78._4_4_;
  local_78 = (ulong)local_78._4_4_ << 0x20;
  if ((-1 < (long)uVar23) && (local_80 != 0)) {
    FUN_032cf244(puVar9,local_80,0x10,uVar22 & 0x3fffffff);
  }
  return 1;
}


