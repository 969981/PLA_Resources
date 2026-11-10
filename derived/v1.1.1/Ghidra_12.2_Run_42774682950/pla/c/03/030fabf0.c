/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fabf0; name: FUN_030fabf0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030fabf0(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  byte bVar16;
  uint uVar17;
  undefined4 uVar18;
  uint5 uVar19;
  byte bVar22;
  byte bVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  int iVar24;
  ulong uVar25;
  undefined1 auVar26 [12];
  int iVar29;
  int iVar30;
  int iVar33;
  undefined1 auVar27 [16];
  uint uVar31;
  uint uVar32;
  uint uVar34;
  undefined1 auVar28 [16];
  float fVar35;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar41;
  int iVar42;
  float fVar45;
  int iVar46;
  float fVar47;
  int iVar48;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar49;
  int iVar50;
  float fVar51;
  float fVar53;
  float fVar54;
  undefined1 auVar52 [16];
  float fVar55;
  undefined1 auVar56 [16];
  byte local_10f0;
  byte bStack_10ef;
  byte bStack_10ee;
  byte bStack_10ed;
  byte bStack_10ec;
  byte bStack_10eb;
  byte bStack_10ea;
  byte bStack_10e9;
  byte bStack_10e8;
  byte bStack_10e7;
  byte bStack_10e6;
  byte bStack_10e5;
  byte bStack_10e4;
  byte bStack_10e3;
  byte bStack_10e2;
  byte bStack_10e1;
  float local_1088;
  float fStack_1084;
  uint local_1080 [2];
  undefined8 auStack_1078 [255];
  undefined1 local_880 [8];
  undefined8 auStack_878 [255];
  int local_80;
  
  puVar11 = PTR_DAT_043723a0;
  uVar10 = _UNK_03889708;
  uVar9 = _DAT_03889700;
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  local_1088 = (float)*param_3;
  fStack_1084 = (float)((ulong)*param_3 >> 0x20);
  local_1080[0] = 2;
  local_880._0_4_ = 0;
  local_80 = 1;
  auVar56._0_8_ = *param_4;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar7;
  auVar56._8_8_ = auVar56._0_8_;
  fVar14 = local_1088;
  fVar15 = fStack_1084;
  do {
    while( true ) {
      lVar12 = (long)local_80;
      *(ulong *)((long)auStack_878 + lVar12 * 4) = CONCAT44(fVar15,fVar14);
      *(ulong *)(local_880 + lVar12 * 4) = CONCAT44(fStack_1084,local_1088);
      uVar17 = local_80 + 3;
      uVar32 = uVar17 & 0xfffffffc;
      if ((int)uVar32 < 0x81) {
        uVar13 = CONCAT44(uVar17,uVar17) & 0xfffffffcfffffffc;
        uVar25 = CONCAT44(fStack_1084,local_1088) & 0xffffff00ffffff00;
        uVar31 = (uint)fVar14 & 0xffffff00;
        uVar34 = (uint)fVar15 & 0xffffff00;
        auVar21[0] = (undefined1)uVar13;
        auVar21[1] = (byte)(uVar13 >> 8) | (byte)(uVar25 >> 8);
        auVar21[2] = (byte)(uVar13 >> 0x10) | (byte)(uVar25 >> 0x10);
        auVar21[3] = (byte)(uVar13 >> 0x18) | (byte)(uVar25 >> 0x18);
        auVar21[4] = (undefined1)(uVar13 >> 0x20);
        auVar21[5] = (byte)(uVar13 >> 0x28) | (byte)(uVar25 >> 0x28);
        auVar21[6] = (byte)(uVar13 >> 0x30) | (byte)(uVar25 >> 0x30);
        auVar21[7] = (byte)(uVar13 >> 0x38) | (byte)(uVar25 >> 0x38);
        auVar21[8] = (undefined1)uVar32;
        bVar16 = (byte)(uVar32 >> 8);
        auVar21[9] = bVar16 | (byte)(uVar31 >> 8);
        bVar22 = (byte)(uVar32 >> 0x10);
        auVar21[10] = bVar22 | (byte)(uVar31 >> 0x10);
        bVar23 = (byte)(uVar32 >> 0x18);
        auVar21[0xb] = bVar23 | (byte)(uVar31 >> 0x18);
        auVar21[0xc] = auVar21[8];
        auVar21[0xd] = bVar16 | (byte)(uVar34 >> 8);
        auVar21[0xe] = bVar22 | (byte)(uVar34 >> 0x10);
        auVar21[0xf] = bVar23 | (byte)(uVar34 >> 0x18);
        if (3 < (int)uVar32) {
          auVar44._4_12_ = stack0xfffffffffffff784;
          auVar44._0_4_ = local_880._0_4_;
          uVar13 = auVar44._0_8_ & 0xffffff00ffffff00;
          uVar32 = local_880._8_4_ & 0xffffff00;
          uVar31 = local_880._12_4_ & 0xffffff00;
          auVar43[1] = (byte)(uVar13 >> 8) | (byte)((ulong)_DAT_03889d70 >> 8);
          auVar43[0] = (char)_DAT_03889d70;
          auVar43[2] = (byte)(uVar13 >> 0x10) | (byte)((ulong)_DAT_03889d70 >> 0x10);
          auVar43[3] = (byte)(uVar13 >> 0x18) | (byte)((ulong)_DAT_03889d70 >> 0x18);
          auVar43[4] = (char)((ulong)_DAT_03889d70 >> 0x20);
          auVar43[5] = (byte)(uVar13 >> 0x28) | (byte)((ulong)_DAT_03889d70 >> 0x28);
          auVar43[6] = (byte)(uVar13 >> 0x30) | (byte)((ulong)_DAT_03889d70 >> 0x30);
          auVar43[7] = (byte)(uVar13 >> 0x38) | (byte)((ulong)_DAT_03889d70 >> 0x38);
          auVar43[8] = (char)_UNK_03889d78;
          auVar43[9] = (byte)(uVar32 >> 8) | (byte)((ulong)_UNK_03889d78 >> 8);
          auVar43[10] = (byte)(uVar32 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x10);
          auVar43[0xb] = (byte)(uVar32 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x18);
          auVar43[0xc] = (char)((ulong)_UNK_03889d78 >> 0x20);
          auVar43[0xd] = (byte)(uVar31 >> 8) | (byte)((ulong)_UNK_03889d78 >> 0x28);
          auVar43[0xe] = (byte)(uVar31 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x30);
          auVar43[0xf] = (byte)(uVar31 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x38);
          auVar21 = NEON_smin(auVar43,auVar21,4);
          if (7 < uVar17) {
            auVar52._8_8_ = _UNK_03889088;
            auVar52._0_8_ = _DAT_03889080;
            lVar12 = 0x81;
            do {
              auVar44 = *(undefined1 (*) [16])(local_1080 + lVar12 * 4);
              uVar13 = auVar44._0_8_ & 0xffffff00ffffff00;
              uVar32 = auVar44._8_4_ & 0xffffff00;
              uVar31 = auVar44._12_4_ & 0xffffff00;
              auVar37[1] = (byte)(uVar13 >> 8) | auVar52[1];
              auVar37[0] = auVar52[0];
              auVar37[2] = (byte)(uVar13 >> 0x10) | auVar52[2];
              auVar37[3] = (byte)(uVar13 >> 0x18) | auVar52[3];
              auVar37[4] = auVar52[4];
              auVar37[5] = (byte)(uVar13 >> 0x28) | auVar52[5];
              auVar37[6] = (byte)(uVar13 >> 0x30) | auVar52[6];
              auVar37[7] = (byte)(uVar13 >> 0x38) | auVar52[7];
              auVar37[8] = auVar52[8];
              auVar37[9] = (byte)(uVar32 >> 8) | auVar52[9];
              auVar37[10] = (byte)(uVar32 >> 0x10) | auVar52[10];
              auVar37[0xb] = (byte)(uVar32 >> 0x18) | auVar52[0xb];
              auVar37[0xc] = auVar52[0xc];
              auVar37[0xd] = (byte)(uVar31 >> 8) | auVar52[0xd];
              auVar37[0xe] = (byte)(uVar31 >> 0x10) | auVar52[0xe];
              auVar37[0xf] = (byte)(uVar31 >> 0x18) | auVar52[0xf];
              auVar21 = NEON_smin(auVar37,auVar21,4);
              auVar28._0_4_ = auVar52._0_4_ + 4;
              auVar28._4_4_ = auVar52._4_4_ + 4;
              auVar28._8_4_ = auVar52._8_4_ + 4;
              auVar28._12_4_ = auVar52._12_4_ + 4;
              uVar13 = lVar12 - 0x7f;
              lVar12 = lVar12 + 1;
              auVar52 = auVar28;
            } while (uVar13 < uVar17 >> 2);
          }
        }
        uVar17 = NEON_sminv(auVar21,4);
        uVar17 = uVar17 & 0xff;
        if (local_80 <= (int)uVar17) goto LAB_030faeb0;
      }
      else {
        uVar17 = local_80 - 1;
      }
      local_80 = local_80 + -1;
      uVar13 = (ulong)uVar17;
      uVar17 = local_1080[uVar13];
      uVar18 = *(undefined4 *)(local_880 + uVar13 * 4);
      *(undefined4 *)(local_880 + uVar13 * 4) = *(undefined4 *)(local_880 + (long)local_80 * 4);
      local_1080[uVar13] = local_1080[local_80];
      if ((uVar17 & 1) == 0) break;
      iVar24 = *(int *)(*(long *)(param_5 + 0x88) + 0xc);
      fStack_1084 = local_1088;
      FUN_02f7e564(param_5,uVar17 >> 1,&local_1088);
      if (iVar24 == *(int *)(*(long *)(param_5 + 0x88) + 0xc)) {
        auVar2._4_4_ = uVar18;
        auVar2._0_4_ = uVar18;
        auVar2._8_4_ = uVar18;
        auVar2._12_4_ = uVar18;
        auVar56 = NEON_smin(auVar56,auVar2,4);
      }
      fVar14 = local_1088;
      fVar15 = fStack_1084;
      if (local_80 == 0) goto LAB_030faeb0;
    }
    auVar4._8_4_ = fVar7;
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = fVar6;
    pauVar1 = (undefined1 (*) [16])((long)param_1 + ((ulong)uVar17 & 0xfffffffe) * 0x40 + *param_1);
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar8;
    auVar21 = *pauVar1;
    auVar44 = pauVar1[1];
    auVar3._12_4_ = fVar6;
    auVar43 = NEON_fmax(auVar3,auVar21,4);
    auVar4._12_4_ = fVar7;
    auVar52 = NEON_fmax(auVar4,pauVar1[2],4);
    iVar24 = -(uint)(auVar21._0_4_ <= auVar44._0_4_);
    iVar29 = -(uint)(auVar21._4_4_ <= auVar44._4_4_);
    iVar30 = -(uint)(auVar21._8_4_ <= auVar44._8_4_);
    iVar33 = -(uint)(auVar21._12_4_ <= auVar44._12_4_);
    auVar21 = NEON_fmin(auVar43,auVar44,4);
    auVar44 = NEON_fmin(auVar52,pauVar1[3],4);
    fVar35 = auVar21._0_4_ - fVar6;
    fVar38 = auVar21._4_4_ - fVar6;
    fVar39 = auVar21._8_4_ - fVar6;
    fVar40 = auVar21._12_4_ - fVar6;
    fVar41 = auVar44._0_4_ - fVar7;
    fVar45 = auVar44._4_4_ - fVar7;
    fVar47 = auVar44._8_4_ - fVar7;
    fVar49 = auVar44._12_4_ - fVar7;
    auVar5._12_4_ = fVar8;
    auVar21 = NEON_fmax(auVar5,pauVar1[4],4);
    auVar21 = NEON_fmin(auVar21,pauVar1[5],4);
    fVar51 = auVar21._0_4_ - fVar8;
    fVar53 = auVar21._4_4_ - fVar8;
    fVar54 = auVar21._8_4_ - fVar8;
    fVar55 = auVar21._12_4_ - fVar8;
    auVar36._0_4_ = fVar35 * fVar35 + fVar41 * fVar41 + fVar51 * fVar51;
    auVar36._4_4_ = fVar38 * fVar38 + fVar45 * fVar45 + fVar53 * fVar53;
    auVar36._8_4_ = fVar39 * fVar39 + fVar47 * fVar47 + fVar54 * fVar54;
    auVar36._12_4_ = fVar40 * fVar40 + fVar49 * fVar49 + fVar55 * fVar55;
    bVar16 = -(pauVar1[7][0] == '\0');
    iVar42 = -(uint)(auVar36._0_4_ <= local_1088);
    iVar46 = -(uint)(auVar36._4_4_ <= fStack_1084);
    iVar48 = -(uint)(auVar36._8_4_ <= fVar14);
    iVar50 = -(uint)(auVar36._12_4_ <= fVar15);
    local_10f0 = (byte)uVar9;
    bStack_10ef = (byte)((ulong)uVar9 >> 8);
    bStack_10ee = (byte)((ulong)uVar9 >> 0x10);
    bStack_10ed = (byte)((ulong)uVar9 >> 0x18);
    bStack_10ec = (byte)((ulong)uVar9 >> 0x20);
    bStack_10eb = (byte)((ulong)uVar9 >> 0x28);
    bStack_10ea = (byte)((ulong)uVar9 >> 0x30);
    bStack_10e9 = (byte)((ulong)uVar9 >> 0x38);
    bStack_10e8 = (byte)uVar10;
    bStack_10e7 = (byte)((ulong)uVar10 >> 8);
    bStack_10e6 = (byte)((ulong)uVar10 >> 0x10);
    bStack_10e5 = (byte)((ulong)uVar10 >> 0x18);
    bStack_10e4 = (byte)((ulong)uVar10 >> 0x20);
    bStack_10e3 = (byte)((ulong)uVar10 >> 0x28);
    bStack_10e2 = (byte)((ulong)uVar10 >> 0x30);
    bStack_10e1 = (byte)((ulong)uVar10 >> 0x38);
    iVar24 = CONCAT13((byte)((uint)iVar42 >> 0x18) & (byte)((uint)iVar24 >> 0x18) & bStack_10ed,
                      CONCAT12((byte)((uint)iVar42 >> 0x10) & (byte)((uint)iVar24 >> 0x10) &
                               bStack_10ee,
                               CONCAT11((byte)((uint)iVar42 >> 8) & (byte)((uint)iVar24 >> 8) &
                                        bStack_10ef,(byte)iVar42 & (byte)iVar24 & local_10f0)));
    auVar26._0_8_ =
         CONCAT17((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar29 >> 0x18) & bStack_10e9,
                  CONCAT16((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar29 >> 0x10) & bStack_10ea
                           ,CONCAT15((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar29 >> 8) &
                                     bStack_10eb,
                                     CONCAT14((byte)iVar46 & (byte)iVar29 & bStack_10ec,iVar24))));
    auVar26[8] = (byte)iVar48 & (byte)iVar30 & bStack_10e8;
    auVar26[9] = (byte)((uint)iVar48 >> 8) & (byte)((uint)iVar30 >> 8) & bStack_10e7;
    auVar26[10] = (byte)((uint)iVar48 >> 0x10) & (byte)((uint)iVar30 >> 0x10) & bStack_10e6;
    auVar26[0xb] = (byte)((uint)iVar48 >> 0x18) & (byte)((uint)iVar30 >> 0x18) & bStack_10e5;
    auVar27[0xc] = (byte)iVar50 & (byte)iVar33 & bStack_10e4;
    auVar27._0_12_ = auVar26;
    auVar27[0xd] = (byte)((uint)iVar50 >> 8) & (byte)((uint)iVar33 >> 8) & bStack_10e3;
    auVar27[0xe] = (byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar33 >> 0x10) & bStack_10e2;
    auVar27[0xf] = (byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar33 >> 0x18) & bStack_10e1;
    uVar13 = (ulong)(uint)(iVar24 + (int)((ulong)auVar26._0_8_ >> 0x20) +
                          auVar26._8_4_ + auVar27._12_4_);
    iVar24 = *(int *)(&DAT_03aadfe0 + uVar13 * 4);
    auVar21 = a64_TBL(ZEXT816(0),pauVar1[6],*(undefined1 (*) [16])(&DAT_03aae120 + uVar13 * 0x10));
    uVar19 = CONCAT14(~bVar16,(uint)(~bVar16 & 1)) & 0x1ffffffff;
    iVar29 = auVar21._0_4_ << 1;
    iVar30 = auVar21._4_4_ << 1;
    iVar33 = auVar21._8_4_ << 1;
    iVar42 = auVar21._12_4_ << 1;
    auVar21 = a64_TBL(ZEXT816(0),auVar36,*(undefined1 (*) [16])(&DAT_03aae120 + uVar13 * 0x10));
    auVar20._0_8_ =
         CONCAT17((char)((uint)iVar30 >> 0x18),
                  CONCAT16((char)((uint)iVar30 >> 0x10),
                           CONCAT15((char)((uint)iVar30 >> 8),
                                    CONCAT14((byte)(uVar19 >> 0x20) | (byte)iVar30,
                                             CONCAT13((char)((uint)iVar29 >> 0x18),
                                                      CONCAT12((char)((uint)iVar29 >> 0x10),
                                                               CONCAT11((char)((uint)iVar29 >> 8),
                                                                        (byte)uVar19 | (byte)iVar29)
                                                              ))))));
    auVar20[8] = ~bVar16 & 1 | (byte)iVar33;
    auVar20[9] = (char)((uint)iVar33 >> 8);
    auVar20[10] = (char)((uint)iVar33 >> 0x10);
    auVar20[0xb] = (char)((uint)iVar33 >> 0x18);
    auVar20[0xc] = ~bVar16 & 1 | (byte)iVar42;
    auVar20[0xd] = (char)((uint)iVar42 >> 8);
    auVar20[0xe] = (char)((uint)iVar42 >> 0x10);
    auVar20[0xf] = (char)((uint)iVar42 >> 0x18);
    auVar44 = NEON_ext(auVar20,auVar20,8,1);
    auVar56 = NEON_smin(auVar56,auVar21 ^ (auVar21 ^ auVar56) &
                                          *(undefined1 (*) [16])
                                           (puVar11 +
                                           (ulong)(0xf >> (ulong)(4U - iVar24 & 0x1f)) * 0x10),4);
    *(undefined8 *)(local_1080 + local_80) = auVar20._0_8_;
    *(long *)((long)auStack_1078 + (long)local_80 * 4) = auVar44._0_8_;
    lVar12 = (long)local_80;
    *(long *)((long)auStack_878 + lVar12 * 4) = auVar21._8_8_;
    *(long *)(local_880 + lVar12 * 4) = auVar21._0_8_;
    local_80 = local_80 + iVar24;
  } while (local_80 != 0);
LAB_030faeb0:
  uVar18 = NEON_fminnmv(auVar56,4);
  *param_4 = CONCAT44(uVar18,uVar18);
  return;
}


