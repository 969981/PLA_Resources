/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fab610; name: FUN_02fab610
 */


void FUN_02fab610(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,long *param_7,undefined1 (*param_8) [16])

{
  int iVar1;
  undefined8 uVar2;
  ushort uVar3;
  uint uVar4;
  ushort *puVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  float fVar22;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar31;
  float fVar32;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar40;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  uint uVar46;
  undefined1 auVar47 [12];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float local_ad0;
  float fStack_acc;
  float fStack_ac8;
  float fStack_ac4;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 uStack_a80;
  undefined8 uStack_a78;
  undefined2 local_a70 [2];
  undefined8 local_a6c;
  undefined4 local_a64;
  undefined8 local_a60;
  undefined8 local_a58;
  long lStack_a50;
  uint local_a48;
  undefined8 local_a40;
  undefined2 local_a38 [2];
  undefined8 local_a34;
  undefined4 local_a2c;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined4 local_a10;
  undefined8 local_a08;
  undefined2 local_a00;
  undefined2 uStack_9fe;
  undefined4 uStack_9fc;
  undefined4 uStack_9f8;
  undefined4 local_9f4;
  undefined2 local_9f0;
  undefined2 uStack_9ee;
  undefined4 uStack_9ec;
  undefined4 uStack_9e8;
  undefined4 local_9e4;
  undefined8 auStack_9e0 [4];
  float afStack_9c0 [568];
  int local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined2 local_c0;
  undefined4 local_bc;
  long *plStack_b0;
  undefined1 local_a0 [16];
  undefined2 local_90;
  undefined4 local_8c;
  int local_80;
  int local_7c;
  
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x90);
  auVar23 = *(undefined1 (*) [16])(param_1 + 0xa0);
  auVar35 = *(undefined1 (*) [16])(param_3 + 6);
  auVar25 = *(undefined1 (*) [16])(param_3 + 8);
  auVar42 = NEON_fmin(auVar23,auVar25,4);
  auVar37 = NEON_fmax(auVar17,auVar35,4);
  if (auVar42._8_4_ < auVar37._8_4_ ||
      (auVar42._0_4_ < auVar37._0_4_ || auVar42._4_4_ < auVar37._4_4_)) {
    if (param_8 != (undefined1 (*) [16])0x0) {
      auVar37._0_4_ = -(uint)(auVar35._0_4_ <= auVar23._0_4_);
      auVar37._4_4_ = -(uint)(auVar35._4_4_ <= auVar23._4_4_);
      auVar37._8_4_ = -(uint)(auVar35._8_4_ <= auVar23._8_4_);
      auVar37._12_4_ = -(uint)(auVar35._12_4_ <= auVar23._12_4_);
      auVar35._0_4_ = -(uint)(auVar17._0_4_ <= auVar25._0_4_);
      auVar35._4_4_ = -(uint)(auVar17._4_4_ <= auVar25._4_4_);
      auVar35._8_4_ = -(uint)(auVar17._8_4_ <= auVar25._8_4_);
      auVar35._12_4_ = -(uint)(auVar17._12_4_ <= auVar25._12_4_);
      auVar17 = NEON_fmin(param_8[1],auVar17,4);
      auVar23 = NEON_fmax(*param_8,auVar23,4);
      auVar17 = auVar17 ^ (auVar17 ^ param_8[1]) & auVar35;
      auVar23 = auVar23 ^ (auVar23 ^ *param_8) & auVar37;
      *(long *)(*param_8 + 8) = auVar23._8_8_;
      *(long *)*param_8 = auVar23._0_8_;
      *(long *)(param_8[1] + 8) = auVar17._8_8_;
      *(long *)param_8[1] = auVar17._0_8_;
    }
  }
  else {
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x70);
    fVar36 = auVar17._0_4_;
    fVar14 = auVar35._0_4_ * fVar36;
    fVar40 = auVar17._4_4_;
    fVar18 = auVar35._4_4_ * fVar40;
    auVar23._0_8_ = CONCAT44(fVar18,fVar14);
    fVar41 = auVar17._8_4_;
    auVar23._8_4_ = auVar35._8_4_ * fVar41;
    fVar15 = auVar17._12_4_;
    auVar23._12_4_ = auVar35._12_4_ * fVar15;
    fVar22 = auVar25._0_4_ * fVar36;
    fVar27 = auVar25._4_4_ * fVar40;
    auVar17._0_8_ = CONCAT44(fVar27,fVar22);
    auVar17._8_4_ = auVar25._8_4_ * fVar41;
    auVar17._12_4_ = auVar25._12_4_ * fVar15;
    uStack_a88 = auVar23._8_8_;
    uStack_a78 = auVar17._8_8_;
    local_a90 = auVar23._0_8_;
    uStack_a80 = auVar17._0_8_;
    if (param_8 == (undefined1 (*) [16])0x0) {
      FUN_02fabe60(param_3,param_4,&local_a90,param_1,param_6,param_5,param_7);
    }
    else {
      auVar25 = param_8[1];
      auVar42._0_8_ = CONCAT44(fVar40 * *(float *)(*param_8 + 4),fVar36 * *(float *)*param_8);
      auVar42._8_4_ = fVar41 * *(float *)(*param_8 + 8);
      auVar42._12_4_ = fVar15 * *(float *)(*param_8 + 0xc);
      FUN_02fa7314(auStack_9e0,param_1,&local_a90,&uStack_a80);
      puVar6 = PTR_DAT_043723a0;
      lVar12 = (long)(local_e0 + -1);
      lVar9 = (long)(local_e0 + -1);
      if ((int)afStack_9c0[lVar12 * 0xc + 1] < 1) {
        auVar44._8_8_ = auVar42._8_8_;
        auVar44._0_8_ = auVar42._0_8_;
      }
      else {
        auVar48._8_8_ = auVar42._8_8_;
        auVar48._0_8_ = auVar42._0_8_;
        auVar44._4_12_ = auVar48._4_12_;
        auVar44._0_4_ = afStack_9c0[lVar12 * 0xc + -8];
      }
      if (0 < (int)afStack_9c0[lVar9 * 0xc + 2]) {
        auVar44._8_4_ = afStack_9c0[lVar12 * 0xc + -6];
      }
      local_ad0 = auVar25._0_4_;
      fStack_acc = auVar25._4_4_;
      fStack_ac8 = auVar25._8_4_;
      fStack_ac4 = auVar25._12_4_;
      auVar25._0_4_ = fVar36 * local_ad0;
      auVar25._4_4_ = fVar40 * fStack_acc;
      auVar25._8_4_ = fVar41 * fStack_ac8;
      auVar25._12_4_ = fVar15 * fStack_ac4;
      if ((int)afStack_9c0[lVar12 * 0xc + 1] + 1 << (ulong)((uint)afStack_9c0[lVar12 * 0xc] & 0x1f)
          < local_80) {
        auVar25._0_4_ = afStack_9c0[lVar9 * 0xc + -4];
      }
      if ((int)afStack_9c0[lVar9 * 0xc + 2] + 1 << (ulong)((uint)afStack_9c0[lVar12 * 0xc] & 0x1f) <
          local_7c) {
        auVar25._8_4_ = afStack_9c0[lVar9 * 0xc + -2];
      }
      auVar38._8_8_ = auVar25._8_8_;
      auVar38._0_4_ = auVar25._0_4_;
      auVar38._4_4_ = 0x7f7fffee;
      auVar43._8_8_ = auVar44._8_8_;
      auVar43._0_4_ = auVar44._0_4_;
      auVar43._4_4_ = 0xff7fffee;
      if (local_e0 != 0) {
        do {
          while( true ) {
            iVar1 = local_e0;
            lVar12 = (long)local_e0 + -1;
            fVar36 = afStack_9c0[lVar12 * 0xc];
            fVar40 = afStack_9c0[lVar12 * 0xc + 1];
            fVar41 = afStack_9c0[lVar12 * 0xc + 2];
            iVar11 = (int)lVar12;
            if (fVar36 == 0.0) break;
            fVar15 = afStack_9c0[lVar12 * 0xc + -7];
            fVar29 = afStack_9c0[lVar12 * 0xc + -3];
            fVar19 = fVar15;
            fVar20 = fVar15;
            fVar21 = fVar15;
            fVar31 = fVar29;
            fVar32 = fVar29;
            fVar28 = fVar29;
            if ((int)*(uint *)(local_d8 + 0x50) < (int)fVar36) {
              iVar8 = (int)fVar36 + ~*(uint *)(local_d8 + 0x50);
              plVar13 = (long *)(local_d8 + 0x20);
              lVar9 = *plVar13;
              if ((int)fVar40 <
                  (int)(uint)*(ushort *)((long)plVar13 + (long)iVar8 * 0x18 + lVar9 + 0x10)) {
                uVar3 = *(ushort *)((long)plVar13 + (long)iVar8 * 0x18 + lVar9 + 0x12);
                if ((int)fVar41 < (int)(uint)uVar3) {
                  plVar13 = (long *)((long)plVar13 + (long)iVar8 * 0x18 + lVar9);
                  uVar46 = (int)fVar41 + (int)fVar40 * (uint)uVar3;
                  fVar28 = *(float *)(local_d8 + 0x40);
                  puVar5 = (ushort *)
                           ((long)plVar13 +
                           (-(ulong)((uVar46 & 0x3fffffff) >> 0x1d) & 0xfffffffc00000000 |
                           (ulong)(uVar46 * 4) << 2) + *plVar13);
                  auVar51._2_2_ = 0;
                  auVar51._0_2_ = *puVar5;
                  auVar51._4_2_ = puVar5[1];
                  auVar51._6_2_ = 0;
                  auVar51._8_2_ = puVar5[2];
                  auVar51._10_2_ = 0;
                  auVar51._12_2_ = puVar5[3];
                  auVar51._14_2_ = 0;
                  auVar61._2_2_ = 0;
                  auVar61._0_2_ = puVar5[4];
                  auVar61._4_2_ = puVar5[5];
                  auVar61._6_2_ = 0;
                  auVar61._8_2_ = puVar5[6];
                  auVar61._10_2_ = 0;
                  auVar61._12_2_ = puVar5[7];
                  auVar61._14_2_ = 0;
                  auVar25 = NEON_ucvtf(auVar51,4);
                  auVar35 = NEON_ucvtf(auVar61,4);
                  fVar15 = *(float *)(local_d8 + 0x30) + auVar25._0_4_ * fVar28;
                  fVar19 = *(float *)(local_d8 + 0x34) + auVar25._4_4_ * fVar28;
                  fVar20 = *(float *)(local_d8 + 0x38) + auVar25._8_4_ * fVar28;
                  fVar21 = *(float *)(local_d8 + 0x3c) + auVar25._12_4_ * fVar28;
                  fVar29 = *(float *)(local_d8 + 0x30) + auVar35._0_4_ * fVar28;
                  fVar31 = *(float *)(local_d8 + 0x34) + auVar35._4_4_ * fVar28;
                  fVar32 = *(float *)(local_d8 + 0x38) + auVar35._8_4_ * fVar28;
                  fVar28 = *(float *)(local_d8 + 0x3c) + auVar35._12_4_ * fVar28;
                }
              }
            }
            local_e0 = iVar11;
            auVar25 = *(undefined1 (*) [16])(afStack_9c0 + lVar12 * 0xc + -4);
            auVar35 = *(undefined1 (*) [16])(afStack_9c0 + lVar12 * 0xc + -8);
            fVar36 = (float)((int)fVar36 + -1);
            auVar53._0_4_ = (auVar35._0_4_ + auVar25._0_4_) * 0.5;
            auVar53._4_4_ = (auVar35._4_4_ + auVar25._4_4_) * 0.5;
            auVar53._8_4_ = (auVar35._8_4_ + auVar25._8_4_) * 0.5;
            auVar53._12_4_ = (auVar35._12_4_ + auVar25._12_4_) * 0.5;
            auVar42 = auVar35 ^ (auVar35 ^ auVar53) & *(undefined1 (*) [16])puVar6;
            auVar37 = auVar53 ^ (auVar53 ^ auVar25) & *(undefined1 (*) [16])puVar6;
            auVar57._8_8_ = auVar42._8_8_;
            auVar57._0_8_ = CONCAT44(fVar15,auVar42._0_4_);
            auVar34._8_8_ = auVar37._8_8_;
            auVar34._0_8_ = CONCAT44(fVar29,auVar37._0_4_);
            auVar55._0_4_ = -(uint)(auVar42._0_4_ <= fVar22);
            auVar55._4_4_ = -(uint)(fVar15 <= fVar27);
            auVar55._8_4_ = -(uint)(auVar42._8_4_ <= auVar17._8_4_);
            auVar55._12_4_ = -(uint)(auVar42._12_4_ <= auVar17._12_4_);
            auVar56._0_4_ = -(uint)(fVar14 <= auVar37._0_4_);
            auVar56._4_4_ = -(uint)(fVar18 <= fVar29);
            auVar56._8_4_ = -(uint)(auVar23._8_4_ <= auVar37._8_4_);
            auVar56._12_4_ = -(uint)(auVar23._12_4_ <= auVar37._12_4_);
            uVar46 = CONCAT13((byte)((uint)auVar55._0_4_ >> 0x18) &
                              (byte)((uint)auVar56._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar55._0_4_ >> 0x10) &
                                       (byte)((uint)auVar56._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar55._0_4_ >> 8) &
                                                (byte)((uint)auVar56._0_4_ >> 8),
                                                (byte)auVar55._0_4_ & (byte)auVar56._0_4_)));
            auVar59._0_8_ =
                 CONCAT17((byte)((uint)auVar55._4_4_ >> 0x18) & (byte)((uint)auVar56._4_4_ >> 0x18),
                          CONCAT16((byte)((uint)auVar55._4_4_ >> 0x10) &
                                   (byte)((uint)auVar56._4_4_ >> 0x10),
                                   CONCAT15((byte)((uint)auVar55._4_4_ >> 8) &
                                            (byte)((uint)auVar56._4_4_ >> 8),
                                            CONCAT14((byte)auVar55._4_4_ & (byte)auVar56._4_4_,
                                                     uVar46))));
            auVar59[8] = (byte)auVar55._8_4_ & (byte)auVar56._8_4_;
            auVar59[9] = (byte)((uint)auVar55._8_4_ >> 8) & (byte)((uint)auVar56._8_4_ >> 8);
            auVar59[10] = (byte)((uint)auVar55._8_4_ >> 0x10) & (byte)((uint)auVar56._8_4_ >> 0x10);
            auVar59[0xb] = (byte)((uint)auVar55._8_4_ >> 0x18) & (byte)((uint)auVar56._8_4_ >> 0x18)
            ;
            auVar51 = auVar35 ^ (auVar35 ^ auVar53) & *(undefined1 (*) [16])(puVar6 + 0x10);
            auVar48 = auVar53 ^ (auVar53 ^ auVar25) & *(undefined1 (*) [16])(puVar6 + 0x10);
            auVar52._8_8_ = auVar51._8_8_;
            auVar52._0_8_ = CONCAT44(fVar19,auVar51._0_4_);
            auVar37 = *(undefined1 (*) [16])(puVar6 + 0x40);
            auVar49._8_8_ = auVar48._8_8_;
            auVar49._0_8_ = CONCAT44(fVar31,auVar48._0_4_);
            auVar61 = NEON_fmin(auVar38,auVar57,4);
            auVar62 = NEON_fmax(auVar43,auVar34,4);
            auVar44 = auVar35 ^ (auVar35 ^ auVar53) & *(undefined1 (*) [16])(puVar6 + 0x50);
            auVar42 = auVar53 ^ (auVar53 ^ auVar25) & *(undefined1 (*) [16])(puVar6 + 0x50);
            auVar62 = auVar62 ^ (auVar62 ^ auVar43) & auVar56;
            auVar61 = auVar61 ^ (auVar61 ^ auVar38) & auVar55;
            if ((uVar46 & (uint)((ulong)auVar59._0_8_ >> 0x20) & auVar59._8_4_) != 0) {
              local_e0 = iVar1;
              afStack_9c0[lVar12 * 0xc] = fVar36;
              afStack_9c0[lVar12 * 0xc + 1] = (float)((int)fVar40 << 1);
              afStack_9c0[lVar12 * 0xc + 2] = (float)((int)fVar41 << 1);
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -6) = auVar57._8_8_;
              *(undefined8 *)*(undefined1 (*) [16])(afStack_9c0 + lVar12 * 0xc + -8) = auVar57._0_8_
              ;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -2) = auVar34._8_8_;
              *(undefined8 *)*(undefined1 (*) [16])(afStack_9c0 + lVar12 * 0xc + -4) = auVar34._0_8_
              ;
            }
            auVar25 = auVar53 ^ (auVar53 ^ auVar25) & auVar37;
            auVar58._0_4_ = -(uint)(fVar14 <= auVar48._0_4_);
            auVar58._4_4_ = -(uint)(fVar18 <= fVar31);
            auVar58._8_4_ = -(uint)(auVar23._8_4_ <= auVar48._8_4_);
            auVar58._12_4_ = -(uint)(auVar23._12_4_ <= auVar48._12_4_);
            auVar54._0_4_ = -(uint)(auVar51._0_4_ <= fVar22);
            auVar54._4_4_ = -(uint)(fVar19 <= fVar27);
            auVar54._8_4_ = -(uint)(auVar51._8_4_ <= auVar17._8_4_);
            auVar54._12_4_ = -(uint)(auVar51._12_4_ <= auVar17._12_4_);
            auVar39._8_8_ = auVar42._8_8_;
            auVar39._0_8_ = CONCAT44(fVar32,auVar42._0_4_);
            uVar46 = CONCAT13((byte)((uint)auVar58._0_4_ >> 0x18) &
                              (byte)((uint)auVar54._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar58._0_4_ >> 0x10) &
                                       (byte)((uint)auVar54._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar58._0_4_ >> 8) &
                                                (byte)((uint)auVar54._0_4_ >> 8),
                                                (byte)auVar58._0_4_ & (byte)auVar54._0_4_)));
            auVar60._0_8_ =
                 CONCAT17((byte)((uint)auVar58._4_4_ >> 0x18) & (byte)((uint)auVar54._4_4_ >> 0x18),
                          CONCAT16((byte)((uint)auVar58._4_4_ >> 0x10) &
                                   (byte)((uint)auVar54._4_4_ >> 0x10),
                                   CONCAT15((byte)((uint)auVar58._4_4_ >> 8) &
                                            (byte)((uint)auVar54._4_4_ >> 8),
                                            CONCAT14((byte)auVar58._4_4_ & (byte)auVar54._4_4_,
                                                     uVar46))));
            auVar60[8] = (byte)auVar58._8_4_ & (byte)auVar54._8_4_;
            auVar60[9] = (byte)((uint)auVar58._8_4_ >> 8) & (byte)((uint)auVar54._8_4_ >> 8);
            auVar60[10] = (byte)((uint)auVar58._8_4_ >> 0x10) & (byte)((uint)auVar54._8_4_ >> 0x10);
            auVar60[0xb] = (byte)((uint)auVar58._8_4_ >> 0x18) & (byte)((uint)auVar54._8_4_ >> 0x18)
            ;
            auVar45._8_8_ = auVar44._8_8_;
            auVar45._0_8_ = CONCAT44(fVar20,auVar44._0_4_);
            auVar48 = NEON_fmin(auVar61,auVar52,4);
            auVar35 = auVar35 ^ (auVar35 ^ auVar53) & auVar37;
            auVar37 = NEON_fmax(auVar62,auVar49,4);
            auVar37 = auVar37 ^ (auVar37 ^ auVar62) & auVar58;
            auVar48 = auVar48 ^ (auVar48 ^ auVar61) & auVar54;
            if ((uVar46 & (uint)((ulong)auVar60._0_8_ >> 0x20) & auVar60._8_4_) != 0) {
              lVar12 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar12 * 0xc] = fVar36;
              afStack_9c0[lVar12 * 0xc + 1] = (float)((int)fVar40 << 1 | 1);
              afStack_9c0[lVar12 * 0xc + 2] = (float)((int)fVar41 << 1);
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -6) = auVar52._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -8) = auVar52._0_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -2) = auVar49._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -4) = auVar49._0_8_;
            }
            auVar24._8_8_ = auVar25._8_8_;
            auVar24._0_8_ = CONCAT44(fVar28,auVar25._0_4_);
            auVar30._0_4_ = -(uint)(fVar14 <= auVar42._0_4_);
            auVar30._4_4_ = -(uint)(fVar18 <= fVar32);
            auVar30._8_4_ = -(uint)(auVar23._8_4_ <= auVar42._8_4_);
            auVar30._12_4_ = -(uint)(auVar23._12_4_ <= auVar42._12_4_);
            auVar62._0_4_ = -(uint)(auVar44._0_4_ <= fVar22);
            auVar62._4_4_ = -(uint)(fVar20 <= fVar27);
            auVar62._8_4_ = -(uint)(auVar44._8_4_ <= auVar17._8_4_);
            auVar62._12_4_ = -(uint)(auVar44._12_4_ <= auVar17._12_4_);
            uVar46 = CONCAT13((byte)((uint)auVar30._0_4_ >> 0x18) &
                              (byte)((uint)auVar62._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar30._0_4_ >> 0x10) &
                                       (byte)((uint)auVar62._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar30._0_4_ >> 8) &
                                                (byte)((uint)auVar62._0_4_ >> 8),
                                                (byte)auVar30._0_4_ & (byte)auVar62._0_4_)));
            auVar50._0_8_ =
                 CONCAT17((byte)((uint)auVar30._4_4_ >> 0x18) & (byte)((uint)auVar62._4_4_ >> 0x18),
                          CONCAT16((byte)((uint)auVar30._4_4_ >> 0x10) &
                                   (byte)((uint)auVar62._4_4_ >> 0x10),
                                   CONCAT15((byte)((uint)auVar30._4_4_ >> 8) &
                                            (byte)((uint)auVar62._4_4_ >> 8),
                                            CONCAT14((byte)auVar30._4_4_ & (byte)auVar62._4_4_,
                                                     uVar46))));
            auVar50[8] = (byte)auVar30._8_4_ & (byte)auVar62._8_4_;
            auVar50[9] = (byte)((uint)auVar30._8_4_ >> 8) & (byte)((uint)auVar62._8_4_ >> 8);
            auVar50[10] = (byte)((uint)auVar30._8_4_ >> 0x10) & (byte)((uint)auVar62._8_4_ >> 0x10);
            auVar50[0xb] = (byte)((uint)auVar30._8_4_ >> 0x18) & (byte)((uint)auVar62._8_4_ >> 0x18)
            ;
            auVar33._8_8_ = auVar35._8_8_;
            auVar33._0_8_ = CONCAT44(fVar21,auVar35._0_4_);
            auVar42 = NEON_fmin(auVar48,auVar45,4);
            auVar44 = NEON_fmax(auVar37,auVar39,4);
            auVar44 = auVar44 ^ (auVar44 ^ auVar37) & auVar30;
            auVar42 = auVar42 ^ (auVar42 ^ auVar48) & auVar62;
            if ((uVar46 & (uint)((ulong)auVar50._0_8_ >> 0x20) & auVar50._8_4_) != 0) {
              lVar12 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar12 * 0xc] = fVar36;
              afStack_9c0[lVar12 * 0xc + 1] = (float)((int)fVar40 << 1 | 1);
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -6) = auVar45._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -8) = auVar45._0_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -2) = auVar39._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -4) = auVar39._0_8_;
              afStack_9c0[lVar12 * 0xc + 2] = (float)((int)fVar41 << 1 | 1);
            }
            auVar63._0_4_ = -(uint)(fVar14 <= auVar25._0_4_);
            auVar63._4_4_ = -(uint)(fVar18 <= fVar28);
            auVar63._8_4_ = -(uint)(auVar23._8_4_ <= auVar25._8_4_);
            auVar63._12_4_ = -(uint)(auVar23._12_4_ <= auVar25._12_4_);
            auVar64._0_4_ = -(uint)(auVar35._0_4_ <= fVar22);
            auVar64._4_4_ = -(uint)(fVar21 <= fVar27);
            auVar64._8_4_ = -(uint)(auVar35._8_4_ <= auVar17._8_4_);
            auVar64._12_4_ = -(uint)(auVar35._12_4_ <= auVar17._12_4_);
            uVar46 = CONCAT13((byte)((uint)auVar63._0_4_ >> 0x18) &
                              (byte)((uint)auVar64._0_4_ >> 0x18),
                              CONCAT12((byte)((uint)auVar63._0_4_ >> 0x10) &
                                       (byte)((uint)auVar64._0_4_ >> 0x10),
                                       CONCAT11((byte)((uint)auVar63._0_4_ >> 8) &
                                                (byte)((uint)auVar64._0_4_ >> 8),
                                                (byte)auVar63._0_4_ & (byte)auVar64._0_4_)));
            auVar47._0_8_ =
                 CONCAT17((byte)((uint)auVar63._4_4_ >> 0x18) & (byte)((uint)auVar64._4_4_ >> 0x18),
                          CONCAT16((byte)((uint)auVar63._4_4_ >> 0x10) &
                                   (byte)((uint)auVar64._4_4_ >> 0x10),
                                   CONCAT15((byte)((uint)auVar63._4_4_ >> 8) &
                                            (byte)((uint)auVar64._4_4_ >> 8),
                                            CONCAT14((byte)auVar63._4_4_ & (byte)auVar64._4_4_,
                                                     uVar46))));
            auVar47[8] = (byte)auVar63._8_4_ & (byte)auVar64._8_4_;
            auVar47[9] = (byte)((uint)auVar63._8_4_ >> 8) & (byte)((uint)auVar64._8_4_ >> 8);
            auVar47[10] = (byte)((uint)auVar63._8_4_ >> 0x10) & (byte)((uint)auVar64._8_4_ >> 0x10);
            auVar47[0xb] = (byte)((uint)auVar63._8_4_ >> 0x18) & (byte)((uint)auVar64._8_4_ >> 0x18)
            ;
            auVar38 = NEON_fmin(auVar42,auVar33,4);
            auVar43 = NEON_fmax(auVar44,auVar24,4);
            if ((uVar46 & (uint)((ulong)auVar47._0_8_ >> 0x20) & auVar47._8_4_) != 0) {
              lVar12 = (long)local_e0;
              local_e0 = local_e0 + 1;
              afStack_9c0[lVar12 * 0xc] = fVar36;
              afStack_9c0[lVar12 * 0xc + 1] = (float)((int)fVar40 << 1);
              afStack_9c0[lVar12 * 0xc + 2] = (float)((int)fVar41 << 1 | 1);
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -6) = auVar33._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -8) = auVar33._0_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -2) = auVar24._8_8_;
              *(undefined8 *)(afStack_9c0 + lVar12 * 0xc + -4) = auVar24._0_8_;
            }
            auVar43 = auVar43 ^ (auVar43 ^ auVar44) & auVar63;
            auVar38 = auVar38 ^ (auVar38 ^ auVar42) & auVar64;
