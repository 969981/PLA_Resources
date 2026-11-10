/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbce48; name: FUN_02bbce48
 */


void FUN_02bbce48(long param_1,float *param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  byte bVar19;
  byte bVar20;
  float fVar16;
  int iVar17;
  byte bVar21;
  byte bVar24;
  byte bVar25;
  float fVar22;
  int iVar23;
  byte bVar26;
  byte bVar28;
  byte bVar29;
  int iVar27;
  byte bVar30;
  byte bVar32;
  byte bVar33;
  int iVar31;
  byte bVar34;
  undefined1 auVar18 [16];
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  FUN_02bbc868();
  lVar2 = *(long *)(param_1 + 0x1a0);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(lVar2 + 0x88) = uVar3;
  *(undefined8 *)(lVar2 + 0x90) = uVar5;
  *(undefined8 *)(lVar2 + 0x80) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(lVar2 + 0xb8) = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  *(undefined8 *)(lVar2 + 0xb0) = uVar4;
  uVar4 = DAT_0388a870;
  uVar3 = DAT_0388a618;
  fVar7 = *param_2;
  lVar2 = *(long *)(param_1 + 0x1a0);
  if (param_2[0xb] == 0.0) {
    fVar6 = param_2[0xc];
    *(ulong *)(lVar2 + 200) = (ulong)(uint)((fVar6 + 1.0) / fVar7) << 0x20;
    *(undefined8 *)(lVar2 + 0xc0) = uVar3;
    *(ulong *)(lVar2 + 0xd8) = (ulong)(uint)((1.0 - fVar6) / fVar7) << 0x20;
    *(undefined8 *)(lVar2 + 0xd0) = uVar4;
    uVar4 = DAT_0388a868;
    uVar3 = DAT_0388a7e8;
    fVar7 = param_2[0xd];
    fVar6 = param_2[5];
    *(ulong *)(lVar2 + 0xe8) = (ulong)(uint)((fVar7 + 1.0) / fVar6) << 0x20;
    *(undefined8 *)(lVar2 + 0xe0) = uVar3;
    *(ulong *)(lVar2 + 0xf8) = (ulong)(uint)((1.0 - fVar7) / fVar6) << 0x20;
    *(undefined8 *)(lVar2 + 0xf0) = uVar4;
    fVar7 = param_2[0xe] / param_2[10];
    fVar6 = (1.0 - param_2[0xe]) / param_2[10];
  }
  else {
    fVar7 = -1.0 / fVar7;
    fVar16 = fVar7 * fVar7 + (float)DAT_0388a618;
    fVar9 = (float)((ulong)DAT_0388a618 >> 0x20);
    fVar22 = fVar9 + 0.0;
    fVar6 = fVar16 + fVar22;
    fVar16 = fVar16 + fVar22;
    auVar42._8_8_ = CONCAT44(fVar16,fVar6);
    auVar42._0_8_ = CONCAT44(fVar16,fVar6);
    auVar35 = NEON_frsqrte(auVar42,4);
    auVar41._0_4_ = auVar35._0_4_ * fVar6;
    auVar41._4_4_ = auVar35._4_4_ * fVar16;
    auVar41._8_4_ = auVar35._8_4_ * fVar6;
    auVar41._12_4_ = auVar35._12_4_ * fVar16;
    auVar42 = NEON_frsqrts(auVar35,auVar41,4);
    auVar36._0_4_ = auVar35._0_4_ * auVar42._0_4_;
    auVar36._4_4_ = auVar35._4_4_ * auVar42._4_4_;
    auVar36._8_4_ = auVar35._8_4_ * auVar42._8_4_;
    auVar36._12_4_ = auVar35._12_4_ * auVar42._12_4_;
    auVar43._0_4_ = fVar6 * auVar36._0_4_;
    auVar43._4_4_ = fVar16 * auVar36._4_4_;
    auVar43._8_4_ = fVar6 * auVar36._8_4_;
    auVar43._12_4_ = fVar16 * auVar36._12_4_;
    iVar17 = -(uint)(fVar6 == 0.0);
    iVar23 = -(uint)(fVar16 == 0.0);
    iVar27 = -(uint)(fVar6 == 0.0);
    iVar31 = -(uint)(fVar16 == 0.0);
    bVar19 = ~(byte)((uint)iVar17 >> 8);
    bVar20 = ~(byte)((uint)iVar17 >> 0x10);
    bVar21 = ~(byte)((uint)iVar17 >> 0x18);
    bVar24 = ~(byte)((uint)iVar23 >> 8);
    bVar25 = ~(byte)((uint)iVar23 >> 0x10);
    bVar26 = ~(byte)((uint)iVar23 >> 0x18);
    bVar28 = ~(byte)((uint)iVar27 >> 8);
    bVar29 = ~(byte)((uint)iVar27 >> 0x10);
    bVar30 = ~(byte)((uint)iVar27 >> 0x18);
    bVar32 = ~(byte)((uint)iVar31 >> 8);
    bVar33 = ~(byte)((uint)iVar31 >> 0x10);
    bVar34 = ~(byte)((uint)iVar31 >> 0x18);
    auVar35 = NEON_frsqrts(auVar36,auVar43,4);
    fVar6 = auVar36._0_4_ * auVar35._0_4_;
    fVar16 = auVar36._4_4_ * auVar35._4_4_;
    fVar39 = auVar36._8_4_ * auVar35._8_4_;
    fVar22 = auVar36._12_4_ * auVar35._12_4_;
    fVar40 = -1.0 / param_2[5];
    fVar8 = (float)DAT_0388a618 * fVar6;
    fVar9 = fVar9 * fVar16;
    fVar10 = fVar7 * fVar39;
    fVar11 = fVar22 * 0.0;
    fVar6 = (float)DAT_0388a870 * fVar6;
    fVar16 = (float)((ulong)DAT_0388a870 >> 0x20) * fVar16;
    fVar7 = fVar7 * fVar39;
    fVar22 = fVar22 * 0.0;
    *(ulong *)(lVar2 + 200) =
         CONCAT17((byte)((uint)fVar11 >> 0x18) & bVar34,
                  CONCAT16((byte)((uint)fVar11 >> 0x10) & bVar33,
                           CONCAT15((byte)((uint)fVar11 >> 8) & bVar32,
                                    CONCAT14(SUB41(fVar11,0) & ~(byte)iVar31,
                                             CONCAT13((byte)((uint)fVar10 >> 0x18) & bVar30,
                                                      CONCAT12((byte)((uint)fVar10 >> 0x10) & bVar29
                                                               ,CONCAT11((byte)((uint)fVar10 >> 8) &
                                                                         bVar28,SUB41(fVar10,0) &
                                                                                ~(byte)iVar27)))))))
    ;
    *(ulong *)(lVar2 + 0xc0) =
         CONCAT17((byte)((uint)fVar9 >> 0x18) & bVar26,
                  CONCAT16((byte)((uint)fVar9 >> 0x10) & bVar25,
                           CONCAT15((byte)((uint)fVar9 >> 8) & bVar24,
                                    CONCAT14(SUB41(fVar9,0) & ~(byte)iVar23,
                                             CONCAT13((byte)((uint)fVar8 >> 0x18) & bVar21,
                                                      CONCAT12((byte)((uint)fVar8 >> 0x10) & bVar20,
                                                               CONCAT11((byte)((uint)fVar8 >> 8) &
                                                                        bVar19,SUB41(fVar8,0) &
                                                                               ~(byte)iVar17)))))));
    *(ulong *)(lVar2 + 0xd8) =
         CONCAT17((byte)((uint)fVar22 >> 0x18) & bVar34,
                  CONCAT16((byte)((uint)fVar22 >> 0x10) & bVar33,
                           CONCAT15((byte)((uint)fVar22 >> 8) & bVar32,
                                    CONCAT14(SUB41(fVar22,0) & ~(byte)iVar31,
                                             CONCAT13((byte)((uint)fVar7 >> 0x18) & bVar30,
                                                      CONCAT12((byte)((uint)fVar7 >> 0x10) & bVar29,
                                                               CONCAT11((byte)((uint)fVar7 >> 8) &
                                                                        bVar28,SUB41(fVar7,0) &
                                                                               ~(byte)iVar27)))))));
    *(ulong *)(lVar2 + 0xd0) =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & bVar26,
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & bVar25,
                           CONCAT15((byte)((uint)fVar16 >> 8) & bVar24,
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar23,
                                             CONCAT13((byte)((uint)fVar6 >> 0x18) & bVar21,
                                                      CONCAT12((byte)((uint)fVar6 >> 0x10) & bVar20,
                                                               CONCAT11((byte)((uint)fVar6 >> 8) &
                                                                        bVar19,SUB41(fVar6,0) &
                                                                               ~(byte)iVar17)))))));
    fVar7 = fVar40 * fVar40 + (float)DAT_0388a7e8;
    fVar8 = (float)((ulong)DAT_0388a7e8 >> 0x20);
    fVar6 = fVar8 + 0.0;
    fVar16 = fVar7 + fVar6;
    fVar7 = fVar7 + fVar6;
    uVar12 = SUB41(fVar7,0);
    uVar13 = (undefined1)((uint)fVar7 >> 8);
    uVar14 = (undefined1)((uint)fVar7 >> 0x10);
    uVar15 = (undefined1)((uint)fVar7 >> 0x18);
    auVar35[4] = uVar12;
    auVar35._0_4_ = fVar16;
    auVar35[5] = uVar13;
    auVar35[6] = uVar14;
    auVar35[7] = uVar15;
    auVar35[8] = SUB41(fVar16,0);
    auVar35[9] = (char)((uint)fVar16 >> 8);
    auVar35[10] = (char)((uint)fVar16 >> 0x10);
    auVar35[0xb] = (char)((uint)fVar16 >> 0x18);
    auVar35[0xc] = uVar12;
    auVar35[0xd] = uVar13;
    auVar35[0xe] = uVar14;
    auVar35[0xf] = uVar15;
    auVar35 = NEON_frsqrte(auVar35,4);
    auVar37._0_4_ = auVar35._0_4_ * fVar16;
    auVar37._4_4_ = auVar35._4_4_ * fVar7;
    auVar37._8_4_ = auVar35._8_4_ * fVar16;
    uVar1 = (undefined2)(CONCAT15(uVar13,CONCAT14(uVar12,fVar16)) >> 0x20);
    auVar37._12_4_ = auVar35._12_4_ * (float)CONCAT13(uVar15,CONCAT12(uVar14,uVar1));
    auVar42 = NEON_frsqrts(auVar35,auVar37,4);
    auVar18._0_4_ = auVar35._0_4_ * auVar42._0_4_;
    auVar18._4_4_ = auVar35._4_4_ * auVar42._4_4_;
    auVar18._8_4_ = auVar35._8_4_ * auVar42._8_4_;
    auVar18._12_4_ = auVar35._12_4_ * auVar42._12_4_;
    auVar38._0_4_ = fVar16 * auVar18._0_4_;
    auVar38._4_4_ = fVar7 * auVar18._4_4_;
    auVar38._8_4_ = fVar16 * auVar18._8_4_;
    auVar38._12_4_ = (float)CONCAT13(uVar15,CONCAT12(uVar14,uVar1)) * auVar18._12_4_;
    iVar17 = -(uint)(fVar16 == 0.0);
    iVar23 = -(uint)(fVar7 == 0.0);
    iVar27 = -(uint)(fVar16 == 0.0);
    iVar31 = -(uint)((float)CONCAT13(uVar15,CONCAT12(uVar14,uVar1)) == 0.0);
    bVar19 = ~(byte)((uint)iVar17 >> 8);
    bVar20 = ~(byte)((uint)iVar17 >> 0x10);
    bVar21 = ~(byte)((uint)iVar17 >> 0x18);
    bVar24 = ~(byte)((uint)iVar23 >> 8);
    bVar25 = ~(byte)((uint)iVar23 >> 0x10);
    bVar26 = ~(byte)((uint)iVar23 >> 0x18);
    bVar28 = ~(byte)((uint)iVar27 >> 8);
    bVar29 = ~(byte)((uint)iVar27 >> 0x10);
    bVar30 = ~(byte)((uint)iVar27 >> 0x18);
    bVar32 = ~(byte)((uint)iVar31 >> 8);
    bVar33 = ~(byte)((uint)iVar31 >> 0x10);
    bVar34 = ~(byte)((uint)iVar31 >> 0x18);
    auVar35 = NEON_frsqrts(auVar18,auVar38,4);
    fVar7 = auVar18._0_4_ * auVar35._0_4_;
    fVar6 = auVar18._4_4_ * auVar35._4_4_;
    fVar11 = auVar18._8_4_ * auVar35._8_4_;
    fVar16 = auVar18._12_4_ * auVar35._12_4_;
    fVar22 = (float)DAT_0388a7e8 * fVar7;
    fVar8 = fVar8 * fVar6;
    fVar9 = fVar40 * fVar11;
    fVar10 = fVar16 * 0.0;
    fVar7 = (float)DAT_0388a868 * fVar7;
    fVar6 = (float)((ulong)DAT_0388a868 >> 0x20) * fVar6;
    fVar40 = fVar40 * fVar11;
    fVar16 = fVar16 * 0.0;
    *(ulong *)(lVar2 + 0xe8) =
         CONCAT17((byte)((uint)fVar10 >> 0x18) & bVar34,
                  CONCAT16((byte)((uint)fVar10 >> 0x10) & bVar33,
                           CONCAT15((byte)((uint)fVar10 >> 8) & bVar32,
                                    CONCAT14(SUB41(fVar10,0) & ~(byte)iVar31,
                                             CONCAT13((byte)((uint)fVar9 >> 0x18) & bVar30,
                                                      CONCAT12((byte)((uint)fVar9 >> 0x10) & bVar29,
                                                               CONCAT11((byte)((uint)fVar9 >> 8) &
                                                                        bVar28,SUB41(fVar9,0) &
                                                                               ~(byte)iVar27)))))));
    *(ulong *)(lVar2 + 0xe0) =
         CONCAT17((byte)((uint)fVar8 >> 0x18) & bVar26,
                  CONCAT16((byte)((uint)fVar8 >> 0x10) & bVar25,
                           CONCAT15((byte)((uint)fVar8 >> 8) & bVar24,
                                    CONCAT14(SUB41(fVar8,0) & ~(byte)iVar23,
                                             CONCAT13((byte)((uint)fVar22 >> 0x18) & bVar21,
                                                      CONCAT12((byte)((uint)fVar22 >> 0x10) & bVar20
                                                               ,CONCAT11((byte)((uint)fVar22 >> 8) &
                                                                         bVar19,SUB41(fVar22,0) &
                                                                                ~(byte)iVar17)))))))
    ;
    *(ulong *)(lVar2 + 0xf8) =
         CONCAT17((byte)((uint)fVar16 >> 0x18) & bVar34,
                  CONCAT16((byte)((uint)fVar16 >> 0x10) & bVar33,
                           CONCAT15((byte)((uint)fVar16 >> 8) & bVar32,
                                    CONCAT14(SUB41(fVar16,0) & ~(byte)iVar31,
                                             CONCAT13((byte)((uint)fVar40 >> 0x18) & bVar30,
                                                      CONCAT12((byte)((uint)fVar40 >> 0x10) & bVar29
                                                               ,CONCAT11((byte)((uint)fVar40 >> 8) &
                                                                         bVar28,SUB41(fVar40,0) &
                                                                                ~(byte)iVar27)))))))
    ;
    *(ulong *)(lVar2 + 0xf0) =
         CONCAT17((byte)((uint)fVar6 >> 0x18) & bVar26,
                  CONCAT16((byte)((uint)fVar6 >> 0x10) & bVar25,
                           CONCAT15((byte)((uint)fVar6 >> 8) & bVar24,
                                    CONCAT14(SUB41(fVar6,0) & ~(byte)iVar23,
                                             CONCAT13((byte)((uint)fVar7 >> 0x18) & bVar21,
                                                      CONCAT12((byte)((uint)fVar7 >> 0x10) & bVar20,
                                                               CONCAT11((byte)((uint)fVar7 >> 8) &
                                                                        bVar19,SUB41(fVar7,0) &
                                                                               ~(byte)iVar17)))))));
    fVar6 = param_2[10];
    fVar7 = param_2[0xe] / fVar6;
    fVar6 = (fVar6 * fVar7) / (fVar6 + 1.0);
  }
  *(ulong *)(lVar2 + 0x108) =
       CONCAT17((char)((uint)fVar6 >> 0x18),
                CONCAT16((char)((uint)fVar6 >> 0x10),
                         CONCAT15((char)((uint)fVar6 >> 8),CONCAT14(SUB41(fVar6,0),0xbf800000))));
  *(undefined8 *)(lVar2 + 0x100) = 0;
  *(ulong *)(lVar2 + 0x118) = CONCAT44(fVar7,0x3f800000);
  *(undefined8 *)(lVar2 + 0x110) = 0;
  *(undefined1 *)(*(long *)(param_1 + 0x1a0) + 0x180) = 1;
  return;
}


