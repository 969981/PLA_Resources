/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0314be94; name: FUN_0314be94
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0314be94(undefined8 param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar22;
  float fVar27;
  undefined8 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  int iVar28;
  int iVar33;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  undefined1 auVar45 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_af;
  undefined1 local_73;
  undefined8 local_68;
  long local_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_PTR_0434a080;
  local_c0 = CONCAT44(local_c0._4_4_,0x40);
  lVar8 = FUN_032cf190(PTR_PTR_0434a080,0x10,&local_c0);
  fVar10 = param_2 * 0.5 * 0.5;
  uVar7 = (uint)local_c0;
  fVar35 = (float)_DAT_03888d10 * fVar10;
  fVar18 = (float)((ulong)_DAT_03888d10 >> 0x20);
  fVar38 = fVar18 * fVar10;
  fVar41 = (float)_UNK_03888d18 * fVar10;
  fVar21 = (float)((ulong)_UNK_03888d18 >> 0x20);
  fVar10 = fVar21 * fVar10;
  fVar11 = param_2 * 0.5 * -0.5;
  fVar12 = (float)_DAT_03888d10 * fVar11;
  fVar18 = fVar18 * fVar11;
  fVar20 = (float)_UNK_03888d18 * fVar11;
  fVar21 = fVar21 * fVar11;
  fVar13 = fVar12 - fVar35;
  fVar19 = fVar18 - fVar38;
  fVar11 = fVar20 - fVar41;
  lVar9 = 0;
  fVar22 = fVar11 * fVar11 + fVar13 * fVar13 + fVar19 * fVar19;
  fVar27 = fVar11 * fVar11 + fVar13 * fVar13 + fVar19 * fVar19;
  uVar23 = CONCAT44(fVar27,fVar22);
  uVar44 = NEON_frsqrte(uVar23,4);
  fVar36 = (float)uVar44;
  fVar39 = (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(uVar23,CONCAT44(fVar39 * fVar39,fVar36 * fVar36),4);
  fVar36 = fVar36 * (float)uVar44;
  fVar39 = fVar39 * (float)((ulong)uVar44 >> 0x20);
  iVar28 = -(uint)(fVar22 <= 0.0);
  iVar33 = -(uint)(fVar27 <= 0.0);
  uVar44 = NEON_frsqrts(uVar23,CONCAT44(fVar39 * fVar39,fVar36 * fVar36),4);
  fVar36 = (float)uVar44 * fVar36;
  fVar39 = (float)((ulong)uVar44 >> 0x20) * fVar39;
  fVar22 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                             SUB41(fVar36,0) & ~(byte)iVar28)));
  fVar13 = fVar13 * fVar22;
  fVar36 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                            CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                     CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar33 >> 8)
                                              ,CONCAT14(SUB41(fVar39,0) & ~(byte)iVar33,fVar22))))
                  >> 0x20);
  fVar19 = fVar19 * fVar36;
  auVar14._0_8_ = CONCAT44(fVar19,fVar13);
  auVar14._8_4_ = fVar11 * fVar22;
  auVar14._12_4_ = (fVar21 - fVar10) * fVar36;
  uStack_b8 = auVar14._8_8_;
  auVar29._8_8_ = uStack_b8;
  auVar29._0_8_ = auVar14._0_8_;
  auVar30._0_12_ = auVar29._0_12_;
  auVar30._12_4_ = 0;
  auVar24._8_8_ = _UNK_03889038;
  auVar24._0_8_ = _DAT_03889030;
  auVar25 = a64_TBL(ZEXT816(0),auVar30,auVar24);
  auVar31._8_4_ = (int)_UNK_03889f18;
  auVar31._0_8_ = _DAT_03889f10;
  auVar31._12_4_ = (int)((ulong)_UNK_03889f18 >> 0x20);
  auVar31 = a64_TBL(ZEXT816(0),auVar30,auVar31);
  fVar22 = auVar31._0_4_;
  fVar36 = fVar22 * fVar22;
  fVar27 = auVar31._4_4_ * auVar31._4_4_;
  fVar11 = auVar31._8_4_ * auVar31._8_4_;
  fVar39 = auVar31._12_4_ * auVar31._12_4_;
  auVar45._4_4_ = fVar27;
  auVar45._0_4_ = fVar36;
  auVar45._8_4_ = fVar11;
  auVar45._12_4_ = fVar39;
  auVar2._4_4_ = fVar27;
  auVar2._0_4_ = fVar36;
  auVar2._8_4_ = fVar11;
  auVar2._12_4_ = fVar39;
  auVar45 = NEON_ext(auVar45,auVar2,8,1);
  fVar11 = auVar45._0_4_ + auVar45._4_4_;
  auVar15._4_12_ = auVar25._4_12_;
  auVar15._0_4_ = -auVar25._0_4_;
  auVar32._4_12_ = auVar31._4_12_;
  auVar32._0_4_ = -fVar22;
  auVar25._0_8_ =
       CONCAT44(-(uint)(fVar13 * fVar13 + fVar19 * fVar19 < fVar36 + fVar27 + fVar11),
                -(uint)(fVar13 * fVar13 + fVar19 * fVar19 < fVar36 + fVar27 + fVar11));
  auVar25._8_8_ = auVar25._0_8_;
  auVar15 = auVar15 ^ (auVar15 ^ auVar32) & auVar25;
  fVar11 = auVar15._0_4_;
  fVar13 = auVar15._4_4_;
  fVar19 = auVar15._8_4_;
  fVar22 = fVar11 * fVar11 + fVar13 * fVar13 + fVar19 * fVar19;
  fVar27 = fVar11 * fVar11 + fVar13 * fVar13 + fVar19 * fVar19;
  uVar23 = CONCAT44(fVar27,fVar22);
  uVar44 = NEON_frsqrte(uVar23,4);
  fVar36 = (float)uVar44;
  fVar39 = (float)((ulong)uVar44 >> 0x20);
  uVar44 = NEON_frsqrts(uVar23,CONCAT44(fVar39 * fVar39,fVar36 * fVar36),4);
  fVar36 = fVar36 * (float)uVar44;
  fVar39 = fVar39 * (float)((ulong)uVar44 >> 0x20);
  iVar28 = -(uint)(fVar22 <= 0.0);
  iVar33 = -(uint)(fVar27 <= 0.0);
  uVar44 = NEON_frsqrts(uVar23,CONCAT44(fVar39 * fVar39,fVar36 * fVar36),4);
  fVar36 = (float)uVar44 * fVar36;
  fVar39 = (float)((ulong)uVar44 >> 0x20) * fVar39;
  fVar22 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                           CONCAT12((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                    CONCAT11((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                             SUB41(fVar36,0) & ~(byte)iVar28)));
  fVar36 = (float)(CONCAT17((byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar33 >> 0x18),
                            CONCAT16((byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar33 >> 0x10),
                                     CONCAT15((byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar33 >> 8)
                                              ,CONCAT14(SUB41(fVar39,0) & ~(byte)iVar33,fVar22))))
                  >> 0x20);
  auVar16._0_4_ = fVar11 * fVar22 * param_3;
  auVar16._4_4_ = fVar13 * fVar36 * param_3;
  auVar16._8_4_ = fVar19 * fVar22 * param_3;
  auVar16._12_4_ = auVar15._12_4_ * fVar36 * param_3;
  auVar31 = NEON_ext(auVar16,auVar16,4,1);
  local_c0 = auVar14._0_8_;
  do {
    fVar11 = (float)(int)lVar9 * 0.19634955;
    local_68 = CONCAT44(fVar11,fVar11);
    FUN_032cab54(&local_60,&local_c0,&local_68);
    auVar5._8_8_ = uStack_58;
    auVar5._0_8_ = local_60;
    auVar45 = NEON_ext(auVar5,auVar5,8,1);
    uVar44 = NEON_ext(local_60,auVar45._0_8_,4,1);
    fVar11 = (float)local_60;
    fVar13 = (float)((ulong)local_60 >> 0x20);
    fVar19 = (float)uStack_58;
    fVar22 = (float)((ulong)uStack_58 >> 0x20);
    fVar27 = auVar45._4_4_ * auVar45._4_4_;
    fVar39 = auVar16._0_4_ * fVar11 + auVar16._4_4_ * fVar13 + auVar16._8_4_ * fVar19;
    fVar34 = auVar16._0_4_ * fVar11 + auVar16._4_4_ * fVar13 + auVar16._8_4_ * fVar19;
    fVar36 = fVar27 + -0.5;
    fVar27 = fVar27 + -0.5;
    puVar1 = (undefined8 *)(lVar8 + lVar9 * 0x10);
    lVar9 = lVar9 + 1;
    fVar37 = auVar31._0_4_ * fVar11 - auVar16._0_4_ * (float)uVar44;
    fVar40 = auVar31._4_4_ * fVar13 - auVar16._4_4_ * (float)((ulong)uVar44 >> 0x20);
    fVar42 = auVar16._0_4_ * fVar19 - auVar16._8_4_ * fVar11;
    fVar43 = auVar16._4_4_ * fVar22 - auVar16._12_4_ * fVar13;
    auVar3._4_4_ = fVar40;
    auVar3._0_4_ = fVar37;
    auVar3._8_4_ = fVar42;
    auVar3._12_4_ = fVar43;
    auVar4._4_4_ = fVar40;
    auVar4._0_4_ = fVar37;
    auVar4._8_4_ = fVar42;
    auVar4._12_4_ = fVar43;
    auVar45 = NEON_ext(auVar3,auVar4,4,1);
    fVar11 = auVar16._0_4_ * fVar36 + fVar11 * fVar39 + auVar45._0_4_ * fVar22;
    fVar13 = auVar16._4_4_ * fVar27 + fVar13 * fVar34 + auVar45._4_4_ * fVar22;
    fVar19 = auVar16._8_4_ * fVar36 + fVar19 * fVar39 + fVar37 * fVar22;
    fVar22 = auVar16._12_4_ * fVar27 + fVar22 * fVar34 + fVar40 * fVar22;
    fVar11 = fVar11 + fVar11;
    fVar13 = fVar13 + fVar13;
    fVar19 = fVar19 + fVar19;
    fVar22 = fVar22 + fVar22;
    auVar26._0_8_ = CONCAT44(fVar38 + fVar13,fVar35 + fVar11);
    auVar26._8_4_ = fVar41 + fVar19;
    auVar26._12_4_ = fVar10 + fVar22;
    auVar17._0_8_ = CONCAT44(fVar18 + fVar13,fVar12 + fVar11);
    auVar17._8_4_ = fVar20 + fVar19;
    auVar17._12_4_ = fVar21 + fVar22;
    puVar1[1] = auVar26._8_8_;
    *puVar1 = auVar26._0_8_;
    puVar1[0x41] = auVar17._8_8_;
    puVar1[0x40] = auVar17._0_8_;
  } while (lVar9 != 0x20);
  FUN_02fe00c8(&local_c0);
  uStack_58 = 0x1000000040;
  local_af = 0;
  local_73 = 0;
  local_60 = lVar8;
  FUN_02fdc280(param_1,&local_60,&local_c0);
  if (-1 < (int)uVar7) {
    FUN_032cf244(puVar6,lVar8,0x10,uVar7 & 0x3fffffff);
  }
  return;
}


