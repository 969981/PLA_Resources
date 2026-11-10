/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02675570; name: FUN_02675570
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_02675570(long *param_1,undefined8 *param_2)

{
  int *piVar1;
  ulong uVar2;
  long *plVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined **local_cc0 [2];
  long local_cb0;
  long local_ca8;
  long local_ca0;
  long local_c98;
  long local_c90;
  long *local_c80;
  undefined8 uStack_c78;
  ulong local_c70 [4];
  ulong local_c50 [6];
  undefined4 local_c20 [2];
  undefined8 local_c18;
  undefined4 local_c10 [3];
  undefined1 local_c04 [4];
  undefined2 local_c00 [2];
  undefined4 local_bfc;
  undefined8 local_bf8 [2];
  undefined4 local_be8 [3];
  undefined1 local_bdc [4];
  undefined2 local_bd8 [2];
  undefined4 local_bd4;
  undefined8 local_bd0 [8];
  ulong local_b90;
  ulong local_ad0;
  ulong local_a10;
  ulong local_950;
  ulong local_890;
  ulong local_7d0;
  ulong local_710;
  ulong local_650;
  ulong local_590;
  ulong local_4d0;
  ulong local_410;
  ulong local_350;
  ulong local_290;
  ulong local_1d0;
  ulong local_110;
  long local_80;
  long lStack_78;
  
  uVar15 = (**(code **)(*param_1 + 0xf0))();
  if ((uVar15 & 1) != 0) {
    (**(code **)(*param_1 + 0x2a0))(param_1);
    if ((param_1[0xc5] == 0) || (*(int *)(param_1[0xc5] + 0xc) == 0)) {
      lVar18 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,1);
      (**(code **)(*param_1 + 0x278))((float)((double)*(long *)(lVar18 + 8) / 1000000000.0),param_1)
      ;
    }
    if (*(char *)(param_1[0xb8] + 0xa8) != '\0') {
      FUN_01a81438(param_1);
    }
  }
  uVar15 = (**(code **)(*param_1 + 0xf0))(param_1);
  if ((uVar15 & 1) == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x18c) = 0;
  uVar15 = (**(code **)(*param_1 + 0x1b0))();
  if ((uVar15 & 1) == 0) {
    return;
  }
  local_c80 = (long *)0x0;
  uStack_c78 = 0;
  FUN_00cf98c8(&local_c80,param_1 + 0x4c);
  plVar25 = local_c80;
  puVar11 = PTR_DAT_0437a668;
  puVar10 = PTR_DAT_0437a660;
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  plVar24 = (long *)0x0;
  if (local_c80 != (long *)0x0) {
    if (*(int *)((long)local_c80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_c80 + 0xc);
      iVar13 = *(int *)((long)local_c80 + 0xc);
      do {
        plVar24 = (long *)plVar25[2];
        if (((*puVar11 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar11), iVar14 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
            uVar17 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar17;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar10 = puVar9;
          __cxa_guard_release(puVar11);
        }
        while( true ) {
          if (plVar24 == (long *)0x0) goto LAB_026764ac;
          if (plVar24 == (long *)puVar10) break;
          plVar24 = (long *)*plVar24;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar18 = plVar25[3];
            plVar24 = (long *)0x0;
            plVar25 = local_c80;
            if (lVar18 != 0) {
              plVar24 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x0267604c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar14;
      } while (iVar14 != 0);
    }
LAB_026764ac:
    plVar24 = (long *)0x0;
    plVar25 = local_c80;
joined_r0x0267604c:
    if (plVar25 != (long *)0x0) {
      plVar16 = plVar25 + 1;
      do {
        iVar13 = (int)*plVar16 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar6) {
          *(int *)plVar16 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 0) {
        plVar25[2] = 0;
        local_c80 = plVar25;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_cc0[0] = (undefined **)*plVar25;
        FUN_02a44274(lVar18 + 0xd8,local_cc0);
      }
    }
  }
  local_c80 = (long *)0x0;
  uStack_c78 = 0;
  FUN_01a0703c(&local_c80,param_1 + 0x15a);
  plVar16 = local_c80;
  puVar11 = PTR_DAT_0437a590;
  puVar10 = PTR_DAT_0437a588;
  puVar9 = PTR_DAT_0437a580;
  puVar8 = PTR_DAT_043794d0;
  plVar25 = (long *)0x0;
  if (local_c80 != (long *)0x0) {
    if (*(int *)((long)local_c80 + 0xc) != 0) {
      piVar1 = (int *)((long)local_c80 + 0xc);
      iVar13 = *(int *)((long)local_c80 + 0xc);
      do {
        plVar25 = (long *)plVar16[2];
        if (((*puVar9 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar9), iVar14 != 0)) {
          if (((*PTR_DAT_0437a598 & 1) == 0) &&
             (iVar14 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar14 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar14 = __cxa_guard_acquire(puVar8), iVar14 != 0)) {
              uVar17 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar17;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar10 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a598);
          }
          *(undefined **)puVar11 = puVar10;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar25 == (long *)0x0) goto LAB_026764f8;
          if (plVar25 == (long *)puVar11) break;
          plVar25 = (long *)*plVar25;
        }
        iVar14 = *piVar1;
        if (iVar14 == iVar13) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar13 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar18 = plVar16[3];
            plVar25 = (long *)0x0;
            plVar16 = local_c80;
            if (lVar18 != 0) {
              plVar25 = (long *)(lVar18 + -0x50);
            }
            goto joined_r0x026761c8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar13 = iVar14;
      } while (iVar14 != 0);
    }
LAB_026764f8:
    plVar25 = (long *)0x0;
    plVar16 = local_c80;
joined_r0x026761c8:
    local_c80 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar3 = plVar16 + 1;
      do {
        iVar13 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar18 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar18;
        local_cc0[0] = (undefined **)*plVar16;
        FUN_02a44274(lVar18 + 0xd8,local_cc0);
      }
    }
  }
  if (plVar24 != (long *)0x0) {
    if (plVar25 == (long *)0x0) goto LAB_026759cc;
    FUN_009c69bc(&local_c80,param_1);
    lStack_78 = local_c80[0x1b];
    local_80 = local_c80[0x1a];
    if (local_c80 != (long *)0x0) {
      lVar18 = local_c80[0xb];
      piVar1 = (int *)(lVar18 + 0xc);
      do {
        iVar13 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar13 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*local_c80 + 0x20))();
      }
    }
    uVar12 = *(uint *)(param_1 + 0x18a);
    memset(&local_c80,0,0xc00);
    lVar18 = 0;
    do {
      lVar19 = lVar18 + 0xc0;
      *(undefined8 *)((long)local_c70 + lVar18 + 0x20) = 0;
      *(undefined8 *)((long)local_c70 + lVar18 + 0x30) = 0;
      *(undefined8 *)((long)local_c70 + lVar18 + 0x38) = 0;
      *(undefined4 *)((long)local_c20 + lVar18) = 0x7f7fffee;
      *(undefined8 *)((long)local_c20 + lVar18 + 8) = 0xffffffffffffffff;
      *(undefined4 *)((long)local_c10 + lVar18) = 0xffffff;
      *(undefined4 *)((long)local_c10 + lVar18 + 8) = 0xffffffff;
      local_c04[lVar18] = 0xf;
      *(undefined2 *)((long)local_c00 + lVar18) = 0xffff;
      *(undefined4 *)((long)local_c00 + lVar18 + 4) = 0;
      *(undefined4 *)((long)local_be8 + lVar18) = 0xffffff;
      *(undefined4 *)((long)local_be8 + lVar18 + 8) = 0xffffffff;
      local_bdc[lVar18] = 0xf;
      *(undefined2 *)((long)local_bd8 + lVar18) = 0xffff;
      *(undefined4 *)((long)local_bd8 + lVar18 + 4) = 0;
      *(undefined8 *)((long)local_c70 + lVar18 + 0x40) = 0;
      *(undefined8 *)((long)local_c70 + lVar18 + 0x48) = 0;
      *(undefined8 *)((long)local_bd0 + lVar18) = 0;
      *(undefined8 *)((long)local_bd0 + lVar18 + 8) = 0;
      *(undefined8 *)((long)local_bf8 + lVar18) = 0;
      *(undefined8 *)((long)local_bf8 + lVar18 + 8) = 0xffffffffffffffff;
      lVar18 = lVar19;
    } while (lVar19 != 0xc00);
    if ((uVar12 | 1) == 3) {
      uVar4 = 0x130ef010;
    }
    else {
      uVar4 = 0x120ee010;
    }
    if (*(int *)((long)plVar25 + 0x280) == 3) {
      local_cc0[0] = &PTR_FUN_04287c30;
      local_c98 = *(long *)((long)plVar25 + 0x2e8);
      local_ca8 = *(long *)((long)plVar25 + 0x2d8);
      local_cb0 = *(long *)((long)plVar25 + 0x2d0);
      local_ca0 = *(long *)((long)plVar25 + 0x2e0);
      local_c90 = *(long *)((long)plVar25 + 0x2f0);
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000,uVar4);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar18 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar18;
      uVar12 = FUN_02bf7af8(0,*(undefined8 *)(lVar18 + 0x230),local_cc0,&local_80,uVar4,&local_c80,
                            0x10);
