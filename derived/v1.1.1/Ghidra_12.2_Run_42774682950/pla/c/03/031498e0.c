/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031498e0; name: FUN_031498e0
 */


void FUN_031498e0(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  unkbyte10 Var3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  ushort uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined2 uVar15;
  undefined2 uVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  undefined2 uVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  undefined1 auVar22 [16];
  float local_120 [18];
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  float local_b0;
  undefined4 uStack_ac;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  
  iVar4 = *(int *)(param_1 + 0x40);
  if (0 < iVar4) {
    lVar9 = 0;
    do {
      plVar5 = (long *)(*(long *)(param_1 + 0x38) + lVar9 * 0xb0);
      lVar6 = *plVar5;
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x30);
        plVar8 = (long *)0x0;
        if (lVar7 != 0) {
          plVar8 = (long *)(lVar7 + lVar6 + 0x30);
        }
        if (*(int *)(lVar6 + 0x38) != 0) {
          lVar6 = (long)*(int *)(lVar6 + 0x38) << 3;
          do {
            lVar7 = *plVar8 + (long)plVar8;
            if ((*plVar8 != 0 && lVar7 != 0) && (*(short *)(lVar7 + 0x18) == -0xf00)) {
              Var3 = *(unkbyte10 *)(lVar7 + 0x28);
              auVar1 = *(undefined1 (*) [16])(lVar7 + 0x30);
              uVar12 = (ushort)((unkuint10)Var3 >> 0x30);
              auVar14._6_2_ = (short)((unkuint10)Var3 >> 0x10);
              auVar14._0_6_ = (uint6)(ushort)Var3 << 0x10;
              auVar14._8_2_ = 0;
              auVar14._10_2_ = (short)((unkuint10)Var3 >> 0x20);
              auVar14._12_2_ = 0;
              auVar14._14_2_ = uVar12;
              auVar22 = NEON_scvtf(auVar14,4);
              auVar13._0_8_ =
                   CONCAT17(auVar1[3],
                            CONCAT16(auVar1[2],(uint6)((uint)auVar1._0_2_ << 0x10 ^ 0x80000000))) ^
                   0x8000000000000000;
              auVar13._8_2_ = 0;
              auVar13[10] = auVar1[4];
              auVar13[0xb] = auVar1[5] ^ 0x80;
              auVar13._12_2_ = 0;
              auVar13[0xe] = auVar1[6];
              auVar13[0xf] = auVar1[7] ^ 0x80;
              auVar14 = NEON_scvtf(auVar13,4);
              fVar20 = auVar22._4_4_ * (float)((uint)uVar12 << 0x10);
              fVar23 = auVar22._12_4_ * (float)((uint)uVar12 << 0x10);
              local_80 = auVar14._0_4_ * 5.086263e-10;
              fStack_7c = auVar14._4_4_ * 5.086263e-10;
              fStack_78 = auVar14._8_4_ * 5.086263e-10;
              fStack_74 = auVar14._12_4_ * 5.086263e-10;
              uStack_88 = CONCAT26((short)((uint)fVar23 >> 0x10),
                                   CONCAT24(SUB42(fVar23,0),
                                            auVar22._8_4_ * (float)((uint)uVar12 << 0x10)));
              local_90 = CONCAT26((short)((uint)fVar20 >> 0x10),
                                  CONCAT24(SUB42(fVar20,0),
                                           auVar22._0_4_ * (float)((uint)uVar12 << 0x10)));
              Var3 = *(unkbyte10 *)(lVar7 + 0x20);
              fVar20 = local_80 * local_80;
              fVar23 = fStack_7c * fStack_7c;
              uVar15 = (undefined2)((uint)fVar23 >> 0x10);
              uVar16 = SUB42(fStack_78 * fStack_78,0);
              uVar17 = (undefined2)((uint)(fStack_78 * fStack_78) >> 0x10);
              uVar18 = SUB42(fStack_74 * fStack_74,0);
              uVar19 = (undefined2)((uint)(fStack_74 * fStack_74) >> 0x10);
              uVar12 = (ushort)((unkuint10)Var3 >> 0x30);
              auVar1._4_2_ = SUB42(fVar23,0);
              auVar1._0_4_ = fVar20;
              auVar1._6_2_ = uVar15;
              auVar1._8_2_ = uVar16;
              auVar1._10_2_ = uVar17;
              auVar1._12_2_ = uVar18;
              auVar1._14_2_ = uVar19;
              auVar22._4_2_ = SUB42(fVar23,0);
              auVar22._0_4_ = fVar20;
              auVar22._6_2_ = uVar15;
              auVar22._8_2_ = uVar16;
              auVar22._10_2_ = uVar17;
              auVar22._12_2_ = uVar18;
              auVar22._14_2_ = uVar19;
              auVar14 = NEON_ext(auVar1,auVar22,8,1);
              fVar11 = auVar14._0_4_ + auVar14._4_4_;
              fVar10 = fVar20 + fVar23 + fVar11;
              fVar11 = fVar20 + fVar23 + fVar11;
              uVar15 = SUB42(fVar11,0);
              uVar16 = (undefined2)((uint)fVar11 >> 0x10);
              auVar2._6_2_ = (short)((unkuint10)Var3 >> 0x10);
              auVar2._0_6_ = (uint6)(ushort)Var3 << 0x10;
              auVar2._8_2_ = 0;
              auVar2._10_2_ = (short)((unkuint10)Var3 >> 0x20);
              auVar2._12_2_ = 0;
              auVar2._14_2_ = uVar12;
              auVar14 = NEON_scvtf(auVar2,4);
              local_a0 = auVar14._0_4_ * (float)((uint)uVar12 << 0x10);
              fStack_9c = auVar14._4_4_ * (float)((uint)uVar12 << 0x10);
              fStack_98 = auVar14._8_4_ * (float)((uint)uVar12 << 0x10);
              fStack_94 = auVar14._12_4_ * (float)((uint)uVar12 << 0x10);
              uVar21 = NEON_frsqrte(CONCAT26(uVar16,CONCAT24(uVar15,fVar10)),4);
              uStack_ac = *(undefined4 *)(lVar7 + 0x38);
              local_b0 = *(float *)(lVar7 + 0x3c);
              fVar20 = (float)uVar21;
              fVar23 = (float)((ulong)uVar21 >> 0x20);
              uVar21 = NEON_frsqrts(CONCAT26(uVar16,CONCAT24(uVar15,fVar10)),
                                    CONCAT26((short)((uint)(fVar23 * fVar23) >> 0x10),
                                             CONCAT24(SUB42(fVar23 * fVar23,0),fVar20 * fVar20)),4);
              fVar20 = fVar20 * (float)uVar21;
              fVar23 = fVar23 * (float)((ulong)uVar21 >> 0x20);
              uVar21 = NEON_frsqrts(CONCAT26(uVar16,CONCAT24(uVar15,fVar10)),
                                    CONCAT26((short)((uint)(fVar23 * fVar23) >> 0x10),
                                             CONCAT24(SUB42(fVar23 * fVar23,0),fVar20 * fVar20)),4);
              fVar20 = (float)uVar21 * fVar20;
              fVar23 = (float)((ulong)uVar21 >> 0x20) * fVar23;
              local_80 = local_80 * fVar20;
              fStack_7c = fStack_7c * fVar23;
              fStack_78 = fStack_78 * fVar20;
              fStack_74 = fStack_74 * fVar23;
              if (local_b0 < 0.0) {
                local_d0 = 0xffffffff;
                uStack_c8 = 1;
                local_d8 = &DAT_042d95d8;
                local_c0 = 2;
                local_bc = 0xc47a00003fc00000;
                (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(*plVar5 + 0x18) * 0x200 + 0x38))
                          (*plVar5,&local_d8,local_120);
                local_b0 = local_120[0];
                FUN_02fed11c(*plVar5,&local_b0);
                iVar4 = *(int *)(param_1 + 0x40);
              }
              break;
            }
            plVar8 = plVar8 + 1;
            lVar6 = lVar6 + -8;
          } while (lVar6 != 0);
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar4);
  }
  return;
}


