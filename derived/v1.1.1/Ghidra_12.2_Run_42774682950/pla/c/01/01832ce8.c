/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832ce8; name: FUN_01832ce8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_01832ce8(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar5 [16];
  undefined8 uVar9;
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
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 *local_40;
  undefined *puStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_40 = &DAT_6723799257d05608;
  puStack_38 = &DAT_03a82288;
  local_30 = 0x1f;
  lVar1 = FUN_02b11e64(DAT_043ef5a8,&local_40);
  if (lVar1 == 0) {
    uVar4 = 0;
    uVar9 = 0;
  }
  else {
    fVar2 = (float)*(undefined8 *)(lVar1 + 0x50);
    fVar21 = (float)*(undefined8 *)(lVar1 + 0x90);
    fVar22 = (float)((ulong)*(undefined8 *)(lVar1 + 0x90) >> 0x20);
    fVar23 = (float)*(undefined8 *)(lVar1 + 0x98);
    fVar24 = (float)((ulong)*(undefined8 *)(lVar1 + 0x98) >> 0x20);
    fVar3 = (float)((ulong)*(undefined8 *)(lVar1 + 0x50) >> 0x20);
    fVar25 = (float)*(undefined8 *)(lVar1 + 0xa0);
    fVar26 = (float)((ulong)*(undefined8 *)(lVar1 + 0xa0) >> 0x20);
    fVar27 = (float)*(undefined8 *)(lVar1 + 0xa8);
    fVar28 = (float)((ulong)*(undefined8 *)(lVar1 + 0xa8) >> 0x20);
    fVar6 = (float)*(undefined8 *)(lVar1 + 0x58);
    fVar33 = (float)*(undefined8 *)(lVar1 + 0xb0);
    fVar34 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb0) >> 0x20);
    fVar35 = (float)*(undefined8 *)(lVar1 + 0xb8);
    fVar36 = (float)((ulong)*(undefined8 *)(lVar1 + 0xb8) >> 0x20);
    fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0x58) >> 0x20);
    fVar37 = (float)*(undefined8 *)(lVar1 + 0xc0);
    fVar38 = (float)((ulong)*(undefined8 *)(lVar1 + 0xc0) >> 0x20);
    fVar39 = (float)*(undefined8 *)(lVar1 + 200);
    fVar40 = (float)((ulong)*(undefined8 *)(lVar1 + 200) >> 0x20);
    fVar29 = fVar21 * fVar2 + fVar25 * fVar3 + fVar33 * fVar6 + fVar37 * fVar7;
    fVar30 = fVar22 * fVar2 + fVar26 * fVar3 + fVar34 * fVar6 + fVar38 * fVar7;
    fVar31 = fVar23 * fVar2 + fVar27 * fVar3 + fVar35 * fVar6 + fVar39 * fVar7;
    fVar32 = fVar24 * fVar2 + fVar28 * fVar3 + fVar36 * fVar6 + fVar40 * fVar7;
    fVar3 = (float)*(undefined8 *)(lVar1 + 0x60);
    fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0x60) >> 0x20);
    fVar10 = (float)*(undefined8 *)(lVar1 + 0x68);
    fVar11 = (float)((ulong)*(undefined8 *)(lVar1 + 0x68) >> 0x20);
    fVar2 = fVar21 * fVar3 + fVar25 * fVar7 + fVar33 * fVar10 + fVar37 * fVar11;
    fVar6 = fVar22 * fVar3 + fVar26 * fVar7 + fVar34 * fVar10 + fVar38 * fVar11;
    fVar8 = fVar23 * fVar3 + fVar27 * fVar7 + fVar35 * fVar10 + fVar39 * fVar11;
    fVar10 = fVar24 * fVar3 + fVar28 * fVar7 + fVar36 * fVar10 + fVar40 * fVar11;
    fVar3 = (float)*(undefined8 *)(lVar1 + 0x70);
    fVar7 = (float)((ulong)*(undefined8 *)(lVar1 + 0x70) >> 0x20);
    fVar17 = (float)*(undefined8 *)(lVar1 + 0x80);
    fVar18 = (float)((ulong)*(undefined8 *)(lVar1 + 0x80) >> 0x20);
    fVar11 = (float)*(undefined8 *)(lVar1 + 0x78);
    fVar13 = (float)((ulong)*(undefined8 *)(lVar1 + 0x78) >> 0x20);
    fVar12 = fVar21 * fVar3 + fVar25 * fVar7 + fVar33 * fVar11 + fVar37 * fVar13;
    fVar14 = fVar22 * fVar3 + fVar26 * fVar7 + fVar34 * fVar11 + fVar38 * fVar13;
    fVar15 = fVar23 * fVar3 + fVar27 * fVar7 + fVar35 * fVar11 + fVar39 * fVar13;
    fVar16 = fVar24 * fVar3 + fVar28 * fVar7 + fVar36 * fVar11 + fVar40 * fVar13;
    fVar3 = (float)_DAT_03889830;
    fVar7 = (float)((ulong)_DAT_03889830 >> 0x20);
    fVar19 = (float)_UNK_03889838;
    fVar11 = (float)((ulong)_UNK_03889838 >> 0x20);
    fVar13 = (float)*(undefined8 *)(lVar1 + 0x88);
    fVar20 = (float)((ulong)*(undefined8 *)(lVar1 + 0x88) >> 0x20);
    fVar21 = fVar21 * fVar17 + fVar25 * fVar18 + fVar33 * fVar13 + fVar37 * fVar20;
    fVar22 = fVar22 * fVar17 + fVar26 * fVar18 + fVar34 * fVar13 + fVar38 * fVar20;
    fVar23 = fVar23 * fVar17 + fVar27 * fVar18 + fVar35 * fVar13 + fVar39 * fVar20;
    fVar24 = fVar24 * fVar17 + fVar28 * fVar18 + fVar36 * fVar13 + fVar40 * fVar20;
    fVar25 = (float)_DAT_03889c90;
    fVar26 = (float)((ulong)_DAT_03889c90 >> 0x20);
    fVar27 = (float)_UNK_03889c98;
    fVar13 = (float)((ulong)_UNK_03889c98 >> 0x20);
    fVar28 = (float)_DAT_03888d10;
    fVar33 = (float)((ulong)_DAT_03888d10 >> 0x20);
    fVar34 = (float)_UNK_03888d18;
    fVar35 = (float)((ulong)_UNK_03888d18 >> 0x20);
    fVar36 = (float)_DAT_0388a040;
    fVar37 = (float)((ulong)_DAT_0388a040 >> 0x20);
    fVar38 = (float)_UNK_0388a048;
    fVar39 = (float)((ulong)_UNK_0388a048 >> 0x20);
    fVar17 = (float)*param_1;
    fVar18 = (float)((ulong)*param_1 >> 0x20);
    fVar20 = (float)param_1[1];
    fVar11 = fVar11 * fVar21 + fVar13 * fVar22 + fVar35 * fVar23 + fVar39 * fVar24 +
             (fVar11 * fVar29 + fVar13 * fVar30 + fVar35 * fVar31 + fVar39 * fVar32) * fVar17 +
             (fVar11 * fVar2 + fVar13 * fVar6 + fVar35 * fVar8 + fVar39 * fVar10) * fVar18 +
             (fVar11 * fVar12 + fVar13 * fVar14 + fVar35 * fVar15 + fVar39 * fVar16) * fVar20;
    fVar13 = 1.0 / fVar11;
    fVar3 = (fVar3 * fVar21 + fVar25 * fVar22 + fVar28 * fVar23 + fVar36 * fVar24 +
            (fVar3 * fVar29 + fVar25 * fVar30 + fVar28 * fVar31 + fVar36 * fVar32) * fVar17 +
            (fVar3 * fVar2 + fVar25 * fVar6 + fVar28 * fVar8 + fVar36 * fVar10) * fVar18 +
            (fVar3 * fVar12 + fVar25 * fVar14 + fVar28 * fVar15 + fVar36 * fVar16) * fVar20) *
            fVar13;
    fVar7 = (fVar7 * fVar21 + fVar26 * fVar22 + fVar33 * fVar23 + fVar37 * fVar24 +
            (fVar7 * fVar29 + fVar26 * fVar30 + fVar33 * fVar31 + fVar37 * fVar32) * fVar17 +
            (fVar7 * fVar2 + fVar26 * fVar6 + fVar33 * fVar8 + fVar37 * fVar10) * fVar18 +
            (fVar7 * fVar12 + fVar26 * fVar14 + fVar33 * fVar15 + fVar37 * fVar16) * fVar20) *
            fVar13;
    fVar2 = (fVar19 * fVar21 + fVar27 * fVar22 + fVar34 * fVar23 + fVar38 * fVar24 +
            (fVar19 * fVar29 + fVar27 * fVar30 + fVar34 * fVar31 + fVar38 * fVar32) * fVar17 +
            (fVar19 * fVar2 + fVar27 * fVar6 + fVar34 * fVar8 + fVar38 * fVar10) * fVar18 +
            (fVar19 * fVar12 + fVar27 * fVar14 + fVar34 * fVar15 + fVar38 * fVar16) * fVar20) *
            fVar13;
    fVar11 = fVar11 * fVar13;
    uVar4 = CONCAT17((byte)((uint)fVar7 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                     CONCAT16((byte)((uint)fVar7 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30),
                              CONCAT15((byte)((uint)fVar7 >> 8) &
                                       (byte)((ulong)_DAT_038897c0 >> 0x28),
                                       CONCAT14(SUB41(fVar7,0) &
                                                (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                CONCAT13((byte)((uint)fVar3 >> 0x18) &
                                                         (byte)((ulong)_DAT_038897c0 >> 0x18),
                                                         CONCAT12((byte)((uint)fVar3 >> 0x10) &
                                                                  (byte)((ulong)_DAT_038897c0 >>
                                                                        0x10),
                                                                  CONCAT11((byte)((uint)fVar3 >> 8)
                                                                           & (byte)((ulong)
                                                  _DAT_038897c0 >> 8),
                                                  SUB41(fVar3,0) & (byte)_DAT_038897c0)))))));
    uVar9 = CONCAT17((byte)((uint)fVar11 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38),
                     CONCAT16((byte)((uint)fVar11 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30),
                              CONCAT15((byte)((uint)fVar11 >> 8) &
                                       (byte)((ulong)_UNK_038897c8 >> 0x28),
                                       CONCAT14(SUB41(fVar11,0) &
                                                (byte)((ulong)_UNK_038897c8 >> 0x20),
                                                CONCAT13((byte)((uint)fVar2 >> 0x18) &
                                                         (byte)((ulong)_UNK_038897c8 >> 0x18),
                                                         CONCAT12((byte)((uint)fVar2 >> 0x10) &
                                                                  (byte)((ulong)_UNK_038897c8 >>
                                                                        0x10),
                                                                  CONCAT11((byte)((uint)fVar2 >> 8)
                                                                           & (byte)((ulong)
                                                  _UNK_038897c8 >> 8),
                                                  SUB41(fVar2,0) & (byte)_UNK_038897c8)))))));
  }
  auVar5._8_8_ = uVar9;
  auVar5._0_8_ = uVar4;
  return auVar5;
}


