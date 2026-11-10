/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b74a84; name: FUN_01b74a84
 */


void FUN_01b74a84(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  undefined2 uVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
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
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  fVar11 = (float)uVar12 - (float)*(undefined8 *)(param_2 + 0x30);
  fVar13 = (float)((ulong)uVar12 >> 0x20) - (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20);
  fVar14 = (float)*(undefined8 *)(param_2 + 0x18) - (float)*(undefined8 *)(param_2 + 0x38);
  fVar15 = (float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) -
           (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20);
  fVar10 = fVar11 * fVar11;
  fVar4 = fVar13 * fVar13;
  uVar16 = (undefined1)((uint)fVar4 >> 8);
  uVar17 = (undefined1)((uint)fVar4 >> 0x10);
  uVar18 = (undefined1)((uint)fVar4 >> 0x18);
  fVar9 = fVar14 * fVar14;
  uVar19 = (undefined1)((uint)fVar9 >> 8);
  uVar20 = (undefined1)((uint)fVar9 >> 0x10);
  uVar21 = (undefined1)((uint)fVar9 >> 0x18);
  fVar7 = fVar15 * fVar15;
  uVar22 = (undefined1)((uint)fVar7 >> 8);
  uVar23 = (undefined1)((uint)fVar7 >> 0x10);
  uVar24 = (undefined1)((uint)fVar7 >> 0x18);
  auVar25[4] = SUB41(fVar4,0);
  auVar25._0_4_ = fVar10;
  auVar25[5] = uVar16;
  auVar25[6] = uVar17;
  auVar25[7] = uVar18;
  auVar25[8] = SUB41(fVar9,0);
  auVar25[9] = uVar19;
  auVar25[10] = uVar20;
  auVar25[0xb] = uVar21;
  auVar25[0xc] = SUB41(fVar7,0);
  auVar25[0xd] = uVar22;
  auVar25[0xe] = uVar23;
  auVar25[0xf] = uVar24;
  auVar28[4] = SUB41(fVar4,0);
  auVar28._0_4_ = fVar10;
  auVar28[5] = uVar16;
  auVar28[6] = uVar17;
  auVar28[7] = uVar18;
  auVar28[8] = SUB41(fVar9,0);
  auVar28[9] = uVar19;
  auVar28[10] = uVar20;
  auVar28[0xb] = uVar21;
  auVar28[0xc] = SUB41(fVar7,0);
  auVar28[0xd] = uVar22;
  auVar28[0xe] = uVar23;
  auVar28[0xf] = uVar24;
  auVar25 = NEON_ext(auVar25,auVar28,8,1);
  fVar10 = auVar25._0_4_ + fVar10;
  fVar4 = auVar25._4_4_ + fVar4;
  fVar9 = fVar10 + fVar4;
  fVar10 = fVar10 + fVar4;
  uVar16 = SUB41(fVar10,0);
  uVar17 = (undefined1)((uint)fVar10 >> 8);
  uVar18 = (undefined1)((uint)fVar10 >> 0x10);
  uVar19 = (undefined1)((uint)fVar10 >> 0x18);
  auVar1[4] = uVar16;
  auVar1._0_4_ = fVar9;
  auVar1[5] = uVar17;
  auVar1[6] = uVar18;
  auVar1[7] = uVar19;
  auVar1[8] = SUB41(fVar9,0);
  auVar1[9] = (char)((uint)fVar9 >> 8);
  auVar1[10] = (char)((uint)fVar9 >> 0x10);
  auVar1[0xb] = (char)((uint)fVar9 >> 0x18);
  auVar1[0xc] = uVar16;
  auVar1[0xd] = uVar17;
  auVar1[0xe] = uVar18;
  auVar1[0xf] = uVar19;
  auVar25 = NEON_frsqrte(auVar1,4);
  auVar27._0_4_ = auVar25._0_4_ * fVar9;
  auVar27._4_4_ = auVar25._4_4_ * fVar10;
  auVar27._8_4_ = auVar25._8_4_ * fVar9;
  uVar2 = (undefined2)(CONCAT15(uVar17,CONCAT14(uVar16,fVar9)) >> 0x20);
  auVar27._12_4_ = auVar25._12_4_ * (float)CONCAT13(uVar19,CONCAT12(uVar18,uVar2));
  auVar28 = NEON_frsqrts(auVar25,auVar27,4);
  auVar26._0_4_ = auVar25._0_4_ * auVar28._0_4_;
  auVar26._4_4_ = auVar25._4_4_ * auVar28._4_4_;
  auVar26._8_4_ = auVar25._8_4_ * auVar28._8_4_;
  auVar26._12_4_ = auVar25._12_4_ * auVar28._12_4_;
  auVar29._0_4_ = fVar9 * auVar26._0_4_;
  auVar29._4_4_ = fVar10 * auVar26._4_4_;
  auVar29._8_4_ = fVar9 * auVar26._8_4_;
  auVar29._12_4_ = (float)CONCAT13(uVar19,CONCAT12(uVar18,uVar2)) * auVar26._12_4_;
  iVar3 = -(uint)(fVar9 == 0.0);
  iVar5 = -(uint)(fVar10 == 0.0);
  iVar6 = -(uint)(fVar9 == 0.0);
  iVar8 = -(uint)((float)CONCAT13(uVar19,CONCAT12(uVar18,uVar2)) == 0.0);
  auVar25 = NEON_frsqrts(auVar26,auVar29,4);
  fVar11 = fVar11 * auVar26._0_4_ * auVar25._0_4_;
  fVar13 = fVar13 * auVar26._4_4_ * auVar25._4_4_;
  fVar14 = fVar14 * auVar26._8_4_ * auVar25._8_4_;
  fVar15 = fVar15 * auVar26._12_4_ * auVar25._12_4_;
  local_20 = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                      CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                               CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                        CONCAT14(SUB41(fVar13,0) & ~(byte)iVar5,
                                                 CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                          ~(byte)((uint)iVar3 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                                                   ~(byte)((uint)iVar3 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar11 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar3 >> 8),SUB41(fVar11,0) & ~(byte)iVar3)))))));
  uStack_18 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18),
                       CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar8 >> 0x10),
                                CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar8 >> 8),
                                         CONCAT14(SUB41(fVar15,0) & ~(byte)iVar8,
                                                  CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                           ~(byte)((uint)iVar6 >> 0x18),
                                                           CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                                    ~(byte)((uint)iVar6 >> 0x10),
                                                                    CONCAT11((byte)((uint)fVar14 >>
                                                                                   8) &
                                                                             ~(byte)((uint)iVar6 >>
                                                                                    8),
                                                                             SUB41(fVar14,0) &
                                                                             ~(byte)iVar6)))))));
  FUN_01b74af4(param_1,(undefined8 *)(param_2 + 0x10),&local_20);
  return;
}


