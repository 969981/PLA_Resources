/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0325ba4c; name: FUN_0325ba4c
 */


undefined8 FUN_0325ba4c(long param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  float fVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  
  fVar11 = (float)*param_2;
  iVar2 = -(uint)(fVar11 <= (float)*(undefined8 *)(param_1 + 0x80));
  fVar12 = (float)((ulong)*param_2 >> 0x20);
  iVar4 = -(uint)(fVar12 <= (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20));
  fVar13 = (float)param_2[1];
  iVar6 = -(uint)(fVar13 <= (float)*(undefined8 *)(param_1 + 0x88));
  iVar14 = -(uint)((float)*(undefined8 *)(param_1 + 0x70) <= fVar11);
  iVar16 = -(uint)((float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20) <= fVar12);
  iVar17 = -(uint)((float)*(undefined8 *)(param_1 + 0x78) <= fVar13);
  uVar15 = CONCAT13((byte)((uint)iVar2 >> 0x18) & (byte)((uint)iVar14 >> 0x18),
                    CONCAT12((byte)((uint)iVar2 >> 0x10) & (byte)((uint)iVar14 >> 0x10),
                             CONCAT11((byte)((uint)iVar2 >> 8) & (byte)((uint)iVar14 >> 8),
                                      (byte)iVar2 & (byte)iVar14)));
  if ((uVar15 & (uint)(CONCAT17((byte)((uint)iVar4 >> 0x18) & (byte)((uint)iVar16 >> 0x18),
                                CONCAT16((byte)((uint)iVar4 >> 0x10) & (byte)((uint)iVar16 >> 0x10),
                                         CONCAT15((byte)((uint)iVar4 >> 8) &
                                                  (byte)((uint)iVar16 >> 8),
                                                  CONCAT14((byte)iVar4 & (byte)iVar16,uVar15)))) >>
                      0x20) &
      CONCAT13((byte)((uint)iVar6 >> 0x18) & (byte)((uint)iVar17 >> 0x18),
               CONCAT12((byte)((uint)iVar6 >> 0x10) & (byte)((uint)iVar17 >> 0x10),
                        CONCAT11((byte)((uint)iVar6 >> 8) & (byte)((uint)iVar17 >> 8),
                                 (byte)iVar6 & (byte)iVar17)))) == 0) {
    return 0;
  }
  lVar9 = (long)*(int *)(param_1 + 0x20);
  if (0 < *(int *)(param_1 + 0x20)) {
    puVar10 = *(undefined8 **)(param_1 + 0x18);
    do {
      fVar3 = fVar11 * (float)*puVar10;
      fVar5 = fVar12 * (float)((ulong)*puVar10 >> 0x20);
      uVar19 = (undefined1)((uint)fVar5 >> 8);
      uVar20 = (undefined1)((uint)fVar5 >> 0x10);
      uVar21 = (undefined1)((uint)fVar5 >> 0x18);
      fVar7 = fVar13 * (float)puVar10[1];
      uVar22 = (undefined1)((uint)fVar7 >> 8);
      uVar23 = (undefined1)((uint)fVar7 >> 0x10);
      uVar24 = (undefined1)((uint)fVar7 >> 0x18);
      fVar18 = (float)((ulong)puVar10[1] >> 0x20);
      fVar8 = (float)((ulong)param_2[1] >> 0x20) * fVar18;
      uVar25 = (undefined1)((uint)fVar8 >> 8);
      uVar26 = (undefined1)((uint)fVar8 >> 0x10);
      uVar27 = (undefined1)((uint)fVar8 >> 0x18);
      auVar28[4] = SUB41(fVar5,0);
      auVar28._0_4_ = fVar3;
      auVar28[5] = uVar19;
      auVar28[6] = uVar20;
      auVar28[7] = uVar21;
      auVar28[8] = SUB41(fVar7,0);
      auVar28[9] = uVar22;
      auVar28[10] = uVar23;
      auVar28[0xb] = uVar24;
      auVar28[0xc] = SUB41(fVar8,0);
      auVar28[0xd] = uVar25;
      auVar28[0xe] = uVar26;
      auVar28[0xf] = uVar27;
      auVar1[4] = SUB41(fVar5,0);
      auVar1._0_4_ = fVar3;
      auVar1[5] = uVar19;
      auVar1[6] = uVar20;
      auVar1[7] = uVar21;
      auVar1[8] = SUB41(fVar7,0);
      auVar1[9] = uVar22;
      auVar1[10] = uVar23;
      auVar1[0xb] = uVar24;
      auVar1[0xc] = SUB41(fVar8,0);
      auVar1[0xd] = uVar25;
      auVar1[0xe] = uVar26;
      auVar1[0xf] = uVar27;
      auVar28 = NEON_ext(auVar28,auVar1,8,1);
      if (0.0 < fVar3 + fVar5 + auVar28._0_4_ + fVar18) {
        return 0;
      }
      lVar9 = lVar9 + -1;
      puVar10 = puVar10 + 2;
    } while (lVar9 != 0);
  }
  return 1;
}


