/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fa91a4; name: FUN_02fa91a4
 */


void FUN_02fa91a4(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 long param_6,float *param_7,byte param_8,long param_9,undefined8 param_10)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [12];
  float fVar29;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar30;
  float fVar38;
  float fVar39;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  int iVar40;
  undefined8 uVar41;
  int iVar46;
  int iVar47;
  int iVar48;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  float fStack_1bc;
  float fStack_1b4;
  undefined8 local_190;
  undefined8 uStack_188;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  fVar16 = *(float *)(param_3 + 0x40);
  fVar18 = *(float *)(param_3 + 0x44);
  fVar20 = *(float *)(param_3 + 0x48);
  fVar7 = *(float *)(param_2 + 0x9c) + *(float *)(param_2 + 100);
  uStack_e8 = CONCAT44(param_7[3] * fVar16,param_7[2] * fVar16);
  local_f0 = CONCAT44(param_7[1] * fVar16,*param_7 * fVar16);
  if (fVar7 <= *(float *)(param_2 + 0x68)) {
    fVar7 = *(float *)(param_2 + 0x68);
  }
  uStack_d8 = CONCAT44(param_7[7] * fVar18,param_7[6] * fVar18);
  local_e0 = CONCAT44(param_7[5] * fVar18,param_7[4] * fVar18);
  auVar32 = *(undefined1 (*) [16])(param_7 + 8);
  auVar31._0_8_ = CONCAT44(auVar32._4_4_ * fVar20,auVar32._0_4_ * fVar20);
  auVar31._8_4_ = auVar32._8_4_ * fVar20;
  auVar31._12_4_ = auVar32._12_4_ * fVar20;
  local_c0 = CONCAT44((float)((ulong)*(undefined8 *)(param_7 + 0xc) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20),
                      (float)*(undefined8 *)(param_7 + 0xc) + (float)*(undefined8 *)(param_3 + 0x50)
                     );
  uStack_b8 = CONCAT44((float)((ulong)*(undefined8 *)(param_7 + 0xe) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),
                       (float)*(undefined8 *)(param_7 + 0xe) +
                       (float)*(undefined8 *)(param_3 + 0x58));
  uStack_c8 = auVar31._8_8_;
  local_d0 = auVar31._0_8_;
  (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18))
            (*(long *)(param_2 + 0x28),&local_f0,&local_130);
  fVar8 = fVar7 + (float)local_120;
  fVar10 = fVar7 + (float)((ulong)local_120 >> 0x20);
  local_120 = CONCAT44(fVar10,fVar8);
  fVar12 = fVar7 + (float)uStack_118;
  fVar14 = fVar7 + (float)((ulong)uStack_118 >> 0x20);
  uStack_118 = CONCAT44(fVar14,fVar12);
  fVar16 = *(float *)(param_4 + 0x70);
  fVar18 = *(float *)(param_4 + 0x74);
  fVar20 = *(float *)(param_4 + 0x78);
  uVar41 = *(undefined8 *)(param_9 + 0x10);
  fVar30 = fVar16 * *(float *)(param_2 + 0x40);
  fVar38 = fVar18 * *(float *)(param_2 + 0x44);
  fVar39 = fVar20 * *(float *)(param_2 + 0x48);
  fVar8 = fVar8 * fVar16;
  fVar10 = fVar10 * fVar18;
  fVar12 = fVar12 * fVar20;
  fVar14 = fVar14 * *(float *)(param_4 + 0x7c);
  fVar16 = ((float)local_130 - fVar7) * fVar16;
  fVar18 = ((float)((ulong)local_130 >> 0x20) - fVar7) * fVar18;
  fVar20 = ((float)uStack_128 - fVar7) * fVar20;
  fVar22 = ((float)((ulong)uStack_128 >> 0x20) - fVar7) * *(float *)(param_4 + 0x7c);
  iVar40 = -(uint)(fVar30 == 0.0);
  iVar46 = -(uint)(fVar38 == 0.0);
  iVar47 = -(uint)(fVar39 == 0.0);
  iVar48 = -(uint)((float)uVar41 == 0.0);
  bVar51 = SUB41(fVar30,0) & ~(byte)iVar40;
  bVar52 = (byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar40 >> 8);
  bVar53 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10);
  bVar54 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18);
  bVar55 = SUB41(fVar38,0) & ~(byte)iVar46;
  bVar56 = (byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar46 >> 8);
  bVar57 = (byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10);
  bVar58 = (byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18);
  bVar59 = SUB41(fVar39,0) & ~(byte)iVar47;
  bVar60 = (byte)((uint)fVar39 >> 8) & ~(byte)((uint)iVar47 >> 8);
  bVar61 = (byte)((uint)fVar39 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
  bVar62 = (byte)((uint)fVar39 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
  bVar63 = (byte)uVar41 & ~(byte)iVar48;
  bVar64 = (byte)((ulong)uVar41 >> 8) & ~(byte)((uint)iVar48 >> 8);
  bVar65 = (byte)((ulong)uVar41 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
  bVar66 = (byte)((ulong)uVar41 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
  auVar32[1] = bVar52;
  auVar32[0] = bVar51;
  auVar32[2] = bVar53;
  auVar32[3] = bVar54;
  auVar32[4] = bVar55;
  auVar32[5] = bVar56;
  auVar32[6] = bVar57;
  auVar32[7] = bVar58;
  auVar32[8] = bVar59;
  auVar32[9] = bVar60;
  auVar32[10] = bVar61;
  auVar32[0xb] = bVar62;
  auVar32[0xc] = bVar63;
  auVar32[0xd] = bVar64;
  auVar32[0xe] = bVar65;
  auVar32[0xf] = bVar66;
  auVar32 = NEON_frecpe(auVar32,4);
  iVar40 = -(uint)((float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51))) == 0.0);
  iVar46 = -(uint)((float)CONCAT13(bVar58,CONCAT12(bVar57,CONCAT11(bVar56,bVar55))) == 0.0);
  iVar47 = -(uint)((float)CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59))) == 0.0);
  iVar48 = -(uint)((float)CONCAT13(bVar66,CONCAT12(bVar65,CONCAT11(bVar64,bVar63))) == 0.0);
  auVar25[0] = ~(byte)iVar40;
  auVar25[1] = ~(byte)((uint)iVar40 >> 8);
  auVar25[2] = ~(byte)((uint)iVar40 >> 0x10);
  auVar25[3] = ~(byte)((uint)iVar40 >> 0x18);
  auVar25[4] = ~(byte)iVar46;
  auVar25[5] = ~(byte)((uint)iVar46 >> 8);
  auVar25[6] = ~(byte)((uint)iVar46 >> 0x10);
  auVar25[7] = ~(byte)((uint)iVar46 >> 0x18);
  auVar25[8] = ~(byte)iVar47;
  auVar25[9] = ~(byte)((uint)iVar47 >> 8);
  auVar25[10] = ~(byte)((uint)iVar47 >> 0x10);
  auVar25[0xb] = ~(byte)((uint)iVar47 >> 0x18);
  auVar25[0xc] = ~(byte)iVar48;
  auVar25[0xd] = ~(byte)((uint)iVar48 >> 8);
  auVar25[0xe] = ~(byte)((uint)iVar48 >> 0x10);
  auVar25[0xf] = ~(byte)((uint)iVar48 >> 0x18);
  auVar42[1] = bVar52;
  auVar42[0] = bVar51;
  auVar42[2] = bVar53;
  auVar42[3] = bVar54;
  auVar42[4] = bVar55;
  auVar42[5] = bVar56;
  auVar42[6] = bVar57;
  auVar42[7] = bVar58;
  auVar42[8] = bVar59;
  auVar42[9] = bVar60;
  auVar42[10] = bVar61;
  auVar42[0xb] = bVar62;
  auVar42[0xc] = bVar63;
  auVar42[0xd] = bVar64;
  auVar42[0xe] = bVar65;
  auVar42[0xf] = bVar66;
  auVar42 = NEON_frecps(auVar42,auVar32,4);
  auVar33._0_4_ = auVar32._0_4_ * auVar42._0_4_;
  auVar33._4_4_ = auVar32._4_4_ * auVar42._4_4_;
  auVar33._8_4_ = auVar32._8_4_ * auVar42._8_4_;
  auVar33._12_4_ = auVar32._12_4_ * auVar42._12_4_;
  auVar50[1] = bVar52;
  auVar50[0] = bVar51;
  auVar50[2] = bVar53;
  auVar50[3] = bVar54;
  auVar50[4] = bVar55;
  auVar50[5] = bVar56;
  auVar50[6] = bVar57;
  auVar50[7] = bVar58;
  auVar50[8] = bVar59;
  auVar50[9] = bVar60;
  auVar50[10] = bVar61;
  auVar50[0xb] = bVar62;
  auVar50[0xc] = bVar63;
  auVar50[0xd] = bVar64;
  auVar50[0xe] = bVar65;
  auVar50[0xf] = bVar66;
  auVar32 = NEON_frecps(auVar50,auVar33,4);
  auVar34._0_4_ = auVar33._0_4_ * auVar32._0_4_;
  auVar34._4_4_ = auVar33._4_4_ * auVar32._4_4_;
  auVar34._8_4_ = auVar33._8_4_ * auVar32._8_4_;
  auVar34._12_4_ = auVar33._12_4_ * auVar32._12_4_;
  fVar30 = (fVar16 + fVar8) * 0.5;
  fVar38 = (fVar18 + fVar10) * 0.5;
  auVar49._0_8_ = CONCAT44(fVar38,fVar30);
  auVar49._8_4_ = (fVar20 + fVar12) * 0.5;
  auVar49._12_4_ = (fVar22 + fVar14) * 0.5;
  fVar16 = (fVar8 - fVar16) * 0.5;
  fVar18 = (fVar10 - fVar18) * 0.5;
  local_b0 = CONCAT44(fVar18,fVar16);
  fVar20 = (fVar12 - fVar20) * 0.5;
  fVar8 = (fVar14 - fVar22) * 0.5;
  uStack_a8 = CONCAT44(fVar8,fVar20);
  auVar2._8_4_ = 0x7f7fffee;
  auVar2._0_8_ = 0x7f7fffee7f7fffee;
  auVar2._12_4_ = 0x7f7fffee;
  auVar26._8_4_ = 0x7f7fffee;
  auVar26._0_8_ = 0x7f7fffee7f7fffee;
  auVar26._12_4_ = 0x7f7fffee;
  auVar26 = auVar26 ^ (auVar2 ^ auVar34) & auVar25;
  uStack_88 = CONCAT17(bVar66,CONCAT16(bVar65,CONCAT15(bVar64,CONCAT14(bVar63,CONCAT13(bVar62,
                                                  CONCAT12(bVar61,CONCAT11(bVar60,bVar59)))))));
  local_90 = CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,CONCAT13(bVar54,
                                                  CONCAT12(bVar53,CONCAT11(bVar52,bVar51)))))));
  uStack_78 = auVar26._8_8_;
  uStack_80 = auVar26._0_8_;
  uStack_98 = auVar49._8_8_;
  bVar1 = *(char *)(param_6 + 0x30) != '\0';
  local_a0 = auVar49._0_8_;
  if (bVar1) {
    puVar5 = *(undefined8 **)(param_3 + 0x20);
    fVar10 = (float)*(undefined8 *)(param_3 + 0x40);
    local_f0 = CONCAT44((float)((ulong)*puVar5 >> 0x20) * fVar10,(float)*puVar5 * fVar10);
    uStack_e8 = CONCAT44((float)((ulong)puVar5[1] >> 0x20) * fVar10,(float)puVar5[1] * fVar10);
    fVar10 = (float)((ulong)*(undefined8 *)(param_3 + 0x40) >> 0x20);
    local_e0 = CONCAT44((float)((ulong)puVar5[2] >> 0x20) * fVar10,(float)puVar5[2] * fVar10);
    uStack_d8 = CONCAT44((float)((ulong)puVar5[3] >> 0x20) * fVar10,(float)puVar5[3] * fVar10);
    fVar10 = (float)*(undefined8 *)(param_3 + 0x48);
    local_d0 = CONCAT44((float)((ulong)puVar5[4] >> 0x20) * fVar10,(float)puVar5[4] * fVar10);
    uStack_c8 = CONCAT44((float)((ulong)puVar5[5] >> 0x20) * fVar10,(float)puVar5[5] * fVar10);
    local_c0 = CONCAT44((float)((ulong)puVar5[6] >> 0x20) +
                        (float)((ulong)*(undefined8 *)(param_3 + 0x50) >> 0x20),
                        (float)puVar5[6] + (float)*(undefined8 *)(param_3 + 0x50));
    uStack_b8 = CONCAT44((float)((ulong)puVar5[7] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_3 + 0x58) >> 0x20),
                         (float)puVar5[7] + (float)*(undefined8 *)(param_3 + 0x58));
    puVar5 = *(undefined8 **)(param_6 + 0x20);
    fVar10 = (float)*(undefined8 *)(param_6 + 0x40);
    local_130 = CONCAT44((float)((ulong)*puVar5 >> 0x20) * fVar10,(float)*puVar5 * fVar10);
    uStack_128 = CONCAT44((float)((ulong)puVar5[1] >> 0x20) * fVar10,(float)puVar5[1] * fVar10);
    fVar10 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
    local_120 = CONCAT44((float)((ulong)puVar5[2] >> 0x20) * fVar10,(float)puVar5[2] * fVar10);
    uStack_118 = CONCAT44((float)((ulong)puVar5[3] >> 0x20) * fVar10,(float)puVar5[3] * fVar10);
    fVar10 = (float)*(undefined8 *)(param_6 + 0x48);
    local_110 = CONCAT44((float)((ulong)puVar5[4] >> 0x20) * fVar10,(float)puVar5[4] * fVar10);
    uStack_108 = CONCAT44((float)((ulong)puVar5[5] >> 0x20) * fVar10,(float)puVar5[5] * fVar10);
    local_100 = CONCAT44((float)((ulong)puVar5[6] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_6 + 0x50) >> 0x20),
                         (float)puVar5[6] + (float)*(undefined8 *)(param_6 + 0x50));
    uStack_f8 = CONCAT44((float)((ulong)puVar5[7] >> 0x20) +
                         (float)((ulong)*(undefined8 *)(param_6 + 0x58) >> 0x20),
                         (float)puVar5[7] + (float)*(undefined8 *)(param_6 + 0x58));
    fVar12 = (float)CONCAT13(bVar62,CONCAT12(bVar61,CONCAT11(bVar60,bVar59)));
    fVar10 = (float)CONCAT13(bVar54,CONCAT12(bVar53,CONCAT11(bVar52,bVar51)));
    (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18))
              (*(long *)(param_2 + 0x28),&local_f0,&local_150);
    fVar9 = fVar7 + (float)uStack_140;
    fVar11 = fVar7 + (float)((ulong)uStack_140 >> 0x20);
    uStack_140 = CONCAT44(fVar11,fVar9);
    fVar13 = fVar7 + (float)uStack_138;
    fVar15 = fVar7 + (float)((ulong)uStack_138 >> 0x20);
    uStack_138 = CONCAT44(fVar15,fVar13);
    fVar17 = (float)local_150 - fVar7;
    fVar19 = (float)((ulong)local_150 >> 0x20) - fVar7;
    local_150 = CONCAT44(fVar19,fVar17);
    fVar21 = (float)uStack_148 - fVar7;
    fVar7 = (float)((ulong)uStack_148 >> 0x20) - fVar7;
    uStack_148 = CONCAT44(fVar7,fVar21);
    pfVar3 = &local_180;
    pfVar6 = *(float **)(param_6 + 0x20);
    fVar14 = *(float *)(param_2 + 0x40);
    fVar22 = *(float *)(param_2 + 0x44);
    fVar39 = *(float *)(param_2 + 0x48);
    puVar5 = &local_190;
    local_190 = CONCAT44((fVar11 - fVar19) * 0.5,(fVar9 - fVar17) * 0.5);
    uStack_188 = CONCAT44((fVar15 - fVar7) * 0.5,(fVar13 - fVar21) * 0.5);
    fVar23 = pfVar6[8] * fVar39 + *pfVar6 * fVar14 + pfVar6[4] * fVar22;
    fVar29 = pfVar6[9] * fVar39 + pfVar6[1] * fVar14 + pfVar6[5] * fVar22;
    fVar22 = pfVar6[10] * fVar39 + pfVar6[2] * fVar14 + pfVar6[6] * fVar22;
    uVar41 = *(undefined8 *)(param_9 + 0x10);
    iVar40 = -(uint)(fVar23 == 0.0);
    iVar46 = -(uint)(fVar29 == 0.0);
    iVar47 = -(uint)(fVar22 == 0.0);
    iVar48 = -(uint)((float)uVar41 == 0.0);
    fVar14 = (float)CONCAT13((byte)((uint)fVar23 >> 0x18) & ~(byte)((uint)iVar40 >> 0x18),
                             CONCAT12((byte)((uint)fVar23 >> 0x10) & ~(byte)((uint)iVar40 >> 0x10),
                                      CONCAT11((byte)((uint)fVar23 >> 8) &
                                               ~(byte)((uint)iVar40 >> 8),
                                               SUB41(fVar23,0) & ~(byte)iVar40)));
    auVar24._0_8_ =
         CONCAT17((byte)((uint)fVar29 >> 0x18) & ~(byte)((uint)iVar46 >> 0x18),
                  CONCAT16((byte)((uint)fVar29 >> 0x10) & ~(byte)((uint)iVar46 >> 0x10),
                           CONCAT15((byte)((uint)fVar29 >> 8) & ~(byte)((uint)iVar46 >> 8),
                                    CONCAT14(SUB41(fVar29,0) & ~(byte)iVar46,fVar14))));
    auVar24[8] = SUB41(fVar22,0) & ~(byte)iVar47;
    auVar24[9] = (byte)((uint)fVar22 >> 8) & ~(byte)((uint)iVar47 >> 8);
    auVar24[10] = (byte)((uint)fVar22 >> 0x10) & ~(byte)((uint)iVar47 >> 0x10);
    auVar24[0xb] = (byte)((uint)fVar22 >> 0x18) & ~(byte)((uint)iVar47 >> 0x18);
    auVar27[0xc] = (byte)uVar41 & ~(byte)iVar48;
    auVar27._0_12_ = auVar24;
    auVar27[0xd] = (byte)((ulong)uVar41 >> 8) & ~(byte)((uint)iVar48 >> 8);
    auVar27[0xe] = (byte)((ulong)uVar41 >> 0x10) & ~(byte)((uint)iVar48 >> 0x10);
    auVar27[0xf] = (byte)((ulong)uVar41 >> 0x18) & ~(byte)((uint)iVar48 >> 0x18);
    auVar32 = NEON_frecpe(auVar27,4);
    iVar40 = -(uint)(fVar14 == 0.0);
    iVar46 = -(uint)((float)((ulong)auVar24._0_8_ >> 0x20) == 0.0);
    iVar47 = -(uint)(auVar24._8_4_ == 0.0);
    iVar48 = -(uint)(auVar27._12_4_ == 0.0);
    auVar42 = NEON_frecps(auVar27,auVar32,4);
    auVar35._0_4_ = auVar32._0_4_ * auVar42._0_4_;
    auVar35._4_4_ = auVar32._4_4_ * auVar42._4_4_;
    auVar35._8_4_ = auVar32._8_4_ * auVar42._8_4_;
    auVar35._12_4_ = auVar32._12_4_ * auVar42._12_4_;
    auVar32 = NEON_frecps(auVar27,auVar35,4);
    auVar36._0_4_ = auVar35._0_4_ * auVar32._0_4_;
    auVar36._4_4_ = auVar35._4_4_ * auVar32._4_4_;
    auVar36._8_4_ = auVar35._8_4_ * auVar32._8_4_;
    auVar36._12_4_ = auVar35._12_4_ * auVar32._12_4_;
    local_180 = (fVar9 + fVar17) * 0.5;
    fStack_17c = (fVar11 + fVar19) * 0.5;
    fStack_178 = (fVar13 + fVar21) * 0.5;
    fStack_174 = (fVar15 + fVar7) * 0.5;
    uStack_168 = auVar27._8_8_;
    auVar43[0] = ~(byte)iVar40;
    auVar43[1] = ~(byte)((uint)iVar40 >> 8);
    auVar43[2] = ~(byte)((uint)iVar40 >> 0x10);
    auVar43[3] = ~(byte)((uint)iVar40 >> 0x18);
    auVar43[4] = ~(byte)iVar46;
    auVar43[5] = ~(byte)((uint)iVar46 >> 8);
    auVar43[6] = ~(byte)((uint)iVar46 >> 0x10);
    auVar43[7] = ~(byte)((uint)iVar46 >> 0x18);
    auVar43[8] = ~(byte)iVar47;
    auVar43[9] = ~(byte)((uint)iVar47 >> 8);
    auVar43[10] = ~(byte)((uint)iVar47 >> 0x10);
    auVar43[0xb] = ~(byte)((uint)iVar47 >> 0x18);
    auVar43[0xc] = ~(byte)iVar48;
    auVar43[0xd] = ~(byte)((uint)iVar48 >> 8);
    auVar43[0xe] = ~(byte)((uint)iVar48 >> 0x10);
    auVar43[0xf] = ~(byte)((uint)iVar48 >> 0x18);
    auVar44._8_8_ = 0x7f7fffee7f7fffee;
    auVar44._0_8_ = 0x7f7fffee7f7fffee;
    auVar44 = auVar44 ^ (auVar44 ^ auVar36) & auVar43;
    uStack_158 = auVar44._8_8_;
    local_160 = auVar44._0_8_;
    auVar32 = *(undefined1 (*) [16])(param_6 + 0x40);
    puVar4 = &local_130;
    auVar42 = NEON_frecpe(auVar32,4);
    auVar50 = NEON_frecps(auVar32,auVar42,4);
    auVar45._0_4_ = auVar42._0_4_ * auVar50._0_4_;
    auVar45._4_4_ = auVar42._4_4_ * auVar50._4_4_;
    auVar45._8_4_ = auVar42._8_4_ * auVar50._8_4_;
    auVar45._12_4_ = auVar42._12_4_ * auVar50._12_4_;
    auVar32 = NEON_frecps(auVar32,auVar45,4);
    fVar7 = auVar45._0_4_ * auVar32._0_4_;
    fVar14 = auVar45._4_4_ * auVar32._4_4_;
    fVar22 = auVar45._8_4_ * auVar32._8_4_;
    fVar39 = auVar45._12_4_ * auVar32._12_4_;
    fStack_1bc = (float)(CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,fVar10))))
                        >> 0x20);
    fStack_1b4 = (float)(CONCAT17(bVar66,CONCAT16(bVar65,CONCAT15(bVar64,CONCAT14(bVar63,fVar12))))
                        >> 0x20);
    local_a0 = CONCAT44(fVar14 * (fVar38 - *(float *)(param_6 + 0x54)),
                        fVar7 * (fVar30 - *(float *)(param_6 + 0x50)));
    uStack_98 = CONCAT44(fVar39 * (auVar49._12_4_ - *(float *)(param_6 + 0x5c)),
                         fVar22 * (auVar49._8_4_ - *(float *)(param_6 + 0x58)));
    auVar37._0_8_ = CONCAT44(fStack_1bc * fVar14,fVar10 * fVar7);
    auVar37._8_4_ = fVar12 * fVar22;
    auVar37._12_4_ = fStack_1b4 * fVar39;
    auVar28._0_8_ = CONCAT44(fVar18 * fVar14,fVar16 * fVar7);
    auVar28._8_4_ = fVar20 * fVar22;
    auVar28._12_4_ = fVar8 * fVar39;
    uStack_88 = auVar37._8_8_;
    uStack_a8 = auVar28._8_8_;
    uStack_170 = auVar24._0_8_;
    local_b0 = auVar28._0_8_;
    local_90 = auVar37._0_8_;
  }
  else {
    puVar4 = *(undefined8 **)(param_6 + 0x20);
    pfVar3 = (float *)&local_a0;
    puVar5 = &local_b0;
  }
  FUN_02fa8370(bVar1,param_1,param_2,param_3,&local_a0,&local_b0,pfVar3,puVar5,param_4,param_5,
               param_6,param_7,puVar4,param_8 & 1,param_9,param_10);
  return;
}


