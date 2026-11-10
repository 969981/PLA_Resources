/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bfe2c4; name: FUN_00bfe2c4
 */


undefined1  [16] FUN_00bfe2c4(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  int iVar24;
  int iVar25;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0 [4];
  undefined1 local_80 [16];
  undefined8 local_68;
  
  local_80._8_8_ = param_2[1];
  local_80._0_8_ = *param_2;
  FUN_00b5f5a4(local_a0,*(undefined8 *)(param_1 + 0x58));
  puVar5 = local_a0[0];
  puVar9 = PTR_DAT_04379e90;
  puVar8 = PTR_DAT_04379e88;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043794d0;
  if (local_a0[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_a0[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_a0[0] + 0xc);
      iVar21 = *(int *)((long)local_a0[0] + 0xc);
      do {
        plVar13 = (long *)puVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar8), iVar24 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar24 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar24 != 0)) {
            if (((*puVar6 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar6), iVar24 != 0)) {
              uVar11 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar11;
              __cxa_guard_release(puVar6);
            }
            *(undefined **)puVar7 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_00bfe400;
          if (plVar13 == (long *)puVar9) break;
          plVar13 = (long *)*plVar13;
        }
        iVar24 = *piVar1;
        if (iVar24 == iVar21) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar21 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar5[3];
            plVar13 = (long *)0x0;
            puVar5 = local_a0[0];
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x00bfe3cc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar21 = iVar24;
      } while (iVar24 != 0);
    }
LAB_00bfe400:
    plVar13 = (long *)0x0;
    puVar5 = local_a0[0];
joined_r0x00bfe3cc:
    local_a0[0] = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar21 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar21 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar21 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar21 = __cxa_guard_acquire(PTR_DAT_04379498), iVar21 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_b0 = *puVar5;
        FUN_02a44274(lVar12 + 0xd8,&local_b0);
      }
    }
    if (plVar13 != (long *)0x0) {
      local_80 = FUN_01a8afd4(0x42480000,plVar13,local_80);
      fVar16 = (float)((ulong)*param_3 >> 0x20);
      fVar15 = local_80._0_4_ - (float)*param_3;
      fVar16 = fVar16 - fVar16;
      fVar17 = local_80._8_4_ - (float)param_3[1];
      fVar18 = local_80._12_4_ - (float)((ulong)param_3[1] >> 0x20);
      fVar19 = fVar15 * fVar15;
      fVar20 = fVar16 * fVar16;
      auVar22._4_4_ = fVar20;
      auVar22._0_4_ = fVar19;
      auVar22._8_4_ = fVar17 * fVar17;
      auVar22._12_4_ = fVar18 * fVar18;
      auVar28._4_4_ = fVar20;
      auVar28._0_4_ = fVar19;
      auVar28._8_4_ = fVar17 * fVar17;
      auVar28._12_4_ = fVar18 * fVar18;
      auVar22 = NEON_ext(auVar22,auVar28,8,1);
      fVar19 = auVar22._0_4_ + fVar19;
      fVar20 = auVar22._4_4_ + fVar20;
      fVar14 = fVar19 + fVar20;
      fVar19 = fVar19 + fVar20;
      auVar4._4_4_ = fVar19;
      auVar4._0_4_ = fVar14;
      auVar4._8_4_ = fVar14;
      auVar4._12_4_ = fVar19;
      auVar22 = NEON_frsqrte(auVar4,4);
      auVar27._0_4_ = auVar22._0_4_ * fVar14;
      auVar27._4_4_ = auVar22._4_4_ * fVar19;
      auVar27._8_4_ = auVar22._8_4_ * fVar14;
      auVar27._12_4_ = auVar22._12_4_ * fVar19;
      auVar28 = NEON_frsqrts(auVar22,auVar27,4);
      auVar23._0_4_ = auVar22._0_4_ * auVar28._0_4_;
      auVar23._4_4_ = auVar22._4_4_ * auVar28._4_4_;
      auVar23._8_4_ = auVar22._8_4_ * auVar28._8_4_;
      auVar23._12_4_ = auVar22._12_4_ * auVar28._12_4_;
      auVar29._0_4_ = fVar14 * auVar23._0_4_;
      auVar29._4_4_ = fVar19 * auVar23._4_4_;
      auVar29._8_4_ = fVar14 * auVar23._8_4_;
      auVar29._12_4_ = fVar19 * auVar23._12_4_;
      auVar22 = NEON_frsqrts(auVar23,auVar29,4);
      fVar15 = fVar15 * auVar23._0_4_ * auVar22._0_4_;
      fVar16 = fVar16 * auVar23._4_4_ * auVar22._4_4_;
      fVar17 = fVar17 * auVar23._8_4_ * auVar22._8_4_;
      fVar18 = fVar18 * auVar23._12_4_ * auVar22._12_4_;
      iVar21 = -(uint)(fVar14 == 0.0);
      iVar24 = -(uint)(fVar19 == 0.0);
      iVar25 = -(uint)(fVar14 == 0.0);
      iVar26 = -(uint)(fVar19 == 0.0);
      local_b0 = CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                          CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                   CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                            CONCAT14(SUB41(fVar16,0) & ~(byte)iVar24,
                                                     CONCAT13((byte)((uint)fVar15 >> 0x18) &
                                                              ~(byte)((uint)iVar21 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar15 >> 0x10)
                                                                       & ~(byte)((uint)iVar21 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar15
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar21
                                                                                       >> 8),
                                                                                SUB41(fVar15,0) &
                                                                                ~(byte)iVar21)))))))
      ;
      uStack_a8 = CONCAT17((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar26 >> 0x18),
                           CONCAT16((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar26 >> 0x10),
                                    CONCAT15((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar26 >> 8),
                                             CONCAT14(SUB41(fVar18,0) & ~(byte)iVar26,
                                                      CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                               ~(byte)((uint)iVar25 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar17 >> 0x10)
                                                                        & ~(byte)((uint)iVar25 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar17
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar25 >> 8),SUB41(fVar17,0) & ~(byte)iVar25))))))
                          );
      FUN_00b5f5f4(local_a0,*(undefined8 *)(param_1 + 0x58));
      local_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      FUN_00bfffdc(&local_c0,local_a0);
      fVar19 = (float)FUN_00cd9698(&local_c0);
      puVar5 = local_c0;
      if (local_c0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c0 + 1);
        do {
          iVar21 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar21 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar21 + -1 == 0) {
          local_c0[2] = 0;
          if ((*PTR_DAT_04379498 & 1) == 0) {
            iVar21 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar21 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *puVar5;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      if (local_a0[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a0[0] + 1);
        do {
          iVar21 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar21 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar21 + -1 == 0) {
          local_a0[0][2] = 0;
          if ((*PTR_DAT_04379498 & 1) == 0) {
            iVar21 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar21 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *local_a0[0];
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
      uVar10 = FUN_01f56a18(0x3dcccccd,SQRT(fVar14),fVar19 + fVar19,param_3,&local_b0,
                            (int)plVar13[0xee],local_a0);
      auVar22 = local_80;
      if ((uVar10 & 1) != 0) {
        auVar22 = FUN_01a8afd4(0x42480000,plVar13,local_a0);
      }
      local_80 = auVar22;
      uVar10 = FUN_02a43a5c(plVar13[0xb]);
      if ((uVar10 & 1) != 0) {
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
  }
  return local_80;
}


