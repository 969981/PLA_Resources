/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328eb04; name: FUN_0328eb04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0328eb04(undefined8 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar2 [16];
  undefined1 auVar7 [16];
  int iVar8;
  float fVar12;
  float fVar13;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  
  puVar1 = PTR_DAT_043887f8;
  fVar12 = (float)param_2[5] * 1.0000163;
  fVar13 = (float)param_2[6] * 1.0000163;
  auVar9._0_8_ = CONCAT17((char)((uint)fVar12 >> 0x18),
                          CONCAT16((char)((uint)fVar12 >> 0x10),
                                   (uint6)((((ushort)((uint)((float)param_2[4] * 1.0000163) >> 0x10)
                                            & 0xff80) & 0x7fff) << 0x10))) & 0x7f80ffffffffffff;
  auVar9._8_2_ = 0;
  auVar9[10] = (byte)((uint)fVar13 >> 0x10) & 0x80;
  auVar9[0xb] = (byte)((uint)fVar13 >> 0x18) & 0x7f;
  auVar9._12_2_ = 0;
  auVar9[0xe] = 0x80;
  auVar9[0xf] = 0x28;
  iVar8 = NEON_fmaxnmv(auVar9,4);
  iVar3 = (int)_DAT_03889e40;
  auVar10._0_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[4] - iVar8) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x70)) + iVar3;
  iVar4 = (int)((ulong)_DAT_03889e40 >> 0x20);
  auVar10._4_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[5] - iVar8) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x74)) + iVar4;
  iVar6 = (int)_UNK_03889e48;
  auVar10._8_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[6] - iVar8) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x78)) + iVar6;
  iVar5 = (int)((ulong)_UNK_03889e48 >> 0x20);
  auVar10._12_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[7] - iVar8) + 0x4e800000)) &
       *(uint *)(PTR_DAT_043887f8 + 0x7c)) + iVar5;
  auVar14._8_8_ = _UNK_03889288;
  auVar14._0_8_ = _DAT_03889280;
  auVar11 = a64_TBL(ZEXT816(0),auVar10,auVar14);
  *param_1 = auVar11._0_8_;
  fVar12 = (float)param_2[9] * 1.0000163;
  fVar13 = (float)param_2[10] * 1.0000163;
  auVar7._0_8_ = CONCAT17((char)((uint)fVar12 >> 0x18),
                          CONCAT16((char)((uint)fVar12 >> 0x10),
                                   (uint6)((((ushort)((uint)((float)param_2[8] * 1.0000163) >> 0x10)
                                            & 0xff80) & 0x7fff) << 0x10))) & 0x7f80ffffffffffff;
  auVar7._8_2_ = 0;
  auVar7[10] = (byte)((uint)fVar13 >> 0x10) & 0x80;
  auVar7[0xb] = (byte)((uint)fVar13 >> 0x18) & 0x7f;
  auVar7._12_2_ = 0;
  auVar7[0xe] = 0x80;
  auVar7[0xf] = 0x28;
  iVar8 = NEON_fmaxnmv(auVar7,4);
  auVar11._0_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[8] - iVar8) + 0x4e800000)) &
       *(uint *)(puVar1 + 0x70)) + iVar3;
  auVar11._4_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[9] - iVar8) + 0x4e800000)) &
       *(uint *)(puVar1 + 0x74)) + iVar4;
  auVar11._8_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[10] - iVar8) + 0x4e800000)) &
       *(uint *)(puVar1 + 0x78)) + iVar6;
  auVar11._12_4_ =
       (iVar8 + 0xb1800000U ^
       (iVar8 + 0xb1800000U ^ (int)(float)((param_2[0xb] - iVar8) + 0x4e800000)) &
       *(uint *)(puVar1 + 0x7c)) + iVar5;
  auVar11 = a64_TBL(ZEXT816(0),auVar11,auVar14);
  param_1[1] = auVar11._0_8_;
  iVar3 = (int)((float)param_2[0xd] * 1.96608e+09);
  iVar4 = (int)((float)param_2[0xe] * 1.96608e+09);
  iVar6 = (int)((float)param_2[0xf] * 1.96608e+09);
  auVar2._0_8_ = CONCAT17((char)((uint)iVar3 >> 0x18),
                          CONCAT16((char)((uint)iVar3 >> 0x10),
                                   CONCAT15((char)((uint)iVar3 >> 8),
                                            CONCAT14((char)iVar3,
                                                     (int)((float)param_2[0xc] * 1.96608e+09))))) ^
                 0x8000000080000000;
  auVar2[8] = (undefined1)iVar4;
  auVar2[9] = (undefined1)((uint)iVar4 >> 8);
  auVar2[10] = (undefined1)((uint)iVar4 >> 0x10);
  auVar2[0xb] = (byte)((uint)iVar4 >> 0x18) ^ 0x80;
  auVar2[0xc] = (undefined1)iVar6;
  auVar2[0xd] = (undefined1)((uint)iVar6 >> 8);
  auVar2[0xe] = (undefined1)((uint)iVar6 >> 0x10);
  auVar2[0xf] = (byte)((uint)iVar6 >> 0x18) ^ 0x80;
  auVar11 = NEON_ext(auVar2,auVar2,8,1);
  param_1[2] = CONCAT26(auVar11._6_2_,
                        CONCAT24(auVar11._2_2_,
                                 CONCAT22((short)(auVar2._0_8_ >> 0x30),
                                          (short)(auVar2._0_8_ >> 0x10))));
  *(undefined4 *)(param_1 + 3) = param_2[1];
  *(undefined4 *)((long)param_1 + 0x1c) = *param_2;
  return;
}


