/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028f14e0; name: FUN_028f14e0
 */


void FUN_028f14e0(long param_1)

{
  float fVar1;
  code *pcVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar11;
  undefined1 auVar10 [16];
  byte bVar13;
  byte bVar14;
  int iVar12;
  byte bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  long local_90;
  long *plStack_88;
  undefined8 local_28;
  
  plVar3 = *(long **)(param_1 + 0xd0);
  if ((plVar3 != (long *)0x0) &&
     ((*(int *)(param_1 + 0x164) != 0 || (*(int *)(param_1 + 0x160) != 0)))) {
    local_28 = 8;
    (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
    *(undefined8 *)(param_1 + 0x150) = 0;
    *(undefined8 *)(param_1 + 0x158) = 0;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(undefined8 *)(param_1 + 0x148) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined8 *)(param_1 + 0x138) = 0;
    local_b0 = &LAB_028f29a8;
    local_a8 = FUN_028f2a18;
    local_a0 = &LAB_028f2a1c;
    puStack_98 = &LAB_028f2a28;
    local_90 = param_1;
    plStack_88 = plVar3;
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x10))(*(long **)(param_1 + 0xf0),&local_b0);
    pcVar2 = local_a8;
    if (local_a8 != (code *)0x0) {
      local_a0 = (undefined1 *)0x0;
      puStack_98 = (undefined1 *)0x0;
      local_b0 = (undefined1 *)0x0;
      local_a8 = (code *)0x0;
      (*pcVar2)(&local_90);
    }
    fVar5 = (float)*(undefined8 *)(param_1 + 0x140);
    auVar20._0_4_ = fVar5 * fVar5;
    fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x140) >> 0x20);
    auVar20._4_4_ = fVar6 * fVar6;
    fVar7 = (float)*(undefined8 *)(param_1 + 0x148);
    auVar20._8_4_ = fVar7 * fVar7;
    fVar8 = (float)((ulong)*(undefined8 *)(param_1 + 0x148) >> 0x20);
    auVar20._12_4_ = fVar8 * fVar8;
    auVar19 = NEON_ext(auVar20,auVar20,8,1);
    fVar1 = *(float *)PTR_FloatQuaternionEpsilon_0437a118;
    fVar9 = auVar19._0_4_ + auVar20._0_4_;
    fVar11 = auVar19._4_4_ + auVar20._4_4_;
    fVar4 = fVar9 + fVar11;
    fVar9 = fVar9 + fVar11;
    auVar19._8_8_ = CONCAT44(fVar9,fVar4);
    auVar19._0_8_ = CONCAT44(fVar9,fVar4);
    iVar12 = -(uint)(fVar4 < fVar1);
    iVar16 = -(uint)(fVar9 < fVar1);
    iVar17 = -(uint)(fVar4 < fVar1);
    iVar18 = -(uint)(fVar9 < fVar1);
    bVar13 = (byte)((uint)iVar12 >> 8);
    bVar14 = (byte)((uint)iVar12 >> 0x10);
    bVar15 = (byte)((uint)iVar12 >> 0x18);
    if ((float)CONCAT13((byte)((uint)fVar4 >> 0x18) & ~bVar15,
                        CONCAT12((byte)((uint)fVar4 >> 0x10) & ~bVar14,
                                 CONCAT11((byte)((uint)fVar4 >> 8) & ~bVar13,
                                          SUB41(fVar4,0) & ~(byte)iVar12))) != 0.0) {
      auVar20 = NEON_frsqrte(auVar19,4);
      auVar22._0_4_ = auVar20._0_4_ * fVar4;
      auVar22._4_4_ = auVar20._4_4_ * fVar9;
      auVar22._8_4_ = auVar20._8_4_ * fVar4;
      auVar22._12_4_ = auVar20._12_4_ * fVar9;
      auVar19 = NEON_frsqrts(auVar20,auVar22,4);
      auVar21._0_4_ = auVar20._0_4_ * auVar19._0_4_;
      auVar21._4_4_ = auVar20._4_4_ * auVar19._4_4_;
      auVar21._8_4_ = auVar20._8_4_ * auVar19._8_4_;
      auVar21._12_4_ = auVar20._12_4_ * auVar19._12_4_;
      auVar10._0_4_ = fVar4 * auVar21._0_4_;
      auVar10._4_4_ = fVar9 * auVar21._4_4_;
      auVar10._8_4_ = fVar4 * auVar21._8_4_;
      auVar10._12_4_ = fVar9 * auVar21._12_4_;
      auVar20 = NEON_frsqrts(auVar21,auVar10,4);
      fVar5 = fVar5 * auVar21._0_4_ * auVar20._0_4_;
      fVar6 = fVar6 * auVar21._4_4_ * auVar20._4_4_;
      fVar7 = fVar7 * auVar21._8_4_ * auVar20._8_4_;
      fVar8 = fVar8 * auVar21._12_4_ * auVar20._12_4_;
      *(ulong *)(param_1 + 0x148) =
           CONCAT17((byte)((uint)fVar8 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                    CONCAT16((byte)((uint)fVar8 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10),
                             CONCAT15((byte)((uint)fVar8 >> 8) & ~(byte)((uint)iVar18 >> 8),
                                      CONCAT14(SUB41(fVar8,0) & ~(byte)iVar18,
                                               CONCAT13((byte)((uint)fVar7 >> 0x18) &
                                                        ~(byte)((uint)iVar17 >> 0x18),
                                                        CONCAT12((byte)((uint)fVar7 >> 0x10) &
                                                                 ~(byte)((uint)iVar17 >> 0x10),
                                                                 CONCAT11((byte)((uint)fVar7 >> 8) &
                                                                          ~(byte)((uint)iVar17 >> 8)
                                                                          ,SUB41(fVar7,0) &
                                                                           ~(byte)iVar17)))))));
      *(ulong *)(param_1 + 0x140) =
           CONCAT17((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                    CONCAT16((byte)((uint)fVar6 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                             CONCAT15((byte)((uint)fVar6 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                      CONCAT14(SUB41(fVar6,0) & ~(byte)iVar16,
                                               CONCAT13((byte)((uint)fVar5 >> 0x18) & ~bVar15,
                                                        CONCAT12((byte)((uint)fVar5 >> 0x10) &
                                                                 ~bVar14,CONCAT11((byte)((uint)fVar5
                                                                                        >> 8) &
                                                                                  ~bVar13,SUB41(
                                                  fVar5,0) & ~(byte)iVar12)))))));
    }
  }
  return;
}


