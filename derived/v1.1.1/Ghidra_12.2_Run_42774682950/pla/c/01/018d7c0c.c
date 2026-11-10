/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d7c0c; name: FUN_018d7c0c
 */


uint FUN_018d7c0c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined2 uVar6;
  int iVar7;
  float fVar8;
  byte bVar9;
  undefined8 *puVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
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
  long *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined1 local_17c;
  undefined1 local_17b;
  long *local_168;
  long *local_160 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined1 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  undefined8 *local_c0 [2];
  undefined8 *local_b0 [2];
  undefined8 *local_a0 [2];
  undefined8 local_90;
  undefined8 *local_88 [2];
  undefined1 local_78;
  long *local_58;
  long *local_48;
  
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_00ac3fa4(&local_130,param_1 + 0x248);
  if (local_130 == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
  }
  else {
    FUN_00bd915c(&local_48);
    puVar10 = local_130;
    if (local_130 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_130 + 1);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 == 0) {
        local_130[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar14;
        local_160[0] = (long *)*puVar10;
        FUN_02a44274(lVar14 + 0xd8,local_160);
      }
    }
  }
  if (local_48 != (long *)0x0) {
    plVar16 = param_2 + 2;
    if (*plVar16 == 0) {
      local_58 = (long *)0x0;
LAB_018d7c64:
      bVar4 = false;
      if (local_58 == (long *)0x0) goto LAB_018d7c8c;
LAB_018d7c70:
      uVar15 = (uint)param_1;
      lVar14 = local_58[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar12 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar12 + -1 != 0) goto LAB_018d7c8c;
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
    else {
      FUN_018e32a0(&local_58);
      if (local_58 == (long *)0x0) goto LAB_018d7c64;
      FUN_01792e28(&local_130);
      local_128 = param_2[1];
      local_130 = (undefined8 *)*param_2;
      FUN_009c69bc(local_160,local_58);
      (**(code **)(*local_160[0] + 0x40))();
      uStack_118 = in_q3._8_8_;
      local_120 = in_q3._0_8_;
      if (local_160[0] != (long *)0x0) {
        lVar14 = local_160[0][0xb];
        piVar1 = (int *)(lVar14 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_160[0] + 0x20))();
        }
      }
      local_110 = 0;
      local_108 = FUN_01bb9954(local_58);
      local_d0 = 1;
      if (*plVar16 == 0) {
        local_160[0] = (long *)0x0;
      }
      else {
        FUN_018e32a0(local_160);
        if (local_160[0] != (long *)0x0) {
          if ((int)local_160[0][0x3e] == 3) {
            local_d8 = 1;
          }
          lVar14 = local_160[0][0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_160[0] + 0x20))();
          }
        }
      }
      local_c8 = *(undefined4 *)(param_2 + 4);
      FUN_00b63974(local_c0,param_2 + 5);
      FUN_00cfa028(local_b0,param_2 + 7);
      FUN_0095aa3c(local_a0,param_2 + 9);
      local_90 = param_2[0xb];
      FUN_00bd10a0(local_88,param_2 + 0xc);
      local_78 = *(undefined1 *)(param_2 + 0xe);
      FUN_018d49c8(local_160,param_1,&local_130);
      if (((char)local_160[0] == '\0') || (uVar13 = FUN_01bb7f9c(local_58), (uVar13 & 1) == 0)) {
        param_1 = 0;
        bVar4 = true;
        puVar10 = local_88[0];
      }
      else {
        fVar18 = (float)local_120 - (float)local_150;
        fVar20 = (float)uStack_118 - (float)uStack_148;
        fVar21 = (float)((ulong)uStack_118 >> 0x20) - (float)((ulong)uStack_148 >> 0x20);
        fVar17 = fVar18 * fVar18;
        fVar8 = fVar20 * fVar20;
        uVar22 = (undefined1)((uint)fVar8 >> 8);
        uVar23 = (undefined1)((uint)fVar8 >> 0x10);
        uVar24 = (undefined1)((uint)fVar8 >> 0x18);
        fVar21 = fVar21 * fVar21;
        uVar25 = (undefined1)((uint)fVar21 >> 8);
        uVar26 = (undefined1)((uint)fVar21 >> 0x10);
        uVar27 = (undefined1)((uint)fVar21 >> 0x18);
        auVar28._4_4_ = 0;
        auVar28._0_4_ = fVar17;
        auVar28[8] = SUB41(fVar8,0);
        auVar28[9] = uVar22;
        auVar28[10] = uVar23;
        auVar28[0xb] = uVar24;
        auVar28[0xc] = SUB41(fVar21,0);
        auVar28[0xd] = uVar25;
        auVar28[0xe] = uVar26;
        auVar28[0xf] = uVar27;
        auVar31._4_4_ = 0;
        auVar31._0_4_ = fVar17;
        auVar31[8] = SUB41(fVar8,0);
        auVar31[9] = uVar22;
        auVar31[10] = uVar23;
        auVar31[0xb] = uVar24;
        auVar31[0xc] = SUB41(fVar21,0);
        auVar31[0xd] = uVar25;
        auVar31[0xe] = uVar26;
        auVar31[0xf] = uVar27;
        auVar28 = NEON_ext(auVar28,auVar31,8,1);
        fVar17 = auVar28._0_4_ + fVar17;
        fVar8 = auVar28._4_4_ + 0.0;
        fVar21 = fVar17 + fVar8;
        fVar17 = fVar17 + fVar8;
        uVar22 = SUB41(fVar17,0);
        uVar23 = (undefined1)((uint)fVar17 >> 8);
        uVar24 = (undefined1)((uint)fVar17 >> 0x10);
        uVar25 = (undefined1)((uint)fVar17 >> 0x18);
        if (fVar21 != 0.0) {
          auVar5[4] = uVar22;
          auVar5._0_4_ = fVar21;
          auVar5[5] = uVar23;
          auVar5[6] = uVar24;
          auVar5[7] = uVar25;
          auVar5[8] = SUB41(fVar21,0);
          auVar5[9] = (char)((uint)fVar21 >> 8);
          auVar5[10] = (char)((uint)fVar21 >> 0x10);
          auVar5[0xb] = (char)((uint)fVar21 >> 0x18);
          auVar5[0xc] = uVar22;
          auVar5[0xd] = uVar23;
          auVar5[0xe] = uVar24;
          auVar5[0xf] = uVar25;
          auVar28 = NEON_frsqrte(auVar5,4);
          auVar30._0_4_ = auVar28._0_4_ * fVar21;
          auVar30._4_4_ = auVar28._4_4_ * fVar17;
          auVar30._8_4_ = auVar28._8_4_ * fVar21;
          uVar6 = (undefined2)(CONCAT15(uVar23,CONCAT14(uVar22,fVar21)) >> 0x20);
          auVar30._12_4_ = auVar28._12_4_ * (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar6));
          auVar31 = NEON_frsqrts(auVar28,auVar30,4);
          auVar29._0_4_ = auVar28._0_4_ * auVar31._0_4_;
          auVar29._4_4_ = auVar28._4_4_ * auVar31._4_4_;
          auVar29._8_4_ = auVar28._8_4_ * auVar31._8_4_;
          auVar29._12_4_ = auVar28._12_4_ * auVar31._12_4_;
          auVar32._0_4_ = fVar21 * auVar29._0_4_;
          auVar32._4_4_ = fVar17 * auVar29._4_4_;
          auVar32._8_4_ = fVar21 * auVar29._8_4_;
          auVar32._12_4_ = (float)CONCAT13(uVar25,CONCAT12(uVar24,uVar6)) * auVar29._12_4_;
          iVar12 = -(uint)(fVar21 == 0.0);
          iVar7 = -(uint)(fVar17 == 0.0);
          auVar28 = NEON_frsqrts(auVar29,auVar32,4);
          fVar18 = fVar18 * auVar29._0_4_ * auVar28._0_4_;
          fVar17 = auVar29._4_4_ * auVar28._4_4_ * 0.0;
          uVar19 = FUN_01009820(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18)
                                         ,CONCAT16((byte)((uint)fVar17 >> 0x10) &
                                                   ~(byte)((uint)iVar7 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar17 >> 8) &
                                                            ~(byte)((uint)iVar7 >> 8),
                                                            CONCAT14(SUB41(fVar17,0) & ~(byte)iVar7,
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
          FUN_009c69bc(&local_1a0,local_48);
          plVar11 = local_1a0;
          auVar28 = FUN_009a7ff4(uVar19,0,ZEXT816(0));
          *(undefined1 *)(plVar11 + 0x1c) = 1;
          *(undefined1 (*) [16])(plVar11 + 0x18) = auVar28;
          if (local_1a0 != (long *)0x0) {
            lVar14 = local_1a0[0xb];
            piVar1 = (int *)(lVar14 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar2 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar12 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*local_1a0 + 0x20))();
            }
          }
        }
        plVar11 = local_58;
        local_168 = local_48;
        if (local_48 != (long *)0x0) {
          lVar14 = local_48[0xb];
          if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar14 + 0x10) == 0) {
            uVar19 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
            *(undefined8 *)(lVar14 + 0x10) = uVar19;
          }
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        FUN_01bbb178(local_150,plVar11,&local_168);
        if (local_168 != (long *)0x0) {
          lVar14 = local_168[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar2 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_168 + 0x20))();
          }
        }
        local_180 = 0;
        local_17b = 0;
        local_198 = param_2[1];
        local_1a0 = (long *)*param_2;
        local_17c = 1;
        uStack_188 = uStack_148;
        local_190 = local_150;
        uVar13 = FUN_018d782c(param_1,&local_1a0);
        bVar4 = (uVar13 & 1) == 0;
        if (bVar4) {
          FUN_01bb8044(local_58);
        }
        else {
          *(undefined4 *)(param_1 + 0x710) = 2;
          FUN_018e4128(param_1 + 0x728,plVar16);
        }
        bVar4 = !bVar4;
        param_1 = 1;
        puVar10 = local_88[0];
      }
      if (puVar10 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar10 + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          puVar10[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_160[0] = (long *)*puVar10;
          FUN_02a44274(lVar14 + 0xd8,local_160);
        }
      }
      if (local_a0[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_a0[0] + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          local_a0[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_160[0] = (long *)*local_a0[0];
          FUN_02a44274(lVar14 + 0xd8,local_160);
        }
      }
      if (local_b0[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_b0[0] + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          local_b0[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_160[0] = (long *)*local_b0[0];
          FUN_02a44274(lVar14 + 0xd8,local_160);
        }
      }
      if (local_c0[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c0[0] + 1);
        do {
          iVar12 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar12 + -1 == 0) {
          local_c0[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_160[0] = (long *)*local_c0[0];
          FUN_02a44274(lVar14 + 0xd8,local_160);
        }
      }
      if (!bVar4) goto LAB_018d7c64;
      bVar4 = true;
      if (local_58 != (long *)0x0) goto LAB_018d7c70;
LAB_018d7c8c:
      uVar15 = (uint)param_1;
    }
    if (bVar4) {
      bVar9 = 1;
      goto joined_r0x018d8174;
    }
  }
  uVar15 = (uint)param_1;
  bVar9 = 0;
joined_r0x018d8174:
  if (local_48 != (long *)0x0) {
    lVar14 = local_48[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  return uVar15 & bVar9;
}


