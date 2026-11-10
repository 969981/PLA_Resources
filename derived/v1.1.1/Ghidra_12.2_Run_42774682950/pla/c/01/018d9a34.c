/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d9a34; name: FUN_018d9a34
 */


uint FUN_018d9a34(long param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined2 uVar7;
  int iVar8;
  float fVar9;
  byte bVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 uVar26;
  undefined1 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_q3 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  long *local_188;
  long local_180 [2];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  long *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined8 *local_e0;
  undefined8 *local_d0;
  undefined8 *local_c0;
  undefined8 *local_a8;
  undefined4 local_90;
  long *local_80;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined2 local_4c;
  long *local_38;
  
  local_150 = (long *)0x0;
  local_148 = 0;
  FUN_00ac3fa4(&local_150,param_1 + 0x248);
  if (local_150 == (long *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_78);
    plVar13 = local_150;
    if (local_150 != (long *)0x0) {
      plVar2 = local_150 + 1;
      do {
        iVar12 = (int)*plVar2 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 == 0) {
        local_150[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_70 = (long *)*plVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_70);
      }
    }
  }
  if (local_78 != (long *)0x0) {
    if (*(long *)(param_1 + 0x668) == 0) {
      local_80 = (long *)0x0;
LAB_018d9a84:
      bVar5 = false;
      if (local_80 == (long *)0x0) goto LAB_018d9aac;
LAB_018d9a90:
      uVar16 = (uint)param_1;
      lVar15 = local_80[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 != 0) goto LAB_018d9aac;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
    else {
      FUN_00cfac20(&local_80);
      if (local_80 == (long *)0x0) goto LAB_018d9a84;
      FUN_009c69bc(&local_150);
      (**(code **)(*local_150 + 0x40))();
      if (local_150 != (long *)0x0) {
        lVar15 = local_150[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_150 + 0x20))();
        }
      }
      FUN_01792e28(&local_150);
      local_148 = param_2[1];
      local_150 = (long *)*param_2;
      local_138 = param_2[1];
      local_140 = *param_2;
      local_130 = 0;
      local_128 = FUN_018da270();
      local_90 = 2;
      FUN_01aeda18(&local_70,local_80);
      if (local_70 == (long *)0x0) {
        local_38 = (long *)0x0;
      }
      else {
        FUN_00959eac(&local_38);
        plVar13 = local_70;
        if (local_70 != (long *)0x0) {
          plVar2 = local_70 + 1;
          do {
            iVar12 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar5) {
              *(int *)plVar2 = iVar12;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 == 0) {
            local_70[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar15 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar15;
            local_180[0] = *plVar13;
            FUN_02a44274(lVar15 + 0xd8,local_180);
          }
        }
      }
      plVar13 = local_38;
      if (local_38 == (long *)0x0) {
        plVar13 = local_80;
      }
      local_12c = FUN_01a75574(plVar13);
      if (local_38 != (long *)0x0) {
        lVar15 = local_38[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      FUN_018d49c8(local_180,param_1,&local_150);
      if ((char)local_180[0] == '\0') {
        param_1 = 0;
        bVar5 = true;
        puVar11 = local_a8;
      }
      else {
        fVar18 = in_q3._0_4_ - (float)local_170;
        fVar20 = in_q3._8_4_ - (float)uStack_168;
        fVar21 = in_q3._12_4_ - (float)((ulong)uStack_168 >> 0x20);
        fVar17 = fVar18 * fVar18;
        fVar9 = fVar20 * fVar20;
        uVar22 = (undefined1)((uint)fVar9 >> 8);
        uVar23 = (undefined1)((uint)fVar9 >> 0x10);
        uVar24 = (undefined1)((uint)fVar9 >> 0x18);
        fVar21 = fVar21 * fVar21;
        uVar25 = (undefined1)((uint)fVar21 >> 8);
        uVar26 = (undefined1)((uint)fVar21 >> 0x10);
        uVar27 = (undefined1)((uint)fVar21 >> 0x18);
        auVar28._4_4_ = 0;
        auVar28._0_4_ = fVar17;
        auVar28[8] = SUB41(fVar9,0);
        auVar28[9] = uVar22;
        auVar28[10] = uVar23;
        auVar28[0xb] = uVar24;
        auVar28[0xc] = SUB41(fVar21,0);
        auVar28[0xd] = uVar25;
        auVar28[0xe] = uVar26;
        auVar28[0xf] = uVar27;
        auVar31._4_4_ = 0;
        auVar31._0_4_ = fVar17;
        auVar31[8] = SUB41(fVar9,0);
        auVar31[9] = uVar22;
        auVar31[10] = uVar23;
        auVar31[0xb] = uVar24;
        auVar31[0xc] = SUB41(fVar21,0);
        auVar31[0xd] = uVar25;
        auVar31[0xe] = uVar26;
        auVar31[0xf] = uVar27;
        auVar28 = NEON_ext(auVar28,auVar31,8,1);
        fVar17 = auVar28._0_4_ + fVar17;
        fVar9 = auVar28._4_4_ + 0.0;
        fVar21 = fVar17 + fVar9;
        fVar17 = fVar17 + fVar9;
        uVar22 = SUB41(fVar17,0);
        uVar23 = (undefined1)((uint)fVar17 >> 8);
        uVar24 = (undefined1)((uint)fVar17 >> 0x10);
        uVar25 = (undefined1)((uint)fVar17 >> 0x18);
        if (fVar21 != 0.0) {
          auVar6[4] = uVar22;
          auVar6._0_4_ = fVar21;
          auVar6[5] = uVar23;
          auVar6[6] = uVar24;
          auVar6[7] = uVar25;
          auVar6[8] = SUB41(fVar21,0);
          auVar6[9] = (char)((uint)fVar21 >> 8);
          auVar6[10] = (char)((uint)fVar21 >> 0x10);
          auVar6[0xb] = (char)((uint)fVar21 >> 0x18);
          auVar6[0xc] = uVar22;
          auVar6[0xd] = uVar23;
          auVar6[0xe] = uVar24;
          auVar6[0xf] = uVar25;
          auVar28 = NEON_frsqrte(auVar6,4);
          auVar30._0_4_ = auVar28._0_4_ * fVar21;
          auVar30._4_4_ = auVar28._4_4_ * fVar17;
          auVar30._8_4_ = auVar28._8_4_ * fVar21;
          uVar7 = (undefined2)(CONCAT15(uVar23,CONCAT14(uVar22,fVar21)) >> 0x20);
          auVar30._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar7));
          auVar31 = NEON_frsqrts(auVar28,auVar30,4);
          auVar29._0_4_ = auVar28._0_4_ * auVar31._0_4_;
          auVar29._4_4_ = auVar28._4_4_ * auVar31._4_4_;
          auVar29._8_4_ = auVar28._8_4_ * auVar31._8_4_;
          auVar29._12_4_ = auVar28._12_4_ * auVar31._12_4_;
          auVar32._0_4_ = fVar21 * auVar29._0_4_;
          auVar32._4_4_ = fVar17 * auVar29._4_4_;
          auVar32._8_4_ = fVar21 * auVar29._8_4_;
          auVar32._12_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar7)) * auVar29._12_4_;
          iVar12 = -(uint)(fVar21 == 0.0);
          iVar8 = -(uint)(fVar17 == 0.0);
          auVar28 = NEON_frsqrts(auVar29,auVar32,4);
          fVar18 = fVar18 * auVar29._0_4_ * auVar28._0_4_;
          fVar17 = auVar29._4_4_ * auVar28._4_4_ * 0.0;
          uVar19 = FUN_01009820(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar8 >> 0x18)
                                         ,CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                                   ~(byte)((uint)iVar8 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar17 >> 8) &
                                                            ~(byte)((uint)iVar8 >> 8),
                                                            CONCAT14(SUB41(fVar17,0) & ~(byte)iVar8,
                                                                     CONCAT13((byte)((uint)fVar18 >>
                                                                                    0x18) &
                                                                              ~(byte)((uint)iVar12
                                                                                     >> 0x18),
                                                                              CONCAT12((byte)((uint)
                                                  fVar18 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar18 >> 8) &
                                                           ~(byte)((uint)iVar12 >> 8),
                                                           SUB41(fVar18,0) & ~(byte)iVar12))))))),
                                SUB41(fVar20 * auVar29._8_4_ * auVar28._8_4_,0) & ~-(fVar21 == 0.0))
          ;
          FUN_009c69bc(&local_70,local_78);
          plVar13 = local_70;
          auVar28 = FUN_009a7ff4(uVar19,0,ZEXT816(0));
          *(undefined1 *)(plVar13 + 0x1c) = 1;
          *(undefined1 (*) [16])(plVar13 + 0x18) = auVar28;
          if (local_70 != (long *)0x0) {
            lVar15 = local_70[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_70 + 0x20))();
            }
          }
        }
        local_68 = param_2[1];
        local_70 = (long *)*param_2;
        uStack_58 = uStack_168;
        local_60 = local_170;
        local_50 = 0;
        local_4c = 0;
        uVar14 = FUN_018d782c(param_1,&local_70);
        if ((uVar14 & 1) == 0) {
          bVar5 = false;
        }
        else {
          *(undefined4 *)(param_1 + 0x710) = 7;
          FUN_01a74a30(&local_70,param_1);
          if (local_70 == (long *)0x0) {
            local_188 = (long *)0x0;
          }
          else {
            FUN_00ac64cc(&local_188);
            plVar13 = local_70;
            if (local_70 != (long *)0x0) {
              plVar2 = local_70 + 1;
              do {
                iVar12 = (int)*plVar2 + -1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar5) {
                  *(int *)plVar2 = iVar12;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 == 0) {
                local_70[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_38 = (long *)*plVar13;
                FUN_02a44274(lVar15 + 0xd8,&local_38);
              }
            }
          }
          if ((local_188 != (long *)0x0) &&
             (FUN_01819ccc(local_188,local_160), local_188 != (long *)0x0)) {
            lVar15 = local_188[0xb];
            piVar1 = (int *)(lVar15 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar12 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*local_188 + 0x20))();
            }
          }
          bVar5 = true;
        }
        param_1 = 1;
        puVar11 = local_a8;
      }
      if (puVar11 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar11 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          puVar11[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_70 = (long *)*puVar11;
          FUN_02a44274(lVar15 + 0xd8,&local_70);
        }
      }
      if (local_c0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c0 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_70 = (long *)*local_c0;
          FUN_02a44274(lVar15 + 0xd8,&local_70);
        }
      }
      if (local_d0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_d0 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_d0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_70 = (long *)*local_d0;
          FUN_02a44274(lVar15 + 0xd8,&local_70);
        }
      }
      if (local_e0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_e0 + 1);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          local_e0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_70 = (long *)*local_e0;
          FUN_02a44274(lVar15 + 0xd8,&local_70);
        }
      }
      if (!bVar5) goto LAB_018d9a84;
      bVar5 = true;
      if (local_80 != (long *)0x0) goto LAB_018d9a90;
LAB_018d9aac:
      uVar16 = (uint)param_1;
    }
    if (bVar5) {
      bVar10 = 1;
      goto joined_r0x018d9b50;
    }
  }
  uVar16 = (uint)param_1;
  bVar10 = 0;
joined_r0x018d9b50:
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  return uVar16 & bVar10;
}


