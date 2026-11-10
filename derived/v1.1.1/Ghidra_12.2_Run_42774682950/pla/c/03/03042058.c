/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03042058; name: FUN_03042058
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03042058(undefined8 param_1,long param_2,undefined1 (*param_3) [16],
                 undefined1 (*param_4) [12])

{
  uint uVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [14];
  undefined *puVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined4 uVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar37;
  float fVar38;
  int iVar39;
  undefined1 auVar34 [16];
  int iVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  int iVar41;
  int iVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  float fVar46;
  undefined8 uVar47;
  ulong uVar48;
  float fVar50;
  float fVar51;
  undefined1 auVar49 [16];
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  ulong local_3b0;
  float local_3a0;
  undefined2 uStack_39c;
  undefined2 uStack_39a;
  undefined8 local_398;
  undefined8 local_390;
  float fStack_388;
  float fStack_384;
  undefined1 *local_360;
  undefined8 local_358;
  undefined1 auStack_340 [576];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  float fStack_a4;
  ulong uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined8 local_90;
  undefined8 local_88;
  ushort local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined2 local_70;
  undefined1 local_6e;
  long local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = *(long *)(param_2 + 8);
  uVar20 = (ulong)*(uint *)(param_3[4] + 8) & 0xffffff;
  lVar18 = *(long *)(lVar2 + 0x38);
  local_58 = lVar18 + uVar20 * 0xc0;
  piVar24 = (int *)(*(long *)(param_2 + 0x10) + (ulong)*(byte *)(local_58 + 0x89) * 0x40 + 0x28);
  switch(*piVar24) {
  case 1:
    fStack_388 = (float)*(undefined8 *)(*param_4 + 8);
    fStack_384 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
    fVar46 = (float)*(undefined8 *)*param_4;
    fVar32 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
    auVar6._12_4_ = fStack_384;
    auVar6._0_12_ = *param_4;
    auVar49 = NEON_frecpe(auVar6,4);
    auVar7._12_4_ = fStack_384;
    auVar7._0_12_ = *param_4;
    auVar55 = NEON_frecps(auVar7,auVar49,4);
    iVar41 = -(uint)(fVar46 == 0.0);
    iVar45 = -(uint)(fVar32 == 0.0);
    iVar39 = -(uint)(fStack_388 == 0.0);
    iVar40 = -(uint)(fStack_384 == 0.0);
    auVar43._0_4_ = auVar49._0_4_ * auVar55._0_4_;
    auVar43._4_4_ = auVar49._4_4_ * auVar55._4_4_;
    auVar43._8_4_ = auVar49._8_4_ * auVar55._8_4_;
    auVar43._12_4_ = auVar49._12_4_ * auVar55._12_4_;
    auVar8._12_4_ = fStack_384;
    auVar8._0_12_ = *param_4;
    auVar55 = NEON_frecps(auVar8,auVar43,4);
    auVar35[0] = ~(byte)iVar41;
    auVar35[1] = ~(byte)((uint)iVar41 >> 8);
    auVar35[2] = ~(byte)((uint)iVar41 >> 0x10);
    auVar35[3] = ~(byte)((uint)iVar41 >> 0x18);
    auVar35[4] = ~(byte)iVar45;
    auVar35[5] = ~(byte)((uint)iVar45 >> 8);
    auVar35[6] = ~(byte)((uint)iVar45 >> 0x10);
    auVar35[7] = ~(byte)((uint)iVar45 >> 0x18);
    auVar35[8] = ~(byte)iVar39;
    auVar35[9] = ~(byte)((uint)iVar39 >> 8);
    auVar35[10] = ~(byte)((uint)iVar39 >> 0x10);
    auVar35[0xb] = ~(byte)((uint)iVar39 >> 0x18);
    auVar35[0xc] = ~(byte)iVar40;
    auVar35[0xd] = ~(byte)((uint)iVar40 >> 8);
    auVar35[0xe] = ~(byte)((uint)iVar40 >> 0x10);
    auVar35[0xf] = ~(byte)((uint)iVar40 >> 0x18);
    auVar49 = *(undefined1 (*) [16])(param_4[2] + 8);
    auVar44._0_4_ = auVar49._0_4_ * auVar43._0_4_ * auVar55._0_4_;
    auVar44._4_4_ = auVar49._4_4_ * auVar43._4_4_ * auVar55._4_4_;
    auVar44._8_4_ = auVar49._8_4_ * auVar43._8_4_ * auVar55._8_4_;
    auVar44._12_4_ = auVar49._12_4_ * auVar43._12_4_ * auVar55._12_4_;
    uVar48 = CONCAT17(auVar49[7],(uint7)(auVar49[3] & 0x80) << 0x18) & 0x80ffffffffffffff;
    auVar36._0_8_ =
         CONCAT17((char)(uVar48 >> 0x38),
                  CONCAT16(0x7f,CONCAT15(0xff,CONCAT14(0xf0,CONCAT13((byte)(uVar48 >> 0x18) | 0x5f,
                                                                     0x7ffff0))))) |
         0x5f00000000000000;
    auVar36[8] = 0xf0;
    auVar36[9] = 0xff;
    auVar36[10] = 0x7f;
    auVar36[0xb] = auVar49[0xb] & 0x80 | 0x5f;
    auVar36[0xc] = 0xf0;
    auVar36[0xd] = 0xff;
    auVar36[0xe] = 0x7f;
    auVar36[0xf] = auVar49[0xf] & 0x80 | 0x5f;
    auVar36 = auVar36 ^ (auVar36 ^ auVar44) & auVar35;
    uVar47 = NEON_fminp(auVar36._0_8_,auVar36._0_8_,4);
    auVar49 = NEON_ext(auVar36,auVar36,8,1);
    uVar47 = NEON_fmin(CONCAT44(auVar49._0_4_,auVar49._0_4_),uVar47,4);
    fVar30 = fVar46 * (float)uVar47;
    fVar33 = (float)((ulong)uVar47 >> 0x20);
    fVar29 = fVar32 * fVar33;
    fVar31 = fStack_388 * (float)uVar47;
    fVar33 = fStack_384 * fVar33;
    *(float *)(param_4[3] + 4) = fVar31;
    *(float *)(param_4[3] + 8) = fVar33;
    *(float *)(param_4[2] + 8) = fVar30;
    *(float *)param_4[3] = fVar29;
    goto LAB_030424f0;
  case 2:
    fStack_388 = (float)*(undefined8 *)(*param_4 + 8);
    fStack_384 = (float)((ulong)*(undefined8 *)(*param_4 + 8) >> 0x20);
    fVar46 = (float)*(undefined8 *)*param_4;
    fVar32 = (float)((ulong)*(undefined8 *)*param_4 >> 0x20);
    fVar30 = *(float *)(param_4[2] + 8);
    fVar29 = *(float *)param_4[3];
    fVar31 = *(float *)(param_4[3] + 4);
    fVar33 = *(float *)(param_4[3] + 8);
LAB_030424f0:
    uVar28 = *(undefined8 *)(lVar18 + uVar20 * 0xc0 + 0xb0);
    fStack_388 = fStack_388 - fVar31;
    fStack_384 = fStack_384 - fVar33;
    local_3a0 = 1.5046385e-36;
    local_390 = CONCAT44(fVar32 - fVar29,fVar46 - fVar30);
    uStack_39c = 0xf;
    puVar13 = *(uint **)(*(long *)(param_2 + 0x530) + (long)*(int *)(param_2 + 0x538) * 8 + -8);
    uVar47 = *(undefined8 *)(param_2 + 0x4e0);
    uVar1 = *puVar13;
    if (0x3a < uVar1 >> 0x16) {
      puVar14 = puVar13;
      local_398 = uVar28;
      do {
        puVar13 = (uint *)FUN_032be688(param_2 + 0x520,uVar47);
        *(uint **)(puVar14 + 2) = puVar13;
        uVar1 = *puVar13;
        puVar14 = puVar13;
      } while (0x3a < uVar1 >> 0x16);
    }
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar13,0x10);
      if (bVar4) {
        *puVar13 = *puVar13 + 0x200001;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(int *)(param_2 + 0x528) = *(int *)(param_2 + 0x528) + 1;
    uVar1 = uVar1 >> 0x10;
    *(float *)((long)puVar13 + (ulong)uVar1 + 0x20) = local_3a0;
    *(uint *)((long)puVar13 + (ulong)uVar1 + 0x24) = CONCAT22(uStack_39a,uStack_39c);
    *(int *)((long)puVar13 + (ulong)uVar1 + 0x28) = (int)uVar28;
    *(int *)((long)puVar13 + (ulong)uVar1 + 0x2c) = (int)((ulong)uVar28 >> 0x20);
    *(float *)((long)puVar13 + (ulong)uVar1 + 0x30) = fVar46 - fVar30;
    *(float *)((long)puVar13 + (ulong)uVar1 + 0x34) = fVar32 - fVar29;
    *(float *)((long)puVar13 + (ulong)uVar1 + 0x38) = fStack_388;
    *(float *)((long)puVar13 + (ulong)uVar1 + 0x3c) = fStack_384;
    *(undefined8 *)(*param_4 + 8) = *(undefined8 *)(param_4[3] + 4);
    *(undefined8 *)*param_4 = *(undefined8 *)(param_4[2] + 8);
    break;
  case 3:
  case 4:
    puVar13 = (uint *)(param_4[1] + 4);
    fVar31 = (float)*(undefined8 *)param_4[2];
    fVar32 = (float)((ulong)*(undefined8 *)param_4[2] >> 0x20);
    fVar30 = (float)*(undefined8 *)puVar13;
    fVar29 = (float)((ulong)*(undefined8 *)puVar13 >> 0x20);
    fVar33 = fVar30 * fVar30 + fVar29 * fVar29 + fVar31 * fVar31;
    fVar37 = fVar30 * fVar30 + fVar29 * fVar29 + fVar31 * fVar31;
    uVar47 = NEON_frsqrte(CONCAT44(fVar37,fVar33),4);
    fVar46 = (float)uVar47;
    fVar50 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = NEON_frsqrts(CONCAT44(fVar37,fVar33),CONCAT44(fVar50 * fVar50,fVar46 * fVar46),4);
    iVar41 = -(uint)(fVar33 <= 0.0);
    iVar45 = -(uint)(fVar37 <= 0.0);
    lVar26 = *(long *)(*(long *)(param_2 + 0x4c0) + 0x10);
    fVar46 = fVar46 * (float)uVar47 * 256.0;
    fVar50 = fVar50 * (float)((ulong)uVar47 >> 0x20) * 256.0;
    fVar38 = (float)CONCAT13((byte)((uint)fVar46 >> 0x18) & ~(byte)((uint)iVar41 >> 0x18),
                             CONCAT12((byte)((uint)fVar46 >> 0x10) & ~(byte)((uint)iVar41 >> 0x10),
                                      CONCAT11((byte)((uint)fVar46 >> 8) &
                                               ~(byte)((uint)iVar41 >> 8),
                                               SUB41(fVar46,0) & ~(byte)iVar41)));
    fVar54 = (float)(CONCAT17((byte)((uint)fVar50 >> 0x18) & ~(byte)((uint)iVar45 >> 0x18),
                              CONCAT16((byte)((uint)fVar50 >> 0x10) & ~(byte)((uint)iVar45 >> 0x10),
                                       CONCAT15((byte)((uint)fVar50 >> 8) &
                                                ~(byte)((uint)iVar45 >> 8),
                                                CONCAT14(SUB41(fVar50,0) & ~(byte)iVar45,fVar38))))
                    >> 0x20);
    fVar46 = (float)(*puVar13 ^ (*puVar13 ^ (uint)(fVar30 * fVar38)) & -(uint)(65536.0 < fVar33));
    fVar50 = (float)(*(uint *)(param_4[1] + 8) ^
                    (*(uint *)(param_4[1] + 8) ^ (uint)(fVar29 * fVar54)) &
                    -(uint)(65536.0 < fVar37));
    fVar38 = (float)(*(uint *)param_4[2] ^
                    (*(uint *)param_4[2] ^ (uint)(fVar31 * fVar38)) & -(uint)(65536.0 < fVar33));
    fVar32 = (float)((uint)fVar32 ^
                    ((uint)fVar32 ^ (uint)(fVar32 * fVar54)) & -(uint)(65536.0 < fVar37));
    *(float *)param_4[2] = fVar38;
    *(float *)(param_4[2] + 4) = fVar32;
    *(float *)(param_4[1] + 4) = fVar46;
    *(float *)(param_4[1] + 8) = fVar50;
    fVar30 = (float)*(undefined8 *)(lVar26 + 0x10);
    fVar31 = (float)((ulong)*(undefined8 *)(lVar26 + 0x10) >> 0x20);
    fVar29 = fVar30 * fVar46 * 0.5;
    fVar33 = fVar31 * fVar50 * 0.5;
    fVar46 = fVar30 * fVar38 * 0.5;
    fVar32 = fVar31 * fVar32 * 0.5;
    auVar49._4_4_ = fVar33;
    auVar49._0_4_ = fVar29;
    auVar49._8_4_ = fVar46;
    auVar49._12_4_ = fVar32;
    auVar55._4_4_ = fVar33;
    auVar55._0_4_ = fVar29;
    auVar55._8_4_ = fVar46;
    auVar55._12_4_ = fVar32;
    auVar59 = NEON_ext(auVar49,auVar55,4,1);
    fVar37 = fVar29 * fVar29 + fVar33 * fVar33 + fVar46 * fVar46;
    fVar38 = fVar29 * fVar29 + fVar33 * fVar33 + fVar46 * fVar46;
    lVar25 = lVar18 + uVar20 * 0xc0;
    auVar49 = *param_3;
    auVar55 = NEON_ext(auVar49,auVar49,8,1);
    fVar54 = auVar49._0_4_;
    fVar69 = auVar49._4_4_;
    fVar70 = auVar49._8_4_;
    fVar51 = auVar49._12_4_;
    uVar47 = NEON_ext(auVar49._0_8_,auVar55._0_8_,4,1);
    auVar34._0_4_ = fVar54 * auVar59._0_4_ - (float)uVar47 * fVar29;
    auVar34._4_4_ = fVar69 * auVar59._4_4_ - (float)((ulong)uVar47 >> 0x20) * fVar33;
    auVar34._8_4_ = fVar70 * fVar29 - fVar54 * fVar46;
    auVar34._12_4_ = fVar51 * fVar33 - fVar69 * fVar32;
    fVar30 = fVar54 * fVar29;
    fVar31 = fVar69 * fVar33;
    auVar55 = NEON_ext(auVar34,auVar34,4,1);
    uVar47 = NEON_fmov(0x3f800000,4);
    fVar50 = (float)uVar47;
    fVar37 = fVar37 * (fVar37 * (fVar37 * -0.0029562549 + -0.02144013) + -0.33352822) + fVar50;
    auVar59._4_4_ = fVar31;
    auVar59._0_4_ = fVar30;
    auVar59._8_4_ = fVar70 * fVar46;
    auVar59._12_4_ = fVar51 * fVar32;
    auVar62._4_4_ = fVar31;
    auVar62._0_4_ = fVar30;
    auVar62._8_4_ = fVar70 * fVar46;
    auVar62._12_4_ = fVar51 * fVar32;
    auVar49 = NEON_ext(auVar59,auVar62,8,1);
    fVar32 = fVar29 * fVar51 + auVar55._0_4_ + fVar54 * fVar37;
    fVar38 = fVar33 * fVar51 + auVar55._4_4_ +
             fVar69 * (fVar38 * (fVar38 * (fVar38 * -0.0029562549 + -0.02144013) + -0.33352822) +
                      (float)((ulong)uVar47 >> 0x20));
    fVar54 = fVar46 * fVar51 + auVar34._0_4_ + fVar70 * fVar37;
    fVar31 = fVar37 * fVar51 - (fVar30 + fVar31 + auVar49._0_4_);
    fVar33 = fVar32 * fVar32;
    fVar46 = fVar38 * fVar38;
    auVar68._4_4_ = fVar46;
    auVar68._0_4_ = fVar33;
    auVar68._8_4_ = fVar54 * fVar54;
    auVar68._12_4_ = fVar31 * fVar31;
    auVar5._4_4_ = fVar46;
    auVar5._0_4_ = fVar33;
    auVar5._8_4_ = fVar54 * fVar54;
    auVar5._12_4_ = fVar31 * fVar31;
    auVar49 = NEON_ext(auVar68,auVar5,8,1);
    fVar29 = auVar49._0_4_ + auVar49._4_4_;
    fVar30 = fVar33 + fVar46 + fVar29;
    fVar29 = fVar33 + fVar46 + fVar29;
    uVar47 = NEON_frsqrte(CONCAT44(fVar29,fVar30),4);
    fVar33 = (float)uVar47;
    fVar46 = (float)((ulong)uVar47 >> 0x20);
    uVar47 = NEON_frsqrts(CONCAT44(fVar29,fVar30),CONCAT44(fVar46 * fVar46,fVar33 * fVar33),4);
    fVar33 = fVar33 * (float)uVar47;
    fVar46 = fVar46 * (float)((ulong)uVar47 >> 0x20);
    uVar47 = NEON_frsqrts(CONCAT44(fVar29,fVar30),CONCAT44(fVar46 * fVar46,fVar33 * fVar33),4);
    fVar33 = (float)uVar47 * fVar33;
    fVar46 = (float)((ulong)uVar47 >> 0x20) * fVar46;
    auVar42._0_4_ = fVar33 * fVar32;
    auVar42._4_4_ = fVar46 * fVar38;
    auVar42._8_4_ = fVar33 * fVar54;
    auVar42._12_4_ = fVar46 * fVar31;
    uStack_b8 = *(undefined8 *)(*param_4 + 8);
    local_c0 = *(undefined8 *)*param_4;
    auVar52._0_4_ = -*(float *)(lVar25 + 0xa0);
    auVar52._4_4_ = -*(float *)(lVar25 + 0xa4);
    auVar52._8_4_ = -*(float *)(lVar25 + 0xa8);
    auVar52._12_4_ = *(undefined4 *)(lVar25 + 0xac);
    auVar56._8_8_ = _UNK_038890f8;
    auVar56._0_8_ = _DAT_038890f0;
    auVar60._8_8_ = _UNK_03888e28;
    auVar60._0_8_ = _DAT_03888e20;
    auVar59 = a64_TBL(ZEXT816(0),auVar42,auVar56);
    auVar49 = a64_TBL(ZEXT816(0),auVar42,auVar60);
    auVar61._8_8_ = _UNK_03888d78;
    auVar61._0_8_ = _DAT_03888d70;
    auVar66._8_8_ = _UNK_03889108;
    auVar66._0_8_ = _DAT_03889100;
    auVar62 = a64_TBL(ZEXT816(0),auVar52,auVar61);
    auVar55 = a64_TBL(ZEXT816(0),auVar52,auVar66);
    auVar67._0_4_ = auVar49._0_4_ * auVar55._0_4_ - auVar59._0_4_ * auVar62._0_4_;
    auVar67._4_4_ = auVar49._4_4_ * auVar55._4_4_ - auVar59._4_4_ * auVar62._4_4_;
    auVar67._8_4_ = auVar49._8_4_ * auVar55._8_4_ - auVar59._8_4_ * auVar62._8_4_;
    auVar67._12_4_ = auVar49._12_4_ * auVar55._12_4_ - auVar59._12_4_ * auVar62._12_4_;
    local_68 = *(long *)(lVar25 + 0x78);
    auVar9._8_4_ = (int)_UNK_038895d8;
    auVar9._0_8_ = _DAT_038895d0;
    auVar9._12_4_ = (int)((ulong)_UNK_038895d8 >> 0x20);
    auVar68 = a64_TBL(ZEXT816(0),auVar67,auVar9);
    fVar31 = auVar68._12_4_ - (auVar49._12_4_ * auVar62._12_4_ + auVar59._12_4_ * auVar55._12_4_);
    fVar33 = -(auVar68._0_4_ - (auVar49._0_4_ * auVar62._0_4_ + auVar59._0_4_ * auVar55._0_4_));
    fVar46 = -(auVar68._4_4_ - (auVar49._4_4_ * auVar62._4_4_ + auVar59._4_4_ * auVar55._4_4_));
    auVar57._0_8_ = CONCAT44(fVar46,fVar33);
    auVar57._8_4_ =
         -(auVar68._8_4_ - (auVar49._8_4_ * auVar62._8_4_ + auVar59._8_4_ * auVar55._8_4_));
    auVar57._12_4_ = -fVar31;
    auVar63._8_8_ = auVar57._8_8_;
    auVar63._0_8_ = auVar57._0_8_;
    auVar64._0_12_ = auVar63._0_12_;
    auVar64._12_4_ = fVar31;
    auVar53._0_4_ = fVar33 + fVar33;
    auVar53._4_4_ = fVar46 + fVar46;
    auVar53._8_4_ = auVar57._8_4_ + auVar57._8_4_;
    auVar53._12_4_ = fVar31 + fVar31;
    auVar49 = NEON_ext(auVar64,auVar64,8,1);
    auVar55 = NEON_ext(auVar53,auVar53,8,1);
    fVar30 = auVar49._0_4_ * auVar55._0_4_;
    fVar69 = auVar53._4_4_ * fVar33 + auVar53._8_4_ * fVar31;
    fVar70 = auVar53._8_4_ * fVar33 - auVar53._4_4_ * fVar31;
    fVar32 = auVar53._4_4_ * fVar33 - auVar53._8_4_ * fVar31;
    fVar54 = auVar53._8_4_ * fVar46 + auVar53._0_4_ * fVar31;
    fVar37 = fVar50 - (auVar53._0_4_ * fVar33 + auVar53._4_4_ * fVar46);
    fVar29 = fVar50 - (auVar53._4_4_ * fVar46 + fVar30);
    fVar50 = fVar50 - (auVar53._0_4_ * fVar33 + fVar30);
    uStack_f0 = CONCAT44(fVar69,fVar29);
    local_e0 = CONCAT44(fVar50,fVar32);
    fVar33 = auVar53._8_4_ * fVar33 + auVar53._4_4_ * fVar31;
    fVar30 = auVar53._8_4_ * fVar46 - auVar53._0_4_ * fVar31;
    uStack_d0 = CONCAT44(fVar30,fVar33);
    uStack_e8 = (ulong)(uint)fVar70;
    fVar31 = *(float *)(lVar25 + 0xc);
    uStack_d8 = (ulong)(uint)fVar54;
    fVar46 = *(float *)(local_58 + 0x1c);
    uStack_c8 = (ulong)(uint)fVar37;
    fVar38 = *(float *)(local_58 + 0x2c);
    auVar58._0_4_ = fVar33 * fVar38 + fVar29 * fVar31 + fVar32 * fVar46;
    auVar58._4_4_ = fVar30 * fVar38 + fVar69 * fVar31 + fVar50 * fVar46;
    auVar58._8_4_ = fVar37 * fVar38 + fVar70 * fVar31 + fVar54 * fVar46;
    auVar58._12_4_ = fVar38 * 0.0 + fVar31 * 0.0 + fVar46 * 0.0;
    fVar29 = (float)*(double *)param_3[1] - auVar58._0_4_;
    fVar31 = (float)*(double *)(param_3[1] + 8) - auVar58._4_4_;
    auVar65._0_8_ = CONCAT44(fVar31,fVar29);
    auVar65._8_4_ = (float)*(double *)param_3[2] - auVar58._8_4_;
    auVar65._12_4_ = 0.0 - auVar58._12_4_;
    fVar30 = *(float *)(*(long *)(*(long *)(lVar2 + 0x898) + 0x48) +
                        (ulong)*(ushort *)(lVar25 + 0x8a) * 0x50 + 0x24);
    if (((local_68 != 0) && ((*(ushort *)(local_68 + 0x1a) & 1) != 0)) &&
       (auVar10._2_12_ = auVar58._4_12_, auVar10._0_2_ = *(undefined2 *)(local_68 + 0x70),
       fVar33 = (float)(auVar10._0_4_ << 0x10), fVar33 <= fVar30)) {
      fVar30 = fVar33;
    }
    local_60 = 0;
    lVar18 = lVar18 + uVar20 * 0xc0;
    local_70 = 1;
    local_6e = 0xfb;
    local_80 = *(ushort *)(lVar25 + 0x8a);
    local_7c = *(undefined4 *)(lVar18 + 0x8c);
    local_78 = *(undefined8 *)(lVar18 + 0x98);
    local_90 = *(undefined8 *)(lVar2 + 0x8e8);
    uStack_f8 = auVar65._8_8_;
    local_88 = *(undefined8 *)(lVar2 + 0x4b8);
    local_b0 = *(undefined8 *)(lVar26 + 0x10);
    local_98 = 1;
    _local_a8 = CONCAT44(fVar30 * 0.25,10);
    uStack_a0 = (ulong)(uint)(fVar30 * -0.25);
    local_94 = *piVar24 != 3;
    if (!(bool)local_94) {
      _local_a8 = CONCAT44(fVar30 * 0.25,1);
    }
    local_360 = auStack_340;
    local_358 = -0x7ffffffc00000000;
    local_100 = auVar65._0_8_;
    FUN_03042a20(*(undefined8 *)(param_2 + 8),&local_90,&local_100,&local_3a0);
    if ((int)local_358 != 0) {
      fVar33 = (float)*(undefined8 *)(lVar26 + 0x18);
      fVar30 = (local_3a0 - fVar29) * fVar33;
      fVar46 = (float)((ulong)*(undefined8 *)(lVar26 + 0x18) >> 0x20);
      fVar29 = ((float)(CONCAT26(uStack_39a,CONCAT24(uStack_39c,local_3a0)) >> 0x20) - fVar31) *
               fVar46;
      fVar33 = ((float)local_398 - auVar65._8_4_) * fVar33;
      fVar46 = ((float)((ulong)local_398 >> 0x20) - auVar65._12_4_) * fVar46;
      *(ulong *)(param_4[3] + 4) = CONCAT44(fVar46,fVar33);
      *(ulong *)(param_4[2] + 8) = CONCAT44(fVar29,fVar30);
      *(ulong *)(*param_4 + 8) = CONCAT44(fVar46,fVar33);
      *(ulong *)*param_4 = CONCAT44(fVar29,fVar30);
      FUN_03041ca4(param_2,&local_3a0,*(undefined4 *)(local_58 + 0x50));
    }
    lVar2 = local_358;
    uVar1 = local_358._4_4_;
    local_358 = (ulong)local_358._4_4_ << 0x20;
    if ((-1 < lVar2) && (local_360 != (undefined1 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a080,local_360,0x90,uVar1 & 0x3fffffff);
    }
    break;
  case 5:
    uVar16 = *(uint *)(param_2 + 0x514);
    uVar22 = *(uint *)(param_2 + 0x510);
    local_3b0 = (ulong)uVar22;
    uVar1 = uVar22 + 1;
    puVar27 = *(undefined4 **)(param_2 + 0x508);
    puVar15 = puVar27;
    if ((int)(uVar16 & 0x3fffffff) <= (int)uVar22) {
      if (0x3ffffffe < (int)uVar22) {
        FUN_032bd0a8(uVar1);
        uVar16 = *(uint *)(param_2 + 0x514);
      }
      puVar11 = PTR_PTR_0434a080;
      uVar17 = (uVar16 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar17) {
        uVar17 = 0x3fffffff;
      }
      uVar12 = uVar1;
      if ((int)uVar1 <= (int)uVar17) {
        uVar12 = uVar17;
      }
      FUN_032bd100(uVar12,4,uVar16,&local_3a0);
      iVar41 = *(int *)(param_2 + 0x514);
      puVar15 = (undefined4 *)
                (**(code **)(*(long *)puVar11 + 0x10))
                          (puVar11,CONCAT26(uStack_39a,CONCAT24(uStack_39c,local_3a0)),&local_3a0);
      if (0 < (int)uVar22) {
        puVar19 = puVar15;
        puVar21 = puVar27;
        do {
          *puVar19 = *puVar21;
          local_3b0 = local_3b0 - 1;
          puVar19 = puVar19 + 1;
          puVar21 = puVar21 + 1;
        } while (local_3b0 != 0);
      }
      if (-1 < iVar41) {
        (**(code **)(*(long *)puVar11 + 0x18))(puVar11,puVar27,iVar41 << 2);
      }
      uVar48 = CONCAT26(uStack_39a,CONCAT24(uStack_39c,local_3a0));
      uVar23 = (undefined4)(uVar48 >> 2);
      if (0xfffffffb < uVar48) {
        uVar23 = 0x3fffffff;
      }
      uVar22 = *(uint *)(param_2 + 0x510);
      *(undefined4 *)(param_2 + 0x514) = uVar23;
      *(undefined4 **)(param_2 + 0x508) = puVar15;
    }
    puVar15[(int)uVar22] = *(undefined4 *)(lVar18 + uVar20 * 0xc0 + 0x80);
    *(uint *)(param_2 + 0x510) = uVar1;
  }
  return;
}


