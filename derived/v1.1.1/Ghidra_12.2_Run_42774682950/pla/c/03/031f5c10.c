/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f5c10; name: FUN_031f5c10
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031f5c10(unkbyte9 *param_1,undefined1 (*param_2) [12],undefined8 *param_3)

{
  long lVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  float local_10 [4];
  
  uVar7 = *(undefined8 *)((long)param_1 + 8);
  uVar11 = *(undefined8 *)((long)param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 1);
  fVar25 = (float)((ulong)*(undefined8 *)(*param_2 + 8) >> 0x20);
  fVar26 = (float)((ulong)*(undefined8 *)param_2[2] >> 0x20);
  uVar15 = *(undefined8 *)*(undefined1 (*) [12])(param_2[1] + 4);
  auVar27[9] = (char)((ulong)uVar11 >> 8);
  auVar27._0_9_ = param_1[1];
  auVar27[10] = (char)((ulong)uVar11 >> 0x10);
  auVar27[0xb] = (char)((ulong)uVar11 >> 0x18);
  auVar27[0xc] = (char)((ulong)uVar11 >> 0x20);
  auVar27[0xd] = (char)((ulong)uVar11 >> 0x28);
  auVar27[0xe] = (char)((ulong)uVar11 >> 0x30);
  auVar27[0xf] = (char)((ulong)uVar11 >> 0x38);
  auVar14._12_4_ = fVar26;
  auVar14._0_12_ = *(undefined1 (*) [12])(param_2[1] + 4);
  auVar27 = NEON_fmin(auVar27,auVar14,4);
  auVar20[9] = (char)((ulong)uVar7 >> 8);
  auVar20._0_9_ = *param_1;
  auVar20[10] = (char)((ulong)uVar7 >> 0x10);
  auVar20[0xb] = (char)((ulong)uVar7 >> 0x18);
  auVar20[0xc] = (char)((ulong)uVar7 >> 0x20);
  auVar20[0xd] = (char)((ulong)uVar7 >> 0x28);
  auVar20[0xe] = (char)((ulong)uVar7 >> 0x30);
  auVar20[0xf] = (char)((ulong)uVar7 >> 0x38);
  auVar13._12_4_ = fVar25;
  auVar13._0_12_ = *param_2;
  auVar20 = NEON_fmax(auVar20,auVar13,4);
  local_10[2] = auVar27._8_4_ - auVar20._8_4_;
  local_10[3] = auVar27._12_4_ - auVar20._12_4_;
  local_10[0] = auVar27._0_4_ - auVar20._0_4_;
  local_10[1] = auVar27._4_4_ - auVar20._4_4_;
  iVar4 = -(uint)((float)*(undefined8 *)param_1 == (float)uVar15);
  iVar5 = -(uint)((float)((ulong)*(undefined8 *)param_1 >> 0x20) == (float)((ulong)uVar15 >> 0x20));
  iVar6 = -(uint)((float)uVar7 == (float)*(undefined8 *)param_2[2]);
  iVar16 = -(uint)((float)((ulong)uVar7 >> 0x20) == fVar26);
  iVar17 = -(uint)((float)uVar8 == (float)*(undefined8 *)*param_2);
  iVar9 = -(uint)((float)((ulong)uVar8 >> 0x20) == (float)((ulong)*(undefined8 *)*param_2 >> 0x20));
  iVar10 = -(uint)((float)uVar11 == (float)*(undefined8 *)(*param_2 + 8));
  iVar12 = -(uint)((float)((ulong)uVar11 >> 0x20) == fVar25);
  cVar3 = (&DAT_03aadfc0)
          [(uint)(CONCAT13(((byte)((uint)iVar4 >> 0x18) | (byte)((uint)iVar17 >> 0x18)) &
                           (byte)((ulong)_DAT_03889700 >> 0x18),
                           CONCAT12(((byte)((uint)iVar4 >> 0x10) | (byte)((uint)iVar17 >> 0x10)) &
                                    (byte)((ulong)_DAT_03889700 >> 0x10),
                                    CONCAT11(((byte)((uint)iVar4 >> 8) | (byte)((uint)iVar17 >> 8))
                                             & (byte)((ulong)_DAT_03889700 >> 8),
                                             ((byte)iVar4 | (byte)iVar17) & (byte)_DAT_03889700))) +
                  CONCAT13(((byte)((uint)iVar5 >> 0x18) | (byte)((uint)iVar9 >> 0x18)) &
                           (byte)((ulong)_DAT_03889700 >> 0x38),
                           CONCAT12(((byte)((uint)iVar5 >> 0x10) | (byte)((uint)iVar9 >> 0x10)) &
                                    (byte)((ulong)_DAT_03889700 >> 0x30),
                                    CONCAT11(((byte)((uint)iVar5 >> 8) | (byte)((uint)iVar9 >> 8)) &
                                             (byte)((ulong)_DAT_03889700 >> 0x28),
                                             ((byte)iVar5 | (byte)iVar9) &
                                             (byte)((ulong)_DAT_03889700 >> 0x20)))) +
                 CONCAT13(((byte)((uint)iVar6 >> 0x18) | (byte)((uint)iVar10 >> 0x18)) &
                          (byte)((ulong)_UNK_03889708 >> 0x18),
                          CONCAT12(((byte)((uint)iVar6 >> 0x10) | (byte)((uint)iVar10 >> 0x10)) &
                                   (byte)((ulong)_UNK_03889708 >> 0x10),
                                   CONCAT11(((byte)((uint)iVar6 >> 8) | (byte)((uint)iVar10 >> 8)) &
                                            (byte)((ulong)_UNK_03889708 >> 8),
                                            ((byte)iVar6 | (byte)iVar10) & (byte)_UNK_03889708))) +
                 CONCAT13(((byte)((uint)iVar16 >> 0x18) | (byte)((uint)iVar12 >> 0x18)) &
                          (byte)((ulong)_UNK_03889708 >> 0x38),
                          CONCAT12(((byte)((uint)iVar16 >> 0x10) | (byte)((uint)iVar12 >> 0x10)) &
                                   (byte)((ulong)_UNK_03889708 >> 0x30),
                                   CONCAT11(((byte)((uint)iVar16 >> 8) | (byte)((uint)iVar12 >> 8))
                                            & (byte)((ulong)_UNK_03889708 >> 0x28),
                                            ((byte)iVar16 | (byte)iVar12) &
                                            (byte)((ulong)_UNK_03889708 >> 0x20)))))];
  iVar16 = (int)cVar3;
  if ((iVar4 == 0 && iVar5 == 0) && iVar6 == 0) {
    uVar19 = (iVar16 + 2) % 3;
    if (2 < uVar19) {
      uVar19 = 3;
    }
    fVar25 = local_10[uVar19];
    uVar21 = SUB41(fVar25,0);
    uVar22 = (undefined1)((uint)fVar25 >> 8);
    uVar23 = (undefined1)((uint)fVar25 >> 0x10);
    uVar24 = (undefined1)((uint)fVar25 >> 0x18);
    iVar17 = iVar16 + 1;
  }
  else {
    uVar19 = (cVar3 + 1) % 3;
    if (2 < uVar19) {
      uVar19 = 3;
    }
    fVar25 = local_10[uVar19];
    uVar21 = SUB41(fVar25,0);
    uVar22 = (undefined1)((uint)fVar25 >> 8);
    uVar23 = (undefined1)((uint)fVar25 >> 0x10);
    uVar24 = (undefined1)((uint)fVar25 >> 0x18);
    iVar17 = cVar3 + 2;
  }
  iVar17 = iVar17 % 3;
  if (iVar17 == 0) {
    lVar18 = 0;
  }
  else {
    lVar1 = 2;
    if (iVar17 != 2) {
      lVar1 = 3;
    }
    lVar18 = 1;
    if (iVar17 != 1) {
      lVar18 = lVar1;
    }
  }
  uVar2 = *(undefined4 *)((ulong)local_10 | lVar18 << 2);
  param_3[1] = auVar20._8_8_;
  *param_3 = auVar20._0_8_;
  *(byte *)(param_3 + 3) = ((iVar4 == 0 && iVar5 == 0) && iVar6 == 0) | (byte)(iVar16 << 1);
  *(uint *)(param_3 + 2) = CONCAT13(uVar24,CONCAT12(uVar23,CONCAT11(uVar22,uVar21)));
  *(undefined4 *)((long)param_3 + 0x14) = uVar2;
  return;
}