LAB_02675888:
      if (0xf < uVar12) {
        uVar12 = 0x10;
      }
      if (0 < (int)(uVar12 - 1)) {
        puVar20 = local_bd0 + 4;
        uVar15 = 1;
        uVar21 = 0;
        do {
          uVar2 = uVar21 + 1;
          if (uVar2 < uVar12) {
            puVar22 = puVar20;
            uVar23 = uVar15;
            do {
              fVar26 = (float)local_c70[uVar21 * 0x18] * (float)*puVar22;
              fVar27 = (float)(local_c70[uVar21 * 0x18] >> 0x20) * (float)((ulong)*puVar22 >> 0x20);
              fVar28 = (float)local_c70[uVar21 * 0x18 + 1] * (float)puVar22[1];
              fVar29 = (float)(local_c70[uVar21 * 0x18 + 1] >> 0x20) *
                       (float)((ulong)puVar22[1] >> 0x20);
              auVar30._4_4_ = fVar27;
              auVar30._0_4_ = fVar26;
              auVar30._8_4_ = fVar28;
              auVar30._12_4_ = fVar29;
              auVar7._4_4_ = fVar27;
              auVar7._0_4_ = fVar26;
              auVar7._8_4_ = fVar28;
              auVar7._12_4_ = fVar29;
              auVar30 = NEON_ext(auVar30,auVar7,8,1);
              if (auVar30._0_4_ + fVar26 + auVar30._4_4_ + fVar27 <= 0.0) {
                *(undefined1 *)(param_1 + 0x18c) = 1;
                goto LAB_02675928;
              }
              uVar23 = uVar23 + 1;
              puVar22 = puVar22 + 0x18;
            } while (uVar23 < uVar12);
          }
          uVar15 = uVar15 + 1;
          puVar20 = puVar20 + 0x18;
          uVar21 = uVar2;
        } while ((long)uVar2 < (long)(int)(uVar12 - 1));
      }
    }
    else if (*(int *)((long)plVar25 + 0x280) == 1) {
      local_cc0[0] = &PTR_FUN_04287c08;
      local_ca8 = *(long *)((long)plVar25 + 0x2a8);
      local_cb0 = *(long *)((long)plVar25 + 0x2a0);
      local_ca0 = CONCAT44(local_ca0._4_4_,*(undefined4 *)((long)plVar25 + 0x2b0));
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000,uVar4);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar18 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar18;
      uVar12 = FUN_02bf7384(0,*(undefined8 *)(lVar18 + 0x230),local_cc0,&local_80,uVar4,&local_c80,
                            0x10);
      goto LAB_02675888;
    }
