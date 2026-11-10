/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030f96ac; name: FUN_030f96ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030f96ac(long *param_1,float *param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

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
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  byte bVar20;
  uint uVar21;
  undefined4 uVar22;
  uint5 uVar23;
  byte bVar26;
  byte bVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  int iVar28;
  ulong uVar29;
  undefined1 auVar30 [12];
  int iVar33;
  int iVar34;
  int iVar37;
  undefined1 auVar31 [16];
  uint uVar35;
  uint uVar36;
  uint uVar38;
  undefined1 auVar32 [16];
  float fVar39;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fVar45;
  int iVar46;
  float fVar49;
  int iVar50;
  float fVar51;
  int iVar52;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar53;
  int iVar54;
  float fVar55;
  float fVar57;
  float fVar58;
  undefined1 auVar56 [16];
  float fVar59;
  undefined1 auVar60 [16];
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
  fVar16 = (float)*param_3;
  fVar17 = (float)((ulong)*param_3 >> 0x20);
  local_1080[0] = 2;
  local_880._0_4_ = 0;
  local_80 = 1;
  auVar60._0_8_ = *param_4;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar7;
  auVar60._8_8_ = auVar60._0_8_;
  fVar18 = fVar16;
  fVar19 = fVar17;
  do {
    while( true ) {
      lVar14 = (long)local_80;
      *(ulong *)((long)auStack_878 + lVar14 * 4) = CONCAT44(fVar19,fVar18);
      *(ulong *)(local_880 + lVar14 * 4) = CONCAT44(fVar17,fVar16);
      uVar21 = local_80 + 3;
      uVar36 = uVar21 & 0xfffffffc;
      if ((int)uVar36 < 0x81) {
        uVar15 = CONCAT44(uVar21,uVar21) & 0xfffffffcfffffffc;
        uVar29 = CONCAT44(fVar17,fVar16) & 0xffffff00ffffff00;
        uVar35 = (uint)fVar18 & 0xffffff00;
        uVar38 = (uint)fVar19 & 0xffffff00;
        auVar25[0] = (undefined1)uVar15;
        auVar25[1] = (byte)(uVar15 >> 8) | (byte)(uVar29 >> 8);
        auVar25[2] = (byte)(uVar15 >> 0x10) | (byte)(uVar29 >> 0x10);
        auVar25[3] = (byte)(uVar15 >> 0x18) | (byte)(uVar29 >> 0x18);
        auVar25[4] = (undefined1)(uVar15 >> 0x20);
        auVar25[5] = (byte)(uVar15 >> 0x28) | (byte)(uVar29 >> 0x28);
        auVar25[6] = (byte)(uVar15 >> 0x30) | (byte)(uVar29 >> 0x30);
        auVar25[7] = (byte)(uVar15 >> 0x38) | (byte)(uVar29 >> 0x38);
        auVar25[8] = (undefined1)uVar36;
        bVar20 = (byte)(uVar36 >> 8);
        auVar25[9] = bVar20 | (byte)(uVar35 >> 8);
        bVar26 = (byte)(uVar36 >> 0x10);
        auVar25[10] = bVar26 | (byte)(uVar35 >> 0x10);
        bVar27 = (byte)(uVar36 >> 0x18);
        auVar25[0xb] = bVar27 | (byte)(uVar35 >> 0x18);
        auVar25[0xc] = auVar25[8];
        auVar25[0xd] = bVar20 | (byte)(uVar38 >> 8);
        auVar25[0xe] = bVar26 | (byte)(uVar38 >> 0x10);
        auVar25[0xf] = bVar27 | (byte)(uVar38 >> 0x18);
        if (3 < (int)uVar36) {
          auVar48._4_12_ = stack0xfffffffffffff784;
          auVar48._0_4_ = local_880._0_4_;
          uVar15 = auVar48._0_8_ & 0xffffff00ffffff00;
          uVar36 = local_880._8_4_ & 0xffffff00;
          uVar35 = local_880._12_4_ & 0xffffff00;
          auVar47[1] = (byte)(uVar15 >> 8) | (byte)((ulong)_DAT_03889d70 >> 8);
          auVar47[0] = (char)_DAT_03889d70;
          auVar47[2] = (byte)(uVar15 >> 0x10) | (byte)((ulong)_DAT_03889d70 >> 0x10);
          auVar47[3] = (byte)(uVar15 >> 0x18) | (byte)((ulong)_DAT_03889d70 >> 0x18);
          auVar47[4] = (char)((ulong)_DAT_03889d70 >> 0x20);
          auVar47[5] = (byte)(uVar15 >> 0x28) | (byte)((ulong)_DAT_03889d70 >> 0x28);
          auVar47[6] = (byte)(uVar15 >> 0x30) | (byte)((ulong)_DAT_03889d70 >> 0x30);
          auVar47[7] = (byte)(uVar15 >> 0x38) | (byte)((ulong)_DAT_03889d70 >> 0x38);
          auVar47[8] = (char)_UNK_03889d78;
          auVar47[9] = (byte)(uVar36 >> 8) | (byte)((ulong)_UNK_03889d78 >> 8);
          auVar47[10] = (byte)(uVar36 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x10);
          auVar47[0xb] = (byte)(uVar36 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x18);
          auVar47[0xc] = (char)((ulong)_UNK_03889d78 >> 0x20);
          auVar47[0xd] = (byte)(uVar35 >> 8) | (byte)((ulong)_UNK_03889d78 >> 0x28);
          auVar47[0xe] = (byte)(uVar35 >> 0x10) | (byte)((ulong)_UNK_03889d78 >> 0x30);
          auVar47[0xf] = (byte)(uVar35 >> 0x18) | (byte)((ulong)_UNK_03889d78 >> 0x38);
          auVar25 = NEON_smin(auVar47,auVar25,4);
          if (7 < uVar21) {
            auVar56._8_8_ = _UNK_03889088;
            auVar56._0_8_ = _DAT_03889080;
            lVar14 = 0x81;
            do {
              auVar48 = *(undefined1 (*) [16])(local_1080 + lVar14 * 4);
              uVar15 = auVar48._0_8_ & 0xffffff00ffffff00;
              uVar36 = auVar48._8_4_ & 0xffffff00;
              uVar35 = auVar48._12_4_ & 0xffffff00;
              auVar41[1] = (byte)(uVar15 >> 8) | auVar56[1];
              auVar41[0] = auVar56[0];
              auVar41[2] = (byte)(uVar15 >> 0x10) | auVar56[2];
              auVar41[3] = (byte)(uVar15 >> 0x18) | auVar56[3];
              auVar41[4] = auVar56[4];
              auVar41[5] = (byte)(uVar15 >> 0x28) | auVar56[5];
              auVar41[6] = (byte)(uVar15 >> 0x30) | auVar56[6];
              auVar41[7] = (byte)(uVar15 >> 0x38) | auVar56[7];
              auVar41[8] = auVar56[8];
              auVar41[9] = (byte)(uVar36 >> 8) | auVar56[9];
              auVar41[10] = (byte)(uVar36 >> 0x10) | auVar56[10];
              auVar41[0xb] = (byte)(uVar36 >> 0x18) | auVar56[0xb];
              auVar41[0xc] = auVar56[0xc];
              auVar41[0xd] = (byte)(uVar35 >> 8) | auVar56[0xd];
              auVar41[0xe] = (byte)(uVar35 >> 0x10) | auVar56[0xe];
              auVar41[0xf] = (byte)(uVar35 >> 0x18) | auVar56[0xf];
              auVar25 = NEON_smin(auVar41,auVar25,4);
              auVar32._0_4_ = auVar56._0_4_ + 4;
              auVar32._4_4_ = auVar56._4_4_ + 4;
              auVar32._8_4_ = auVar56._8_4_ + 4;
              auVar32._12_4_ = auVar56._12_4_ + 4;
              uVar15 = lVar14 - 0x7f;
              lVar14 = lVar14 + 1;
              auVar56 = auVar32;
            } while (uVar15 < uVar21 >> 2);
          }
        }
        uVar21 = NEON_sminv(auVar25,4);
        uVar21 = uVar21 & 0xff;
        if (local_80 <= (int)uVar21) goto LAB_030f9984;
      }
      else {
        uVar21 = local_80 - 1;
      }
      local_80 = local_80 + -1;
      uVar15 = (ulong)uVar21;
      uVar21 = local_1080[uVar15];
      uVar22 = *(undefined4 *)(local_880 + uVar15 * 4);
      *(undefined4 *)(local_880 + uVar15 * 4) = *(undefined4 *)(local_880 + (long)local_80 * 4);
      local_1080[uVar15] = local_1080[local_80];
      if ((uVar21 & 1) == 0) break;
      local_1088 = CONCAT44(fVar16,fVar16);
      iVar28 = *(int *)(*(long *)(param_5 + 0x88) + 0xc);
      plVar12 = (long *)(*(long *)(param_5 + 8) + 0x28);
      lVar13 = *plVar12;
      lVar14 = 0;
      if (lVar13 != 0) {
        lVar14 = lVar13 + (long)plVar12;
      }
      uVar15 = FUN_02f89744(lVar14,uVar21 >> 1 & 0xffff);
      if ((uVar15 & 1) != 0) {
        FUN_02f7c40c(param_5,uVar21 >> 1,&local_1088);
      }
      if (iVar28 == *(int *)(*(long *)(param_5 + 0x88) + 0xc)) {
        auVar2._4_4_ = uVar22;
        auVar2._0_4_ = uVar22;
        auVar2._8_4_ = uVar22;
        auVar2._12_4_ = uVar22;
        auVar60 = NEON_smin(auVar60,auVar2,4);
      }
      fVar16 = (float)local_1088;
      fVar17 = (float)((ulong)local_1088 >> 0x20);
      fVar18 = fVar16;
      fVar19 = fVar17;
      if (local_80 == 0) goto LAB_030f9984;
    }
    auVar4._8_4_ = fVar7;
    auVar3._4_4_ = fVar6;
    auVar3._0_4_ = fVar6;
    auVar3._8_4_ = fVar6;
    pauVar1 = (undefined1 (*) [16])((long)param_1 + ((ulong)uVar21 & 0xfffffffe) * 0x40 + *param_1);
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8;
    auVar5._8_4_ = fVar8;
    auVar25 = *pauVar1;
    auVar48 = pauVar1[1];
    auVar3._12_4_ = fVar6;
    auVar47 = NEON_fmax(auVar3,auVar25,4);
    auVar4._12_4_ = fVar7;
    auVar56 = NEON_fmax(auVar4,pauVar1[2],4);
    iVar28 = -(uint)(auVar25._0_4_ <= auVar48._0_4_);
    iVar33 = -(uint)(auVar25._4_4_ <= auVar48._4_4_);
    iVar34 = -(uint)(auVar25._8_4_ <= auVar48._8_4_);
    iVar37 = -(uint)(auVar25._12_4_ <= auVar48._12_4_);
    auVar25 = NEON_fmin(auVar47,auVar48,4);
    auVar48 = NEON_fmin(auVar56,pauVar1[3],4);
    fVar39 = auVar25._0_4_ - fVar6;
    fVar42 = auVar25._4_4_ - fVar6;
    fVar43 = auVar25._8_4_ - fVar6;
    fVar44 = auVar25._12_4_ - fVar6;
    fVar45 = auVar48._0_4_ - fVar7;
    fVar49 = auVar48._4_4_ - fVar7;
    fVar51 = auVar48._8_4_ - fVar7;
    fVar53 = auVar48._12_4_ - fVar7;
    auVar5._12_4_ = fVar8;
    auVar25 = NEON_fmax(auVar5,pauVar1[4],4);
    auVar25 = NEON_fmin(auVar25,pauVar1[5],4);
    fVar55 = auVar25._0_4_ - fVar8;
    fVar57 = auVar25._4_4_ - fVar8;
    fVar58 = auVar25._8_4_ - fVar8;
    fVar59 = auVar25._12_4_ - fVar8;
    auVar40._0_4_ = fVar39 * fVar39 + fVar45 * fVar45 + fVar55 * fVar55;
    auVar40._4_4_ = fVar42 * fVar42 + fVar49 * fVar49 + fVar57 * fVar57;
    auVar40._8_4_ = fVar43 * fVar43 + fVar51 * fVar51 + fVar58 * fVar58;
    auVar40._12_4_ = fVar44 * fVar44 + fVar53 * fVar53 + fVar59 * fVar59;
    bVar20 = -(pauVar1[7][0] == '\0');
    iVar46 = -(uint)(auVar40._0_4_ <= fVar16);
    iVar50 = -(uint)(auVar40._4_4_ <= fVar17);
    iVar52 = -(uint)(auVar40._8_4_ <= fVar18);
    iVar54 = -(uint)(auVar40._12_4_ <= fVar19);
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
    iVar28 = CONCAT13((byte)((uint)iVar46 >> 0x18) & (byte)((uint)iVar28 >> 0x18) & bStack_10ed,
                      CONCAT12((byte)((uint)iVar46 >> 0x10) & (byte)((uint)iVar28 >> 0x10) &
                               bStack_10ee,
                               CONCAT11((byte)((uint)iVar46 >> 8) & (byte)((uint)iVar28 >> 8) &
                                        bStack_10ef,(byte)iVar46 & (byte)iVar28 & local_10f0)));
    auVar30._0_8_ =
         CONCAT17((byte)((uint)iVar50 >> 0x18) & (byte)((uint)iVar33 >> 0x18) & bStack_10e9,
                  CONCAT16((byte)((uint)iVar50 >> 0x10) & (byte)((uint)iVar33 >> 0x10) & bStack_10ea
                           ,CONCAT15((byte)((uint)iVar50 >> 8) & (byte)((uint)iVar33 >> 8) &
                                     bStack_10eb,
                                     CONCAT14((byte)iVar50 & (byte)iVar33 & bStack_10ec,iVar28))));
    auVar30[8] = (byte)iVar52 & (byte)iVar34 & bStack_10e8;
    auVar30[9] = (byte)((uint)iVar52 >> 8) & (byte)((uint)iVar34 >> 8) & bStack_10e7;
    auVar30[10] = (byte)((uint)iVar52 >> 0x10) & (byte)((uint)iVar34 >> 0x10) & bStack_10e6;
    auVar30[0xb] = (byte)((uint)iVar52 >> 0x18) & (byte)((uint)iVar34 >> 0x18) & bStack_10e5;
    auVar31[0xc] = (byte)iVar54 & (byte)iVar37 & bStack_10e4;
    auVar31._0_12_ = auVar30;
    auVar31[0xd] = (byte)((uint)iVar54 >> 8) & (byte)((uint)iVar37 >> 8) & bStack_10e3;
    auVar31[0xe] = (byte)((uint)iVar54 >> 0x10) & (byte)((uint)iVar37 >> 0x10) & bStack_10e2;
    auVar31[0xf] = (byte)((uint)iVar54 >> 0x18) & (byte)((uint)iVar37 >> 0x18) & bStack_10e1;
    uVar15 = (ulong)(uint)(iVar28 + (int)((ulong)auVar30._0_8_ >> 0x20) +
                          auVar30._8_4_ + auVar31._12_4_);
    iVar28 = *(int *)(&DAT_03aadfe0 + uVar15 * 4);
    auVar48 = a64_TBL(ZEXT816(0),pauVar1[6],*(undefined1 (*) [16])(&DAT_03aae120 + uVar15 * 0x10));
    uVar23 = CONCAT14(~bVar20,(uint)(~bVar20 & 1)) & 0x1ffffffff;
    auVar25 = a64_TBL(ZEXT816(0),auVar40,*(undefined1 (*) [16])(&DAT_03aae120 + uVar15 * 0x10));
    iVar33 = auVar48._0_4_ << 1;
    iVar34 = auVar48._4_4_ << 1;
    iVar37 = auVar48._8_4_ << 1;
    iVar46 = auVar48._12_4_ << 1;
    auVar24._0_8_ =
         CONCAT17((char)((uint)iVar34 >> 0x18),
                  CONCAT16((char)((uint)iVar34 >> 0x10),
                           CONCAT15((char)((uint)iVar34 >> 8),
                                    CONCAT14((byte)(uVar23 >> 0x20) | (byte)iVar34,
                                             CONCAT13((char)((uint)iVar33 >> 0x18),
                                                      CONCAT12((char)((uint)iVar33 >> 0x10),
                                                               CONCAT11((char)((uint)iVar33 >> 8),
                                                                        (byte)uVar23 | (byte)iVar33)
                                                              ))))));
    auVar24[8] = ~bVar20 & 1 | (byte)iVar37;
    auVar24[9] = (char)((uint)iVar37 >> 8);
    auVar24[10] = (char)((uint)iVar37 >> 0x10);
    auVar24[0xb] = (char)((uint)iVar37 >> 0x18);
    auVar24[0xc] = ~bVar20 & 1 | (byte)iVar46;
    auVar24[0xd] = (char)((uint)iVar46 >> 8);
    auVar24[0xe] = (char)((uint)iVar46 >> 0x10);
    auVar24[0xf] = (char)((uint)iVar46 >> 0x18);
    auVar60 = NEON_smin(auVar60,auVar25 ^ (auVar25 ^ auVar60) &
                                          *(undefined1 (*) [16])
                                           (puVar11 +
                                           (ulong)(0xf >> (ulong)(4U - iVar28 & 0x1f)) * 0x10),4);
    auVar48 = NEON_ext(auVar24,auVar24,8,1);
    *(undefined8 *)(local_1080 + local_80) = auVar24._0_8_;
    *(long *)((long)auStack_1078 + (long)local_80 * 4) = auVar48._0_8_;
    lVar14 = (long)local_80;
    *(long *)((long)auStack_878 + lVar14 * 4) = auVar25._8_8_;
    *(long *)(local_880 + lVar14 * 4) = auVar25._0_8_;
    local_80 = local_80 + iVar28;
  } while (local_80 != 0);
LAB_030f9984:
  uVar22 = NEON_fminnmv(auVar60,4);
  *param_4 = CONCAT44(uVar22,uVar22);
  return;
}


