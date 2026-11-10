/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06f60; name: FUN_02e06f60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02e06f60(undefined8 *param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar11;
  undefined8 *puVar10;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  float fVar25;
  int iVar26;
  float fVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
  uVar9 = _UNK_0388a418;
  uVar8 = _DAT_0388a410;
  uVar7 = _UNK_0388a318;
  uVar6 = _DAT_0388a310;
  uVar5 = _UNK_03889ee8;
  uVar4 = _DAT_03889ee0;
  if (param_2 << 1 != 0) {
    puVar10 = param_1;
    do {
      puVar11 = puVar10 + 2;
      uVar12 = puVar10[1];
      fVar15 = (float)((ulong)*puVar10 >> 0x20);
      fVar1 = (float)((ulong)uVar12 >> 0x20);
      fVar13 = (float)uVar6 - fVar15;
      fVar14 = (float)((ulong)uVar6 >> 0x20) - fVar15;
      fVar25 = (float)uVar7 - fVar1;
      fVar16 = (float)(CONCAT17((char)((ulong)uVar12 >> 0x38),
                                CONCAT16((char)((ulong)uVar12 >> 0x30),
                                         CONCAT15((char)((ulong)uVar12 >> 0x28),
                                                  CONCAT14((char)((ulong)uVar12 >> 0x20),fVar1))))
                      >> 0x20);
      fVar27 = (float)((ulong)uVar7 >> 0x20) - fVar16;
      iVar29 = -(uint)(fVar13 < 0.0);
      iVar30 = -(uint)(fVar14 < 0.0);
      iVar31 = -(uint)(fVar25 < 0.0);
      iVar32 = -(uint)(fVar27 < 0.0);
      iVar2 = -(uint)(0.0 <= fVar13);
      iVar3 = -(uint)(0.0 <= fVar14);
      iVar26 = -(uint)(0.0 <= fVar25);
      iVar28 = -(uint)(0.0 <= fVar27);
      bVar17 = (byte)iVar29 & (byte)uVar4 | (byte)iVar2 & (byte)uVar8;
      bVar18 = (byte)((uint)iVar29 >> 8) & (byte)((ulong)uVar4 >> 8) |
               (byte)((uint)iVar2 >> 8) & (byte)((ulong)uVar8 >> 8);
      bVar19 = (byte)((uint)iVar29 >> 0x10) & (byte)((ulong)uVar4 >> 0x10) |
               (byte)((uint)iVar2 >> 0x10) & (byte)((ulong)uVar8 >> 0x10);
      bVar20 = (byte)((uint)iVar29 >> 0x18) & (byte)((ulong)uVar4 >> 0x18) |
               (byte)((uint)iVar2 >> 0x18) & (byte)((ulong)uVar8 >> 0x18);
      bVar21 = (byte)iVar30 & (byte)((ulong)uVar4 >> 0x20) |
               (byte)iVar3 & (byte)((ulong)uVar8 >> 0x20);
      bVar22 = (byte)((uint)iVar30 >> 8) & (byte)((ulong)uVar4 >> 0x28) |
               (byte)((uint)iVar3 >> 8) & (byte)((ulong)uVar8 >> 0x28);
      bVar23 = (byte)((uint)iVar30 >> 0x10) & (byte)((ulong)uVar4 >> 0x30) |
               (byte)((uint)iVar3 >> 0x10) & (byte)((ulong)uVar8 >> 0x30);
      bVar24 = (byte)((uint)iVar30 >> 0x18) & (byte)((ulong)uVar4 >> 0x38) |
               (byte)((uint)iVar3 >> 0x18) & (byte)((ulong)uVar8 >> 0x38);
      fVar25 = (float)CONCAT13((byte)((uint)iVar31 >> 0x18) & (byte)((ulong)uVar5 >> 0x18) |
                               (byte)((uint)iVar26 >> 0x18) & (byte)((ulong)uVar9 >> 0x18),
                               CONCAT12((byte)((uint)iVar31 >> 0x10) & (byte)((ulong)uVar5 >> 0x10)
                                        | (byte)((uint)iVar26 >> 0x10) &
                                          (byte)((ulong)uVar9 >> 0x10),
                                        CONCAT11((byte)((uint)iVar31 >> 8) &
                                                 (byte)((ulong)uVar5 >> 8) |
                                                 (byte)((uint)iVar26 >> 8) &
                                                 (byte)((ulong)uVar9 >> 8),
                                                 (byte)iVar31 & (byte)uVar5 |
                                                 (byte)iVar26 & (byte)uVar9)));
      fVar27 = (float)(CONCAT17((byte)((uint)iVar32 >> 0x18) & (byte)((ulong)uVar5 >> 0x38) |
                                (byte)((uint)iVar28 >> 0x18) & (byte)((ulong)uVar9 >> 0x38),
                                CONCAT16((byte)((uint)iVar32 >> 0x10) & (byte)((ulong)uVar5 >> 0x30)
                                         | (byte)((uint)iVar28 >> 0x10) &
                                           (byte)((ulong)uVar9 >> 0x30),
                                         CONCAT15((byte)((uint)iVar32 >> 8) &
                                                  (byte)((ulong)uVar5 >> 0x28) |
                                                  (byte)((uint)iVar28 >> 8) &
                                                  (byte)((ulong)uVar9 >> 0x28),
                                                  CONCAT14((byte)iVar32 &
                                                           (byte)((ulong)uVar5 >> 0x20) |
                                                           (byte)iVar28 &
                                                           (byte)((ulong)uVar9 >> 0x20),fVar25))))
                      >> 0x20);
      fVar13 = (ABS((float)CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17))) - fVar15) *
                -0.4052847 + 1.2732395) *
               ((float)CONCAT13(bVar20,CONCAT12(bVar19,CONCAT11(bVar18,bVar17))) - fVar15);
      fVar14 = (ABS((float)CONCAT13(bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar21))) - fVar15) *
                -0.4052847 + 1.2732395) *
               ((float)CONCAT13(bVar24,CONCAT12(bVar23,CONCAT11(bVar22,bVar21))) - fVar15);
      fVar15 = (ABS(fVar25 - fVar1) * -0.4052847 + 1.2732395) * (fVar25 - fVar1);
      fVar16 = (ABS(fVar27 - fVar16) * -0.4052847 + 1.2732395) * (fVar27 - fVar16);
      fVar1 = (float)*puVar10;
      puVar10[1] = CONCAT44((fVar16 + (-fVar16 + fVar16 * ABS(fVar16)) * 0.225) * (float)uVar12,
                            (fVar15 + (-fVar15 + fVar15 * ABS(fVar15)) * 0.225) * (float)uVar12);
      *puVar10 = CONCAT44((fVar14 + (-fVar14 + fVar14 * ABS(fVar14)) * 0.225) * fVar1,
                          (fVar13 + (-fVar13 + fVar13 * ABS(fVar13)) * 0.225) * fVar1);
      puVar10 = puVar11;
    } while (puVar11 < (undefined8 *)((long)param_1 + (ulong)(uint)(param_2 << 1) * 4));
  }
  return;
}


