/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fed370; name: FUN_02fed370
 */


undefined8 FUN_02fed370(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  unkbyte10 Var4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  undefined2 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar24;
  undefined1 auVar23 [16];
  
  lVar5 = *(long *)(param_1 + 0x30);
  plVar6 = (long *)0x0;
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + param_1 + 0x30);
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    lVar5 = (long)*(int *)(param_1 + 0x38) << 3;
    do {
      lVar1 = *plVar6 + (long)plVar6;
      if ((*plVar6 != 0 && lVar1 != 0) && (*(short *)(lVar1 + 0x18) == -0xf00)) {
        auVar23 = *(undefined1 (*) [16])(lVar1 + 0x30);
        Var4 = *(unkbyte10 *)(lVar1 + 0x28);
        uVar9 = (ushort)((unkuint10)Var4 >> 0x30);
        auVar11._0_8_ =
             CONCAT17(auVar23[3],
                      CONCAT16(auVar23[2],(uint6)(ushort)(auVar23._0_2_ ^ 0x8000) << 0x10)) ^
             0x8000000000000000;
        auVar11._8_2_ = 0;
        auVar11[10] = auVar23[4];
        auVar11[0xb] = auVar23[5] ^ 0x80;
        auVar11._12_2_ = 0;
        auVar11[0xe] = auVar23[6];
        auVar11[0xf] = auVar23[7] ^ 0x80;
        auVar3._6_2_ = (short)((unkuint10)Var4 >> 0x10);
        auVar3._0_6_ = (uint6)(ushort)Var4 << 0x10;
        auVar3._8_2_ = 0;
        auVar3._10_2_ = (short)((unkuint10)Var4 >> 0x20);
        auVar3._12_2_ = 0;
        auVar3._14_2_ = uVar9;
        auVar23 = NEON_scvtf(auVar3,4);
        auVar12 = NEON_scvtf(auVar11,4);
        param_2[10] = auVar23._8_4_ * (float)((uint)uVar9 << 0x10);
        param_2[0xb] = auVar23._12_4_ * (float)((uint)uVar9 << 0x10);
        param_2[8] = auVar23._0_4_ * (float)((uint)uVar9 << 0x10);
        param_2[9] = auVar23._4_4_ * (float)((uint)uVar9 << 0x10);
        uVar9 = *(ushort *)(lVar1 + 0x26);
        auVar23._6_2_ = *(undefined2 *)(lVar1 + 0x22);
        auVar23._0_6_ = (uint6)*(ushort *)(lVar1 + 0x20) << 0x10;
        auVar23._8_2_ = 0;
        auVar23._10_2_ = *(undefined2 *)(lVar1 + 0x24);
        auVar23._12_2_ = 0;
        auVar23._14_2_ = uVar9;
        auVar23 = NEON_scvtf(auVar23,4);
        fVar21 = auVar23._4_4_ * (float)((uint)uVar9 << 0x10);
        fVar24 = auVar23._12_4_ * (float)((uint)uVar9 << 0x10);
        *(ulong *)(param_2 + 6) =
             CONCAT26((short)((uint)fVar24 >> 0x10),
                      CONCAT24(SUB42(fVar24,0),auVar23._8_4_ * (float)((uint)uVar9 << 0x10)));
        *(ulong *)(param_2 + 4) =
             CONCAT26((short)((uint)fVar21 >> 0x10),
                      CONCAT24(SUB42(fVar21,0),auVar23._0_4_ * (float)((uint)uVar9 << 0x10)));
        *param_2 = *(undefined4 *)(lVar1 + 0x3c);
        param_2[1] = *(undefined4 *)(lVar1 + 0x38);
        fVar10 = auVar12._0_4_ * 5.086263e-10;
        fVar13 = auVar12._4_4_ * 5.086263e-10;
        fVar14 = auVar12._8_4_ * 5.086263e-10;
        fVar15 = auVar12._12_4_ * 5.086263e-10;
        fVar21 = fVar10 * fVar10;
        fVar24 = fVar13 * fVar13;
        uVar16 = (undefined2)((uint)fVar24 >> 0x10);
        uVar17 = SUB42(fVar14 * fVar14,0);
        uVar18 = (undefined2)((uint)(fVar14 * fVar14) >> 0x10);
        uVar19 = SUB42(fVar15 * fVar15,0);
        uVar20 = (undefined2)((uint)(fVar15 * fVar15) >> 0x10);
        auVar12._4_2_ = SUB42(fVar24,0);
        auVar12._0_4_ = fVar21;
        auVar12._6_2_ = uVar16;
        auVar12._8_2_ = uVar17;
        auVar12._10_2_ = uVar18;
        auVar12._12_2_ = uVar19;
        auVar12._14_2_ = uVar20;
        auVar2._4_2_ = SUB42(fVar24,0);
        auVar2._0_4_ = fVar21;
        auVar2._6_2_ = uVar16;
        auVar2._8_2_ = uVar17;
        auVar2._10_2_ = uVar18;
        auVar2._12_2_ = uVar19;
        auVar2._14_2_ = uVar20;
        auVar23 = NEON_ext(auVar12,auVar2,8,1);
        fVar8 = auVar23._0_4_ + auVar23._4_4_;
        fVar7 = fVar21 + fVar24 + fVar8;
        fVar8 = fVar21 + fVar24 + fVar8;
        uVar16 = SUB42(fVar8,0);
        uVar17 = (undefined2)((uint)fVar8 >> 0x10);
        uVar22 = NEON_frsqrte(CONCAT26(uVar17,CONCAT24(uVar16,fVar7)),4);
        fVar21 = (float)uVar22;
        fVar24 = (float)((ulong)uVar22 >> 0x20);
        uVar22 = NEON_frsqrts(CONCAT26(uVar17,CONCAT24(uVar16,fVar7)),
                              CONCAT26((short)((uint)(fVar24 * fVar24) >> 0x10),
                                       CONCAT24(SUB42(fVar24 * fVar24,0),fVar21 * fVar21)),4);
        fVar21 = fVar21 * (float)uVar22;
        fVar24 = fVar24 * (float)((ulong)uVar22 >> 0x20);
        uVar22 = NEON_frsqrts(CONCAT26(uVar17,CONCAT24(uVar16,fVar7)),
                              CONCAT26((short)((uint)(fVar24 * fVar24) >> 0x10),
                                       CONCAT24(SUB42(fVar24 * fVar24,0),fVar21 * fVar21)),4);
        fVar21 = (float)uVar22 * fVar21;
        fVar24 = (float)((ulong)uVar22 >> 0x20) * fVar24;
        param_2[0xe] = fVar14 * fVar21;
        param_2[0xf] = fVar15 * fVar24;
        param_2[0xc] = fVar10 * fVar21;
        param_2[0xd] = fVar13 * fVar24;
        return 0;
      }
      plVar6 = plVar6 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  return 0x80040200;
}