LAB_02675928:
    if ((local_110 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_110 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_110 - 0x11),(long)*(int *)(local_110 - 9) + 0x10);
    }
    if ((local_1d0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_1d0 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_1d0 - 0x11),(long)*(int *)(local_1d0 - 9) + 0x10);
    }
    if ((local_290 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_290 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_290 - 0x11),(long)*(int *)(local_290 - 9) + 0x10);
    }
    if ((local_350 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_350 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_350 - 0x11),(long)*(int *)(local_350 - 9) + 0x10);
    }
    if ((local_410 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_410 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_410 - 0x11),(long)*(int *)(local_410 - 9) + 0x10);
    }
    if ((local_4d0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_4d0 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_4d0 - 0x11),(long)*(int *)(local_4d0 - 9) + 0x10);
    }
    if ((local_590 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_590 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_590 - 0x11),(long)*(int *)(local_590 - 9) + 0x10);
    }
    if ((local_650 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_650 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_650 - 0x11),(long)*(int *)(local_650 - 9) + 0x10);
    }
    if ((local_710 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_710 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_710 - 0x11),(long)*(int *)(local_710 - 9) + 0x10);
    }
    if ((local_7d0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_7d0 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_7d0 - 0x11),(long)*(int *)(local_7d0 - 9) + 0x10);
    }
    if ((local_890 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_890 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_890 - 0x11),(long)*(int *)(local_890 - 9) + 0x10);
    }
    if ((local_950 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_950 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_950 - 0x11),(long)*(int *)(local_950 - 9) + 0x10);
    }
    if ((local_a10 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_a10 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_a10 - 0x11),(long)*(int *)(local_a10 - 9) + 0x10);
    }
    if ((local_ad0 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_ad0 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_ad0 - 0x11),(long)*(int *)(local_ad0 - 9) + 0x10);
    }
    if ((local_b90 & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_b90 - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_b90 - 0x11),(long)*(int *)(local_b90 - 9) + 0x10);
    }
    if ((local_c50[0] & 1) != 0) {
      lVar18 = tpidr_el0;
      lVar19 = *(long *)(lVar18 + 0x38d490);
      if (lVar19 == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar18 + 0x38d490) = lVar19;
      }
      plVar16 = *(long **)(*(long *)(lVar19 + 8) + 0x58);
      *(undefined8 *)(local_c50[0] - 0x11) = 0;
      (**(code **)(*plVar16 + 0x18))
                (plVar16,(undefined8 *)(local_c50[0] - 0x11),(long)*(int *)(local_c50[0] - 9) + 0x10
                );
    }
  }
  if (plVar25 != (long *)0x0) {
    lVar18 = *(long *)((long)plVar25 + 0x58);
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar13 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
  }
  if (plVar24 == (long *)0x0) {
    return;
  }
LAB_026759cc:
  lVar18 = plVar24[0xb];
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar13 = *piVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar13 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar13 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  return;
}


