/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4b578; name: FUN_02e4b578
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02e4b578(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
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
  int iVar22;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar28 [16];
  
  iVar22 = -(uint)(*(float *)(param_2 + 2) < (float)*param_1);
  iVar25 = -(uint)(*(float *)((long)param_2 + 0x14) < (float)((ulong)*param_1 >> 0x20));
  iVar26 = -(uint)(*(float *)(param_2 + 3) < (float)param_1[1]);
  iVar27 = -(uint)(*(float *)((long)param_2 + 0x1c) < (float)((ulong)param_1[1] >> 0x20));
  iVar2 = -(uint)((float)param_1[2] < (float)*param_2);
  iVar3 = -(uint)((float)((ulong)param_1[2] >> 0x20) < (float)((ulong)*param_2 >> 0x20));
  iVar4 = -(uint)((float)param_1[3] < (float)param_2[1]);
  iVar5 = -(uint)((float)((ulong)param_1[3] >> 0x20) < (float)((ulong)param_2[1] >> 0x20));
  auVar23[0] = (byte)iVar22 & (byte)_DAT_03889700;
  bVar7 = (byte)((ulong)_DAT_03889700 >> 8);
  auVar23[1] = (byte)((uint)iVar22 >> 8) & bVar7;
  bVar8 = (byte)((ulong)_DAT_03889700 >> 0x10);
  auVar23[2] = (byte)((uint)iVar22 >> 0x10) & bVar8;
  bVar9 = (byte)((ulong)_DAT_03889700 >> 0x18);
  auVar23[3] = (byte)((uint)iVar22 >> 0x18) & bVar9;
  bVar10 = (byte)((ulong)_DAT_03889700 >> 0x20);
  auVar23[4] = (byte)iVar25 & bVar10;
  bVar11 = (byte)((ulong)_DAT_03889700 >> 0x28);
  auVar23[5] = (byte)((uint)iVar25 >> 8) & bVar11;
  bVar12 = (byte)((ulong)_DAT_03889700 >> 0x30);
  auVar23[6] = (byte)((uint)iVar25 >> 0x10) & bVar12;
  bVar13 = (byte)((ulong)_DAT_03889700 >> 0x38);
  auVar23[7] = (byte)((uint)iVar25 >> 0x18) & bVar13;
  auVar23[8] = (byte)iVar26 & (byte)_UNK_03889708;
  bVar15 = (byte)((ulong)_UNK_03889708 >> 8);
  auVar23[9] = (byte)((uint)iVar26 >> 8) & bVar15;
  bVar16 = (byte)((ulong)_UNK_03889708 >> 0x10);
  auVar23[10] = (byte)((uint)iVar26 >> 0x10) & bVar16;
  bVar17 = (byte)((ulong)_UNK_03889708 >> 0x18);
  auVar23[0xb] = (byte)((uint)iVar26 >> 0x18) & bVar17;
  bVar18 = (byte)((ulong)_UNK_03889708 >> 0x20);
  auVar23[0xc] = (byte)iVar27 & bVar18;
  bVar19 = (byte)((ulong)_UNK_03889708 >> 0x28);
  auVar23[0xd] = (byte)((uint)iVar27 >> 8) & bVar19;
  bVar20 = (byte)((ulong)_UNK_03889708 >> 0x30);
  auVar23[0xe] = (byte)((uint)iVar27 >> 0x10) & bVar20;
  bVar21 = (byte)((ulong)_UNK_03889708 >> 0x38);
  auVar23[0xf] = (byte)((uint)iVar27 >> 0x18) & bVar21;
  auVar28 = NEON_ext(auVar23,auVar23,8,1);
  iVar22 = CONCAT13(auVar28[3] | auVar23[3],
                    CONCAT12(auVar28[2] | auVar23[2],
                             CONCAT11(auVar28[1] | auVar23[1],auVar28[0] | auVar23[0])));
  bVar6 = (byte)iVar2 & (byte)_DAT_03889700;
  bVar7 = (byte)((uint)iVar2 >> 8) & bVar7;
  bVar8 = (byte)((uint)iVar2 >> 0x10) & bVar8;
  bVar9 = (byte)((uint)iVar2 >> 0x18) & bVar9;
  bVar10 = (byte)iVar3 & bVar10;
  bVar11 = (byte)((uint)iVar3 >> 8) & bVar11;
  bVar12 = (byte)((uint)iVar3 >> 0x10) & bVar12;
  bVar13 = (byte)((uint)iVar3 >> 0x18) & bVar13;
  bVar14 = (byte)iVar4 & (byte)_UNK_03889708;
  bVar15 = (byte)((uint)iVar4 >> 8) & bVar15;
  bVar16 = (byte)((uint)iVar4 >> 0x10) & bVar16;
  bVar17 = (byte)((uint)iVar4 >> 0x18) & bVar17;
  bVar18 = (byte)iVar5 & bVar18;
  bVar19 = (byte)((uint)iVar5 >> 8) & bVar19;
  bVar20 = (byte)((uint)iVar5 >> 0x10) & bVar20;
  bVar21 = (byte)((uint)iVar5 >> 0x18) & bVar21;
  auVar24[1] = bVar7;
  auVar24[0] = bVar6;
  auVar24[2] = bVar8;
  auVar24[3] = bVar9;
  auVar24[4] = bVar10;
  auVar24[5] = bVar11;
  auVar24[6] = bVar12;
  auVar24[7] = bVar13;
  auVar24[8] = bVar14;
  auVar24[9] = bVar15;
  auVar24[10] = bVar16;
  auVar24[0xb] = bVar17;
  auVar24[0xc] = bVar18;
  auVar24[0xd] = bVar19;
  auVar24[0xe] = bVar20;
  auVar24[0xf] = bVar21;
  auVar1[1] = bVar7;
  auVar1[0] = bVar6;
  auVar1[2] = bVar8;
  auVar1[3] = bVar9;
  auVar1[4] = bVar10;
  auVar1[5] = bVar11;
  auVar1[6] = bVar12;
  auVar1[7] = bVar13;
  auVar1[8] = bVar14;
  auVar1[9] = bVar15;
  auVar1[10] = bVar16;
  auVar1[0xb] = bVar17;
  auVar1[0xc] = bVar18;
  auVar1[0xd] = bVar19;
  auVar1[0xe] = bVar20;
  auVar1[0xf] = bVar21;
  auVar24 = NEON_ext(auVar24,auVar1,8,1);
  DAT_04409ad8 = 0x7f7fffff;
  return ((iVar22 == 0 &&
          (int)(CONCAT17(auVar28[7] | auVar23[7],
                         CONCAT16(auVar28[6] | auVar23[6],
                                  CONCAT15(auVar28[5] | auVar23[5],
                                           CONCAT14(auVar28[4] | auVar23[4],iVar22)))) >> 0x20) == 0
          ) && CONCAT13(auVar24[7] | bVar13,
                        CONCAT12(auVar24[6] | bVar12,
                                 CONCAT11(auVar24[5] | bVar11,auVar24[4] | bVar10))) == 0) &&
         CONCAT13(auVar24[3] | bVar9,
                  CONCAT12(auVar24[2] | bVar8,CONCAT11(auVar24[1] | bVar7,auVar24[0] | bVar6))) == 0
  ;
}


