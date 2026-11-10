/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f56a18; name: FUN_01f56a18
 */


uint FUN_01f56a18(float param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  int iVar25;
  int iVar28;
  int iVar29;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar30;
  int iVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  if ((DAT_043d4a80 != 0) && (*(int *)(DAT_043d4a80 + 0xc) != 0)) {
    fVar12 = (float)*param_4;
    fVar11 = fVar12 * fVar12;
    fVar13 = (float)((ulong)*param_4 >> 0x20);
    fVar30 = fVar13 * fVar13;
    uVar16 = (undefined1)((uint)fVar30 >> 8);
    uVar17 = (undefined1)((uint)fVar30 >> 0x10);
    uVar18 = (undefined1)((uint)fVar30 >> 0x18);
    fVar14 = (float)param_4[1];
    fVar10 = fVar14 * fVar14;
    uVar19 = (undefined1)((uint)fVar10 >> 8);
    uVar20 = (undefined1)((uint)fVar10 >> 0x10);
    uVar21 = (undefined1)((uint)fVar10 >> 0x18);
    fVar15 = (float)((ulong)param_4[1] >> 0x20);
    fVar6 = fVar15 * fVar15;
    uVar22 = (undefined1)((uint)fVar6 >> 8);
    uVar23 = (undefined1)((uint)fVar6 >> 0x10);
    uVar24 = (undefined1)((uint)fVar6 >> 0x18);
    auVar26[4] = SUB41(fVar30,0);
    auVar26._0_4_ = fVar11;
    auVar26[5] = uVar16;
    auVar26[6] = uVar17;
    auVar26[7] = uVar18;
    auVar26[8] = SUB41(fVar10,0);
    auVar26[9] = uVar19;
    auVar26[10] = uVar20;
    auVar26[0xb] = uVar21;
    auVar26[0xc] = SUB41(fVar6,0);
    auVar26[0xd] = uVar22;
    auVar26[0xe] = uVar23;
    auVar26[0xf] = uVar24;
    auVar34[4] = SUB41(fVar30,0);
    auVar34._0_4_ = fVar11;
    auVar34[5] = uVar16;
    auVar34[6] = uVar17;
    auVar34[7] = uVar18;
    auVar34[8] = SUB41(fVar10,0);
    auVar34[9] = uVar19;
    auVar34[10] = uVar20;
    auVar34[0xb] = uVar21;
    auVar34[0xc] = SUB41(fVar6,0);
    auVar34[0xd] = uVar22;
    auVar34[0xe] = uVar23;
    auVar34[0xf] = uVar24;
    auVar26 = NEON_ext(auVar26,auVar34,8,1);
    fVar11 = auVar26._0_4_ + fVar11;
    fVar30 = auVar26._4_4_ + fVar30;
    fVar10 = fVar11 + fVar30;
    fVar11 = fVar11 + fVar30;
    uVar16 = (undefined1)((uint)fVar11 >> 8);
    uVar17 = (undefined1)((uint)fVar11 >> 0x10);
    uVar18 = (undefined1)((uint)fVar11 >> 0x18);
    uVar5 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(SUB41(fVar11,0),fVar10))));
    uVar4 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(SUB41(fVar11,0),fVar10))));
    auVar27._8_8_ = uVar4;
    auVar27._0_8_ = uVar5;
    auVar26 = NEON_frsqrte(auVar27,4);
    auVar33._0_4_ = auVar26._0_4_ * fVar10;
    fVar11 = (float)((ulong)uVar5 >> 0x20);
    auVar33._4_4_ = auVar26._4_4_ * fVar11;
    auVar33._8_4_ = auVar26._8_4_ * fVar10;
    fVar30 = (float)((ulong)uVar4 >> 0x20);
    auVar33._12_4_ = auVar26._12_4_ * fVar30;
    auVar34 = NEON_frsqrts(auVar26,auVar33,4);
    auVar32._0_4_ = auVar26._0_4_ * auVar34._0_4_;
    auVar32._4_4_ = auVar26._4_4_ * auVar34._4_4_;
    auVar32._8_4_ = auVar26._8_4_ * auVar34._8_4_;
    auVar32._12_4_ = auVar26._12_4_ * auVar34._12_4_;
    auVar35._0_4_ = fVar10 * auVar32._0_4_;
    auVar35._4_4_ = fVar11 * auVar32._4_4_;
    auVar35._8_4_ = fVar10 * auVar32._8_4_;
    auVar35._12_4_ = fVar30 * auVar32._12_4_;
    iVar25 = -(uint)(fVar10 == 0.0);
    iVar28 = -(uint)(fVar11 == 0.0);
    iVar29 = -(uint)(fVar10 == 0.0);
    iVar31 = -(uint)(fVar30 == 0.0);
    auVar26 = NEON_frsqrts(auVar32,auVar35,4);
    fVar12 = fVar12 * auVar32._0_4_ * auVar26._0_4_;
    fVar13 = fVar13 * auVar32._4_4_ * auVar26._4_4_;
    fVar14 = fVar14 * auVar32._8_4_ * auVar26._8_4_;
    fVar15 = fVar15 * auVar32._12_4_ * auVar26._12_4_;
    local_60 = CONCAT17((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                        CONCAT16((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar28 >> 0x10),
                                 CONCAT15((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar28 >> 8),
                                          CONCAT14(SUB41(fVar13,0) & ~(byte)iVar28,
                                                   CONCAT13((byte)((uint)fVar12 >> 0x18) &
                                                            ~(byte)((uint)iVar25 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar12 >> 0x10) &
                                                                     ~(byte)((uint)iVar25 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar12 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar25
                                                                                     >> 8),
                                                                              SUB41(fVar12,0) &
                                                                              ~(byte)iVar25)))))));
    uStack_58 = CONCAT17((byte)((uint)fVar15 >> 0x18) & ~(byte)((uint)iVar31 >> 0x18),
                         CONCAT16((byte)((uint)fVar15 >> 0x10) & ~(byte)((uint)iVar31 >> 0x10),
                                  CONCAT15((byte)((uint)fVar15 >> 8) & ~(byte)((uint)iVar31 >> 8),
                                           CONCAT14(SUB41(fVar15,0) & ~(byte)iVar31,
                                                    CONCAT13((byte)((uint)fVar14 >> 0x18) &
                                                             ~(byte)((uint)iVar29 >> 0x18),
                                                             CONCAT12((byte)((uint)fVar14 >> 0x10) &
                                                                      ~(byte)((uint)iVar29 >> 0x10),
                                                                      CONCAT11((byte)((uint)fVar14
                                                                                     >> 8) &
                                                                               ~(byte)((uint)iVar29
                                                                                      >> 8),
                                                                               SUB41(fVar14,0) &
                                                                               ~(byte)iVar29)))))));
    if (fVar10 != 0.0) {
      if (((*PTR_DAT_0437b578 & 1) == 0) &&
         (iVar25 = __cxa_guard_acquire(PTR_DAT_0437b578), iVar25 != 0)) {
        FUN_00100250(PTR_LAB_04382970,PTR_DAT_0437b580,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437b578);
      }
      lVar9 = *(long *)PTR_DAT_0437b580;
      *(long *)PTR_DAT_0437b588 = lVar9;
      lVar9 = *(long *)(lVar9 + 0x50);
      if (lVar9 != 0) {
        fVar11 = (float)param_2 * 0.5;
        local_70 = (undefined8 *)0x0;
        uStack_68 = 0;
        if (fVar11 <= param_1) {
          fVar11 = param_1;
        }
        FUN_01f578c8(&local_70,&DAT_043d4a80);
        uVar8 = FUN_02896380(fVar11,param_2,lVar9,param_3,&local_60,&local_70,param_5,param_6);
        puVar7 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_70 + 1);
          do {
            iVar25 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar25 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar25 + -1 == 0) {
            local_70[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar25 = __cxa_guard_acquire(PTR_DAT_04379498), iVar25 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar9 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar9;
            local_48 = *puVar7;
            FUN_02a44274(lVar9 + 0xd8,&local_48);
          }
        }
        goto LAB_01f56ba0;
      }
    }
  }
  uVar8 = 0;
LAB_01f56ba0:
  return uVar8 & 1;
}


