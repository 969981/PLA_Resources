/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02feae48; name: FUN_02feae48
 */


void FUN_02feae48(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 *param_7,byte param_8,undefined8 param_9,
                 undefined8 param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  int iVar29;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined *local_220;
  long *plStack_218;
  undefined8 *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_170;
  long local_168;
  undefined8 uStack_160;
  long local_158;
  long lStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  byte local_138;
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
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar7 = *(long *)(param_4 + 0x50);
  if (*(char *)(lVar7 + 0x15df) != '\0') {
    if (*(char *)(param_3 + 0x30) == '\0') {
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18)
      )(*(long *)(param_2 + 0x28),param_7,&local_a0);
    }
    else {
      puVar6 = *(undefined8 **)(param_3 + 0x20);
      local_220 = (undefined *)*puVar6;
      plStack_218 = (long *)puVar6[1];
      local_210 = (undefined8 *)puVar6[2];
      uStack_208 = puVar6[3];
      local_200 = puVar6[4];
      uStack_1f8 = puVar6[5];
      local_1f0 = puVar6[6];
      uStack_1e8 = puVar6[7];
      FUN_032cc384(&local_d0,&local_220,param_3 + 0x50);
      uStack_1e8 = CONCAT44((float)((ulong)uStack_1e8 >> 0x20) + uStack_c8._4_4_,
                            (float)uStack_1e8 + (float)uStack_c8);
      local_1f0 = CONCAT44((float)((ulong)local_1f0 >> 0x20) + local_d0._4_4_,
                           (float)local_1f0 + (float)local_d0);
      fVar8 = *(float *)(param_3 + 0x40);
      fVar11 = *(float *)(param_3 + 0x44);
      fVar12 = *(float *)(param_3 + 0x48);
      plStack_218 = (long *)CONCAT44((float)((ulong)plStack_218 >> 0x20) * fVar8,
                                     SUB84(plStack_218,0) * fVar8);
      local_220 = (undefined *)
                  CONCAT44((float)((ulong)local_220 >> 0x20) * fVar8,SUB84(local_220,0) * fVar8);
      auVar30._0_8_ = CONCAT44((float)((ulong)local_200 >> 0x20) * fVar12,(float)local_200 * fVar12)
      ;
      auVar30._8_4_ = (float)uStack_1f8 * fVar12;
      auVar30._12_4_ = (float)((ulong)uStack_1f8 >> 0x20) * fVar12;
      uStack_208 = CONCAT44((float)((ulong)uStack_208 >> 0x20) * fVar11,(float)uStack_208 * fVar11);
      local_210 = (undefined8 *)
                  CONCAT44((float)((ulong)local_210 >> 0x20) * fVar11,SUB84(local_210,0) * fVar11);
      uStack_1f8 = auVar30._8_8_;
      local_200 = auVar30._0_8_;
      (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*(long *)(param_2 + 0x28) + 0x18) * 0x200 + 0x18)
      )(*(long *)(param_2 + 0x28),&local_220,&local_a0);
    }
    auVar30 = ZEXT816(0x3f800000);
    fVar8 = *(float *)(param_2 + 0x9c) + *(float *)(param_2 + 100);
    if (fVar8 <= *(float *)(param_2 + 0x68)) {
      fVar8 = *(float *)(param_2 + 0x68);
    }
    fVar11 = (float)uStack_90 + fVar8;
    fVar12 = (float)((ulong)uStack_90 >> 0x20) + fVar8;
    fVar13 = (float)uStack_88 + fVar8;
    fVar14 = (float)((ulong)uStack_88 >> 0x20) + fVar8;
    local_a0 = local_a0 - fVar8;
    fStack_9c = fStack_9c - fVar8;
    fStack_98 = fStack_98 - fVar8;
    fStack_94 = fStack_94 - fVar8;
    uStack_88 = CONCAT44(fVar14,fVar13);
    uStack_90 = CONCAT44(fVar12,fVar11);
    uVar4 = *(undefined8 *)(param_2 + 0x48);
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    uStack_208 = CONCAT44(uStack_208._4_4_,0x90);
    local_220 = PTR_DAT_043887d0 + 0x10;
    plStack_218 = (long *)0x0;
    local_210 = &local_200;
    iVar29 = -(uint)((float)uVar5 == 0.0);
    iVar33 = -(uint)((float)((ulong)uVar5 >> 0x20) == 0.0);
    iVar34 = -(uint)((float)uVar4 == 0.0);
    iVar35 = -(uint)(auVar30._0_4_ == 0.0);
    bVar15 = (byte)uVar5 & ~(byte)iVar29;
    bVar16 = (byte)((ulong)uVar5 >> 8) & ~(byte)((uint)iVar29 >> 8);
    bVar17 = (byte)((ulong)uVar5 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
    bVar18 = (byte)((ulong)uVar5 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
    bVar19 = (byte)((ulong)uVar5 >> 0x20) & ~(byte)iVar33;
    bVar20 = (byte)((ulong)uVar5 >> 0x28) & ~(byte)((uint)iVar33 >> 8);
    bVar21 = (byte)((ulong)uVar5 >> 0x30) & ~(byte)((uint)iVar33 >> 0x10);
    bVar22 = (byte)((ulong)uVar5 >> 0x38) & ~(byte)((uint)iVar33 >> 0x18);
    bVar23 = (byte)uVar4 & ~(byte)iVar34;
    bVar24 = (byte)((ulong)uVar4 >> 8) & ~(byte)((uint)iVar34 >> 8);
    bVar25 = (byte)((ulong)uVar4 >> 0x10) & ~(byte)((uint)iVar34 >> 0x10);
    bVar26 = (byte)((ulong)uVar4 >> 0x18) & ~(byte)((uint)iVar34 >> 0x18);
    bVar27 = auVar30[2] & ~(byte)((uint)iVar35 >> 0x10);
    bVar28 = auVar30[3] & ~(byte)((uint)iVar35 >> 0x18);
    auVar1[1] = bVar16;
    auVar1[0] = bVar15;
    auVar1[2] = bVar17;
    auVar1[3] = bVar18;
    auVar1[4] = bVar19;
    auVar1[5] = bVar20;
    auVar1[6] = bVar21;
    auVar1[7] = bVar22;
    auVar1[8] = bVar23;
    auVar1[9] = bVar24;
    auVar1[10] = bVar25;
    auVar1[0xb] = bVar26;
    auVar1._12_2_ = 0;
    auVar1[0xe] = bVar27;
    auVar1[0xf] = bVar28;
    auVar30 = NEON_frecpe(auVar1,4);
    auVar2[1] = bVar16;
    auVar2[0] = bVar15;
    auVar2[2] = bVar17;
    auVar2[3] = bVar18;
    auVar2[4] = bVar19;
    auVar2[5] = bVar20;
    auVar2[6] = bVar21;
    auVar2[7] = bVar22;
    auVar2[8] = bVar23;
    auVar2[9] = bVar24;
    auVar2[10] = bVar25;
    auVar2[0xb] = bVar26;
    auVar2._12_2_ = 0;
    auVar2[0xe] = bVar27;
    auVar2[0xf] = bVar28;
    auVar36 = NEON_frecps(auVar2,auVar30,4);
    iVar29 = -(uint)((float)CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15))) == 0.0);
    iVar33 = -(uint)((float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))) == 0.0);
    iVar34 = -(uint)((float)CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(bVar24,bVar23))) == 0.0);
    iVar35 = -(uint)((float)((uint)CONCAT11(bVar28,bVar27) << 0x10) == 0.0);
    auVar31._0_4_ = auVar30._0_4_ * auVar36._0_4_;
    auVar31._4_4_ = auVar30._4_4_ * auVar36._4_4_;
    auVar31._8_4_ = auVar30._8_4_ * auVar36._8_4_;
    auVar31._12_4_ = auVar30._12_4_ * auVar36._12_4_;
    local_138 = param_8 & 1;
    auVar3[1] = bVar16;
    auVar3[0] = bVar15;
    auVar3[2] = bVar17;
    auVar3[3] = bVar18;
    auVar3[4] = bVar19;
    auVar3[5] = bVar20;
    auVar3[6] = bVar21;
    auVar3[7] = bVar22;
    auVar3[8] = bVar23;
    auVar3[9] = bVar24;
    auVar3[10] = bVar25;
    auVar3[0xb] = bVar26;
    auVar3._12_2_ = 0;
    auVar3[0xe] = bVar27;
    auVar3[0xf] = bVar28;
    auVar30 = NEON_frecps(auVar3,auVar31,4);
    auVar37._0_8_ = CONCAT44((fStack_9c + fVar12) * 0.5,(local_a0 + fVar11) * 0.5);
    auVar37._8_4_ = (fStack_98 + fVar13) * 0.5;
    auVar37._12_4_ = (fStack_94 + fVar14) * 0.5;
    local_e0 = (fVar11 - local_a0) * 0.5;
    fStack_dc = (fVar12 - fStack_9c) * 0.5;
    fStack_d8 = (fVar13 - fStack_98) * 0.5;
    fStack_d4 = (fVar14 - fStack_94) * 0.5;
    uStack_c8 = auVar37._8_8_;
    auVar9[0] = ~(byte)iVar29;
    auVar9[1] = ~(byte)((uint)iVar29 >> 8);
    auVar9[2] = ~(byte)((uint)iVar29 >> 0x10);
    auVar9[3] = ~(byte)((uint)iVar29 >> 0x18);
    auVar9[4] = ~(byte)iVar33;
    auVar9[5] = ~(byte)((uint)iVar33 >> 8);
    auVar9[6] = ~(byte)((uint)iVar33 >> 0x10);
    auVar9[7] = ~(byte)((uint)iVar33 >> 0x18);
    auVar9[8] = ~(byte)iVar34;
    auVar9[9] = ~(byte)((uint)iVar34 >> 8);
    auVar9[10] = ~(byte)((uint)iVar34 >> 0x10);
    auVar9[0xb] = ~(byte)((uint)iVar34 >> 0x18);
    auVar9[0xc] = ~(byte)iVar35;
    auVar9[0xd] = ~(byte)((uint)iVar35 >> 8);
    auVar9[0xe] = ~(byte)((uint)iVar35 >> 0x10);
    auVar9[0xf] = ~(byte)((uint)iVar35 >> 0x18);
    auVar32._0_4_ = auVar31._0_4_ * auVar30._0_4_;
    auVar32._4_4_ = auVar31._4_4_ * auVar30._4_4_;
    auVar32._8_4_ = auVar31._8_4_ * auVar30._8_4_;
    auVar32._12_4_ = auVar31._12_4_ * auVar30._12_4_;
    auVar36._8_4_ = 0x7f7fffee;
    auVar36._0_8_ = 0x7f7fffee7f7fffee;
    auVar36._12_4_ = 0x7f7fffee;
    auVar10._8_4_ = 0x7f7fffee;
    auVar10._0_8_ = 0x7f7fffee7f7fffee;
    auVar10._12_4_ = 0x7f7fffee;
    auVar10 = auVar10 ^ (auVar36 ^ auVar32) & auVar9;
    uStack_b8 = CONCAT17(bVar28,CONCAT16(bVar27,(uint6)CONCAT13(bVar26,CONCAT12(bVar25,CONCAT11(
                                                  bVar24,bVar23)))));
    local_c0 = CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))));
    uStack_a8 = auVar10._8_8_;
    uStack_b0 = auVar10._0_8_;
    local_130 = *param_7;
    uStack_128 = param_7[1];
    local_120 = param_7[2];
    uStack_118 = param_7[3];
    local_110 = param_7[4];
    uStack_108 = param_7[5];
    local_100 = param_7[6];
    uStack_f8 = param_7[7];
    local_f0 = param_9;
    local_80 = 0;
    uStack_78 = 0;
    local_168 = param_4;
    uStack_160 = param_1;
    local_158 = param_2;
    lStack_150 = param_3;
    local_148 = param_5;
    uStack_140 = param_6;
    uStack_e8 = param_10;
    local_d0 = auVar37._0_8_;
    local_170 = FUN_02fd8ea4(&local_220,&local_80);
    uVar5 = FUN_030fe59c(lVar7);
    FUN_02feb0d0(uVar5,&local_d0,&local_e0,&local_220);
    local_220 = PTR_DAT_043724f0 + 0x10;
    if (plStack_218 != (long *)0x0) {
      (**(code **)(*plStack_218 + 8))();
    }
  }
  return;
}


