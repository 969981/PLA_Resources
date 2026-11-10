/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030162dc; name: FUN_030162dc
 */


void FUN_030162dc(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  float fVar13;
  float fVar16;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  
  FUN_032c9fc0(local_50,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = (undefined1)((ulong)uVar3 >> 0x10);
  uVar8 = (undefined1)((ulong)uVar3 >> 0x18);
  uVar9 = (undefined1)((ulong)uVar3 >> 0x20);
  uVar10 = (undefined1)((ulong)uVar3 >> 0x28);
  uVar11 = (undefined1)((ulong)uVar3 >> 0x30);
  uVar12 = (undefined1)((ulong)uVar3 >> 0x38);
  uVar6 = (ushort)uVar3;
  auVar14[6] = uVar7;
  auVar14._0_6_ = (uint6)uVar6 << 0x10;
  auVar14[7] = uVar8;
  auVar14._8_2_ = 0;
  auVar14[10] = uVar9;
  auVar14[0xb] = uVar10;
  auVar14._12_2_ = 0;
  auVar14[0xe] = uVar11;
  auVar14[0xf] = uVar12;
  auVar14 = NEON_frecpe(auVar14,4);
  auVar18[6] = uVar7;
  auVar18._0_6_ = (uint6)uVar6 << 0x10;
  auVar18[7] = uVar8;
  auVar18._8_2_ = 0;
  auVar18[10] = uVar9;
  auVar18[0xb] = uVar10;
  auVar18._12_2_ = 0;
  auVar18[0xe] = uVar11;
  auVar18[0xf] = uVar12;
  auVar18 = NEON_frecps(auVar18,auVar14,4);
  auVar15._0_4_ = auVar14._0_4_ * auVar18._0_4_;
  auVar15._4_4_ = auVar14._4_4_ * auVar18._4_4_;
  auVar15._8_4_ = auVar14._8_4_ * auVar18._8_4_;
  auVar15._12_4_ = auVar14._12_4_ * auVar18._12_4_;
  auVar1[6] = uVar7;
  auVar1._0_6_ = (uint6)uVar6 << 0x10;
  auVar1[7] = uVar8;
  auVar1._8_2_ = 0;
  auVar1[10] = uVar9;
  auVar1[0xb] = uVar10;
  auVar1._12_2_ = 0;
  auVar1[0xe] = uVar11;
  auVar1[0xf] = uVar12;
  auVar14 = NEON_frecps(auVar1,auVar15,4);
  iVar2 = -(uint)((float)((uint)uVar6 << 0x10) == 0.0);
  iVar4 = -(uint)((float)((uint)(ushort)((ulong)uVar3 >> 0x10) << 0x10) == 0.0);
  iVar5 = -(uint)((float)((uint)(ushort)((ulong)uVar3 >> 0x20) << 0x10) == 0.0);
  fVar13 = auVar15._0_4_ * auVar14._0_4_;
  fVar16 = auVar15._4_4_ * auVar14._4_4_;
  fVar17 = auVar15._8_4_ * auVar14._8_4_;
  fStack_74 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar2 >> 0x18),
                              CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar2 >> 0x10),
                                       CONCAT11((byte)((uint)fVar13 >> 8) &
                                                ~(byte)((uint)iVar2 >> 8),
                                                SUB41(fVar13,0) & ~(byte)iVar2)));
  local_80 = local_50._0_4_ * fStack_74;
  fStack_7c = local_50._4_4_ * fStack_74;
  fStack_78 = local_50._8_4_ * fStack_74;
  fStack_74 = local_50._12_4_ * fStack_74;
  fVar13 = (float)CONCAT13((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                           CONCAT12((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                    CONCAT11((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                             SUB41(fVar16,0) & ~(byte)iVar4)));
  auVar19._0_8_ = CONCAT44(fStack_3c * fVar13,local_40 * fVar13);
  auVar19._8_4_ = fStack_38 * fVar13;
  auVar19._12_4_ = fStack_34 * fVar13;
  uStack_68 = auVar19._8_8_;
  fVar13 = (float)CONCAT13((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar17,0) & ~(byte)iVar5)));
  fVar16 = local_30._4_4_ * fVar13;
  fVar17 = local_30._12_4_ * fVar13;
  uStack_58 = CONCAT17((char)((uint)fVar17 >> 0x18),
                       CONCAT16((char)((uint)fVar17 >> 0x10),
                                CONCAT15((char)((uint)fVar17 >> 8),
                                         CONCAT14(SUB41(fVar17,0),local_30._8_4_ * fVar13))));
  local_60 = CONCAT17((char)((uint)fVar16 >> 0x18),
                      CONCAT16((char)((uint)fVar16 >> 0x10),
                               CONCAT15((char)((uint)fVar16 >> 8),
                                        CONCAT14(SUB41(fVar16,0),local_30._0_4_ * fVar13))));
  uStack_70 = auVar19._0_8_;
  FUN_032c9298(param_2,&local_80,local_50);
  return;
}


