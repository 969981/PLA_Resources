/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029253b4; name: FUN_029253b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029253b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
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
  int iVar16;
  float fVar19;
  int iVar20;
  int iVar21;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined8 *local_28;
  
  puVar1 = PTR_DAT_04379c28;
  if (*(char *)(param_1 + 0x1ef) == '\0') {
    if ((*PTR_DAT_04379c28 & 1) == 0) {
      iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28);
      if (iVar16 != 0) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
    }
    puVar3 = PTR_DAT_04379c38;
    puVar2 = PTR_DAT_04379c30;
    lVar5 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar5;
    if (*(char *)(lVar5 + 0x58) != '\0') {
      local_60 = *(undefined8 *)PTR_DAT_0437a0f8;
      uStack_58 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
      local_50 = 0;
      uStack_48 = 0;
      local_70 = *(undefined8 *)PTR_DAT_0437a100;
      uStack_68 = *(undefined8 *)(PTR_DAT_0437a100 + 8);
      if (*(code **)(param_1 + 0x1f0) == (code *)0x0) {
        local_70 = DAT_0388a140;
        uStack_68 = DAT_0388a148;
        local_60 = _DAT_03888d10;
        uStack_58 = _UNK_03888d18;
      }
      else {
        local_28 = &local_50;
        local_38 = &local_60;
        local_40 = (undefined1 *)&local_70;
        (**(code **)(param_1 + 0x1f0))(param_1 + 0x210,&local_28,&local_38,&local_40);
      }
      fVar11 = (float)local_60;
      auVar17._0_4_ = fVar11 * fVar11;
      fVar12 = (float)((ulong)local_60 >> 0x20);
      auVar17._4_4_ = fVar12 * fVar12;
      fVar13 = (float)uStack_58;
      auVar17._8_4_ = fVar13 * fVar13;
      fVar14 = (float)((ulong)uStack_58 >> 0x20);
      auVar17._12_4_ = fVar14 * fVar14;
      auVar25 = NEON_ext(auVar17,auVar17,8,1);
      fVar7 = (float)local_70;
      fVar23 = fVar7 * fVar7;
      fVar8 = (float)((ulong)local_70 >> 0x20);
      fVar24 = fVar8 * fVar8;
      fVar9 = (float)uStack_68;
      fVar10 = (float)((ulong)uStack_68 >> 0x20);
      auVar28._4_4_ = fVar24;
      auVar28._0_4_ = fVar23;
      auVar28._8_4_ = fVar9 * fVar9;
      auVar28._12_4_ = fVar10 * fVar10;
      auVar29._4_4_ = fVar24;
      auVar29._0_4_ = fVar23;
      auVar29._8_4_ = fVar9 * fVar9;
      auVar29._12_4_ = fVar10 * fVar10;
      auVar28 = NEON_ext(auVar28,auVar29,8,1);
      fVar15 = auVar25._0_4_ + auVar17._0_4_;
      fVar19 = auVar25._4_4_ + auVar17._4_4_;
      fVar6 = fVar15 + fVar19;
      fVar15 = fVar15 + fVar19;
      fVar23 = auVar28._0_4_ + fVar23;
      fVar24 = auVar28._4_4_ + fVar24;
      auVar18._8_8_ = CONCAT44(fVar15,fVar6);
      auVar18._0_8_ = CONCAT44(fVar15,fVar6);
      fVar19 = fVar23 + fVar24;
      fVar23 = fVar23 + fVar24;
      auVar28 = NEON_frsqrte(auVar18,4);
      auVar31._0_4_ = auVar28._0_4_ * fVar6;
      auVar31._4_4_ = auVar28._4_4_ * fVar15;
      auVar31._8_4_ = auVar28._8_4_ * fVar6;
      auVar31._12_4_ = auVar28._12_4_ * fVar15;
      auVar25._4_4_ = fVar23;
      auVar25._0_4_ = fVar19;
      auVar25._8_4_ = fVar19;
      auVar25._12_4_ = fVar23;
      auVar29 = NEON_frsqrte(auVar25,4);
      auVar25 = NEON_frsqrts(auVar28,auVar31,4);
      auVar26._0_4_ = auVar28._0_4_ * auVar25._0_4_;
      auVar26._4_4_ = auVar28._4_4_ * auVar25._4_4_;
      auVar26._8_4_ = auVar28._8_4_ * auVar25._8_4_;
      auVar26._12_4_ = auVar28._12_4_ * auVar25._12_4_;
      auVar32._0_4_ = auVar29._0_4_ * fVar19;
      auVar32._4_4_ = auVar29._4_4_ * fVar23;
      auVar32._8_4_ = auVar29._8_4_ * fVar19;
      auVar32._12_4_ = auVar29._12_4_ * fVar23;
      auVar28 = NEON_frsqrts(auVar29,auVar32,4);
      auVar30._0_4_ = auVar29._0_4_ * auVar28._0_4_;
      auVar30._4_4_ = auVar29._4_4_ * auVar28._4_4_;
      auVar30._8_4_ = auVar29._8_4_ * auVar28._8_4_;
      auVar30._12_4_ = auVar29._12_4_ * auVar28._12_4_;
      auVar33._0_4_ = fVar6 * auVar26._0_4_;
      auVar33._4_4_ = fVar15 * auVar26._4_4_;
      auVar33._8_4_ = fVar6 * auVar26._8_4_;
      auVar33._12_4_ = fVar15 * auVar26._12_4_;
      iVar16 = -(uint)(fVar6 == 0.0);
      iVar20 = -(uint)(fVar15 == 0.0);
      iVar21 = -(uint)(fVar6 == 0.0);
      iVar22 = -(uint)(fVar15 == 0.0);
      auVar28 = NEON_frsqrts(auVar26,auVar33,4);
      fVar11 = fVar11 * auVar26._0_4_ * auVar28._0_4_;
      fVar12 = fVar12 * auVar26._4_4_ * auVar28._4_4_;
      fVar13 = fVar13 * auVar26._8_4_ * auVar28._8_4_;
      fVar14 = fVar14 * auVar26._12_4_ * auVar28._12_4_;
      local_60 = CONCAT17((byte)((uint)fVar12 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                          CONCAT16((byte)((uint)fVar12 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                   CONCAT15((byte)((uint)fVar12 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                            CONCAT14(SUB41(fVar12,0) & ~(byte)iVar20,
                                                     CONCAT13((byte)((uint)fVar11 >> 0x18) &
                                                              ~(byte)((uint)iVar16 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar11 >> 0x10)
                                                                       & ~(byte)((uint)iVar16 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar11
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar16
                                                                                       >> 8),
                                                                                SUB41(fVar11,0) &
                                                                                ~(byte)iVar16)))))))
      ;
      uStack_58 = CONCAT17((byte)((uint)fVar14 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT16((byte)((uint)fVar14 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT15((byte)((uint)fVar14 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                             CONCAT14(SUB41(fVar14,0) & ~(byte)iVar22,
                                                      CONCAT13((byte)((uint)fVar13 >> 0x18) &
                                                               ~(byte)((uint)iVar21 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar13 >> 0x10)
                                                                        & ~(byte)((uint)iVar21 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar13
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar13,0) & ~(byte)iVar21))))))
                          );
      auVar27._0_4_ = fVar19 * auVar30._0_4_;
      auVar27._4_4_ = fVar23 * auVar30._4_4_;
      auVar27._8_4_ = fVar19 * auVar30._8_4_;
      auVar27._12_4_ = fVar23 * auVar30._12_4_;
      auVar28 = NEON_frsqrts(auVar30,auVar27,4);
      fVar7 = fVar7 * auVar30._0_4_ * auVar28._0_4_;
      fVar8 = fVar8 * auVar30._4_4_ * auVar28._4_4_;
      fVar9 = fVar9 * auVar30._8_4_ * auVar28._8_4_;
      fVar10 = fVar10 * auVar30._12_4_ * auVar28._12_4_;
      iVar16 = -(uint)(fVar19 == 0.0);
      iVar20 = -(uint)(fVar23 == 0.0);
      iVar21 = -(uint)(fVar19 == 0.0);
      iVar22 = -(uint)(fVar23 == 0.0);
      local_70 = CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                          CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                   CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                            CONCAT14(SUB41(fVar8,0) & ~(byte)iVar20,
                                                     CONCAT13((byte)((uint)fVar7 >> 0x18) &
                                                              ~(byte)((uint)iVar16 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                                                       ~(byte)((uint)iVar16 >> 0x10)
                                                                       ,CONCAT11((byte)((uint)fVar7
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar16 >> 8),SUB41(fVar7,0) & ~(byte)iVar16)))))))
      ;
      uStack_68 = CONCAT17((byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar22 >> 0x18),
                           CONCAT16((byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar22 >> 0x10),
                                    CONCAT15((byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar22 >> 8),
                                             CONCAT14(SUB41(fVar10,0) & ~(byte)iVar22,
                                                      CONCAT13((byte)((uint)fVar9 >> 0x18) &
                                                               ~(byte)((uint)iVar21 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar9 >> 0x10)
                                                                        & ~(byte)((uint)iVar21 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar9
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar21 >> 8),SUB41(fVar9,0) & ~(byte)iVar21)))))))
      ;
      if (((*puVar1 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379c28);
      }
      uVar4 = *(undefined8 *)puVar2;
      *(undefined8 *)puVar3 = uVar4;
      FUN_02912074(uVar4,&local_50,&local_60,&local_70);
    }
  }
  return;
}


