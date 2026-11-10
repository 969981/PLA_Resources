/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03370fa8; name: FUN_03370fa8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03370fa8(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  int iVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  byte bVar26;
  undefined8 uVar27;
  undefined1 auVar28 [12];
  byte bVar42;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  byte bVar43;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  byte bVar57;
  uint uVar58;
  long lVar59;
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  byte bVar66;
  byte bVar67;
  byte bVar70;
  long lVar68;
  undefined1 auVar63 [16];
  long lVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar71;
  long lVar72;
  long lVar73;
  double dVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0 [5];
  long lStack_78;
  ulong local_70;
  undefined8 uStack_68;
  int7 local_60;
  char cStack_59;
  int7 iStack_58;
  char cStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  param_1[2] = 1;
  *param_1 = (long)(PTR_DAT_04389418 + 0x10);
  param_1[1] = 0xffffffff;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = -0x8000000000000000;
  lVar17 = FUN_032cf5b0(0x20);
  FUN_0332cf84();
  param_1[9] = lVar17;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*(uint *)((long)param_1 + 0x3c) & 0x3ffffffe) < 6) {
    lVar17 = FUN_03372a5c(PTR_PTR_0434a080,6,param_1[6],(int)param_1[7]);
    param_1[6] = lVar17;
  }
  if ((int)param_1[7] != 6) {
    *(undefined4 *)(param_1 + 7) = 6;
  }
  lVar69 = _UNK_03889438;
  lVar59 = _DAT_03889430;
  lVar17 = _DAT_03888d90;
  plVar24 = (long *)param_1[6];
  plVar24[1] = _UNK_03888d98;
  *plVar24 = lVar17;
  plVar24[3] = lVar69;
  plVar24[2] = lVar59;
  uVar11 = _UNK_03888fa8;
  uVar20 = _DAT_03888fa0;
  iStack_58 = (int7)_UNK_038894b8;
  cStack_51 = (char)((ulong)_UNK_038894b8 >> 0x38);
  local_60 = (int7)_DAT_038894b0;
  cStack_59 = (char)((ulong)_DAT_038894b0 >> 0x38);
  uStack_48 = _UNK_03888fa8;
  uStack_50 = _DAT_03888fa0;
  FUN_0337258c(local_a0 + 4,&local_60);
  uVar18 = FUN_033726b0(local_a0[4],lStack_78);
  local_a0[0] = FUN_033726b0(uVar18,local_70);
  local_a0[1] = 0;
  local_a0[2] = 0x7fffff;
  local_a0[3] = 0;
  FUN_03373638(local_a0,local_a0 + 2,local_a0);
  FUN_03372fbc(local_a0 + 2,local_a0 + 2,local_a0);
  uStack_b8 = local_a0[0];
  local_c0 = local_a0[0];
  uStack_a8 = local_a0[0];
  uStack_b0 = local_a0[0];
  FUN_03372878(local_a0 + 4,local_a0 + 4,&local_c0);
  lVar17 = -local_a0[4];
  lVar68 = -lStack_78;
  bVar26 = cStack_59 >> 7;
  uVar23 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,CONCAT12(
                                                  bVar26,CONCAT11(bVar26,bVar26))))))) ^
           0x3ffffffffffff;
  bVar57 = cStack_51 >> 7;
  uVar25 = -local_a0[2];
  uVar21 = local_a0[3] ^ 0x7ff;
  if (uVar25 < ~local_a0[2]) {
    uVar21 = uVar21 + 1;
  }
  uVar22 = (local_70 ^
           (local_70 ^ -local_70) & CONCAT44(uStack_50._4_4_ >> 0x1f,uStack_50._4_4_ >> 0x1f)) <<
           0xe | uVar21 & 0x7ff;
  auVar45._0_8_ =
       CONCAT17(bVar26 & ((byte)(local_a0[4] >> 0x38) | (byte)((ulong)lVar17 >> 0x38)),
                CONCAT16((byte)(uVar23 >> 0x30) & (byte)(local_a0[4] >> 0x30) |
                         bVar26 & (byte)((ulong)lVar17 >> 0x30),
                         CONCAT15((byte)(uVar23 >> 0x28) & (byte)(local_a0[4] >> 0x28) |
                                  bVar26 & (byte)((ulong)lVar17 >> 0x28),
                                  CONCAT14((byte)(uVar23 >> 0x20) & (byte)(local_a0[4] >> 0x20) |
                                           bVar26 & (byte)((ulong)lVar17 >> 0x20),
                                           CONCAT13((byte)(uVar23 >> 0x18) &
                                                    (byte)(local_a0[4] >> 0x18) |
                                                    bVar26 & (byte)((ulong)lVar17 >> 0x18),
                                                    CONCAT12((byte)(uVar23 >> 0x10) &
                                                             (byte)(local_a0[4] >> 0x10) |
                                                             bVar26 & (byte)((ulong)lVar17 >> 0x10),
                                                             CONCAT11((byte)(uVar23 >> 8) &
                                                                      (byte)(local_a0[4] >> 8) |
                                                                      bVar26 & (byte)((ulong)lVar17
                                                                                     >> 8),
                                                                      (byte)uVar23 &
                                                                      (byte)local_a0[4] |
                                                                      bVar26 & (byte)lVar17)))))));
  auVar45[8] = (bVar57 ^ 0xff) & (byte)lStack_78 | bVar57 & (byte)lVar68;
  auVar45[9] = (bVar57 ^ 0xff) & (byte)((ulong)lStack_78 >> 8) | bVar57 & (byte)((ulong)lVar68 >> 8)
  ;
  auVar45[10] = (bVar57 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x10) |
                bVar57 & (byte)((ulong)lVar68 >> 0x10);
  auVar45[0xb] = (bVar57 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x18) |
                 bVar57 & (byte)((ulong)lVar68 >> 0x18);
  auVar45[0xc] = (bVar57 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x20) |
                 bVar57 & (byte)((ulong)lVar68 >> 0x20);
  auVar45[0xd] = (bVar57 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x28) |
                 bVar57 & (byte)((ulong)lVar68 >> 0x28);
  auVar45[0xe] = (bVar57 ^ 3) & (byte)((ulong)lStack_78 >> 0x30) |
                 bVar57 & (byte)((ulong)lVar68 >> 0x30);
  auVar45[0xf] = bVar57 & ((byte)((ulong)lStack_78 >> 0x38) | (byte)((ulong)lVar68 >> 0x38));
  lVar17 = auVar45._0_8_ << 0xe;
  lVar68 = auVar45._8_8_ << 0xe;
  plVar24[1] = lVar68;
  *plVar24 = lVar17;
  plVar24[3] = uVar25;
  plVar24[2] = uVar22;
  uStack_50 = (long)uVar22 >> 0xe;
  uStack_48 = (long)uVar25 >> 0xe;
  iStack_58 = (int7)(lVar68 >> 0xe);
  cStack_51 = (char)(lVar68 >> 0x3f);
  local_60 = (int7)(lVar17 >> 0xe);
  cStack_59 = (char)(lVar17 >> 0x3f);
  FUN_0337258c(local_a0 + 4,&local_60);
  local_c0 = uVar21 >> 10 & 1;
  uVar23 = -local_c0;
  local_c0 = (uVar25 ^ uVar23) + local_c0;
  uStack_b8 = ((uVar23 ^ (long)(uVar21 << 0x35) >> 0x35) + ((uVar21 & 0x7ff) >> 10)) -
              (ulong)((uVar25 ^ uVar23) < uVar23);
  FUN_033725d0(local_a0 + 4,local_a0 + 2);
  uVar18 = NEON_sminp(local_a0[2],local_a0[2],4);
  uVar27 = NEON_smin(uVar18,CONCAT44((int)local_a0[3],(int)local_a0[3]),4);
  iVar16 = FUN_03372dd0(&local_c0,2);
  uVar15 = _UNK_03889708;
  uVar18 = _DAT_03889700;
  uVar58 = (int)uVar27 - 0xf;
  auVar30._8_8_ = lStack_78;
  auVar30._0_8_ = local_a0[4];
  auVar46._8_8_ = uStack_68;
  auVar46._0_8_ = local_70;
  if ((int)(iVar16 - 0x36U) <= (int)uVar58) {
    uVar58 = iVar16 - 0x36U;
  }
  auVar29._8_8_ = (long)(int)uVar58;
  auVar29._0_8_ = (long)(int)uVar58;
  auVar45 = NEON_sshl(auVar30,auVar29,8);
  auVar30 = NEON_sshl(auVar46,auVar29,8);
  lStack_78 = auVar45._8_8_;
  local_a0[4] = auVar45._0_8_;
  uStack_68 = auVar30._8_8_;
  local_70 = auVar30._0_8_;
  if (uVar58 < 0x40) {
    if (uVar58 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = (ulong)uVar58;
      uStack_b8 = uStack_b8 << ((ulong)uVar58 & 0x3f) | local_c0 >> ((ulong)-uVar58 & 0x3f);
    }
    uVar25 = local_c0 << (uVar25 & 0x3f);
  }
  else {
    uVar25 = 0;
    uStack_b8 = local_c0 << ((ulong)uVar58 & 0x3f);
  }
  dVar71 = (double)(long)(uVar25 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar25 >> 0x3c) | (int)uStack_b8 << 4) << 0x27);
  bVar57 = (byte)_DAT_03889700;
  bVar66 = (byte)((ulong)_DAT_03889700 >> 0x20);
  bVar67 = (byte)_UNK_03889708;
  bVar70 = (byte)((ulong)_UNK_03889708 >> 0x20);
  bVar26 = (cStack_59 >> 7 & bVar57) + (cStack_51 >> 7 & bVar66) +
           ((byte)(uStack_50 >> 0x3f) & bVar67) + ((byte)(uStack_48 >> 0x3f) & bVar70);
  dVar47 = dVar71 * 3.725290298461914e-09;
  if ((uVar21 & 0x400) != 0) {
    dVar47 = dVar71 * -3.725290298461914e-09;
  }
  dVar71 = (double)(long)(local_a0[4] << 4) * 1.1102230246251565e-16;
  if ((bVar26 & 1) != 0) {
    dVar71 = (double)(long)(local_a0[4] << 4) * -1.1102230246251565e-16;
  }
  dVar44 = (double)(lStack_78 << 4) * 1.1102230246251565e-16;
  if ((bVar26 & 2) != 0) {
    dVar44 = (double)(lStack_78 << 4) * -1.1102230246251565e-16;
  }
  plVar24[4] = (long)dVar71;
  plVar24[5] = (long)dVar44;
  dVar71 = (double)(long)(local_70 << 4) * 1.1102230246251565e-16;
  if ((bVar26 & 4) != 0) {
    dVar71 = (double)(long)(local_70 << 4) * -1.1102230246251565e-16;
  }
  plVar24[6] = (long)dVar71;
  plVar24[7] = (long)dVar47;
  uVar12 = _UNK_03889028;
  uVar27 = _DAT_03889020;
  lVar17 = param_1[6];
  *(undefined8 *)(lVar17 + 0x48) = _UNK_03889028;
  *(undefined8 *)(lVar17 + 0x40) = uVar27;
  *(undefined8 *)(lVar17 + 0x58) = 0;
  *(undefined8 *)(lVar17 + 0x50) = 0;
  uVar14 = _UNK_038896f8;
  uVar13 = _DAT_038896f0;
  iStack_58 = (int7)_UNK_038896f8;
  cStack_51 = (char)((ulong)_UNK_038896f8 >> 0x38);
  local_60 = (int7)_DAT_038896f0;
  cStack_59 = (char)((ulong)_DAT_038896f0 >> 0x38);
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0337258c(local_a0 + 4,&local_60);
  uVar19 = FUN_033726b0(local_a0[4],lStack_78);
  local_a0[0] = FUN_033726b0(uVar19,local_70);
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  FUN_03373638(local_a0,local_a0 + 2,local_a0);
  FUN_03372fbc(local_a0 + 2,local_a0 + 2,local_a0);
  uStack_b8 = local_a0[0];
  local_c0 = local_a0[0];
  uStack_a8 = local_a0[0];
  uStack_b0 = local_a0[0];
  FUN_03372878(local_a0 + 4,local_a0 + 4,&local_c0);
  uVar25 = local_a0[3];
  uVar21 = local_a0[2];
  lVar72 = -local_a0[4];
  lVar73 = -lStack_78;
  lVar68 = local_a0[3] << 0x35;
  uVar23 = (local_70 ^
           (local_70 ^ -local_70) & CONCAT44(uStack_50._4_4_ >> 0x1f,uStack_50._4_4_ >> 0x1f)) <<
           0xe | local_a0[3] & 0x7ff;
  bVar26 = cStack_59 >> 7;
  bVar42 = cStack_51 >> 7;
  uVar22 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,CONCAT12(
                                                  bVar26,CONCAT11(bVar26,bVar26))))))) ^
           0x3ffffffffffff;
  auVar31._0_8_ =
       CONCAT17(bVar26 & ((byte)(local_a0[4] >> 0x38) | (byte)((ulong)lVar72 >> 0x38)),
                CONCAT16((byte)(uVar22 >> 0x30) & (byte)(local_a0[4] >> 0x30) |
                         bVar26 & (byte)((ulong)lVar72 >> 0x30),
                         CONCAT15((byte)(uVar22 >> 0x28) & (byte)(local_a0[4] >> 0x28) |
                                  bVar26 & (byte)((ulong)lVar72 >> 0x28),
                                  CONCAT14((byte)(uVar22 >> 0x20) & (byte)(local_a0[4] >> 0x20) |
                                           bVar26 & (byte)((ulong)lVar72 >> 0x20),
                                           CONCAT13((byte)(uVar22 >> 0x18) &
                                                    (byte)(local_a0[4] >> 0x18) |
                                                    bVar26 & (byte)((ulong)lVar72 >> 0x18),
                                                    CONCAT12((byte)(uVar22 >> 0x10) &
                                                             (byte)(local_a0[4] >> 0x10) |
                                                             bVar26 & (byte)((ulong)lVar72 >> 0x10),
                                                             CONCAT11((byte)(uVar22 >> 8) &
                                                                      (byte)(local_a0[4] >> 8) |
                                                                      bVar26 & (byte)((ulong)lVar72
                                                                                     >> 8),
                                                                      (byte)uVar22 &
                                                                      (byte)local_a0[4] |
                                                                      bVar26 & (byte)lVar72)))))));
  auVar31[8] = (bVar42 ^ 0xff) & (byte)lStack_78 | bVar42 & (byte)lVar73;
  auVar31[9] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 8) | bVar42 & (byte)((ulong)lVar73 >> 8)
  ;
  auVar31[10] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x10) |
                bVar42 & (byte)((ulong)lVar73 >> 0x10);
  auVar31[0xb] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x18) |
                 bVar42 & (byte)((ulong)lVar73 >> 0x18);
  auVar31[0xc] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x20) |
                 bVar42 & (byte)((ulong)lVar73 >> 0x20);
  auVar31[0xd] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x28) |
                 bVar42 & (byte)((ulong)lVar73 >> 0x28);
  auVar31[0xe] = (bVar42 ^ 3) & (byte)((ulong)lStack_78 >> 0x30) |
                 bVar42 & (byte)((ulong)lVar73 >> 0x30);
  auVar31[0xf] = bVar42 & ((byte)((ulong)lStack_78 >> 0x38) | (byte)((ulong)lVar73 >> 0x38));
  lVar72 = auVar31._0_8_ << 0xe;
  lVar73 = auVar31._8_8_ << 0xe;
  *(long *)(lVar17 + 0x48) = lVar73;
  *(long *)(lVar17 + 0x40) = lVar72;
  *(ulong *)(lVar17 + 0x58) = local_a0[2];
  *(ulong *)(lVar17 + 0x50) = uVar23;
  uStack_50 = (long)uVar23 >> 0xe;
  uStack_48 = (long)local_a0[2] >> 0xe;
  iStack_58 = (int7)(lVar73 >> 0xe);
  cStack_51 = (char)(lVar73 >> 0x3f);
  local_60 = (int7)(lVar72 >> 0xe);
  cStack_59 = (char)(lVar72 >> 0x3f);
  FUN_0337258c(local_a0 + 4,&local_60);
  local_c0 = uVar25 >> 10 & 1;
  uVar23 = -local_c0;
  local_c0 = (uVar21 ^ uVar23) + local_c0;
  uStack_b8 = ((uVar23 ^ lVar68 >> 0x35) + ((uVar25 & 0x7ff) >> 10)) -
              (ulong)((uVar21 ^ uVar23) < uVar23);
  FUN_033725d0(local_a0 + 4,local_a0 + 2);
  uVar19 = NEON_sminp(local_a0[2],local_a0[2],4);
  uVar19 = NEON_smin(uVar19,CONCAT44((int)local_a0[3],(int)local_a0[3]),4);
  iVar16 = FUN_03372dd0(&local_c0,2);
  uVar58 = (int)uVar19 - 0xf;
  auVar1._8_8_ = lStack_78;
  auVar1._0_8_ = local_a0[4];
  auVar6._8_8_ = uStack_68;
  auVar6._0_8_ = local_70;
  if ((int)(iVar16 - 0x36U) <= (int)uVar58) {
    uVar58 = iVar16 - 0x36U;
  }
  auVar32._8_8_ = (long)(int)uVar58;
  auVar32._0_8_ = (long)(int)uVar58;
  auVar46 = NEON_sshl(auVar1,auVar32,8);
  auVar30 = NEON_sshl(auVar6,auVar32,8);
  lStack_78 = auVar46._8_8_;
  local_a0[4] = auVar46._0_8_;
  uStack_68 = auVar30._8_8_;
  local_70 = auVar30._0_8_;
  if (uVar58 < 0x40) {
    if (uVar58 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulong)uVar58;
      uStack_b8 = uStack_b8 << ((ulong)uVar58 & 0x3f) | local_c0 >> ((ulong)-uVar58 & 0x3f);
    }
    uVar21 = local_c0 << (uVar21 & 0x3f);
  }
  else {
    uVar21 = 0;
    uStack_b8 = local_c0 << ((ulong)uVar58 & 0x3f);
  }
  bVar75 = (byte)((ulong)uVar15 >> 8);
  bVar76 = (byte)((ulong)uVar15 >> 0x10);
  bVar77 = (byte)((ulong)uVar15 >> 0x18);
  bVar78 = (byte)((ulong)uVar15 >> 0x28);
  bVar79 = (byte)((ulong)uVar15 >> 0x30);
  bVar80 = (byte)((ulong)uVar15 >> 0x38);
  bVar42 = (byte)((ulong)uVar18 >> 0x38);
  dVar71 = (double)(long)(uVar21 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar21 >> 0x3c) | (int)uStack_b8 << 4) << 0x27);
  uVar58 = (uint)(cStack_59 >> 7 & bVar57);
  auVar60._0_8_ = CONCAT17(cStack_51 >> 7 & bVar42,(uint7)CONCAT14(cStack_51 >> 7 & bVar66,uVar58));
  bVar26 = uStack_50._7_1_ >> 7;
  auVar60[8] = bVar26 & bVar67;
  auVar60[9] = bVar26 & bVar75;
  auVar60[10] = bVar26 & bVar76;
  auVar60[0xb] = bVar26 & bVar77;
  bVar26 = uStack_48._7_1_ >> 7;
  auVar63[0xc] = bVar26 & bVar70;
  auVar63._0_12_ = auVar60;
  auVar63[0xd] = bVar26 & bVar78;
  auVar63[0xe] = bVar26 & bVar79;
  auVar63[0xf] = bVar26 & bVar80;
  uVar58 = uVar58 + (int)((ulong)auVar60._0_8_ >> 0x20) + auVar60._8_4_ + auVar63._12_4_;
  dVar47 = dVar71 * 3.725290298461914e-09;
  if ((uVar25 & 0x400) != 0) {
    dVar47 = dVar71 * -3.725290298461914e-09;
  }
  dVar71 = (double)(long)(local_a0[4] << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 1) != 0) {
    dVar71 = (double)(long)(local_a0[4] << 4) * -1.1102230246251565e-16;
  }
  dVar44 = (double)(lStack_78 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 2) != 0) {
    dVar44 = (double)(lStack_78 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0x60) = dVar71;
  *(double *)(lVar17 + 0x68) = dVar44;
  dVar71 = (double)(long)(local_70 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 4) != 0) {
    dVar71 = (double)(long)(local_70 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0x70) = dVar71;
  *(double *)(lVar17 + 0x78) = dVar47;
  uVar18 = _DAT_038899e0;
  lVar17 = param_1[6];
  *(undefined8 *)(lVar17 + 0x88) = _UNK_038899e8;
  *(undefined8 *)(lVar17 + 0x80) = uVar18;
  *(long *)(lVar17 + 0x98) = lVar69;
  *(long *)(lVar17 + 0x90) = lVar59;
  iStack_58 = (int7)_UNK_03888e98;
  cStack_51 = (char)((ulong)_UNK_03888e98 >> 0x38);
  local_60 = (int7)_DAT_03888e90;
  cStack_59 = (char)((ulong)_DAT_03888e90 >> 0x38);
  uStack_48 = uVar11;
  uStack_50 = uVar20;
  FUN_0337258c(local_a0 + 4,&local_60);
  uVar20 = FUN_033726b0(local_a0[4],lStack_78);
  local_a0[0] = FUN_033726b0(uVar20,local_70);
  local_a0[1] = 0;
  local_a0[2] = 0x7fffff;
  local_a0[3] = 0;
  FUN_03373638(local_a0,local_a0 + 2,local_a0);
  FUN_03372fbc(local_a0 + 2,local_a0 + 2,local_a0);
  uStack_b8 = local_a0[0];
  local_c0 = local_a0[0];
  uStack_a8 = local_a0[0];
  uStack_b0 = local_a0[0];
  FUN_03372878(local_a0 + 4,local_a0 + 4,&local_c0);
  lVar59 = -local_a0[4];
  lVar69 = -lStack_78;
  bVar26 = cStack_59 >> 7;
  uVar23 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,CONCAT12(
                                                  bVar26,CONCAT11(bVar26,bVar26))))))) ^
           0x3ffffffffffff;
  bVar43 = cStack_51 >> 7;
  uVar25 = -local_a0[2];
  uVar21 = local_a0[3] ^ 0x7ff;
  if (uVar25 < ~local_a0[2]) {
    uVar21 = uVar21 + 1;
  }
  uVar22 = (local_70 ^
           (local_70 ^ -local_70) & CONCAT44(uStack_50._4_4_ >> 0x1f,uStack_50._4_4_ >> 0x1f)) <<
           0xe | uVar21 & 0x7ff;
  auVar33._0_8_ =
       CONCAT17(bVar26 & ((byte)(local_a0[4] >> 0x38) | (byte)((ulong)lVar59 >> 0x38)),
                CONCAT16((byte)(uVar23 >> 0x30) & (byte)(local_a0[4] >> 0x30) |
                         bVar26 & (byte)((ulong)lVar59 >> 0x30),
                         CONCAT15((byte)(uVar23 >> 0x28) & (byte)(local_a0[4] >> 0x28) |
                                  bVar26 & (byte)((ulong)lVar59 >> 0x28),
                                  CONCAT14((byte)(uVar23 >> 0x20) & (byte)(local_a0[4] >> 0x20) |
                                           bVar26 & (byte)((ulong)lVar59 >> 0x20),
                                           CONCAT13((byte)(uVar23 >> 0x18) &
                                                    (byte)(local_a0[4] >> 0x18) |
                                                    bVar26 & (byte)((ulong)lVar59 >> 0x18),
                                                    CONCAT12((byte)(uVar23 >> 0x10) &
                                                             (byte)(local_a0[4] >> 0x10) |
                                                             bVar26 & (byte)((ulong)lVar59 >> 0x10),
                                                             CONCAT11((byte)(uVar23 >> 8) &
                                                                      (byte)(local_a0[4] >> 8) |
                                                                      bVar26 & (byte)((ulong)lVar59
                                                                                     >> 8),
                                                                      (byte)uVar23 &
                                                                      (byte)local_a0[4] |
                                                                      bVar26 & (byte)lVar59)))))));
  auVar33[8] = (bVar43 ^ 0xff) & (byte)lStack_78 | bVar43 & (byte)lVar69;
  auVar33[9] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 8) | bVar43 & (byte)((ulong)lVar69 >> 8)
  ;
  auVar33[10] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x10) |
                bVar43 & (byte)((ulong)lVar69 >> 0x10);
  auVar33[0xb] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x18) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x18);
  auVar33[0xc] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x20) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x20);
  auVar33[0xd] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x28) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x28);
  auVar33[0xe] = (bVar43 ^ 3) & (byte)((ulong)lStack_78 >> 0x30) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x30);
  auVar33[0xf] = bVar43 & ((byte)((ulong)lStack_78 >> 0x38) | (byte)((ulong)lVar69 >> 0x38));
  lVar59 = auVar33._0_8_ << 0xe;
  lVar69 = auVar33._8_8_ << 0xe;
  *(long *)(lVar17 + 0x88) = lVar69;
  *(long *)(lVar17 + 0x80) = lVar59;
  *(ulong *)(lVar17 + 0x98) = uVar25;
  *(ulong *)(lVar17 + 0x90) = uVar22;
  uStack_50 = (long)uVar22 >> 0xe;
  uStack_48 = (long)uVar25 >> 0xe;
  iStack_58 = (int7)(lVar69 >> 0xe);
  cStack_51 = (char)(lVar69 >> 0x3f);
  local_60 = (int7)(lVar59 >> 0xe);
  cStack_59 = (char)(lVar59 >> 0x3f);
  FUN_0337258c(local_a0 + 4,&local_60);
  local_c0 = uVar21 >> 10 & 1;
  uVar23 = -local_c0;
  local_c0 = (uVar25 ^ uVar23) + local_c0;
  uStack_b8 = ((uVar23 ^ (long)(uVar21 << 0x35) >> 0x35) + ((uVar21 & 0x7ff) >> 10)) -
              (ulong)((uVar25 ^ uVar23) < uVar23);
  FUN_033725d0(local_a0 + 4,local_a0 + 2);
  uVar20 = NEON_sminp(local_a0[2],local_a0[2],4);
  uVar20 = NEON_smin(uVar20,CONCAT44((int)local_a0[3],(int)local_a0[3]),4);
  iVar16 = FUN_03372dd0(&local_c0,2);
  uVar58 = (int)uVar20 - 0xf;
  auVar2._8_8_ = lStack_78;
  auVar2._0_8_ = local_a0[4];
  auVar7._8_8_ = uStack_68;
  auVar7._0_8_ = local_70;
  if ((int)(iVar16 - 0x36U) <= (int)uVar58) {
    uVar58 = iVar16 - 0x36U;
  }
  auVar34._8_8_ = (long)(int)uVar58;
  auVar34._0_8_ = (long)(int)uVar58;
  auVar46 = NEON_sshl(auVar2,auVar34,8);
  auVar30 = NEON_sshl(auVar7,auVar34,8);
  lStack_78 = auVar46._8_8_;
  local_a0[4] = auVar46._0_8_;
  uStack_68 = auVar30._8_8_;
  local_70 = auVar30._0_8_;
  if (uVar58 < 0x40) {
    if (uVar58 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = (ulong)uVar58;
      uStack_b8 = uStack_b8 << ((ulong)uVar58 & 0x3f) | local_c0 >> ((ulong)-uVar58 & 0x3f);
    }
    uVar25 = local_c0 << (uVar25 & 0x3f);
  }
  else {
    uVar25 = 0;
    uStack_b8 = local_c0 << ((ulong)uVar58 & 0x3f);
  }
  dVar71 = (double)(long)(uVar25 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar25 >> 0x3c) | (int)uStack_b8 << 4) << 0x27);
  uVar58 = (uint)(cStack_59 >> 7 & bVar57);
  auVar61._0_8_ = CONCAT17(cStack_51 >> 7 & bVar42,(uint7)CONCAT14(cStack_51 >> 7 & bVar66,uVar58));
  bVar26 = uStack_50._7_1_ >> 7;
  auVar61[8] = bVar26 & bVar67;
  auVar61[9] = bVar26 & bVar75;
  auVar61[10] = bVar26 & bVar76;
  auVar61[0xb] = bVar26 & bVar77;
  bVar26 = uStack_48._7_1_ >> 7;
  auVar64[0xc] = bVar26 & bVar70;
  auVar64._0_12_ = auVar61;
  auVar64[0xd] = bVar26 & bVar78;
  auVar64[0xe] = bVar26 & bVar79;
  auVar64[0xf] = bVar26 & bVar80;
  uVar58 = uVar58 + (int)((ulong)auVar61._0_8_ >> 0x20) + auVar61._8_4_ + auVar64._12_4_;
  dVar47 = dVar71 * 3.725290298461914e-09;
  if ((uVar21 & 0x400) != 0) {
    dVar47 = dVar71 * -3.725290298461914e-09;
  }
  dVar71 = (double)(long)(local_a0[4] << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 1) != 0) {
    dVar71 = (double)(long)(local_a0[4] << 4) * -1.1102230246251565e-16;
  }
  dVar44 = (double)(lStack_78 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 2) != 0) {
    dVar44 = (double)(lStack_78 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0xa0) = dVar71;
  *(double *)(lVar17 + 0xa8) = dVar44;
  dVar71 = (double)(long)(local_70 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 4) != 0) {
    dVar71 = (double)(long)(local_70 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0xb0) = dVar71;
  *(double *)(lVar17 + 0xb8) = dVar47;
  uVar20 = _DAT_03888f00;
  lVar17 = param_1[6];
  *(undefined8 *)(lVar17 + 200) = _UNK_03888f08;
  *(undefined8 *)(lVar17 + 0xc0) = uVar20;
  *(undefined8 *)(lVar17 + 0xd8) = 0;
  *(undefined8 *)(lVar17 + 0xd0) = 0;
  iStack_58 = (int7)_UNK_03889658;
  cStack_51 = (char)((ulong)_UNK_03889658 >> 0x38);
  local_60 = (int7)_DAT_03889650;
  cStack_59 = (char)((ulong)_DAT_03889650 >> 0x38);
  uStack_48 = 0;
  uStack_50 = 0;
  FUN_0337258c(local_a0 + 4,&local_60);
  uVar20 = FUN_033726b0(local_a0[4],lStack_78);
  local_a0[0] = FUN_033726b0(uVar20,local_70);
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  FUN_03373638(local_a0,local_a0 + 2,local_a0);
  FUN_03372fbc(local_a0 + 2,local_a0 + 2,local_a0);
  uStack_b8 = local_a0[0];
  local_c0 = local_a0[0];
  uStack_a8 = local_a0[0];
  uStack_b0 = local_a0[0];
  FUN_03372878(local_a0 + 4,local_a0 + 4,&local_c0);
  uVar25 = local_a0[3];
  uVar21 = local_a0[2];
  lVar69 = -local_a0[4];
  lVar68 = -lStack_78;
  lVar59 = local_a0[3] << 0x35;
  uVar23 = (local_70 ^
           (local_70 ^ -local_70) & CONCAT44(uStack_50._4_4_ >> 0x1f,uStack_50._4_4_ >> 0x1f)) <<
           0xe | local_a0[3] & 0x7ff;
  bVar26 = cStack_59 >> 7;
  bVar43 = cStack_51 >> 7;
  uVar22 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,CONCAT12(
                                                  bVar26,CONCAT11(bVar26,bVar26))))))) ^
           0x3ffffffffffff;
  auVar35._0_8_ =
       CONCAT17(bVar26 & ((byte)(local_a0[4] >> 0x38) | (byte)((ulong)lVar69 >> 0x38)),
                CONCAT16((byte)(uVar22 >> 0x30) & (byte)(local_a0[4] >> 0x30) |
                         bVar26 & (byte)((ulong)lVar69 >> 0x30),
                         CONCAT15((byte)(uVar22 >> 0x28) & (byte)(local_a0[4] >> 0x28) |
                                  bVar26 & (byte)((ulong)lVar69 >> 0x28),
                                  CONCAT14((byte)(uVar22 >> 0x20) & (byte)(local_a0[4] >> 0x20) |
                                           bVar26 & (byte)((ulong)lVar69 >> 0x20),
                                           CONCAT13((byte)(uVar22 >> 0x18) &
                                                    (byte)(local_a0[4] >> 0x18) |
                                                    bVar26 & (byte)((ulong)lVar69 >> 0x18),
                                                    CONCAT12((byte)(uVar22 >> 0x10) &
                                                             (byte)(local_a0[4] >> 0x10) |
                                                             bVar26 & (byte)((ulong)lVar69 >> 0x10),
                                                             CONCAT11((byte)(uVar22 >> 8) &
                                                                      (byte)(local_a0[4] >> 8) |
                                                                      bVar26 & (byte)((ulong)lVar69
                                                                                     >> 8),
                                                                      (byte)uVar22 &
                                                                      (byte)local_a0[4] |
                                                                      bVar26 & (byte)lVar69)))))));
  auVar35[8] = (bVar43 ^ 0xff) & (byte)lStack_78 | bVar43 & (byte)lVar68;
  auVar35[9] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 8) | bVar43 & (byte)((ulong)lVar68 >> 8)
  ;
  auVar35[10] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x10) |
                bVar43 & (byte)((ulong)lVar68 >> 0x10);
  auVar35[0xb] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x18) |
                 bVar43 & (byte)((ulong)lVar68 >> 0x18);
  auVar35[0xc] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x20) |
                 bVar43 & (byte)((ulong)lVar68 >> 0x20);
  auVar35[0xd] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x28) |
                 bVar43 & (byte)((ulong)lVar68 >> 0x28);
  auVar35[0xe] = (bVar43 ^ 3) & (byte)((ulong)lStack_78 >> 0x30) |
                 bVar43 & (byte)((ulong)lVar68 >> 0x30);
  auVar35[0xf] = bVar43 & ((byte)((ulong)lStack_78 >> 0x38) | (byte)((ulong)lVar68 >> 0x38));
  lVar69 = auVar35._0_8_ << 0xe;
  lVar68 = auVar35._8_8_ << 0xe;
  *(long *)(lVar17 + 200) = lVar68;
  *(long *)(lVar17 + 0xc0) = lVar69;
  *(ulong *)(lVar17 + 0xd8) = local_a0[2];
  *(ulong *)(lVar17 + 0xd0) = uVar23;
  uStack_50 = (long)uVar23 >> 0xe;
  uStack_48 = (long)local_a0[2] >> 0xe;
  iStack_58 = (int7)(lVar68 >> 0xe);
  cStack_51 = (char)(lVar68 >> 0x3f);
  local_60 = (int7)(lVar69 >> 0xe);
  cStack_59 = (char)(lVar69 >> 0x3f);
  FUN_0337258c(local_a0 + 4,&local_60);
  local_c0 = uVar25 >> 10 & 1;
  uVar23 = -local_c0;
  local_c0 = (uVar21 ^ uVar23) + local_c0;
  uStack_b8 = ((uVar23 ^ lVar59 >> 0x35) + ((uVar25 & 0x7ff) >> 10)) -
              (ulong)((uVar21 ^ uVar23) < uVar23);
  FUN_033725d0(local_a0 + 4,local_a0 + 2);
  uVar20 = NEON_sminp(local_a0[2],local_a0[2],4);
  uVar20 = NEON_smin(uVar20,CONCAT44((int)local_a0[3],(int)local_a0[3]),4);
  iVar16 = FUN_03372dd0(&local_c0,2);
  uVar58 = (int)uVar20 - 0xf;
  auVar3._8_8_ = lStack_78;
  auVar3._0_8_ = local_a0[4];
  auVar8._8_8_ = uStack_68;
  auVar8._0_8_ = local_70;
  if ((int)(iVar16 - 0x36U) <= (int)uVar58) {
    uVar58 = iVar16 - 0x36U;
  }
  auVar36._8_8_ = (long)(int)uVar58;
  auVar36._0_8_ = (long)(int)uVar58;
  auVar46 = NEON_sshl(auVar3,auVar36,8);
  auVar30 = NEON_sshl(auVar8,auVar36,8);
  lStack_78 = auVar46._8_8_;
  local_a0[4] = auVar46._0_8_;
  uStack_68 = auVar30._8_8_;
  local_70 = auVar30._0_8_;
  if (uVar58 < 0x40) {
    if (uVar58 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulong)uVar58;
      uStack_b8 = uStack_b8 << ((ulong)uVar58 & 0x3f) | local_c0 >> ((ulong)-uVar58 & 0x3f);
    }
    uVar21 = local_c0 << (uVar21 & 0x3f);
  }
  else {
    uVar21 = 0;
    uStack_b8 = local_c0 << ((ulong)uVar58 & 0x3f);
  }
  dVar71 = (double)(long)(uVar21 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar21 >> 0x3c) | (int)uStack_b8 << 4) << 0x27);
  uVar58 = (uint)(cStack_59 >> 7 & bVar57);
  auVar62._0_8_ = CONCAT17(cStack_51 >> 7 & bVar42,(uint7)CONCAT14(cStack_51 >> 7 & bVar66,uVar58));
  bVar26 = uStack_50._7_1_ >> 7;
  auVar62[8] = bVar26 & bVar67;
  auVar62[9] = bVar26 & bVar75;
  auVar62[10] = bVar26 & bVar76;
  auVar62[0xb] = bVar26 & bVar77;
  bVar26 = uStack_48._7_1_ >> 7;
  auVar65[0xc] = bVar26 & bVar70;
  auVar65._0_12_ = auVar62;
  auVar65[0xd] = bVar26 & bVar78;
  auVar65[0xe] = bVar26 & bVar79;
  auVar65[0xf] = bVar26 & bVar80;
  uVar58 = uVar58 + (int)((ulong)auVar62._0_8_ >> 0x20) + auVar62._8_4_ + auVar65._12_4_;
  dVar47 = dVar71 * 3.725290298461914e-09;
  if ((uVar25 & 0x400) != 0) {
    dVar47 = dVar71 * -3.725290298461914e-09;
  }
  dVar71 = (double)(long)(local_a0[4] << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 1) != 0) {
    dVar71 = (double)(long)(local_a0[4] << 4) * -1.1102230246251565e-16;
  }
  dVar44 = (double)(lStack_78 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 2) != 0) {
    dVar44 = (double)(lStack_78 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0xe0) = dVar71;
  *(double *)(lVar17 + 0xe8) = dVar44;
  dVar71 = (double)(long)(local_70 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 4) != 0) {
    dVar71 = (double)(long)(local_70 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0xf0) = dVar71;
  *(double *)(lVar17 + 0xf8) = dVar47;
  uVar11 = _UNK_03888da8;
  uVar20 = _DAT_03888da0;
  lVar17 = param_1[6];
  *(undefined8 *)(lVar17 + 0x108) = 0;
  *(undefined8 *)(lVar17 + 0x100) = 0;
  *(undefined8 *)(lVar17 + 0x118) = uVar11;
  *(undefined8 *)(lVar17 + 0x110) = uVar20;
  iStack_58 = 0;
  cStack_51 = '\0';
  local_60 = 0;
  cStack_59 = '\0';
  uStack_48 = _UNK_038898b8;
  uStack_50 = _DAT_038898b0;
  FUN_0337258c(local_a0 + 4,&local_60);
  uVar20 = FUN_033726b0(local_a0[4],lStack_78);
  local_a0[0] = FUN_033726b0(uVar20,local_70);
  local_a0[1] = 0;
  local_a0[2] = 0x7fffff;
  local_a0[3] = 0;
  FUN_03373638(local_a0,local_a0 + 2,local_a0);
  FUN_03372fbc(local_a0 + 2,local_a0 + 2,local_a0);
  uStack_b8 = local_a0[0];
  local_c0 = local_a0[0];
  uStack_a8 = local_a0[0];
  uStack_b0 = local_a0[0];
  FUN_03372878(local_a0 + 4,local_a0 + 4,&local_c0);
  lVar59 = -local_a0[4];
  lVar69 = -lStack_78;
  bVar26 = cStack_59 >> 7;
  uVar23 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,CONCAT12(
                                                  bVar26,CONCAT11(bVar26,bVar26))))))) ^
           0x3ffffffffffff;
  bVar43 = cStack_51 >> 7;
  uVar25 = -local_a0[2];
  uVar21 = local_a0[3] ^ 0x7ff;
  if (uVar25 < ~local_a0[2]) {
    uVar21 = uVar21 + 1;
  }
  uVar22 = (local_70 ^
           (local_70 ^ -local_70) & CONCAT44(uStack_50._4_4_ >> 0x1f,uStack_50._4_4_ >> 0x1f)) <<
           0xe | uVar21 & 0x7ff;
  auVar37._0_8_ =
       CONCAT17(bVar26 & ((byte)(local_a0[4] >> 0x38) | (byte)((ulong)lVar59 >> 0x38)),
                CONCAT16((byte)(uVar23 >> 0x30) & (byte)(local_a0[4] >> 0x30) |
                         bVar26 & (byte)((ulong)lVar59 >> 0x30),
                         CONCAT15((byte)(uVar23 >> 0x28) & (byte)(local_a0[4] >> 0x28) |
                                  bVar26 & (byte)((ulong)lVar59 >> 0x28),
                                  CONCAT14((byte)(uVar23 >> 0x20) & (byte)(local_a0[4] >> 0x20) |
                                           bVar26 & (byte)((ulong)lVar59 >> 0x20),
                                           CONCAT13((byte)(uVar23 >> 0x18) &
                                                    (byte)(local_a0[4] >> 0x18) |
                                                    bVar26 & (byte)((ulong)lVar59 >> 0x18),
                                                    CONCAT12((byte)(uVar23 >> 0x10) &
                                                             (byte)(local_a0[4] >> 0x10) |
                                                             bVar26 & (byte)((ulong)lVar59 >> 0x10),
                                                             CONCAT11((byte)(uVar23 >> 8) &
                                                                      (byte)(local_a0[4] >> 8) |
                                                                      bVar26 & (byte)((ulong)lVar59
                                                                                     >> 8),
                                                                      (byte)uVar23 &
                                                                      (byte)local_a0[4] |
                                                                      bVar26 & (byte)lVar59)))))));
  auVar37[8] = (bVar43 ^ 0xff) & (byte)lStack_78 | bVar43 & (byte)lVar69;
  auVar37[9] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 8) | bVar43 & (byte)((ulong)lVar69 >> 8)
  ;
  auVar37[10] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x10) |
                bVar43 & (byte)((ulong)lVar69 >> 0x10);
  auVar37[0xb] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x18) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x18);
  auVar37[0xc] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x20) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x20);
  auVar37[0xd] = (bVar43 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x28) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x28);
  auVar37[0xe] = (bVar43 ^ 3) & (byte)((ulong)lStack_78 >> 0x30) |
                 bVar43 & (byte)((ulong)lVar69 >> 0x30);
  auVar37[0xf] = bVar43 & ((byte)((ulong)lStack_78 >> 0x38) | (byte)((ulong)lVar69 >> 0x38));
  lVar59 = auVar37._0_8_ << 0xe;
  lVar69 = auVar37._8_8_ << 0xe;
  *(long *)(lVar17 + 0x108) = lVar69;
  *(long *)(lVar17 + 0x100) = lVar59;
  *(ulong *)(lVar17 + 0x118) = uVar25;
  *(ulong *)(lVar17 + 0x110) = uVar22;
  uStack_50 = (long)uVar22 >> 0xe;
  uStack_48 = (long)uVar25 >> 0xe;
  iStack_58 = (int7)(lVar69 >> 0xe);
  cStack_51 = (char)(lVar69 >> 0x3f);
  local_60 = (int7)(lVar59 >> 0xe);
  cStack_59 = (char)(lVar59 >> 0x3f);
  FUN_0337258c(local_a0 + 4,&local_60);
  local_c0 = uVar21 >> 10 & 1;
  uVar23 = -local_c0;
  local_c0 = (uVar25 ^ uVar23) + local_c0;
  uStack_b8 = ((uVar23 ^ (long)(uVar21 << 0x35) >> 0x35) + ((uVar21 & 0x7ff) >> 10)) -
              (ulong)((uVar25 ^ uVar23) < uVar23);
  FUN_033725d0(local_a0 + 4,local_a0 + 2);
  uVar20 = NEON_sminp(local_a0[2],local_a0[2],4);
  uVar20 = NEON_smin(uVar20,CONCAT44((int)local_a0[3],(int)local_a0[3]),4);
  iVar16 = FUN_03372dd0(&local_c0,2);
  uVar58 = (int)uVar20 - 0xf;
  auVar4._8_8_ = lStack_78;
  auVar4._0_8_ = local_a0[4];
  auVar9._8_8_ = uStack_68;
  auVar9._0_8_ = local_70;
  if ((int)(iVar16 - 0x36U) <= (int)uVar58) {
    uVar58 = iVar16 - 0x36U;
  }
  auVar38._8_8_ = (long)(int)uVar58;
  auVar38._0_8_ = (long)(int)uVar58;
  auVar46 = NEON_sshl(auVar4,auVar38,8);
  auVar30 = NEON_sshl(auVar9,auVar38,8);
  lStack_78 = auVar46._8_8_;
  local_a0[4] = auVar46._0_8_;
  uStack_68 = auVar30._8_8_;
  local_70 = auVar30._0_8_;
  if (uVar58 < 0x40) {
    if (uVar58 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = (ulong)uVar58;
      uStack_b8 = uStack_b8 << ((ulong)uVar58 & 0x3f) | local_c0 >> ((ulong)-uVar58 & 0x3f);
    }
    uVar25 = local_c0 << (uVar25 & 0x3f);
  }
  else {
    uVar25 = 0;
    uStack_b8 = local_c0 << ((ulong)uVar58 & 0x3f);
  }
  dVar71 = (double)(long)(uVar25 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar25 >> 0x3c) | (int)uStack_b8 << 4) << 0x27);
  dVar47 = dVar71 * 3.725290298461914e-09;
  uVar49 = SUB81(dVar47,0);
  uVar50 = (undefined1)((ulong)dVar47 >> 8);
  uVar51 = (undefined1)((ulong)dVar47 >> 0x10);
  uVar52 = (undefined1)((ulong)dVar47 >> 0x18);
  uVar53 = (undefined1)((ulong)dVar47 >> 0x20);
  uVar54 = (undefined1)((ulong)dVar47 >> 0x28);
  uVar55 = (undefined1)((ulong)dVar47 >> 0x30);
  uVar56 = (undefined1)((ulong)dVar47 >> 0x38);
  uVar58 = (uint)(cStack_59 >> 7 & bVar57);
  auVar28._0_8_ = CONCAT17(cStack_51 >> 7 & bVar42,(uint7)CONCAT14(cStack_51 >> 7 & bVar66,uVar58));
  bVar26 = uStack_50._7_1_ >> 7;
  auVar28[8] = bVar26 & bVar67;
  auVar28[9] = bVar26 & bVar75;
  auVar28[10] = bVar26 & bVar76;
  auVar28[0xb] = bVar26 & bVar77;
  bVar26 = uStack_48._7_1_ >> 7;
  auVar39[0xc] = bVar26 & bVar70;
  auVar39._0_12_ = auVar28;
  auVar39[0xd] = bVar26 & bVar78;
  auVar39[0xe] = bVar26 & bVar79;
  auVar39[0xf] = bVar26 & bVar80;
  dVar71 = dVar71 * -3.725290298461914e-09;
  uVar58 = uVar58 + (int)((ulong)auVar28._0_8_ >> 0x20) + auVar28._8_4_ + auVar39._12_4_;
  if ((uVar21 & 0x400) != 0) {
    uVar49 = SUB81(dVar71,0);
    uVar50 = (undefined1)((ulong)dVar71 >> 8);
    uVar51 = (undefined1)((ulong)dVar71 >> 0x10);
    uVar52 = (undefined1)((ulong)dVar71 >> 0x18);
    uVar53 = (undefined1)((ulong)dVar71 >> 0x20);
    uVar54 = (undefined1)((ulong)dVar71 >> 0x28);
    uVar55 = (undefined1)((ulong)dVar71 >> 0x30);
    uVar56 = (undefined1)((ulong)dVar71 >> 0x38);
  }
  dVar47 = (double)(long)(local_a0[4] << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 1) != 0) {
    dVar47 = (double)(long)(local_a0[4] << 4) * -1.1102230246251565e-16;
  }
  dVar71 = (double)(lStack_78 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 2) != 0) {
    dVar71 = (double)(lStack_78 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0x120) = dVar47;
  *(double *)(lVar17 + 0x128) = dVar71;
  dVar47 = (double)(long)(local_70 << 4) * 1.1102230246251565e-16;
  if ((uVar58 & 4) != 0) {
    dVar47 = (double)(long)(local_70 << 4) * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0x130) = dVar47;
  *(ulong *)(lVar17 + 0x138) =
       CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(uVar52,CONCAT12(
                                                  uVar51,CONCAT11(uVar50,uVar49)))))));
  lVar17 = param_1[6];
  *(undefined8 *)(lVar17 + 0x148) = 0;
  *(undefined8 *)(lVar17 + 0x140) = 0;
  *(undefined8 *)(lVar17 + 0x158) = uVar12;
  *(undefined8 *)(lVar17 + 0x150) = uVar27;
  iStack_58 = 0;
  cStack_51 = '\0';
  local_60 = 0;
  cStack_59 = '\0';
  uStack_48 = uVar14;
  uStack_50 = uVar13;
  FUN_0337258c(local_a0 + 4,&local_60);
  uVar20 = FUN_033726b0(local_a0[4],lStack_78);
  local_a0[0] = FUN_033726b0(uVar20,local_70);
  local_a0[1] = 0;
  local_a0[2] = 0;
  local_a0[3] = 0;
  FUN_03373638(local_a0,local_a0 + 2,local_a0);
  FUN_03372fbc(local_a0 + 2,local_a0 + 2,local_a0);
  uStack_b8 = local_a0[0];
  local_c0 = local_a0[0];
  uStack_a8 = local_a0[0];
  uStack_b0 = local_a0[0];
  FUN_03372878(local_a0 + 4,local_a0 + 4,&local_c0);
  uVar25 = local_a0[3];
  uVar21 = local_a0[2];
  lVar69 = -local_a0[4];
  lVar68 = -lStack_78;
  lVar59 = local_a0[3] << 0x35;
  uVar23 = (local_70 ^
           (local_70 ^ -local_70) & CONCAT44(uStack_50._4_4_ >> 0x1f,uStack_50._4_4_ >> 0x1f)) <<
           0xe | local_a0[3] & 0x7ff;
  bVar26 = cStack_59 >> 7;
  bVar42 = cStack_51 >> 7;
  uVar22 = CONCAT17(bVar26,CONCAT16(bVar26,CONCAT15(bVar26,CONCAT14(bVar26,CONCAT13(bVar26,CONCAT12(
                                                  bVar26,CONCAT11(bVar26,bVar26))))))) ^
           0x3ffffffffffff;
  auVar40._0_8_ =
       CONCAT17(bVar26 & ((byte)(local_a0[4] >> 0x38) | (byte)((ulong)lVar69 >> 0x38)),
                CONCAT16((byte)(uVar22 >> 0x30) & (byte)(local_a0[4] >> 0x30) |
                         bVar26 & (byte)((ulong)lVar69 >> 0x30),
                         CONCAT15((byte)(uVar22 >> 0x28) & (byte)(local_a0[4] >> 0x28) |
                                  bVar26 & (byte)((ulong)lVar69 >> 0x28),
                                  CONCAT14((byte)(uVar22 >> 0x20) & (byte)(local_a0[4] >> 0x20) |
                                           bVar26 & (byte)((ulong)lVar69 >> 0x20),
                                           CONCAT13((byte)(uVar22 >> 0x18) &
                                                    (byte)(local_a0[4] >> 0x18) |
                                                    bVar26 & (byte)((ulong)lVar69 >> 0x18),
                                                    CONCAT12((byte)(uVar22 >> 0x10) &
                                                             (byte)(local_a0[4] >> 0x10) |
                                                             bVar26 & (byte)((ulong)lVar69 >> 0x10),
                                                             CONCAT11((byte)(uVar22 >> 8) &
                                                                      (byte)(local_a0[4] >> 8) |
                                                                      bVar26 & (byte)((ulong)lVar69
                                                                                     >> 8),
                                                                      (byte)uVar22 &
                                                                      (byte)local_a0[4] |
                                                                      bVar26 & (byte)lVar69)))))));
  auVar40[8] = (bVar42 ^ 0xff) & (byte)lStack_78 | bVar42 & (byte)lVar68;
  auVar40[9] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 8) | bVar42 & (byte)((ulong)lVar68 >> 8)
  ;
  auVar40[10] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x10) |
                bVar42 & (byte)((ulong)lVar68 >> 0x10);
  auVar40[0xb] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x18) |
                 bVar42 & (byte)((ulong)lVar68 >> 0x18);
  auVar40[0xc] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x20) |
                 bVar42 & (byte)((ulong)lVar68 >> 0x20);
  auVar40[0xd] = (bVar42 ^ 0xff) & (byte)((ulong)lStack_78 >> 0x28) |
                 bVar42 & (byte)((ulong)lVar68 >> 0x28);
  auVar40[0xe] = (bVar42 ^ 3) & (byte)((ulong)lStack_78 >> 0x30) |
                 bVar42 & (byte)((ulong)lVar68 >> 0x30);
  auVar40[0xf] = bVar42 & ((byte)((ulong)lStack_78 >> 0x38) | (byte)((ulong)lVar68 >> 0x38));
  lVar69 = auVar40._0_8_ << 0xe;
  lVar68 = auVar40._8_8_ << 0xe;
  *(long *)(lVar17 + 0x148) = lVar68;
  *(long *)(lVar17 + 0x140) = lVar69;
  *(ulong *)(lVar17 + 0x158) = local_a0[2];
  *(ulong *)(lVar17 + 0x150) = uVar23;
  uStack_50 = (long)uVar23 >> 0xe;
  uStack_48 = (long)local_a0[2] >> 0xe;
  iStack_58 = (int7)(lVar68 >> 0xe);
  cStack_51 = (char)(lVar68 >> 0x3f);
  local_60 = (int7)(lVar69 >> 0xe);
  cStack_59 = (char)(lVar69 >> 0x3f);
  FUN_0337258c(local_a0 + 4,&local_60);
  local_c0 = uVar25 >> 10 & 1;
  uVar23 = -local_c0;
  local_c0 = (uVar21 ^ uVar23) + local_c0;
  uStack_b8 = ((uVar23 ^ lVar59 >> 0x35) + ((uVar25 & 0x7ff) >> 10)) -
              (ulong)((uVar21 ^ uVar23) < uVar23);
  FUN_033725d0(local_a0 + 4,local_a0 + 2);
  uVar20 = NEON_sminp(local_a0[2],local_a0[2],4);
  uVar20 = NEON_smin(uVar20,CONCAT44((int)local_a0[3],(int)local_a0[3]),4);
  iVar16 = FUN_03372dd0(&local_c0,2);
  uVar58 = (int)uVar20 - 0xf;
  auVar5._8_8_ = lStack_78;
  auVar5._0_8_ = local_a0[4];
  auVar10._8_8_ = uStack_68;
  auVar10._0_8_ = local_70;
  if ((int)(iVar16 - 0x36U) <= (int)uVar58) {
    uVar58 = iVar16 - 0x36U;
  }
  auVar41._8_8_ = (long)(int)uVar58;
  auVar41._0_8_ = (long)(int)uVar58;
  auVar46 = NEON_sshl(auVar5,auVar41,8);
  auVar30 = NEON_sshl(auVar10,auVar41,8);
  if (uVar58 < 0x40) {
    if (uVar58 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (ulong)uVar58;
      uStack_b8 = uStack_b8 << ((ulong)uVar58 & 0x3f) | local_c0 >> ((ulong)-uVar58 & 0x3f);
    }
    iVar16 = (int)uStack_b8;
    uVar21 = local_c0 << (uVar21 & 0x3f);
  }
  else {
    uVar21 = 0;
    iVar16 = (int)(local_c0 << ((ulong)uVar58 & 0x3f));
  }
  dVar48 = (double)(auVar46._8_8_ << 4);
  dVar44 = (double)(auVar46._0_8_ << 4);
  dVar47 = (double)(long)(uVar21 >> 0x15 & 0x7fffffffff |
                         (ulong)((uint)(uVar21 >> 0x3c) | iVar16 << 4) << 0x27);
  dVar71 = (double)(auVar30._0_8_ << 4);
  dVar74 = dVar47 * 3.725290298461914e-09;
  dVar47 = dVar47 * -3.725290298461914e-09;
  bVar26 = (cStack_59 >> 7 & bVar57) + (cStack_51 >> 7 & bVar66) +
           ((byte)(uStack_50 >> 0x3f) & bVar67) + ((byte)(uStack_48 >> 0x3f) & bVar70);
  uVar49 = SUB81(dVar74,0);
  uVar50 = (char)((ulong)dVar74 >> 8);
  uVar51 = (char)((ulong)dVar74 >> 0x10);
  uVar52 = (char)((ulong)dVar74 >> 0x18);
  uVar53 = (char)((ulong)dVar74 >> 0x20);
  uVar54 = (char)((ulong)dVar74 >> 0x28);
  uVar55 = (char)((ulong)dVar74 >> 0x30);
  uVar56 = (char)((ulong)dVar74 >> 0x38);
  if ((uVar25 & 0x400) != 0) {
    uVar49 = SUB81(dVar47,0);
    uVar50 = (char)((ulong)dVar47 >> 8);
    uVar51 = (char)((ulong)dVar47 >> 0x10);
    uVar52 = (char)((ulong)dVar47 >> 0x18);
    uVar53 = (char)((ulong)dVar47 >> 0x20);
    uVar54 = (char)((ulong)dVar47 >> 0x28);
    uVar55 = (char)((ulong)dVar47 >> 0x30);
    uVar56 = (char)((ulong)dVar47 >> 0x38);
  }
  dVar47 = dVar44 * 1.1102230246251565e-16;
  if ((bVar26 & 1) != 0) {
    dVar47 = dVar44 * -1.1102230246251565e-16;
  }
  dVar44 = dVar48 * 1.1102230246251565e-16;
  if ((bVar26 & 2) != 0) {
    dVar44 = dVar48 * -1.1102230246251565e-16;
  }
  dVar48 = dVar71 * 1.1102230246251565e-16;
  if ((bVar26 & 4) != 0) {
    dVar48 = dVar71 * -1.1102230246251565e-16;
  }
  *(double *)(lVar17 + 0x160) = dVar47;
  *(double *)(lVar17 + 0x168) = dVar44;
  *(double *)(lVar17 + 0x170) = dVar48;
  *(ulong *)(lVar17 + 0x178) =
       CONCAT17(uVar56,CONCAT16(uVar55,CONCAT15(uVar54,CONCAT14(uVar53,CONCAT13(uVar52,CONCAT12(
                                                  uVar51,CONCAT11(uVar50,uVar49)))))));
  return;
}


