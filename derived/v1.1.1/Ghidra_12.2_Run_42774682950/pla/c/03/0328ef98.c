/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328ef98; name: FUN_0328ef98
 */


void FUN_0328ef98(ushort *param_1,undefined4 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  unkbyte10 Var6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined8 uVar25;
  float fVar26;
  
  auVar11._0_8_ =
       CONCAT17(*(undefined1 *)((long)param_1 + 0x13),
                CONCAT16((char)param_1[9],(uint6)param_1[8] << 0x10)) ^ 0x8000000080000000;
  auVar11._8_2_ = 0;
  auVar11[10] = (char)param_1[10];
  auVar11[0xb] = *(byte *)((long)param_1 + 0x15) ^ 0x80;
  auVar11._12_2_ = 0;
  auVar11[0xe] = (char)param_1[0xb];
  auVar11[0xf] = *(byte *)((long)param_1 + 0x17) ^ 0x80;
  auVar12 = NEON_scvtf(auVar11,4);
  fVar10 = auVar12._0_4_ * 5.086263e-10;
  fVar13 = auVar12._4_4_ * 5.086263e-10;
  fVar14 = auVar12._8_4_ * 5.086263e-10;
  fVar15 = auVar12._12_4_ * 5.086263e-10;
  fVar3 = fVar10 * fVar10;
  fVar4 = fVar13 * fVar13;
  uVar16 = (undefined1)((uint)fVar4 >> 8);
  uVar17 = (undefined1)((uint)fVar4 >> 0x10);
  uVar18 = (undefined1)((uint)fVar4 >> 0x18);
  fVar8 = fVar14 * fVar14;
  uVar19 = (undefined1)((uint)fVar8 >> 8);
  uVar20 = (undefined1)((uint)fVar8 >> 0x10);
  uVar21 = (undefined1)((uint)fVar8 >> 0x18);
  fVar26 = fVar15 * fVar15;
  uVar22 = (undefined1)((uint)fVar26 >> 8);
  uVar23 = (undefined1)((uint)fVar26 >> 0x10);
  uVar24 = (undefined1)((uint)fVar26 >> 0x18);
  auVar1[4] = SUB41(fVar4,0);
  auVar1._0_4_ = fVar3;
  auVar1[5] = uVar16;
  auVar1[6] = uVar17;
  auVar1[7] = uVar18;
  auVar1[8] = SUB41(fVar8,0);
  auVar1[9] = uVar19;
  auVar1[10] = uVar20;
  auVar1[0xb] = uVar21;
  auVar1[0xc] = SUB41(fVar26,0);
  auVar1[0xd] = uVar22;
  auVar1[0xe] = uVar23;
  auVar1[0xf] = uVar24;
  auVar2[4] = SUB41(fVar4,0);
  auVar2._0_4_ = fVar3;
  auVar2[5] = uVar16;
  auVar2[6] = uVar17;
  auVar2[7] = uVar18;
  auVar2[8] = SUB41(fVar8,0);
  auVar2[9] = uVar19;
  auVar2[10] = uVar20;
  auVar2[0xb] = uVar21;
  auVar2[0xc] = SUB41(fVar26,0);
  auVar2[0xd] = uVar22;
  auVar2[0xe] = uVar23;
  auVar2[0xf] = uVar24;
  auVar12 = NEON_ext(auVar1,auVar2,8,1);
  fVar8 = auVar12._0_4_ + auVar12._4_4_;
  fVar7 = fVar3 + fVar4 + fVar8;
  fVar8 = fVar3 + fVar4 + fVar8;
  uVar16 = SUB41(fVar8,0);
  uVar17 = (undefined1)((uint)fVar8 >> 8);
  uVar18 = (undefined1)((uint)fVar8 >> 0x10);
  uVar19 = (undefined1)((uint)fVar8 >> 0x18);
  uVar25 = NEON_frsqrte(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,fVar7)))),4)
  ;
  fVar8 = (float)uVar25;
  fVar26 = (float)((ulong)uVar25 >> 0x20);
  uVar25 = NEON_frsqrts(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,fVar7)))),
                        CONCAT26((short)((uint)(fVar26 * fVar26) >> 0x10),
                                 CONCAT24(SUB42(fVar26 * fVar26,0),fVar8 * fVar8)),4);
  fVar8 = fVar8 * (float)uVar25;
  fVar26 = fVar26 * (float)((ulong)uVar25 >> 0x20);
  uVar25 = NEON_frsqrts(CONCAT17(uVar19,CONCAT16(uVar18,CONCAT15(uVar17,CONCAT14(uVar16,fVar7)))),
                        CONCAT26((short)((uint)(fVar26 * fVar26) >> 0x10),
                                 CONCAT24(SUB42(fVar26 * fVar26,0),fVar8 * fVar8)),4);
  Var6 = *(unkbyte10 *)(param_1 + 4);
  uVar9 = (ushort)((unkuint10)Var6 >> 0x30);
  fVar8 = (float)uVar25 * fVar8;
  fVar26 = (float)((ulong)uVar25 >> 0x20) * fVar26;
  auVar5._6_2_ = (short)((unkuint10)Var6 >> 0x10);
  auVar5._0_6_ = (uint6)(ushort)Var6 << 0x10;
  auVar5._8_2_ = 0;
  auVar5._10_2_ = (short)((unkuint10)Var6 >> 0x20);
  auVar5._12_2_ = 0;
  auVar5._14_2_ = uVar9;
  auVar12 = NEON_scvtf(auVar5,4);
  param_2[10] = auVar12._8_4_ * (float)((uint)uVar9 << 0x10);
  param_2[0xb] = auVar12._12_4_ * (float)((uint)uVar9 << 0x10);
  param_2[8] = auVar12._0_4_ * (float)((uint)uVar9 << 0x10);
  param_2[9] = auVar12._4_4_ * (float)((uint)uVar9 << 0x10);
  uVar9 = param_1[3];
  auVar12._6_2_ = param_1[1];
  auVar12._0_6_ = (uint6)*param_1 << 0x10;
  auVar12._8_2_ = 0;
  auVar12._10_2_ = param_1[2];
  auVar12._12_2_ = 0;
  auVar12._14_2_ = uVar9;
  auVar12 = NEON_scvtf(auVar12,4);
  fVar3 = auVar12._4_4_ * (float)((uint)uVar9 << 0x10);
  fVar4 = auVar12._12_4_ * (float)((uint)uVar9 << 0x10);
  *(ulong *)(param_2 + 6) =
       CONCAT26((short)((uint)fVar4 >> 0x10),
                CONCAT24(SUB42(fVar4,0),auVar12._8_4_ * (float)((uint)uVar9 << 0x10)));
  *(ulong *)(param_2 + 4) =
       CONCAT26((short)((uint)fVar3 >> 0x10),
                CONCAT24(SUB42(fVar3,0),auVar12._0_4_ * (float)((uint)uVar9 << 0x10)));
  *param_2 = *(undefined4 *)(param_1 + 0xe);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  param_2[0xe] = fVar14 * fVar8;
  param_2[0xf] = fVar15 * (float)CONCAT13((char)((uint)fVar26 >> 0x18),
                                          CONCAT12((char)((uint)fVar26 >> 0x10),
                                                   (short)(CONCAT15((char)((uint)fVar26 >> 8),
                                                                    CONCAT14(SUB41(fVar26,0),fVar8))
                                                          >> 0x20)));
  param_2[0xc] = fVar10 * fVar8;
  param_2[0xd] = fVar13 * fVar26;
  return;
}


