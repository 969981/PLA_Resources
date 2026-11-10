/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffe574; name: FUN_02ffe574
 */


void FUN_02ffe574(long param_1,float *param_2,float *param_3,int param_4,float *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar21;
  ulong uVar22;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [12];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  float fVar38;
  int iVar39;
  float fVar41;
  int iVar42;
  float fVar43;
  int iVar44;
  undefined1 auVar40 [16];
  float fVar45;
  int iVar46;
  float fVar47;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined1 auVar48 [16];
  float fVar52;
  undefined1 auVar53 [12];
  float fVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  byte bVar59;
  float fVar58;
  byte bVar60;
  byte bVar61;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_5c;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if ((param_1 == 0) || ((*(ushort *)(param_1 + 0x1a) & 1) == 0)) {
    local_18 = *(undefined8 *)(param_2 + 0xe);
    auVar40 = *(undefined1 (*) [16])(param_2 + 8);
    local_20 = *(undefined8 *)(param_2 + 0xc);
    fVar13 = *param_3;
    fVar20 = param_3[1];
    fVar57 = param_3[2];
    local_50 = (float)*(undefined8 *)param_2;
    fStack_4c = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    fStack_48 = (float)*(undefined8 *)(param_2 + 2);
    fStack_44 = (float)((ulong)*(undefined8 *)(param_2 + 2) >> 0x20);
    _fStack_48 = CONCAT44(fStack_44 * fVar13,fStack_48 * fVar13);
    _local_50 = CONCAT44(fStack_4c * fVar13,local_50 * fVar13);
    local_40 = (float)*(undefined8 *)(param_2 + 4);
    fStack_3c = (float)((ulong)*(undefined8 *)(param_2 + 4) >> 0x20);
    fStack_38 = (float)*(undefined8 *)(param_2 + 6);
    fStack_34 = (float)((ulong)*(undefined8 *)(param_2 + 6) >> 0x20);
    _fStack_38 = CONCAT44(fStack_34 * fVar20,fStack_38 * fVar20);
    _local_40 = CONCAT44(fStack_3c * fVar20,local_40 * fVar20);
    auVar16._0_8_ = CONCAT44(auVar40._4_4_ * fVar57,auVar40._0_4_ * fVar57);
    auVar16._8_4_ = auVar40._8_4_ * fVar57;
    auVar16._12_4_ = auVar40._12_4_ * fVar57;
    uStack_28 = auVar16._8_8_;
    local_30 = auVar16._0_8_;
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(param_1 + 0x18) * 0x200 + 0x18))
              (param_1,&local_50,param_5);
  }
  else {
    uVar7 = *(undefined8 *)(param_3 + 2);
    auVar28._0_8_ = *(undefined8 *)param_3;
    piVar8 = (int *)(param_1 + 0x40);
    fVar13 = *(float *)(param_1 + 0x20);
    if (*piVar8 == 0) {
      puVar12 = (undefined8 *)0x0;
    }
    else {
      puVar12 = (undefined8 *)((long)*piVar8 + (long)piVar8);
    }
    auVar40._0_4_ = ABS((float)auVar28._0_8_);
    auVar40._4_4_ = ABS((float)((ulong)auVar28._0_8_ >> 0x20));
    auVar40._8_4_ = ABS((float)uVar7);
    auVar40._12_4_ = ABS((float)((ulong)uVar7 >> 0x20));
    auVar29._8_4_ = 0x3a83126f;
    auVar29._0_8_ = 0x3a83126f3a83126f;
    auVar29._12_4_ = 0x3a83126f;
    uVar1 = *(uint *)(param_1 + 0x44);
    auVar40 = NEON_fmax(auVar40,auVar29,4);
    uVar22 = CONCAT17((char)((ulong)auVar28._0_8_ >> 0x38),
                      (uint7)((byte)((ulong)auVar28._0_8_ >> 0x18) & 0x80) << 0x18) &
             0x80ffffffffffffff;
    bVar59 = (byte)(uVar22 >> 0x18) ^ auVar40[3];
    fVar20 = (float)CONCAT13(bVar59,auVar40._0_3_);
    bVar60 = (byte)(uVar22 >> 0x38) ^ auVar40[7];
    auVar28._0_8_ =
         CONCAT17(bVar60,CONCAT16(auVar40[6],CONCAT15(auVar40[5],CONCAT14(auVar40[4],fVar20))));
    bVar61 = (byte)((ulong)uVar7 >> 0x18) & 0x80 ^ auVar40[0xb];
    fVar57 = (float)CONCAT13(bVar61,auVar40._8_3_);
    if ((int)uVar1 < 3) {
      fVar13 = fVar13 * auVar40._0_4_;
      auVar28._0_8_ = CONCAT44(fVar20,fVar20);
      auVar53 = SUB1612(ZEXT816(0),0);
      fVar51 = fVar20;
    }
    else {
      auVar53 = SUB1612(ZEXT816(0),0);
      fVar51 = fVar57;
      if (param_4 == 0) {
        fStack_5c = (float)((ulong)auVar28._0_8_ >> 0x20);
        fVar15 = (float)FUN_032c8ef0();
        if ((fVar15 <= 1e-05) ||
           (auVar16 = NEON_fmov(0xbf800000,4),
           ABS(fVar57 + auVar16._8_4_) <= 1.1920929e-07 &&
           (ABS(fVar20 + auVar16._0_4_) <= 1.1920929e-07 &&
           ABS(fStack_5c + auVar16._4_4_) <= 1.1920929e-07))) {
          auVar28._0_8_ = CONCAT44(fStack_5c,fVar20);
          auVar53 = SUB1612(ZEXT816(0),0);
        }
        else {
          puVar11 = (undefined4 *)((long)puVar12 + 0x14);
          auVar17._0_8_ = *puVar12;
          auVar28._0_8_ = CONCAT44(*(undefined4 *)(puVar12 + 1),*(undefined4 *)(puVar12 + 1));
          lVar10 = (ulong)uVar1 - 1;
          auVar17._8_8_ = auVar28._0_8_;
          auVar25._8_8_ = auVar28._0_8_;
          auVar25._0_8_ = auVar17._0_8_;
          do {
            uVar2 = *puVar11;
            lVar10 = lVar10 + -1;
            puVar12 = (undefined8 *)(puVar11 + -2);
            puVar11 = puVar11 + 3;
            uVar34 = (undefined1)uVar2;
            uVar35 = (undefined1)((uint)uVar2 >> 8);
            uVar36 = (undefined1)((uint)uVar2 >> 0x10);
            uVar37 = (undefined1)((uint)uVar2 >> 0x18);
            auVar3[8] = uVar34;
            auVar3._0_8_ = *puVar12;
            auVar3[9] = uVar35;
            auVar3[10] = uVar36;
            auVar3[0xb] = uVar37;
            auVar3[0xc] = uVar34;
            auVar3[0xd] = uVar35;
            auVar3[0xe] = uVar36;
            auVar3[0xf] = uVar37;
            auVar25 = NEON_fmin(auVar25,auVar3,4);
            auVar4[8] = uVar34;
            auVar4._0_8_ = *puVar12;
            auVar4[9] = uVar35;
            auVar4[10] = uVar36;
            auVar4[0xb] = uVar37;
            auVar4[0xc] = uVar34;
            auVar4[0xd] = uVar35;
            auVar4[0xe] = uVar36;
            auVar4[0xf] = uVar37;
            auVar17 = NEON_fmax(auVar17,auVar4,4);
          } while (lVar10 != 0);
          fStack_cc = auVar40._4_4_;
          fStack_c8 = auVar40._8_4_;
          fStack_c4 = auVar40._12_4_;
          auVar26._4_4_ = fVar13;
          auVar26._0_4_ = fVar13;
          auVar26._8_4_ = fVar13;
          auVar26._12_4_ = fVar13;
          auVar32._0_4_ = (auVar17._0_4_ - auVar25._0_4_) * 0.5;
          auVar32._4_4_ = (auVar17._4_4_ - auVar25._4_4_) * 0.5;
          auVar32._8_4_ = (auVar17._8_4_ - auVar25._8_4_) * 0.5;
          auVar32._12_4_ = (auVar17._12_4_ - auVar25._12_4_) * 0.5;
          fVar15 = fVar13 + auVar32._12_4_;
          fVar51 = auVar40._0_4_ * (fVar13 + auVar32._0_4_);
          fStack_cc = fStack_cc * (fVar13 + auVar32._4_4_);
          uVar34 = (undefined1)((uint)fStack_cc >> 8);
          uVar35 = (undefined1)((uint)fStack_cc >> 0x10);
          uVar36 = (undefined1)((uint)fStack_cc >> 0x18);
          fStack_c8 = fStack_c8 * (fVar13 + auVar32._8_4_);
          if (fStack_c8 <= fVar13 || (fVar51 <= fVar13 || fStack_cc <= fVar13)) {
            auVar28._0_8_ =
                 NEON_fminp(CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(SUB41(fStack_cc
                                                  ,0),fVar51)))),
                            CONCAT17(uVar36,CONCAT16(uVar35,CONCAT15(uVar34,CONCAT14(SUB41(fStack_cc
                                                  ,0),fVar51)))),4);
            auVar26._0_8_ = NEON_fmin(CONCAT44(fStack_c8,fStack_c8),auVar28._0_8_,4);
            auVar26._8_8_ = auVar26._0_8_;
          }
          auVar40 = NEON_frecpe(auVar32,4);
          fVar13 = auVar26._0_4_;
          iVar39 = -(uint)(auVar32._0_4_ == 0.0);
          iVar42 = -(uint)(auVar32._4_4_ == 0.0);
          iVar44 = -(uint)(auVar32._8_4_ == 0.0);
          iVar46 = -(uint)(auVar32._12_4_ == 0.0);
          auVar16 = NEON_frecps(auVar32,auVar40,4);
          auVar48._0_4_ = auVar40._0_4_ * auVar16._0_4_;
          auVar48._4_4_ = auVar40._4_4_ * auVar16._4_4_;
          auVar48._8_4_ = auVar40._8_4_ * auVar16._8_4_;
          auVar48._12_4_ = auVar40._12_4_ * auVar16._12_4_;
          auVar40 = NEON_frecps(auVar32,auVar48,4);
          fVar51 = (fVar51 - fVar13) * auVar48._0_4_ * auVar40._0_4_;
          fVar14 = (fStack_cc - auVar26._4_4_) * auVar48._4_4_ * auVar40._4_4_;
          fVar18 = (fStack_c8 - auVar26._8_4_) * auVar48._8_4_ * auVar40._8_4_;
          fVar15 = (fStack_c4 * fVar15 - auVar26._12_4_) * auVar48._12_4_ * auVar40._12_4_;
          auVar5[8] = 0x6f;
          auVar5._0_8_ = 0x3a83126f3a83126f;
          auVar33[0] = SUB41(fVar51,0) & ~(byte)iVar39;
          auVar33[1] = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar39 >> 8);
          auVar33[2] = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar39 >> 0x10);
          auVar33[3] = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar39 >> 0x18);
          auVar33[4] = SUB41(fVar14,0) & ~(byte)iVar42;
          auVar33[5] = (byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar42 >> 8);
          auVar33[6] = (byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar42 >> 0x10);
          auVar33[7] = (byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar42 >> 0x18);
          auVar33[8] = SUB41(fVar18,0) & ~(byte)iVar44;
          auVar33[9] = (byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar44 >> 8);
          auVar33[10] = (byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar44 >> 0x10);
          auVar33[0xb] = (byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar44 >> 0x18);
          auVar33[0xc] = SUB41(fVar15,0) & ~(byte)iVar46;
          auVar33[0xd] = (byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar46 >> 8);
          auVar33[0xe] = (byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
          auVar33[0xf] = (byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
          auVar5[9] = 0x12;
          auVar5[10] = 0x83;
          auVar5[0xb] = 0x3a;
          auVar5[0xc] = 0x6f;
          auVar5[0xd] = 0x12;
          auVar5[0xe] = 0x83;
          auVar5[0xf] = 0x3a;
          auVar40 = NEON_fmax(auVar33,auVar5,4);
          fVar15 = (float)CONCAT13(bVar59 & 0x80 ^ auVar40[3],auVar40._0_3_);
          auVar28._0_8_ =
               CONCAT17(bVar60 & 0x80 ^ auVar40[7],
                        CONCAT16(auVar40[6],CONCAT15(auVar40[5],CONCAT14(auVar40[4],fVar15))));
          auVar28[8] = auVar40[8];
          auVar28[9] = auVar40[9];
          auVar28[10] = auVar40[10];
          auVar28[0xb] = bVar61 & 0x80 ^ auVar40[0xb];
          fVar51 = auVar28._8_4_;
          auVar53._0_4_ = (auVar25._0_4_ + auVar17._0_4_) * 0.5 * (fVar20 - fVar15);
          auVar53._4_4_ =
               (auVar25._4_4_ + auVar17._4_4_) * 0.5 *
               (fStack_5c - (float)((ulong)auVar28._0_8_ >> 0x20));
          auVar53._8_4_ = (auVar25._8_4_ + auVar17._8_4_) * 0.5 * (fVar57 - fVar51);
        }
      }
    }
    fVar57 = auVar53._4_4_;
    fVar20 = auVar53._0_4_;
    fVar15 = auVar53._8_4_;
    iVar39 = *(int *)(param_1 + 0x44);
    puVar12 = (undefined8 *)0x0;
    if (*piVar8 != 0) {
      puVar12 = (undefined8 *)((long)*piVar8 + (long)piVar8);
    }
    fVar14 = param_2[0xc] + param_2[8] * fVar15 + *param_2 * fVar20 + param_2[4] * fVar57;
    fVar18 = param_2[0xd] + param_2[9] * fVar15 + param_2[1] * fVar20 + param_2[5] * fVar57;
    fVar19 = param_2[0xe] + param_2[10] * fVar15 + param_2[2] * fVar20 + param_2[6] * fVar57;
    fVar20 = param_2[0xf] + param_2[0xb] * fVar15 + param_2[3] * fVar20 + param_2[7] * fVar57;
    if (iVar39 == 0) {
      auVar31._8_4_ = 0xff7fffee;
      auVar31._0_8_ = 0xff7fffeeff7fffee;
      auVar31._12_4_ = 0xff7fffee;
      auVar24._8_4_ = 0x7f7fffee;
      auVar24._0_8_ = 0x7f7fffee7f7fffee;
      auVar24._12_4_ = 0x7f7fffee;
    }
    else {
      fVar58 = (float)auVar28._0_8_;
      fVar57 = *param_2 * fVar58;
      fVar15 = param_2[1] * fVar58;
      fVar6 = param_2[2] * fVar58;
      fVar58 = param_2[3] * fVar58;
      fVar45 = (float)((ulong)auVar28._0_8_ >> 0x20);
      fVar38 = param_2[4] * fVar45;
      fVar41 = param_2[5] * fVar45;
      fVar43 = param_2[6] * fVar45;
      fVar45 = param_2[7] * fVar45;
      fVar52 = *(float *)(puVar12 + 1);
      fVar47 = param_2[8] * fVar51;
      fVar49 = param_2[9] * fVar51;
      fVar50 = param_2[10] * fVar51;
      fVar51 = param_2[0xb] * fVar51;
      fVar21 = (float)*puVar12;
      fVar27 = (float)((ulong)*puVar12 >> 0x20);
      auVar30._0_4_ = fVar57 * fVar21 + fVar38 * fVar27 + fVar47 * fVar52;
      auVar30._4_4_ = fVar15 * fVar21 + fVar41 * fVar27 + fVar49 * fVar52;
      auVar30._8_4_ = fVar6 * fVar21 + fVar43 * fVar27 + fVar50 * fVar52;
      auVar30._12_4_ = fVar58 * fVar21 + fVar45 * fVar27 + fVar51 * fVar52;
      auVar23._8_4_ = 0x7f7fffee;
      auVar23._0_8_ = 0x7f7fffee7f7fffee;
      auVar23._12_4_ = 0x7f7fffee;
      auVar54._8_4_ = 0xff7fffee;
      auVar54._0_8_ = 0xff7fffeeff7fffee;
      auVar54._12_4_ = 0xff7fffee;
      auVar24 = NEON_fmin(auVar30,auVar23,4);
      auVar31 = NEON_fmax(auVar30,auVar54,4);
      if (iVar39 != 1) {
        fVar21 = (float)*(undefined8 *)((long)puVar12 + 0xc);
        fVar27 = (float)((ulong)*(undefined8 *)((long)puVar12 + 0xc) >> 0x20);
        fVar52 = *(float *)((long)puVar12 + 0x14);
        auVar55._0_4_ = fVar57 * fVar21 + fVar38 * fVar27 + fVar47 * fVar52;
        auVar55._4_4_ = fVar15 * fVar21 + fVar41 * fVar27 + fVar49 * fVar52;
        auVar55._8_4_ = fVar6 * fVar21 + fVar43 * fVar27 + fVar50 * fVar52;
        auVar55._12_4_ = fVar58 * fVar21 + fVar45 * fVar27 + fVar51 * fVar52;
        auVar24 = NEON_fmin(auVar24,auVar55,4);
        auVar31 = NEON_fmax(auVar31,auVar55,4);
        if (iVar39 != 2) {
          puVar9 = puVar12 + 3;
          do {
            fVar21 = (float)*puVar9;
            fVar27 = (float)((ulong)*puVar9 >> 0x20);
            fVar52 = *(float *)(puVar9 + 1);
            puVar9 = (undefined8 *)((long)puVar9 + 0xc);
            auVar56._0_4_ = fVar57 * fVar21 + fVar38 * fVar27 + fVar47 * fVar52;
            auVar56._4_4_ = fVar15 * fVar21 + fVar41 * fVar27 + fVar49 * fVar52;
            auVar56._8_4_ = fVar6 * fVar21 + fVar43 * fVar27 + fVar50 * fVar52;
            auVar56._12_4_ = fVar58 * fVar21 + fVar45 * fVar27 + fVar51 * fVar52;
            auVar24 = NEON_fmin(auVar24,auVar56,4);
            auVar31 = NEON_fmax(auVar31,auVar56,4);
          } while (puVar9 != (undefined8 *)((long)puVar12 + (long)iVar39 * 0xc));
        }
      }
    }
    param_5[2] = (fVar19 + auVar24._8_4_) - fVar13;
    param_5[3] = (fVar20 + auVar24._12_4_) - fVar13;
    *param_5 = (fVar14 + auVar24._0_4_) - fVar13;
    param_5[1] = (fVar18 + auVar24._4_4_) - fVar13;
    param_5[6] = fVar13 + fVar19 + auVar31._8_4_;
    param_5[7] = fVar13 + fVar20 + auVar31._12_4_;
    param_5[4] = fVar13 + fVar14 + auVar31._0_4_;
    param_5[5] = fVar13 + fVar18 + auVar31._4_4_;
  }
  return;
}


