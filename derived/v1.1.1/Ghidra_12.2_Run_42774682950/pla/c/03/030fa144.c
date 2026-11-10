/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030fa144; name: FUN_030fa144
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030fa144(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

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
  long *plVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  byte bVar19;
  uint uVar20;
  undefined4 uVar21;
  uint5 uVar22;
  byte bVar25;
  byte bVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  int iVar27;
  ulong uVar28;
  undefined1 auVar29 [12];
  int iVar32;
  int iVar33;
  int iVar36;
  undefined1 auVar30 [16];
  uint uVar34;
  uint uVar35;
  uint uVar37;
  undefined1 auVar31 [16];
  float fVar38;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar44;
  int iVar45;
  float fVar48;
  int iVar49;
  float fVar50;
  int iVar51;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar52;
  int iVar53;
  float fVar54;
  float fVar56;
  float fVar57;
  undefined1 auVar55 [16];
  float fVar58;
  undefined1 auVar59 [16];
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
  undefined8 local_1088;
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
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar7;
  fVar15 = (float)*param_3;
  fVar16 = (float)((ulong)*param_3 >> 0x20);
  local_1080[0] = 2;
  local_880._0_4_ = 0;
  local_80 = 1;
  auVar59._0_8_ = *param_4;
  auVar59._8_8_ = auVar59._0_8_;
  fVar17 = fVar15;
  fVar18 = fVar16;
  do {
    while( true ) {
      lVar13 = (long)local_80;
      *(ulong *)((long)auStack_878 + lVar13 * 4) = CONCAT44(fVar18,fVar17);
      *(ulong *)(local_880 + lVar13 * 4) = CONCAT44(fVar16,fVar15);
      uVar20 = local_80 + 3;
      uVar35 = uVar20 & 0xfffffffc;
      if ((int)uVar35 < 0x81) {
        uVar14 = CONCAT44(uVar20,uVar20) & 0xfffffffcfffffffc;
        uVar28 = CONCAT44(fVar16,fVar15) & 0xffffff00ffffff00;
        uVar34 = (uint)fVar17 & 0xffffff00;
        uVar37 = (uint)fVar18 & 0xffffff00;
        auVar24[0] = (undefined1)uVar14;
        auVar24[1] = (byte)(uVar14 >> 8) | (byte)(uVar28 >> 8);
        auVar24[2] = (byte)(uVar14 >> 0x10) | (byte)(uVar28 >> 0x10);
        auVar24[3] = (byte)(uVar14 >> 0x18) | (byte)(uVar28 >> 0x18);
        auVar24[4] = (undefined1)(uVar14 >> 0x20);
        auVar24[5] = (byte)(uVar14 >> 0x28) | (byte)(uVar28 >> 0x28);
        auVar24[6] = (byte)(uVar14 >> 0x30) | (byte)(uVar28 >> 0x30);
        auVar24[7] = (byte)(uVar14 >> 0x38) | (byte)(uVar28 >> 0x38);
        auVar24[8] = (undefined1)uVar35;
        bVar19 = (byte)(uVar35 >> 8);
        auVar24[9] = bVar19 | (byte)(uVar34 >> 8);
        bVar25 = (byte)(uVar35 >> 0x10);
        auVar24[10] = bVar25 | (byte)(uVar34 >> 0x10);
        bVar26 = (byte)(uVar35 >> 0x18);
        auVar24[0xb] = bVar26 | (byte)(uVar34 >> 0x18);
        auVar24[0xc] = auVar24[8];
        auVar24[0xd] = bVar19 | (byte)(uVar37 >> 8);
        auVar24[0xe] = bVar25 | (byte)(uVar37 >> 0x10);
        auVar24[0xf] = bVar26 | (byte)(uVar37 >> 0x18);
        if (3 < (int)uVar35) {
          auVar47._4_12_ = stack0xfffffffffffff784;
          auVar47._0_4_ = local_880._0_4_;
          uVar14 = auVar47._0_8_ & 0xffffff00ffffff00;
          uVar35 = local_880._8_4_ & 0xffffff00;
          uVar34 = local_880._12_4_ & 0xffffff00;
          auVar46[1] = (byte)(uVar14 >> 8) | (byte)((ulong)_DAT_03889d70 >> 8);
          auVar46[0] = (char)_DAT_03889d70;
          auVar46[2] = (byte)(uVar14 >> 0x10) | (byte)((ulong)_DAT_03889d70 >> 0x10);
          auVar46[3] = (byte)(uVar14 >> 0x18) | (byte)((ulong)_DAT_03889d70 >> 0x18);
          auVar46[4] = (char)((ulong)_DAT_03889d70 >> 0x20);
          auVar46[5] = (byte)(uVar14 >> 0x28) | (byte)((ulong)_DAT_03889d70 >> 0x28);
          auVar46[6] = (byte)(uVar14 >> 0x30) | (byte)((ulong)_DAT_03889d70 >> 0x30);
          auVar46[7] = (byte)(uVar14 >> 0x38) | (byte)((ulong)_DAT_03889d70 >> 0x38);
          auVar46[8] = (char)_UNK_03889d78;
          auVar46[9] = (byte)(uVar35 >> 8) | (byte)((ulong)_UNK_03889d78 >> 8);
          auVar46[10] = (byte)(uVar35 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x10);
          auVar46[0xb] = (byte)(uVar35 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x18);
          auVar46[0xc] = (char)((ulong)_UNK_03889d78 >> 0x20);
          auVar46[0xd] = (byte)(uVar34 >> 8) | (byte)((ulong)_UNK_03889d78 >> 0x28);
          auVar46[0xe] = (byte)(uVar34 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x30);
          auVar46[0xf] = (byte)(uVar34 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x38);
          auVar24 = NEON_smin(auVar46,auVar24,4);
          if (7 < uVar20) {
            auVar55._8_8_ = _UNK_03889088;
            auVar55._0_8_ = _DAT_03889080;
            lVar13 = 0x81;
            do {
              auVar47 = *(undefined1 (*) [16])(local_1080 + lVar13 * 4);
              uVar14 = auVar47._0_8_ & 0xffffff00ffffff00;
              uVar35 = auVar47._8_4_ & 0xffffff00;
              uVar34 = auVar47._12_4_ & 0xffffff00;
              auVar40[1] = (byte)(uVar14 >> 8) | auVar55[1];
              auVar40[0] = auVar55[0];
              auVar40[2] = (byte)(uVar14 >> 0x10) | auVar55[2];
              auVar40[3] = (byte)(uVar14 >> 0x18) | auVar55[3];
              auVar40[4] = auVar55[4];
              auVar40[5] = (byte)(uVar14 >> 0x28) | auVar55[5];
              auVar40[6] = (byte)(uVar14 >> 0x30) | auVar55[6];
              auVar40[7] = (byte)(uVar14 >> 0x38) | auVar55[7];
              auVar40[8] = auVar55[8];
              auVar40[9] = (byte)(uVar35 >> 8) | auVar55[9];
              auVar40[10] = (byte)(uVar35 >> 0x10) | auVar55[10];
              auVar40[0xb] = (byte)(uVar35 >> 0x18) | auVar55[0xb];
              auVar40[0xc] = auVar55[0xc];
              auVar40[0xd] = (byte)(uVar34 >> 8) | auVar55[0xd];
              auVar40[0xe] = (byte)(uVar34 >> 0x10) | auVar55[0xe];
              auVar40[0xf] = (byte)(uVar34 >> 0x18) | auVar55[0xf];
              auVar31._0_4_ = auVar55._0_4_ + 4;
              auVar31._4_4_ = auVar55._4_4_ + 4;
              auVar31._8_4_ = auVar55._8_4_ + 4;
              auVar31._12_4_ = auVar55._12_4_ + 4;
              auVar24 = NEON_smin(auVar40,auVar24,4);
              uVar14 = lVar13 - 0x7f;
              lVar13 = lVar13 + 1;
              auVar55 = auVar31;
            } while (uVar14 < uVar20 >> 2);
          }
        }
        uVar20 = NEON_sminv(auVar24,4);
        uVar20 = uVar20 & 0xff;
        if (local_80 <= (int)uVar20) goto LAB_030fa424;
      }
      else {
        uVar20 = local_80 - 1;
      }
      local_80 = local_80 + -1;
      uVar14 = (ulong)uVar20;
      uVar20 = local_1080[uVar14];
      uVar21 = *(undefined4 *)(local_880 + uVar14 * 4);
      *(undefined4 *)(local_880 + uVar14 * 4) = *(undefined4 *)(local_880 + (long)local_80 * 4);
      local_1080[uVar14] = local_1080[local_80];
      if ((uVar20 & 1) == 0) break;
      local_1088 = CONCAT44(fVar15,fVar15);
      plVar12 = (long *)(*(long *)(param_5 + 8) + 0x38);
      if (((*(uint *)((long)plVar12 + (ulong)(uVar20 >> 6) * 4 + *plVar12) &
           1 << (ulong)(uVar20 >> 1 & 0x1f)) == 0) ||
         (iVar27 = *(int *)(*(long *)(param_5 + 0x88) + 0xc),
         FUN_02f7d4d4(param_5,uVar20 >> 1,&local_1088),
         iVar27 == *(int *)(*(long *)(param_5 + 0x88) + 0xc))) {
        auVar2._4_4_ = uVar21;
        auVar2._0_4_ = uVar21;
        auVar2._8_4_ = uVar21;
        auVar2._12_4_ = uVar21;
        auVar59 = NEON_smin(auVar59,auVar2,4);
      }
      fVar15 = (float)local_1088;
      fVar16 = (float)((ulong)local_1088 >> 0x20);
      fVar17 = fVar15;
      fVar18 = fVar16;
      if (local_80 == 0) goto LAB_030fa424;
    }
    auVar4._8_4_ = fVar7;
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = fVar6;
    pauVar1 = (undefined1 (*) [16])((long)param_1 + ((ulong)uVar20 & 0xfffffffe) * 0x40 + *param_1);
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar8;
    auVar24 = *pauVar1;
    auVar47 = pauVar1[1];
    auVar3._12_4_ = fVar6;
    auVar46 = NEON_fmax(auVar3,auVar24,4);
    auVar4._12_4_ = fVar7;
    auVar55 = NEON_fmax(auVar4,pauVar1[2],4);
    iVar27 = -(uint)(auVar24._0_4_ <= auVar47._0_4_);
    iVar32 = -(uint)(auVar24._4_4_ <= auVar47._4_4_);
    iVar33 = -(uint)(auVar24._8_4_ <= auVar47._8_4_);
    iVar36 = -(uint)(auVar24._12_4_ <= auVar47._12_4_);
    auVar24 = NEON_fmin(auVar46,auVar47,4);
    auVar47 = NEON_fmin(auVar55,pauVar1[3],4);
    fVar38 = auVar24._0_4_ - fVar6;
    fVar41 = auVar24._4_4_ - fVar6;
    fVar42 = auVar24._8_4_ - fVar6;
    fVar43 = auVar24._12_4_ - fVar6;
    fVar44 = auVar47._0_4_ - fVar7;
    fVar48 = auVar47._4_4_ - fVar7;
    fVar50 = auVar47._8_4_ - fVar7;
    fVar52 = auVar47._12_4_ - fVar7;
    auVar5._12_4_ = fVar8;
    auVar24 = NEON_fmax(auVar5,pauVar1[4],4);
    auVar24 = NEON_fmin(auVar24,pauVar1[5],4);
    fVar54 = auVar24._0_4_ - fVar8;
    fVar56 = auVar24._4_4_ - fVar8;
    fVar57 = auVar24._8_4_ - fVar8;
    fVar58 = auVar24._12_4_ - fVar8;
    auVar39._0_4_ = fVar38 * fVar38 + fVar44 * fVar44 + fVar54 * fVar54;
    auVar39._4_4_ = fVar41 * fVar41 + fVar48 * fVar48 + fVar56 * fVar56;
    auVar39._8_4_ = fVar42 * fVar42 + fVar50 * fVar50 + fVar57 * fVar57;
    auVar39._12_4_ = fVar43 * fVar43 + fVar52 * fVar52 + fVar58 * fVar58;
    bVar19 = -(pauVar1[7][0] == '\0');
    iVar45 = -(uint)(auVar39._0_4_ <= fVar15);
    iVar49 = -(uint)(auVar39._4_4_ <= fVar16);
    iVar51 = -(uint)(auVar39._8_4_ <= fVar17);
    iVar53 = -(uint)(auVar39._12_4_ <= fVar18);
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
    iVar27 = CONCAT13((byte)((uint)iVar45 >> 0x18) & (byte)((uint)iVar27 >> 0x18) & bStack_10ed,
                      CONCAT12((byte)((uint)iVar45 >> 0x10) & (byte)((uint)iVar27 >> 0x10) &
                               bStack_10ee,
                               CONCAT11((byte)((uint)iVar45 >> 8) & (byte)((uint)iVar27 >> 8) &
                                        bStack_10ef,(byte)iVar45 & (byte)iVar27 & local_10f0)));
    auVar29._0_8_ =
         CONCAT17((byte)((uint)iVar49 >> 0x18) & (byte)((uint)iVar32 >> 0x18) & bStack_10e9,
                  CONCAT16((byte)((uint)iVar49 >> 0x10) & (byte)((uint)iVar32 >> 0x10) & bStack_10ea
                           ,CONCAT15((byte)((uint)iVar49 >> 8) & (byte)((uint)iVar32 >> 8) &
                                     bStack_10eb,
                                     CONCAT14((byte)iVar49 & (byte)iVar32 & bStack_10ec,iVar27))));
    auVar29[8] = (byte)iVar51 & (byte)iVar33 & bStack_10e8;
    auVar29[9] = (byte)((uint)iVar51 >> 8) & (byte)((uint)iVar33 >> 8) & bStack_10e7;
    auVar29[10] = (byte)((uint)iVar51 >> 0x10) & (byte)((uint)iVar33 >> 0x10) & bStack_10e6;
    auVar29[0xb] = (byte)((uint)iVar51 >> 0x18) & (byte)((uint)iVar33 >> 0x18) & bStack_10e5;
    auVar30[0xc] = (byte)iVar53 & (byte)iVar36 & bStack_10e4;
    auVar30._0_12_ = auVar29;
    auVar30[0xd] = (byte)((uint)iVar53 >> 8) & (byte)((uint)iVar36 >> 8) & bStack_10e3;
    auVar30[0xe] = (byte)((uint)iVar53 >> 0x10) & (byte)((uint)iVar36 >> 0x10) & bStack_10e2;
    auVar30[0xf] = (byte)((uint)iVar53 >> 0x18) & (byte)((uint)iVar36 >> 0x18) & bStack_10e1;
    uVar14 = (ulong)(uint)(iVar27 + (int)((ulong)auVar29._0_8_ >> 0x20) +
                          auVar29._8_4_ + auVar30._12_4_);
    iVar27 = *(int *)(&DAT_03aadfe0 + uVar14 * 4);
    auVar47 = a64_TBL(ZEXT816(0),pauVar1[6],*(undefined1 (*) [16])(&DAT_03aae120 + uVar14 * 0x10));
    uVar22 = CONCAT14(~bVar19,(uint)(~bVar19 & 1)) & 0x1ffffffff;
    auVar24 = a64_TBL(ZEXT816(0),auVar39,*(undefined1 (*) [16])(&DAT_03aae120 + uVar14 * 0x10));
    iVar32 = auVar47._0_4_ << 1;
    iVar33 = auVar47._4_4_ << 1;
    iVar36 = auVar47._8_4_ << 1;
    iVar45 = auVar47._12_4_ << 1;
    auVar23._0_8_ =
         CONCAT17((char)((uint)iVar33 >> 0x18),
                  CONCAT16((char)((uint)iVar33 >> 0x10),
                           CONCAT15((char)((uint)iVar33 >> 8),
                                    CONCAT14((byte)(uVar22 >> 0x20) | (byte)iVar33,
                                             CONCAT13((char)((uint)iVar32 >> 0x18),
                                                      CONCAT12((char)((uint)iVar32 >> 0x10),
                                                               CONCAT11((char)((uint)iVar32 >> 8),
                                                                        (byte)uVar22 | (byte)iVar32)
                                                              ))))));
    auVar23[8] = ~bVar19 & 1 | (byte)iVar36;
    auVar23[9] = (char)((uint)iVar36 >> 8);
    auVar23[10] = (char)((uint)iVar36 >> 0x10);
    auVar23[0xb] = (char)((uint)iVar36 >> 0x18);
    auVar23[0xc] = ~bVar19 & 1 | (byte)iVar45;
    auVar23[0xd] = (char)((uint)iVar45 >> 8);
    auVar23[0xe] = (char)((uint)iVar45 >> 0x10);
    auVar23[0xf] = (char)((uint)iVar45 >> 0x18);
    auVar59 = NEON_smin(auVar59,auVar24 ^ (auVar24 ^ auVar59) &
                                          *(undefined1 (*) [16])
                                           (puVar11 +
                                           (ulong)(0xf >> (ulong)(4U - iVar27 & 0x1f)) * 0x10),4);
    auVar47 = NEON_ext(auVar23,auVar23,8,1);
    *(undefined8 *)(local_1080 + local_80) = auVar23._0_8_;
    *(long *)((long)auStack_1078 + (long)local_80 * 4) = auVar47._0_8_;
    lVar13 = (long)local_80;
    *(long *)((long)auStack_878 + lVar13 * 4) = auVar24._8_8_;
    *(long *)(local_880 + lVar13 * 4) = auVar24._0_8_;
    local_80 = local_80 + iVar27;
  } while (local_80 != 0);
LAB_030fa424:
  uVar21 = NEON_fminnmv(auVar59,4);
  *param_4 = CONCAT44(uVar21,uVar21);
  return;
}


