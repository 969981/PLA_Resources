/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001d8a1c; name: FUN_001d8a1c
 */


undefined4
FUN_001d8a1c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  int iVar23;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 local_18;
  
  local_18 = 0;
  uStack_48 = param_2[1];
  local_50 = *param_2;
  fVar2 = (float)*param_3 - (float)local_50;
  fVar3 = (float)((ulong)*param_3 >> 0x20) - (float)((ulong)local_50 >> 0x20);
  fVar4 = (float)param_3[1] - (float)uStack_48;
  fVar5 = *(float *)(PTR_DAT_04372370 + 0x60);
  iVar23 = -(uint)(fVar2 == 0.0);
  iVar27 = -(uint)(fVar3 == 0.0);
  iVar28 = -(uint)(fVar4 == 0.0);
  iVar29 = -(uint)(fVar5 == 0.0);
  bVar7 = SUB41(fVar2,0) & ~(byte)iVar23;
  bVar8 = (byte)((uint)fVar2 >> 8) & ~(byte)((uint)iVar23 >> 8);
  bVar9 = (byte)((uint)fVar2 >> 0x10) & ~(byte)((uint)iVar23 >> 0x10);
  bVar10 = (byte)((uint)fVar2 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18);
  bVar11 = SUB41(fVar3,0) & ~(byte)iVar27;
  bVar12 = (byte)((uint)fVar3 >> 8) & ~(byte)((uint)iVar27 >> 8);
  bVar13 = (byte)((uint)fVar3 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10);
  bVar14 = (byte)((uint)fVar3 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18);
  bVar15 = SUB41(fVar4,0) & ~(byte)iVar28;
  bVar16 = (byte)((uint)fVar4 >> 8) & ~(byte)((uint)iVar28 >> 8);
  bVar17 = (byte)((uint)fVar4 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10);
  bVar18 = (byte)((uint)fVar4 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18);
  bVar19 = SUB41(fVar5,0) & ~(byte)iVar29;
  bVar20 = (byte)((uint)fVar5 >> 8) & ~(byte)((uint)iVar29 >> 8);
  bVar21 = (byte)((uint)fVar5 >> 0x10) & ~(byte)((uint)iVar29 >> 0x10);
  bVar22 = (byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18);
  auVar24[1] = bVar8;
  auVar24[0] = bVar7;
  auVar24[2] = bVar9;
  auVar24[3] = bVar10;
  auVar24[4] = bVar11;
  auVar24[5] = bVar12;
  auVar24[6] = bVar13;
  auVar24[7] = bVar14;
  auVar24[8] = bVar15;
  auVar24[9] = bVar16;
  auVar24[10] = bVar17;
  auVar24[0xb] = bVar18;
  auVar24[0xc] = bVar19;
  auVar24[0xd] = bVar20;
  auVar24[0xe] = bVar21;
  auVar24[0xf] = bVar22;
  auVar24 = NEON_frecpe(auVar24,4);
  auVar30[1] = bVar8;
  auVar30[0] = bVar7;
  auVar30[2] = bVar9;
  auVar30[3] = bVar10;
  auVar30[4] = bVar11;
  auVar30[5] = bVar12;
  auVar30[6] = bVar13;
  auVar30[7] = bVar14;
  auVar30[8] = bVar15;
  auVar30[9] = bVar16;
  auVar30[10] = bVar17;
  auVar30[0xb] = bVar18;
  auVar30[0xc] = bVar19;
  auVar30[0xd] = bVar20;
  auVar30[0xe] = bVar21;
  auVar30[0xf] = bVar22;
  auVar30 = NEON_frecps(auVar30,auVar24,4);
  auVar25._0_4_ = auVar24._0_4_ * auVar30._0_4_;
  auVar25._4_4_ = auVar24._4_4_ * auVar30._4_4_;
  auVar25._8_4_ = auVar24._8_4_ * auVar30._8_4_;
  auVar25._12_4_ = auVar24._12_4_ * auVar30._12_4_;
  auVar1[1] = bVar8;
  auVar1[0] = bVar7;
  auVar1[2] = bVar9;
  auVar1[3] = bVar10;
  auVar1[4] = bVar11;
  auVar1[5] = bVar12;
  auVar1[6] = bVar13;
  auVar1[7] = bVar14;
  auVar1[8] = bVar15;
  auVar1[9] = bVar16;
  auVar1[10] = bVar17;
  auVar1[0xb] = bVar18;
  auVar1[0xc] = bVar19;
  auVar1[0xd] = bVar20;
  auVar1[0xe] = bVar21;
  auVar1[0xf] = bVar22;
  auVar24 = NEON_frecps(auVar1,auVar25,4);
  auVar26._0_4_ = auVar25._0_4_ * auVar24._0_4_;
  auVar26._4_4_ = auVar25._4_4_ * auVar24._4_4_;
  auVar26._8_4_ = auVar25._8_4_ * auVar24._8_4_;
  auVar26._12_4_ = auVar25._12_4_ * auVar24._12_4_;
  iVar23 = -(uint)((float)CONCAT13(bVar10,CONCAT12(bVar9,CONCAT11(bVar8,bVar7))) == 0.0);
  iVar27 = -(uint)((float)CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar12,bVar11))) == 0.0);
  iVar28 = -(uint)((float)CONCAT13(bVar18,CONCAT12(bVar17,CONCAT11(bVar16,bVar15))) == 0.0);
  iVar29 = -(uint)((float)CONCAT13(bVar22,CONCAT12(bVar21,CONCAT11(bVar20,bVar19))) == 0.0);
  auVar31[0] = ~(byte)iVar23;
  auVar31[1] = ~(byte)((uint)iVar23 >> 8);
  auVar31[2] = ~(byte)((uint)iVar23 >> 0x10);
  auVar31[3] = ~(byte)((uint)iVar23 >> 0x18);
  auVar31[4] = ~(byte)iVar27;
  auVar31[5] = ~(byte)((uint)iVar27 >> 8);
  auVar31[6] = ~(byte)((uint)iVar27 >> 0x10);
  auVar31[7] = ~(byte)((uint)iVar27 >> 0x18);
  auVar31[8] = ~(byte)iVar28;
  auVar31[9] = ~(byte)((uint)iVar28 >> 8);
  auVar31[10] = ~(byte)((uint)iVar28 >> 0x10);
  auVar31[0xb] = ~(byte)((uint)iVar28 >> 0x18);
  auVar31[0xc] = ~(byte)iVar29;
  auVar31[0xd] = ~(byte)((uint)iVar29 >> 8);
  auVar31[0xe] = ~(byte)((uint)iVar29 >> 0x10);
  auVar31[0xf] = ~(byte)((uint)iVar29 >> 0x18);
  auVar6._8_4_ = 0x7f7fffee;
  auVar6._0_8_ = 0x7f7fffee7f7fffee;
  auVar6._12_4_ = 0x7f7fffee;
  auVar32._8_4_ = 0x7f7fffee;
  auVar32._0_8_ = 0x7f7fffee7f7fffee;
  auVar32._12_4_ = 0x7f7fffee;
  auVar32 = auVar32 ^ (auVar6 ^ auVar26) & auVar31;
  uStack_38 = CONCAT17(bVar22,CONCAT16(bVar21,CONCAT15(bVar20,CONCAT14(bVar19,CONCAT13(bVar18,
                                                  CONCAT12(bVar17,CONCAT11(bVar16,bVar15)))))));
  local_40 = CONCAT17(bVar14,CONCAT16(bVar13,CONCAT15(bVar12,CONCAT14(bVar11,CONCAT13(bVar10,
                                                  CONCAT12(bVar9,CONCAT11(bVar8,bVar7)))))));
  uStack_28 = auVar32._8_8_;
  uStack_30 = auVar32._0_8_;
  local_20 = param_5;
  FUN_001d9490(*(long *)(param_1 + 0x18) + 0x20,&local_50,param_4,&local_20);
  return local_18;
}