joined_r0x02faba54:
            if (local_e0 == 0) goto LAB_02fabd70;
          }
          if (local_80 <= (int)fVar40 || local_7c <= (int)fVar41) {
            local_e0 = iVar11;
            goto joined_r0x02faba54;
          }
          (**(code **)(*plStack_b0 + 0x28))();
          local_c0 = local_90;
          lVar12 = (long)local_e0 + -1;
          uStack_c8 = local_a0._8_8_;
          local_d0 = local_a0._0_8_;
          local_e0 = (int)lVar12;
          local_bc = local_8c;
          iVar1 = ((int)afStack_9c0[lVar12 * 0xc + 2] <<
                  (ulong)(*(int *)(param_1 + 0x60) + 1U & 0x1f)) +
                  (int)afStack_9c0[lVar12 * 0xc + 1] * 2;
          uVar46 = -((uint)*(byte *)(param_1 + 0x1c) + *(int *)((long)param_6 + 0x1c));
          uVar4 = (iVar1 + 2 << (ulong)(uVar46 & 0x1f)) - 1U |
                  (&DAT_03aa74b0)[*(int *)((long)param_6 + 0x1c)] & *(uint *)(param_6 + 3);
          plVar13 = (long *)*param_3;
          uVar46 = (iVar1 + 1 << (ulong)(uVar46 & 0x1f)) - 1U |
                   (&DAT_03aa74b0)[*(int *)((long)param_6 + 0x1c)] & *(uint *)(param_6 + 3);
          if (plVar13 == (long *)0x0) {
LAB_02fabce0:
            puVar10 = (uint *)((long)param_7 + 0xc);
            iVar11 = (int)param_7[1];
            iVar1 = iVar11 + 1;
            lVar12 = *param_7;
            if (iVar11 < (int)(*puVar10 & 0x3fffffff)) {
              iVar8 = iVar11;
            }
            else {
              lVar12 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar1,lVar12,iVar11,puVar10);
              iVar8 = (int)param_7[1];
              *param_7 = lVar12;
            }
            *(uint *)(lVar12 + (long)iVar8 * 4) = uVar46;
            *(int *)(param_7 + 1) = iVar1;
            lVar12 = *param_7;
            if ((int)(*(uint *)((long)param_7 + 0xc) & 0x3fffffff) <= iVar1) {
              lVar12 = FUN_02f7f7b8(PTR_PTR_0434a080,iVar11 + 2,lVar12,iVar1,puVar10);
              iVar1 = (int)param_7[1];
              *param_7 = lVar12;
            }
            *(uint *)(lVar12 + (long)iVar1 * 4) = uVar4;
            *(int *)(param_7 + 1) = iVar11 + 2;
          }
          else {
            uVar2 = *param_5;
            local_9f0 = (undefined2)uVar2;
            uStack_9ee = (undefined2)((ulong)uVar2 >> 0x10);
            uStack_9ec = (undefined4)((ulong)uVar2 >> 0x20);
            uStack_9e8 = (undefined4)param_5[1];
            local_9e4 = (undefined4)((ulong)param_5[1] >> 0x20);
            uVar2 = *param_5;
            local_a00 = (undefined2)uVar2;
            uStack_9fe = (undefined2)((ulong)uVar2 >> 0x10);
            uStack_9fc = (undefined4)((ulong)uVar2 >> 0x20);
            uStack_9f8 = (undefined4)param_5[1];
            local_9f4 = (undefined4)((ulong)param_5[1] >> 0x20);
            (**(code **)(*plVar13 + 0x40))
                      (plVar13,local_90,6,*param_6,param_6[1],param_1,uVar46,0,&local_9f0);
            (**(code **)(*plVar13 + 0x40))
                      (plVar13,local_c0,6,*param_6,param_6[1],param_1,uVar4,0,&local_a00);
            plVar13 = (long *)param_3[1];
            if (plVar13 == (long *)0x0) goto LAB_02fabce0;
            local_a38[0] = (undefined2)param_3[2];
            local_a2c = *(undefined4 *)((long)param_3 + 0x1c);
            local_a34 = *(undefined8 *)((long)param_3 + 0x14);
            local_a28 = *param_4;
            local_a20 = param_4[1];
            local_a18 = param_4[2];
            local_a10 = *(undefined4 *)(param_4 + 3);
            local_a08 = 0;
            local_a60 = *param_6;
            local_a58 = param_6[1];
            local_a70[0] = local_9f0;
            local_a6c = CONCAT44(uStack_9e8,uStack_9ec);
            local_a64 = local_9e4;
            local_a40 = 0;
            lStack_a50 = param_1;
            local_a48 = uVar46;
            uVar7 = (**(code **)(*plVar13 + 0x40))(plVar13,6,1,local_a38,local_a70);
            if ((uVar7 & 1) != 0) {
              local_a70[0] = local_a00;
              *(undefined4 *)((undefined8 *)((ulong)local_a70 | 4) + 1) = local_9f4;
              *(undefined8 *)((ulong)local_a70 | 4) = CONCAT44(uStack_9f8,uStack_9fc);
              local_a48 = uVar4;
              uVar7 = (**(code **)(*(long *)param_3[1] + 0x40))
                                ((long *)param_3[1],6,1,local_a38,local_a70);
              if ((uVar7 & 1) != 0) goto LAB_02fabce0;
            }
          }
        } while (local_e0 != 0);
      }
