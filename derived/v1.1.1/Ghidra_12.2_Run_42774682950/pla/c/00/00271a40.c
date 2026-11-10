/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00271a40; name: FUN_00271a40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00271a40(float param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  fVar1 = (float)*param_3;
  fVar15 = (float)_DAT_0388a3b0;
  fVar16 = (float)((ulong)_DAT_0388a3b0 >> 0x20);
  fVar17 = (float)_UNK_0388a3b8;
  fVar18 = (float)((ulong)_UNK_0388a3b8 >> 0x20);
  fVar4 = (float)*param_5;
  fVar19 = (float)_DAT_0388a230;
  fVar20 = (float)((ulong)_DAT_0388a230 >> 0x20);
  fVar21 = (float)_UNK_0388a238;
  fVar22 = (float)((ulong)_UNK_0388a238 >> 0x20);
  fVar2 = (float)((ulong)*param_3 >> 0x20);
  fVar6 = (float)((ulong)*param_5 >> 0x20);
  fVar3 = (float)param_3[1];
  fVar7 = (float)param_5[1];
  fVar5 = param_1 * param_1;
  fVar8 = (float)*param_4;
  fVar23 = (float)ram0x03889120;
  fVar24 = (float)((ulong)ram0x03889120 >> 0x20);
  fVar25 = (float)_UNK_03889128;
  fVar26 = (float)((ulong)_UNK_03889128 >> 0x20);
  fVar12 = (float)*param_6;
  fVar27 = (float)_DAT_03889d50;
  fVar28 = (float)((ulong)_DAT_03889d50 >> 0x20);
  fVar29 = (float)_UNK_03889d58;
  fVar30 = (float)((ulong)_UNK_03889d58 >> 0x20);
  fVar10 = (float)((ulong)*param_4 >> 0x20);
  fVar11 = (float)param_4[1];
  fVar9 = fVar5 * param_1;
  fVar13 = (float)((ulong)*param_6 >> 0x20);
  fVar14 = (float)param_6[1];
  param_2[1] = (ulong)(uint)(fVar18 * fVar3 + fVar22 * fVar7 + fVar26 * fVar11 + fVar30 * fVar14 +
                            param_1 * (fVar17 * fVar3 + fVar21 * fVar7 + fVar25 * fVar11 +
                                      fVar29 * fVar14) +
                            fVar9 * (fVar15 * fVar3 + fVar19 * fVar7 + fVar23 * fVar11 +
                                    fVar27 * fVar14) +
                            fVar5 * (fVar16 * fVar3 + fVar20 * fVar7 + fVar24 * fVar11 +
                                    fVar28 * fVar14));
  *param_2 = CONCAT44(fVar18 * fVar2 + fVar22 * fVar6 + fVar26 * fVar10 + fVar30 * fVar13 +
                      param_1 * (fVar17 * fVar2 + fVar21 * fVar6 + fVar25 * fVar10 + fVar29 * fVar13
                                ) +
                      fVar9 * (fVar15 * fVar2 + fVar19 * fVar6 + fVar23 * fVar10 + fVar27 * fVar13)
                      + fVar5 * (fVar16 * fVar2 + fVar20 * fVar6 + fVar24 * fVar10 + fVar28 * fVar13
                                ),
                      fVar18 * fVar1 + fVar22 * fVar4 + fVar26 * fVar8 + fVar30 * fVar12 +
                      param_1 * (fVar17 * fVar1 + fVar21 * fVar4 + fVar25 * fVar8 + fVar29 * fVar12)
                      + fVar9 * (fVar15 * fVar1 + fVar19 * fVar4 + fVar23 * fVar8 + fVar27 * fVar12)
                        + fVar5 * (fVar16 * fVar1 + fVar20 * fVar4 + fVar24 * fVar8 +
                                  fVar28 * fVar12));
  return;
}


