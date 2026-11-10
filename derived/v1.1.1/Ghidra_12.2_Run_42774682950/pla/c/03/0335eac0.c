/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335eac0; name: FUN_0335eac0
 */


/* WARNING: Removing unreachable block (ram,0x0335f950) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0335eac0(float *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [8];
  char cVar16;
  int iVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined8 *puVar20;
  bool bVar21;
  bool bVar22;
  float fVar23;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar24;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar46;
  undefined8 uVar35;
  undefined8 uVar36;
  float fVar47;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  int iVar48;
  float fVar49;
  int iVar54;
  float fVar55;
  int iVar56;
  float fVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  uint uVar65;
  float fVar66;
  float fVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1b0;
  float fStack_1ac;
  float local_1a0;
  float fStack_19c;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float local_180;
  float fStack_17c;
  float local_170;
  float fStack_16c;
  undefined1 local_160 [8];
  undefined1 auStack_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140 [8];
  undefined1 auStack_138 [8];
  float local_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined8 local_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 local_b8 [8];
  undefined8 local_b0 [2];
  
  uVar14 = DAT_0388a148;
  uVar13 = DAT_0388a140;
  uVar35 = _UNK_0388a138;
  uVar36 = _DAT_0388a130;
  uVar12 = _UNK_03889a88;
  uVar11 = _DAT_03889a80;
  uVar10 = _UNK_03888d18;
  uVar9 = _DAT_03888d10;
  *(undefined8 *)(param_1 + 2) = _UNK_03889a88;
  *(undefined8 *)param_1 = uVar11;
  *(undefined8 *)(param_1 + 6) = uVar14;
  *(undefined8 *)(param_1 + 4) = uVar13;
  *(undefined8 *)(param_1 + 10) = uVar10;
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(undefined8 *)(param_1 + 0xe) = uVar35;
  *(undefined8 *)(param_1 + 0xc) = uVar36;
  if (param_3 < 1) {
    return;
  }
  iVar17 = FUN_001b9e38(param_4);
  bVar22 = 1 < iVar17;
  cVar16 = FUN_001b9e44(param_4);
  if ((cVar16 != '\0') && (uVar18 = FUN_001b9e38(param_4), (uVar18 & 0xfffffffe) == 2)) {
    FUN_001bef04(param_4);
  }
  if (iVar17 < 2) {
LAB_0335f05c:
    auVar62 = ZEXT816(0x7f7fffee7f7fffee);
    uVar36 = 0;
    fVar33 = 1.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    iVar17 = 0;
    fStack_128 = 0.0;
    fStack_124 = 0.0;
    local_130 = 0.0;
    fStack_12c = 0.0;
    local_1a0 = 0.0;
    fStack_188 = 0.0;
    local_190 = 0.0;
    fStack_18c = 0.0;
    uVar35 = uVar36;
    do {
      fVar33 = fVar33 * 0.125;
      fVar58 = fVar33 * 0.5;
      iVar54 = -1;
      iVar48 = 0;
      iVar56 = 0;
      do {
        fVar46 = fVar58 + fVar23 + fVar33 * (float)iVar48;
        local_170 = auVar62._0_4_;
        local_100 = CONCAT44(fVar58 + fVar33 * 0.0 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        uVar26 = auVar62._8_8_;
        uVar68 = auVar62._0_8_;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 0;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 1;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 + fVar33 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 2;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 * 3.0 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 3;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 * 4.0 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 4;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 * 5.0 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 5;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 * 6.0 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar34 = (float)local_b0[0] - (float)local_150;
        if (fVar34 < local_170) {
          uVar26 = 0;
          iVar56 = 6;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          local_170 = fVar34;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          uVar68 = CONCAT44((float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20),
                            fVar34);
          iVar54 = iVar48;
        }
        local_100 = CONCAT44(fVar58 + fVar33 * 7.0 + fVar24,fVar46);
        uStack_f8 = 0;
        FUN_001c7328(&local_100,&local_d0);
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        auVar62._8_8_ = uVar26;
        auVar62._0_8_ = uVar68;
        fVar46 = (float)local_b0[0] - (float)local_150;
        auVar63._4_4_ = (float)((ulong)local_b0[0] >> 0x20) - (float)((ulong)local_150 >> 0x20);
        auVar63._0_4_ = fVar46;
        if (fVar46 < local_170) {
          auVar63._8_8_ = 0;
          iVar56 = 7;
          fStack_188 = fStack_c8;
          local_190 = local_d0;
          fStack_18c = fStack_cc;
          fStack_128 = fStack_c8;
          fStack_124 = fStack_c4;
          local_130 = local_d0;
          fStack_12c = fStack_cc;
          auVar62 = auVar63;
          uVar36 = local_b0[0];
          uVar35 = local_150;
          iVar54 = iVar48;
        }
        iVar48 = iVar48 + 1;
      } while (iVar48 != 8);
      if (iVar54 < 0) break;
      fVar23 = fVar23 + fVar33 * (float)iVar54;
      fVar24 = fVar24 + fVar33 * (float)iVar56;
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0x20);
    auVar50._4_4_ = fStack_18c;
    auVar50._0_4_ = local_190;
    auVar50._8_4_ = fStack_188;
    auVar50._12_4_ = 0;
    auVar30._8_8_ = _UNK_03889038;
    auVar30._0_8_ = _DAT_03889030;
    auVar42._8_8_ = _UNK_03889f18;
    auVar42._0_8_ = _DAT_03889f10;
    auVar31 = a64_TBL(ZEXT816(0),auVar50,auVar30);
    auVar27 = a64_TBL(ZEXT816(0),auVar50,auVar42);
    fVar23 = auVar27._0_4_;
    fVar24 = fVar23 * fVar23;
    fVar33 = auVar27._4_4_ * auVar27._4_4_;
    fVar58 = auVar27._8_4_ * auVar27._8_4_;
    fVar46 = auVar27._12_4_ * auVar27._12_4_;
    auVar3._4_4_ = fVar33;
    auVar3._0_4_ = fVar24;
    auVar3._8_4_ = fVar58;
    auVar3._12_4_ = fVar46;
    auVar4._4_4_ = fVar33;
    auVar4._0_4_ = fVar24;
    auVar4._8_4_ = fVar58;
    auVar4._12_4_ = fVar46;
    auVar28 = NEON_ext(auVar3,auVar4,8,1);
    auVar52._4_12_ = auVar31._4_12_;
    auVar52._0_4_ = -auVar31._0_4_;
    auVar43._4_12_ = auVar27._4_12_;
    auVar43._0_4_ = -fVar23;
    uVar68 = 0;
    fVar47 = 3.1415927;
    uVar69 = 0;
    fVar23 = auVar28._0_4_ + auVar28._4_4_;
    auVar51._0_8_ =
         CONCAT44(-(uint)(local_190 * local_190 + fStack_18c * fStack_18c < fVar24 + fVar33 + fVar23
                         ),-(uint)(local_190 * local_190 + fStack_18c * fStack_18c <
                                  fVar24 + fVar33 + fVar23));
    auVar51._8_8_ = auVar51._0_8_;
    auVar52 = auVar52 ^ (auVar52 ^ auVar43) & auVar51;
    iVar17 = 0;
    fVar33 = auVar52._0_4_;
    fVar34 = auVar52._4_4_;
    fVar59 = auVar52._8_4_;
    fVar23 = fVar33 * fVar33 + fVar34 * fVar34 + fVar59 * fVar59;
    fVar58 = fVar33 * fVar33 + fVar34 * fVar34 + fVar59 * fVar59;
    uVar25 = CONCAT44(fVar58,fVar23);
    uVar26 = NEON_frsqrte(uVar25,4);
    fVar24 = (float)uVar26;
    fVar46 = (float)((ulong)uVar26 >> 0x20);
    uVar26 = NEON_frsqrts(uVar25,CONCAT44(fVar46 * fVar46,fVar24 * fVar24),4);
    fVar24 = fVar24 * (float)uVar26;
    fVar46 = fVar46 * (float)((ulong)uVar26 >> 0x20);
    iVar48 = -(uint)(fVar23 <= 0.0);
    iVar54 = -(uint)(fVar58 <= 0.0);
    uVar26 = NEON_frsqrts(uVar25,CONCAT44(fVar46 * fVar46,fVar24 * fVar24),4);
    fVar24 = (float)uVar26 * fVar24;
    fVar46 = (float)((ulong)uVar26 >> 0x20) * fVar46;
    fVar23 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                             CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10),
                                      CONCAT11((byte)((uint)fVar24 >> 8) &
                                               ~(byte)((uint)iVar48 >> 8),
                                               SUB41(fVar24,0) & ~(byte)iVar48)));
    fVar33 = fVar33 * fVar23;
    fVar34 = fVar34 * (float)(CONCAT17((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                       CONCAT16((byte)((uint)fVar46 >> 0x10) &
                                                ~(byte)((uint)iVar54 >> 0x10),
                                                CONCAT15((byte)((uint)fVar46 >> 8) &
                                                         ~(byte)((uint)iVar54 >> 8),
                                                         CONCAT14(SUB41(fVar46,0) & ~(byte)iVar54,
                                                                  fVar23)))) >> 0x20);
    fVar59 = fVar59 * fVar23;
    fStack_1c8 = 0.0;
    fStack_1c4 = 0.0;
    local_1d0 = 0.0;
    fStack_1cc = 0.0;
    local_170 = 3.40282e+38;
    do {
      fVar47 = fVar47 * 0.125;
      iVar48 = 0;
      iVar54 = -1;
      do {
        local_d0 = fVar47 * 0.5 + local_1a0 + fVar47 * (float)iVar48;
        fStack_cc = local_d0;
        FUN_032ca06c(&local_100,&local_130,&local_d0);
        fVar23 = fVar59 * local_e0 + fVar33 * (float)local_100 + fVar34 * local_f0;
        fVar24 = fVar59 * fStack_dc + fVar33 * local_100._4_4_ + fVar34 * fStack_ec;
        fVar58 = fVar59 * fStack_d8 + fVar33 * (float)uStack_f8 + fVar34 * fStack_e8;
        fVar46 = fVar59 * fStack_d4 + fVar33 * uStack_f8._4_4_ + fVar34 * fStack_e4;
        local_d0 = fVar23;
        fStack_cc = fVar24;
        fStack_c8 = fVar58;
        fStack_c4 = fVar46;
        FUN_0335fd60(&local_d0,param_2,param_3,&local_150,local_b0);
        fVar67 = (float)local_b0[0] - (float)local_150;
        if (fVar67 < local_170) {
          uVar68 = local_150;
          uVar69 = local_b0[0];
          iVar54 = iVar48;
          local_1d0 = fVar23;
          fStack_1cc = fVar24;
          fStack_1c8 = fVar58;
          fStack_1c4 = fVar46;
          local_170 = fVar67;
        }
        iVar48 = iVar48 + 1;
      } while (iVar48 != 8);
      if (iVar54 < 0) break;
      local_1a0 = local_1a0 + fVar47 * (float)iVar54;
      iVar17 = iVar17 + 1;
    } while (iVar17 != 0x10);
    auVar7._8_4_ = fStack_128;
    auVar7._0_8_ = CONCAT44(fStack_12c,local_130);
    auVar7._12_4_ = fStack_124;
    auVar27 = NEON_ext(auVar7,auVar7,8,1);
    auVar2._4_4_ = fStack_1cc;
    auVar2._0_4_ = local_1d0;
    auVar2._8_4_ = fStack_1c8;
    auVar1._4_4_ = fStack_1cc;
    auVar1._0_4_ = local_1d0;
    auVar1._8_4_ = fStack_1c8;
    auVar1._12_4_ = fStack_1c4;
    auVar2._12_4_ = fStack_1c4;
    auVar31 = NEON_ext(auVar1,auVar2,4,1);
    uVar26 = NEON_ext(CONCAT44(fStack_12c,local_130),auVar27._0_8_,4,1);
    fVar24 = local_1d0 * (float)uVar26 - auVar31._0_4_ * local_130;
    fVar34 = fStack_1cc * (float)((ulong)uVar26 >> 0x20) - auVar31._4_4_ * fStack_12c;
    auVar32._0_8_ = CONCAT44(fVar34,fVar24);
    auVar32._8_4_ = fStack_1c8 * local_130 - local_1d0 * fStack_128;
    auVar32._12_4_ = fStack_1c4 * fStack_12c - fStack_1cc * fStack_124;
    auVar31 = NEON_ext(auVar32,auVar32,4,1);
    local_100 = auVar31._0_8_;
    local_170 = auVar31._0_4_;
    fStack_16c = auVar31._4_4_;
    uStack_f8 = auVar32._0_8_;
    FUN_0335fd60(&local_100,param_2,param_3,&local_d0,&local_150);
    fVar33 = ((float)local_150 - local_d0) * 0.5;
    fVar58 = ((float)uVar69 - (float)uVar68) * 0.5;
    fVar46 = ((float)local_150 + local_d0) * 0.5;
    fVar59 = ((float)((ulong)local_150 >> 0x20) + fStack_cc) * 0.5;
    fVar47 = ((float)uVar69 + (float)uVar68) * 0.5;
    fVar60 = ((float)((ulong)uVar69 >> 0x20) + (float)((ulong)uVar68 >> 0x20)) * 0.5;
    fVar55 = ((float)uVar36 + (float)uVar35) * 0.5;
    fVar66 = ((float)((ulong)uVar36 >> 0x20) + (float)((ulong)uVar35 >> 0x20)) * 0.5;
    fVar23 = ((float)uVar36 - (float)uVar35) * 0.5;
    param_1[2] = fVar24;
    param_1[3] = fVar33;
    *param_1 = local_170;
    param_1[1] = fStack_16c;
    param_1[6] = fStack_1c8;
    param_1[7] = fVar58;
    param_1[4] = local_1d0;
    param_1[5] = fStack_1cc;
    fVar67 = fVar55 * local_130 + local_1d0 * fVar47 + local_170 * fVar46;
    fVar49 = fVar66 * fStack_12c + fStack_1cc * fVar60 + fStack_16c * fVar59;
    fVar46 = fVar55 * fStack_128 + fStack_1c8 * fVar47 + fVar24 * fVar46;
    fVar34 = fVar66 * fStack_124 + fStack_1c4 * fVar60 + fVar34 * fVar59;
    param_1[10] = fStack_128;
    param_1[0xb] = fVar23;
    param_1[8] = local_130;
    param_1[9] = fStack_12c;
    *(ulong *)(param_1 + 0xe) = CONCAT44(fVar34,fVar46);
    *(ulong *)(param_1 + 0xc) = CONCAT44(fVar49,fVar67);
  }
  else {
    iVar17 = FUN_001b9e38(param_4);
    if (iVar17 == 2) {
      pauVar19 = (undefined1 (*) [16])FUN_001bb1f0(param_4);
      auVar31 = *pauVar19;
      local_1a0 = auVar31._0_4_;
      fStack_19c = auVar31._4_4_;
      iVar17 = FUN_001b6874(param_4);
      if (0 < iVar17) {
        auVar27 = NEON_ext(auVar31,auVar31,4,1);
        iVar17 = 0;
        fVar24 = auVar31._12_4_;
        fVar23 = auVar31._8_4_;
        local_190 = 3.40282e+38;
        do {
          puVar20 = (undefined8 *)FUN_001b69bc(param_4,iVar17);
          local_100._0_4_ = (float)*puVar20;
          local_100._4_4_ = (float)((ulong)*puVar20 >> 0x20);
          uStack_f8._0_4_ = (float)puVar20[1];
          uStack_f8._4_4_ = (float)((ulong)puVar20[1] >> 0x20);
          fVar33 = (float)local_100 * (float)local_100 + local_100._4_4_ * local_100._4_4_ +
                   (float)uStack_f8 * (float)uStack_f8;
          fVar46 = (float)local_100 * (float)local_100 + local_100._4_4_ * local_100._4_4_ +
                   (float)uStack_f8 * (float)uStack_f8;
          uVar35 = CONCAT44(fVar46,fVar33);
          uVar36 = NEON_frsqrte(uVar35,4);
          fVar58 = (float)uVar36;
          fVar59 = (float)((ulong)uVar36 >> 0x20);
          uVar36 = NEON_frsqrts(uVar35,CONCAT44(fVar59 * fVar59,fVar58 * fVar58),4);
          fVar58 = fVar58 * (float)uVar36;
          fVar59 = fVar59 * (float)((ulong)uVar36 >> 0x20);
          iVar48 = -(uint)(fVar33 <= 0.0);
          iVar54 = -(uint)(fVar46 <= 0.0);
          uVar36 = NEON_frsqrts(uVar35,CONCAT44(fVar59 * fVar59,fVar58 * fVar58),4);
          fVar58 = (float)uVar36 * fVar58;
          fVar59 = (float)((ulong)uVar36 >> 0x20) * fVar59;
          fVar33 = (float)CONCAT13((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                   CONCAT12((byte)((uint)fVar58 >> 0x10) &
                                            ~(byte)((uint)iVar48 >> 0x10),
                                            CONCAT11((byte)((uint)fVar58 >> 8) &
                                                     ~(byte)((uint)iVar48 >> 8),
                                                     SUB41(fVar58,0) & ~(byte)iVar48)));
          fVar34 = (float)local_100 * fVar33;
          fVar58 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                    CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                             ~(byte)((uint)iVar54 >> 0x10),
                                             CONCAT15((byte)((uint)fVar59 >> 8) &
                                                      ~(byte)((uint)iVar54 >> 8),
                                                      CONCAT14(SUB41(fVar59,0) & ~(byte)iVar54,
                                                               fVar33)))) >> 0x20);
          fVar47 = local_100._4_4_ * fVar58;
          auVar37._0_8_ = CONCAT44(fVar47,fVar34);
          auVar37._8_4_ = (float)uStack_f8 * fVar33;
          auVar37._12_4_ = uStack_f8._4_4_ * fVar58;
          uStack_f8 = (ulong)(uint)auVar37._8_4_;
          local_100 = auVar37._0_8_;
          FUN_0335fd60(&local_100,param_2,param_3,&local_d0,&local_150);
          fVar58 = fStack_cc;
          fVar33 = local_d0;
          auVar5._4_4_ = fVar47;
          auVar5._0_4_ = fVar34;
          auVar5._8_8_ = auVar37._8_8_;
          auVar28 = NEON_ext(auVar5,auVar5,4,1);
          local_1b0 = auVar27._0_4_;
          fStack_1ac = auVar27._4_4_;
          auVar29._0_4_ = local_1b0 * fVar34 - local_1a0 * auVar28._0_4_;
          auVar29._4_4_ = fStack_1ac * fVar47 - fStack_19c * auVar28._4_4_;
          auVar29._8_4_ = local_1a0 * auVar37._8_4_ - fVar23 * fVar34;
          auVar29._12_4_ = fStack_19c * 0.0 - fVar24 * fVar47;
          auVar28 = NEON_ext(auVar29,auVar29,4,1);
          fVar60 = (float)local_150;
          fVar67 = fVar60 - local_d0;
          uVar8 = (ulong)local_150 >> 0x20;
          local_180 = auVar28._0_4_;
          fStack_17c = auVar28._4_4_;
          local_130 = local_180;
          fStack_12c = fStack_17c;
          fStack_128 = auVar29._0_4_;
          fStack_124 = auVar29._4_4_;
          FUN_0335fd60(&local_130,param_2,param_3,local_b0,local_b8);
          fVar59 = local_b8._0_4_ - (float)local_b0[0];
          fVar46 = fVar67 * fVar59;
          if (fVar46 < local_190) {
            auVar38._8_4_ = auVar37._8_4_;
            auVar38._0_8_ = CONCAT44(fVar47,fVar34);
            fVar49 = (local_b8._0_4_ + (float)local_b0[0]) * 0.5;
            fVar55 = (local_b8._4_4_ + (float)((ulong)local_b0[0] >> 0x20)) * 0.5;
            fVar33 = (fVar60 + fVar33) * 0.5;
            fVar58 = ((float)uVar8 + fVar58) * 0.5;
            auVar38._12_4_ = fVar67 * 0.5;
            *(ulong *)(param_1 + 2) = CONCAT44(fVar59 * 0.5,auVar29._0_4_);
            *(long *)param_1 = auVar28._0_8_;
            *(long *)(param_1 + 6) = auVar38._8_8_;
            *(ulong *)(param_1 + 4) = CONCAT44(fVar47,fVar34);
            auVar39._0_8_ =
                 CONCAT44(fStack_19c * -fVar24 + fVar47 * fVar58 + fStack_17c * fVar55,
                          local_1a0 * -fVar24 + fVar34 * fVar33 + local_180 * fVar49);
            auVar39._8_4_ = fVar23 * -fVar24 + auVar37._8_4_ * fVar33 + auVar29._0_4_ * fVar49;
            auVar39._12_4_ = fVar24 * -fVar24 + fVar58 * 0.0 + auVar29._4_4_ * fVar55;
            *(ulong *)(param_1 + 10) = (ulong)(uint)fVar23;
            *(long *)(param_1 + 8) = auVar31._0_8_;
            *(long *)(param_1 + 0xe) = auVar39._8_8_;
            *(undefined8 *)(param_1 + 0xc) = auVar39._0_8_;
            local_190 = fVar46;
          }
          iVar17 = iVar17 + 1;
          iVar48 = FUN_001b6874(param_4);
        } while (iVar17 < iVar48);
LAB_0335f058:
        if (!bVar22) goto LAB_0335f05c;
      }
    }
    else {
      iVar17 = FUN_001b6874(param_4);
      if (0 < iVar17) {
        iVar17 = 0;
        local_190 = 3.40282e+38;
        bVar22 = true;
        do {
          puVar20 = (undefined8 *)FUN_001b69bc(param_4,iVar17);
          local_d0 = (float)*puVar20;
          fStack_cc = (float)((ulong)*puVar20 >> 0x20);
          fStack_c8 = (float)puVar20[1];
          fVar23 = local_d0 * local_d0 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
          fVar33 = local_d0 * local_d0 + fStack_cc * fStack_cc + fStack_c8 * fStack_c8;
          uVar35 = CONCAT44(fVar33,fVar23);
          uVar36 = NEON_frsqrte(uVar35,4);
          fVar24 = (float)uVar36;
          fVar58 = (float)((ulong)uVar36 >> 0x20);
          uVar36 = NEON_frsqrts(uVar35,CONCAT44(fVar58 * fVar58,fVar24 * fVar24),4);
          fVar24 = fVar24 * (float)uVar36;
          fVar58 = fVar58 * (float)((ulong)uVar36 >> 0x20);
          iVar48 = -(uint)(fVar23 <= 0.0);
          iVar54 = -(uint)(fVar33 <= 0.0);
          uVar36 = NEON_frsqrts(uVar35,CONCAT44(fVar58 * fVar58,fVar24 * fVar24),4);
          fVar24 = (float)uVar36 * fVar24;
          fVar58 = (float)((ulong)uVar36 >> 0x20) * fVar58;
          fVar23 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18),
                                   CONCAT12((byte)((uint)fVar24 >> 0x10) &
                                            ~(byte)((uint)iVar48 >> 0x10),
                                            CONCAT11((byte)((uint)fVar24 >> 8) &
                                                     ~(byte)((uint)iVar48 >> 8),
                                                     SUB41(fVar24,0) & ~(byte)iVar48)));
          local_d0 = local_d0 * fVar23;
          fStack_cc = fStack_cc *
                      (float)(CONCAT17((byte)((uint)fVar58 >> 0x18) & ~(byte)((uint)iVar54 >> 0x18),
                                       CONCAT16((byte)((uint)fVar58 >> 0x10) &
                                                ~(byte)((uint)iVar54 >> 0x10),
                                                CONCAT15((byte)((uint)fVar58 >> 8) &
                                                         ~(byte)((uint)iVar54 >> 8),
                                                         CONCAT14(SUB41(fVar58,0) & ~(byte)iVar54,
                                                                  fVar23)))) >> 0x20);
          fStack_c8 = fStack_c8 * fVar23;
          fStack_c4 = 0.0;
          FUN_0335fd60(&local_d0,param_2,param_3,local_b0,local_b8);
          uVar36 = local_b0[0];
          auVar15 = local_b8;
          FUN_001b1d70(&local_100);
          FUN_001b1d20(&local_130);
          iVar48 = FUN_001b2ea0(&local_100,param_2,param_3,&local_d0,&local_130);
          if (iVar48 == 2) {
            iVar48 = FUN_001b6874(&local_100);
            if (0 < iVar48) {
              fVar23 = auVar15._0_4_;
              fVar24 = (float)uVar36;
              fVar33 = fVar23 - fVar24;
              iVar48 = 0;
              fVar23 = (fVar23 + fVar24) * 0.5;
              fVar24 = (auVar15._4_4_ + (float)((ulong)uVar36 >> 0x20)) * 0.5;
              do {
                puVar20 = (undefined8 *)FUN_001b69bc(&local_100,iVar48);
                local_130 = (float)*puVar20;
                fStack_12c = (float)((ulong)*puVar20 >> 0x20);
                fStack_128 = (float)puVar20[1];
                fStack_124 = (float)((ulong)puVar20[1] >> 0x20);
                fVar58 = local_130 * local_130 + fStack_12c * fStack_12c + fStack_128 * fStack_128;
                fVar34 = local_130 * local_130 + fStack_12c * fStack_12c + fStack_128 * fStack_128;
                uVar35 = CONCAT44(fVar34,fVar58);
                uVar36 = NEON_frsqrte(uVar35,4);
                fVar46 = (float)uVar36;
                fVar59 = (float)((ulong)uVar36 >> 0x20);
                uVar36 = NEON_frsqrts(uVar35,CONCAT44(fVar59 * fVar59,fVar46 * fVar46),4);
                fVar46 = fVar46 * (float)uVar36;
                fVar59 = fVar59 * (float)((ulong)uVar36 >> 0x20);
                iVar54 = -(uint)(fVar58 <= 0.0);
                iVar56 = -(uint)(fVar34 <= 0.0);
                uVar36 = NEON_frsqrts(uVar35,CONCAT44(fVar59 * fVar59,fVar46 * fVar46),4);
                fVar46 = (float)uVar36 * fVar46;
                fVar59 = (float)((ulong)uVar36 >> 0x20) * fVar59;
                fVar58 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) &
                                         ~(byte)((uint)iVar54 >> 0x18),
                                         CONCAT12((byte)((uint)fVar46 >> 0x10) &
                                                  ~(byte)((uint)iVar54 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar46 >> 8) &
                                                           ~(byte)((uint)iVar54 >> 8),
                                                           SUB41(fVar46,0) & ~(byte)iVar54)));
                auVar40._0_4_ = local_130 * fVar58;
                fVar46 = (float)(CONCAT17((byte)((uint)fVar59 >> 0x18) &
                                          ~(byte)((uint)iVar56 >> 0x18),
                                          CONCAT16((byte)((uint)fVar59 >> 0x10) &
                                                   ~(byte)((uint)iVar56 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar59 >> 8) &
                                                            ~(byte)((uint)iVar56 >> 8),
                                                            CONCAT14(SUB41(fVar59,0) & ~(byte)iVar56
                                                                     ,fVar58)))) >> 0x20);
                auVar40._4_4_ = fStack_12c * fVar46;
                auVar40._8_4_ = fStack_128 * fVar58;
                auVar40._12_4_ = fStack_124 * fVar46;
                fStack_124 = 0.0;
                local_130 = auVar40._0_4_;
                fStack_12c = auVar40._4_4_;
                fStack_128 = auVar40._8_4_;
                FUN_0335fd60(&local_130,param_2,param_3,auStack_138,local_140);
                auVar31._4_4_ = auVar40._4_4_;
                auVar31._0_4_ = auVar40._0_4_;
                auVar31._8_8_ = auVar40._8_8_;
                auVar31 = NEON_ext(auVar31,auVar31,4,1);
                auVar27._8_4_ = fStack_c8;
                auVar27._0_8_ = CONCAT44(fStack_cc,local_d0);
                auVar27._12_4_ = fStack_c4;
                auVar27 = NEON_ext(auVar27,auVar27,8,1);
                uVar36 = NEON_ext(CONCAT44(fStack_cc,local_d0),auVar27._0_8_,4,1);
                fVar58 = auVar40._0_4_ * (float)uVar36 - auVar31._0_4_ * local_d0;
                fVar34 = auVar40._4_4_ * (float)((ulong)uVar36 >> 0x20) - auVar31._4_4_ * fStack_cc;
                auVar28._0_8_ = CONCAT44(fVar34,fVar58);
                auVar28._8_4_ = auVar40._8_4_ * local_d0 - auVar40._0_4_ * fStack_c8;
                auVar28._12_4_ = fStack_cc * 0.0 - auVar40._4_4_ * fStack_c4;
                auVar31 = NEON_ext(auVar28,auVar28,4,1);
                uVar36 = auVar31._0_8_;
                fVar47 = local_140._0_4_;
                fVar60 = auStack_138._0_4_;
                fVar55 = fVar47 - fVar60;
                fVar67 = local_140._4_4_;
                fVar49 = auStack_138._4_4_;
                local_180 = auVar31._0_4_;
                fStack_17c = auVar31._4_4_;
                local_150 = uVar36;
                uStack_148 = auVar28._0_8_;
                FUN_0335fd60(&local_150,param_2,param_3,auStack_158,local_160);
                fVar59 = local_160._0_4_ - auStack_158._0_4_;
                fVar46 = fVar33 * fVar59 + fVar33 * fVar55 + fVar55 * fVar59;
                if (fVar46 < local_190) {
                  auVar6._8_8_ = auVar28._0_8_;
                  auVar6._0_8_ = uVar36;
                  fVar66 = (local_160._0_4_ + auStack_158._0_4_) * 0.5;
                  fVar57 = (local_160._4_4_ + auStack_158._4_4_) * 0.5;
                  fVar47 = (fVar47 + fVar60) * 0.5;
                  fVar67 = (fVar67 + fVar49) * 0.5;
                  auVar61._0_12_ = auVar6._0_12_;
                  auVar61._12_4_ = fVar59 * 0.5;
                  *(long *)(param_1 + 2) = auVar61._8_8_;
                  *(undefined8 *)param_1 = uVar36;
                  param_1[6] = auVar40._8_4_;
                  param_1[7] = fVar55 * 0.5;
                  param_1[4] = auVar40._0_4_;
                  param_1[5] = auVar40._4_4_;
                  auVar41._0_8_ =
                       CONCAT44(auVar40._4_4_ * fVar67 + fStack_17c * fVar57 + fVar24 * fStack_cc,
                                auVar40._0_4_ * fVar47 + local_180 * fVar66 + fVar23 * local_d0);
                  auVar41._8_4_ = auVar40._8_4_ * fVar47 + fVar58 * fVar66 + fVar23 * fStack_c8;
                  auVar41._12_4_ = fVar67 * 0.0 + fVar34 * fVar57 + fVar24 * fStack_c4;
                  *(ulong *)(param_1 + 10) = CONCAT44(fVar33 * 0.5,fStack_c8);
                  *(ulong *)(param_1 + 8) = CONCAT44(fStack_cc,local_d0);
                  *(long *)(param_1 + 0xe) = auVar41._8_8_;
                  *(undefined8 *)(param_1 + 0xc) = auVar41._0_8_;
                  local_190 = fVar46;
                }
                iVar48 = iVar48 + 1;
                iVar54 = FUN_001b6874(&local_100);
              } while (iVar48 < iVar54);
            }
            bVar21 = true;
          }
          else {
            bVar21 = false;
            bVar22 = false;
          }
          FUN_001b1ed4(&local_100);
          if (!bVar21) break;
          iVar17 = iVar17 + 1;
          iVar48 = FUN_001b6874(param_4);
        } while (iVar17 < iVar48);
        goto LAB_0335f058;
      }
    }
    local_170 = *param_1;
    fStack_16c = param_1[1];
    fVar24 = param_1[2];
    fVar33 = param_1[3];
    local_1d0 = param_1[4];
    fStack_1cc = param_1[5];
    fStack_1c8 = param_1[6];
    fVar58 = param_1[7];
    local_130 = param_1[8];
    fStack_12c = param_1[9];
    fStack_128 = param_1[10];
    fVar23 = param_1[0xb];
    fVar46 = (float)*(undefined8 *)(param_1 + 0xe);
    fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
    fVar67 = (float)*(undefined8 *)(param_1 + 0xc);
    fVar49 = (float)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  }
  auVar44._0_4_ = ABS((float)uVar11 - local_170);
  auVar44._4_4_ = ABS((float)((ulong)uVar11 >> 0x20) - fStack_16c);
  auVar44._8_4_ = ABS((float)uVar12 - fVar24);
  auVar44._12_4_ = ABS((float)((ulong)uVar12 >> 0x20) - fVar33);
  auVar53._0_4_ = ABS((float)uVar13 - local_1d0);
  auVar53._4_4_ = ABS((float)((ulong)uVar13 >> 0x20) - fStack_1cc);
  auVar53._8_4_ = ABS((float)uVar14 - fStack_1c8);
  auVar53._12_4_ = ABS((float)((ulong)uVar14 >> 0x20) - fVar58);
  auVar64._0_4_ = ABS((float)uVar9 - local_130);
  auVar64._4_4_ = ABS((float)((ulong)uVar9 >> 0x20) - fStack_12c);
  auVar64._8_4_ = ABS((float)uVar10 - fStack_128);
  auVar64._12_4_ = ABS((float)((ulong)uVar10 >> 0x20) - fVar23);
  auVar31 = NEON_fmax(auVar44,auVar53,4);
  auVar31 = NEON_fmax(auVar31,auVar64,4);
  uVar65 = (uint)(byte)(-(fVar33 <= 1.1920929e-07) & (byte)_DAT_03889700) +
           (uint)(byte)(-(fVar58 <= 1.1920929e-07) & (byte)((ulong)_DAT_03889700 >> 0x20)) +
           (uint)(byte)(-(fVar23 <= 1.1920929e-07) & (byte)_UNK_03889708) +
           (uint)(byte)((ulong)_UNK_03889708 >> 0x20);
  auVar45._0_4_ = fVar67 * fVar67;
  auVar45._4_4_ = fVar49 * fVar49;
  auVar45._8_4_ = fVar46 * fVar46;
  auVar45._12_4_ = fVar34 * fVar34;
  auVar27 = NEON_ext(auVar45,auVar45,8,1);
  uVar18 = uVar65 & 7;
  if (auVar31._8_4_ <= 0.001 && (auVar31._0_4_ <= 0.001 && auVar31._4_4_ <= 0.001)) {
    uVar18 = uVar65 & 7 | 8;
  }
  uVar65 = uVar18 | 0x10;
  if (1.1920929e-07 <= auVar45._0_4_ + auVar45._4_4_ + auVar27._0_4_) {
    uVar65 = uVar18;
  }
  param_1[0xf] = (float)(uVar65 | 0x3f000000);
  return;
}