LAB_02fabd70:
      auVar16._0_8_ =
           CONCAT44(auVar43._4_4_ * *(float *)(param_1 + 0x84),
                    auVar43._0_4_ * *(float *)(param_1 + 0x80));
      auVar16._8_4_ = auVar43._8_4_ * *(float *)(param_1 + 0x88);
      auVar16._12_4_ = auVar43._12_4_ * *(float *)(param_1 + 0x8c);
      *(long *)(*param_8 + 8) = auVar16._8_8_;
      *(undefined8 *)*param_8 = auVar16._0_8_;
      auVar26._0_8_ =
           CONCAT44(auVar38._4_4_ * *(float *)(param_1 + 0x84),
                    auVar38._0_4_ * *(float *)(param_1 + 0x80));
      auVar26._8_4_ = auVar38._8_4_ * *(float *)(param_1 + 0x88);
      auVar26._12_4_ = auVar38._12_4_ * *(float *)(param_1 + 0x8c);
      *(long *)(param_8[1] + 8) = auVar26._8_8_;
      *(undefined8 *)param_8[1] = auVar26._0_8_;
      auVar17 = NEON_fmin(auVar16,*(undefined1 (*) [16])(param_3 + 6),4);
      *(long *)(*param_8 + 8) = auVar17._8_8_;
      *(long *)*param_8 = auVar17._0_8_;
      auVar17 = NEON_fmax(auVar26,*(undefined1 (*) [16])(param_3 + 8),4);
      *(long *)(param_8[1] + 8) = auVar17._8_8_;
      *(long *)param_8[1] = auVar17._0_8_;
    }
  }
  return;
}


