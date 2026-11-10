/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c68af0; name: FUN_00c68af0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00c68af0(long *param_1,long *param_2,long *param_3)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long local_358;
  long local_350;
  long local_348;
  long *local_340;
  ulong local_338;
  long local_330;
  long lStack_328;
  int local_320;
  long local_318;
  long local_310;
  long local_308;
  long local_300;
  long *local_2f8;
  ulong local_2f0;
  long local_2e8;
  long lStack_2e0;
  int local_2d8;
  long local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long *local_2b0;
  ulong local_2a8;
  long local_2a0;
  long lStack_298;
  int local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  long *local_268;
  ulong local_260;
  long lStack_258;
  long local_250;
  int local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long *local_220;
  ulong local_218;
  long local_210;
  long lStack_208;
  int local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  long *local_1d8;
  ulong local_1d0;
  long local_1c8;
  long lStack_1c0;
  int local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  ulong local_188;
  long local_180;
  long lStack_178;
  int local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long *local_148;
  ulong local_140;
  long local_138;
  long local_130;
  int local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  long *local_100;
  ulong local_f8;
  long local_f0;
  long local_e8;
  int local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long *local_b8;
  ulong local_b0;
  long local_a8;
  long lStack_a0;
  int local_98;
  long local_90;
  long *local_88;
  ulong uStack_80;
  long local_78;
  long lStack_70;
  
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  plVar19 = param_2 + 3;
  plVar15 = (long *)*plVar19;
  local_b0 = param_2[4];
  local_a8 = param_2[5];
  lStack_a0 = param_2[6];
  lVar20 = param_2[1] - *param_2;
  local_b8 = plVar15;
  if (lVar20 != 0) {
    uVar14 = local_b0;
    if (0x7ffffffffffffffe < local_b0) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar20,0x10);
    if (lVar23 == 0) {
      (**(code **)(*plVar15 + 0xb8))(plVar15);
    }
    local_c0 = lVar23 + (lVar20 >> 4) * 0x10;
    lVar20 = *param_2;
    lVar16 = param_2[1];
    local_d0 = lVar23;
    local_c8 = lVar23;
    if (lVar20 != lVar16) {
      do {
        FUN_00bac10c(&local_b8,local_c8,lVar20);
        lVar20 = lVar20 + 0x250;
        local_c8 = local_c8 + 0x250;
      } while (lVar16 != lVar20);
    }
  }
  local_98 = (int)param_2[7];
  local_90 = param_2[8];
  local_118 = 0;
  local_108 = 0;
  local_110 = 0;
  local_100 = (long *)param_1[3];
  local_e8 = param_1[6];
  local_f8 = param_1[4];
  local_f0 = param_1[5];
  lVar20 = param_1[1] - *param_1;
  if (lVar20 != 0) {
    uVar14 = local_f8;
    if (0x7ffffffffffffffe < local_f8) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (**(code **)(*local_100 + 0x10))(local_100,lVar20,0x10);
    if (lVar23 == 0) {
      (**(code **)(*local_100 + 0xb8))();
    }
    local_108 = lVar23 + (lVar20 >> 4) * 0x10;
    lVar20 = *param_1;
    lVar16 = param_1[1];
    local_118 = lVar23;
    local_110 = lVar23;
    if (lVar20 != lVar16) {
      do {
        FUN_00bac10c(&local_100,local_110,lVar20);
        lVar20 = lVar20 + 0x250;
        local_110 = local_110 + 0x250;
      } while (lVar16 != lVar20);
    }
  }
  iVar9 = local_98;
  lVar23 = local_118;
  plVar22 = (long *)PTR_DAT_043794a8;
  plVar15 = (long *)PTR_DAT_043794a0;
  pbVar18 = PTR_DAT_04379498;
  iVar3 = (int)param_1[7];
  local_d8 = param_1[8];
  local_e0 = iVar3;
  lVar20 = local_d0;
  if (local_118 != 0) {
    if (local_110 != local_118) {
      puVar17 = *(undefined8 **)(local_110 + -0x240);
      lVar20 = local_110 + -0x250;
      if (puVar17 == (undefined8 *)0x0) goto LAB_00c6a600;
      piVar1 = (int *)(puVar17 + 1);
      do {
        iVar13 = *piVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar13;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      do {
        if (iVar13 == 0) {
          puVar17[2] = 0;
          if (((*pbVar18 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0,
             plVar22 = (long *)PTR_DAT_043794a8, iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
            plVar15 = (long *)PTR_DAT_043794a0;
            plVar22 = (long *)PTR_DAT_043794a8;
          }
          lVar16 = *plVar15;
          *plVar22 = lVar16;
          local_88 = (long *)*puVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
          pbVar18 = PTR_DAT_04379498;
          plVar15 = (long *)PTR_DAT_043794a0;
        }
LAB_00c6a600:
        do {
          if (lVar20 == lVar23) goto LAB_00c6a638;
          puVar17 = (undefined8 *)(lVar20 + -0x240);
          lVar20 = lVar20 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
        } while (puVar17 == (undefined8 *)0x0);
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar13 = *piVar1 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      } while( true );
    }
LAB_00c6a638:
    plVar15 = local_100;
    lVar20 = local_118;
    lVar16 = local_108 - local_118;
    local_110 = lVar23;
    uVar14 = (**(code **)(*local_100 + 0xc0))(local_100);
    if ((uVar14 & 1) != 0) {
      lVar23 = tpidr_el0;
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar20,lVar16,0x10);
        lVar20 = local_d0;
        goto joined_r0x00c6a864;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,lVar16,0x10);
    lVar20 = local_d0;
  }
joined_r0x00c6a864:
  local_d0 = lVar20;
  if (lVar20 != 0) {
    if (local_c8 != lVar20) {
      lVar23 = local_c8 + -0x250;
      puVar17 = *(undefined8 **)(local_c8 + -0x240);
      if (puVar17 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar17 + 1);
        do {
          iVar13 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar13 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 + -1 == 0) {
          puVar17[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_88 = (long *)*puVar17;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
        }
      }
      if (lVar23 != lVar20) {
        pbVar18 = PTR_DAT_04379498;
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar22 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar23 + -0x240);
          lVar23 = lVar23 + -0x250;
          puVar17 = (undefined8 *)*puVar17;
          if (puVar17 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar17 + 1);
            do {
              iVar13 = *piVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar13 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 + -1 == 0) {
              puVar17[2] = 0;
              if (((*pbVar18 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0
                 , plVar22 = (long *)PTR_DAT_043794a8, iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar22 = (long *)PTR_DAT_043794a8;
              }
              lVar16 = *plVar15;
              *plVar22 = lVar16;
              local_88 = (long *)*puVar17;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
              pbVar18 = PTR_DAT_04379498;
            }
          }
        } while (lVar23 != lVar20);
      }
    }
    plVar15 = local_b8;
    lVar23 = local_d0;
    lVar16 = local_c0 - local_d0;
    local_c8 = lVar20;
    uVar14 = (**(code **)(*local_b8 + 0xc0))(local_b8);
    if ((uVar14 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar23,lVar16,0x10);
        goto LAB_00c68bbc;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar23,lVar16,0x10);
  }
LAB_00c68bbc:
  local_88 = (long *)param_3[3];
  lStack_70 = param_3[6];
  uStack_80 = param_3[4];
  local_78 = param_3[5];
  if (iVar9 < iVar3) {
    local_280 = 0;
    local_278 = 0;
    local_270 = 0;
    lVar20 = param_3[1] - *param_3;
    local_268 = local_88;
    local_260 = uStack_80;
    lStack_258 = local_78;
    local_250 = lStack_70;
    if (lVar20 != 0) {
      uVar14 = uStack_80;
      if (0x7ffffffffffffffe < uStack_80) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar23 = (**(code **)(*local_88 + 0x10))(local_88,lVar20,0x10);
      if (lVar23 == 0) {
        (**(code **)(*local_268 + 0xb8))();
      }
      local_270 = lVar23 + (lVar20 >> 4) * 0x10;
      lVar20 = *param_3;
      lVar16 = param_3[1];
      local_280 = lVar23;
      local_278 = lVar23;
      if (lVar20 != lVar16) {
        do {
          FUN_00bac10c(&local_268,local_278,lVar20);
          lVar20 = lVar20 + 0x250;
          local_278 = local_278 + 0x250;
        } while (lVar16 != lVar20);
      }
    }
    local_248 = (int)param_3[7];
    local_240 = param_3[8];
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b0 = (long *)*plVar19;
    local_2a8 = param_2[4];
    local_2a0 = param_2[5];
    lStack_298 = param_2[6];
    local_2b8 = 0;
    lVar20 = param_2[1] - *param_2;
    if (lVar20 != 0) {
      uVar14 = local_2a8;
      if (0x7ffffffffffffffe < local_2a8) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar23 = (**(code **)(*local_2b0 + 0x10))(local_2b0,lVar20,0x10);
      if (lVar23 == 0) {
        (**(code **)(*local_2b0 + 0xb8))();
      }
      local_2b8 = lVar23 + (lVar20 >> 4) * 0x10;
      lVar20 = *param_2;
      lVar16 = param_2[1];
      local_2c8 = lVar23;
      local_2c0 = lVar23;
      if (lVar20 != lVar16) {
        do {
          FUN_00bac10c(&local_2b0,local_2c0,lVar20);
          lVar20 = lVar20 + 0x250;
          local_2c0 = local_2c0 + 0x250;
        } while (lVar16 != lVar20);
      }
    }
    iVar9 = local_248;
    lVar16 = local_2c8;
    iVar3 = (int)param_2[7];
    local_288 = param_2[8];
    local_290 = iVar3;
    lVar20 = local_280;
    lVar23 = local_278;
    if (local_2c8 != 0) {
      if (local_2c0 != local_2c8) {
        plVar15 = *(long **)(local_2c0 + -0x240);
        lVar20 = local_2c0 + -0x250;
        if (plVar15 == (long *)0x0) goto LAB_00c6aa60;
        plVar22 = plVar15 + 1;
        do {
          iVar13 = (int)*plVar22 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *(int *)plVar22 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          if (iVar13 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_88 = (long *)*plVar15;
            FUN_02a44274(lVar23 + 0xd8,&local_88);
          }
LAB_00c6aa60:
          do {
            if (lVar20 == lVar16) goto LAB_00c6aa98;
            puVar17 = (undefined8 *)(lVar20 + -0x240);
            lVar20 = lVar20 + -0x250;
            plVar15 = (long *)*puVar17;
          } while (plVar15 == (long *)0x0);
          plVar22 = plVar15 + 1;
          do {
            iVar13 = (int)*plVar22 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar5) {
              *(int *)plVar22 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        } while( true );
      }
LAB_00c6aa98:
      plVar15 = local_2b0;
      lVar20 = local_2c8;
      lVar23 = local_2b8 - local_2c8;
      local_2c0 = lVar16;
      uVar14 = (**(code **)(*local_2b0 + 0xc0))(local_2b0);
      if ((uVar14 & 1) != 0) {
        lVar16 = tpidr_el0;
        if (*(char *)(lVar16 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar16 + 0x38d488) = 1;
          *(undefined8 *)(lVar16 + 0x38d478) = 0;
          *(undefined8 *)(lVar16 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar16 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar16 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar20,lVar23,0x10);
          lVar20 = local_280;
          lVar23 = local_278;
          goto joined_r0x00c6acb0;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,lVar23,0x10);
      lVar20 = local_280;
      lVar23 = local_278;
    }
joined_r0x00c6acb0:
    local_280 = lVar20;
    local_278 = lVar23;
    if (lVar20 != 0) {
      if (lVar23 != lVar20) {
        plVar15 = *(long **)(lVar23 + -0x240);
        puVar6 = PTR_DAT_043794a8;
        puVar7 = PTR_DAT_043794a8;
        if (plVar15 != (long *)0x0) {
          plVar22 = plVar15 + 1;
          do {
            iVar13 = (int)*plVar22 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar5) {
              *(int *)plVar22 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          puVar6 = PTR_DAT_043794a8;
          puVar7 = PTR_DAT_043794a8;
          if (iVar13 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_88 = (long *)*plVar15;
            FUN_02a44274(lVar16 + 0xd8,&local_88);
            puVar6 = PTR_DAT_043794a8;
            puVar7 = PTR_DAT_043794a8;
          }
        }
        while (PTR_DAT_043794a8 = puVar7, puVar7 = PTR_DAT_043794a8, lVar16 = lVar23 + -0x250,
              PTR_DAT_043794a8 = puVar6, lVar16 != lVar20) {
          plVar15 = *(long **)(lVar23 + -0x490);
          lVar23 = lVar16;
          if (plVar15 != (long *)0x0) {
            plVar22 = plVar15 + 1;
            do {
              iVar13 = (int)*plVar22 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar5) {
                *(int *)plVar22 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            puVar6 = PTR_DAT_043794a8;
            if (iVar13 == 0) {
              plVar15[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)puVar7 = lVar16;
              local_88 = (long *)*plVar15;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
              puVar6 = PTR_DAT_043794a8;
            }
          }
        }
      }
      plVar15 = local_268;
      lVar23 = local_280;
      lVar16 = local_270 - local_280;
      local_278 = lVar20;
      uVar14 = (**(code **)(*local_268 + 0xc0))(local_268);
      if ((uVar14 & 1) != 0) {
        lVar20 = tpidr_el0;
        if (*(char *)(lVar20 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar20 + 0x38d488) = 1;
          *(undefined8 *)(lVar20 + 0x38d478) = 0;
          *(undefined8 *)(lVar20 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar20 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar23,lVar16,0x10);
          goto LAB_00c698c0;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar23,lVar16,0x10);
    }
LAB_00c698c0:
    if (iVar9 < iVar3) {
      FUN_00c68810(param_1,param_3);
      return 1;
    }
    FUN_00c68810(param_1,param_2);
    local_310 = 0;
    local_308 = 0;
    local_2f8 = (long *)param_3[3];
    local_2f0 = param_3[4];
    local_2e8 = param_3[5];
    lStack_2e0 = param_3[6];
    local_300 = 0;
    lVar20 = param_3[1] - *param_3;
    if (lVar20 != 0) {
      uVar14 = local_2f0;
      if (0x7ffffffffffffffe < local_2f0) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar23 = (**(code **)(*local_2f8 + 0x10))(local_2f8,lVar20,0x10);
      if (lVar23 == 0) {
        (**(code **)(*local_2f8 + 0xb8))();
      }
      local_300 = lVar23 + (lVar20 >> 4) * 0x10;
      lVar20 = *param_3;
      lVar16 = param_3[1];
      local_310 = lVar23;
      local_308 = lVar23;
      if (lVar20 != lVar16) {
        do {
          FUN_00bac10c(&local_2f8,local_308,lVar20);
          lVar20 = lVar20 + 0x250;
          local_308 = local_308 + 0x250;
        } while (lVar16 != lVar20);
      }
    }
    local_2d8 = (int)param_3[7];
    local_2d0 = param_3[8];
    local_358 = 0;
    local_340 = (long *)*plVar19;
    local_338 = param_2[4];
    local_330 = param_2[5];
    lStack_328 = param_2[6];
    local_348 = 0;
    lVar20 = param_2[1] - *param_2;
    if (lVar20 == 0) {
      local_350 = 0;
    }
    else {
      uVar14 = local_338;
      if (0x7ffffffffffffffe < local_338) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      local_358 = (**(code **)(*local_340 + 0x10))(local_340,lVar20,0x10);
      if (local_358 == 0) {
        (**(code **)(*local_340 + 0xb8))();
      }
      local_348 = local_358 + (lVar20 >> 4) * 0x10;
      lVar20 = *param_2;
      lVar23 = param_2[1];
      local_350 = local_358;
      if (lVar20 != lVar23) {
        do {
          FUN_00bac10c(&local_340,local_350,lVar20);
          lVar20 = lVar20 + 0x250;
          local_350 = local_350 + 0x250;
        } while (lVar23 != lVar20);
      }
    }
    iVar9 = local_2d8;
    iVar3 = (int)param_2[7];
    local_318 = param_2[8];
    local_320 = iVar3;
    lVar23 = local_310;
    lVar20 = local_308;
    if (local_358 != 0) {
      if (local_350 != local_358) {
        plVar15 = *(long **)(local_350 + -0x240);
        puVar6 = PTR_DAT_04379498;
        puVar7 = PTR_DAT_043794a0;
        puVar8 = PTR_DAT_043794a8;
        puVar10 = PTR_DAT_043794a8;
        puVar11 = PTR_DAT_043794a0;
        puVar12 = PTR_DAT_04379498;
        if (plVar15 != (long *)0x0) {
          plVar19 = plVar15 + 1;
          do {
            iVar13 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          puVar6 = PTR_DAT_04379498;
          puVar7 = PTR_DAT_043794a0;
          puVar8 = PTR_DAT_043794a8;
          puVar10 = PTR_DAT_043794a8;
          puVar11 = PTR_DAT_043794a0;
          puVar12 = PTR_DAT_04379498;
          if (iVar13 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar20 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar20;
            local_88 = (long *)*plVar15;
            FUN_02a44274(lVar20 + 0xd8,&local_88);
            puVar6 = PTR_DAT_04379498;
            puVar7 = PTR_DAT_043794a0;
            puVar8 = PTR_DAT_043794a8;
            puVar10 = PTR_DAT_043794a8;
            puVar11 = PTR_DAT_043794a0;
            puVar12 = PTR_DAT_04379498;
          }
        }
        while (PTR_DAT_04379498 = puVar12, PTR_DAT_043794a0 = puVar11, PTR_DAT_043794a8 = puVar10,
              puVar10 = PTR_DAT_043794a8, puVar11 = PTR_DAT_043794a0, puVar12 = PTR_DAT_04379498,
              lVar20 = local_350 + -0x250, PTR_DAT_04379498 = puVar6, PTR_DAT_043794a0 = puVar7,
              PTR_DAT_043794a8 = puVar8, lVar20 != local_358) {
          plVar15 = *(long **)(local_350 + -0x490);
          local_350 = lVar20;
          if (plVar15 != (long *)0x0) {
            plVar19 = plVar15 + 1;
            do {
              iVar13 = (int)*plVar19 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *(int *)plVar19 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            puVar6 = PTR_DAT_04379498;
            puVar7 = PTR_DAT_043794a0;
            puVar8 = PTR_DAT_043794a8;
            if (iVar13 == 0) {
              plVar15[2] = 0;
              if (((*puVar12 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar12), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar11,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar12);
              }
              lVar20 = *(long *)puVar11;
              *(long *)puVar10 = lVar20;
              local_88 = (long *)*plVar15;
              FUN_02a44274(lVar20 + 0xd8,&local_88);
              puVar6 = PTR_DAT_04379498;
              puVar7 = PTR_DAT_043794a0;
              puVar8 = PTR_DAT_043794a8;
            }
          }
        }
      }
      plVar15 = local_340;
      uVar14 = (**(code **)(*local_340 + 0xc0))(local_340);
      if ((uVar14 & 1) != 0) {
        lVar20 = tpidr_el0;
        if (*(char *)(lVar20 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar20 + 0x38d488) = 1;
          *(undefined8 *)(lVar20 + 0x38d478) = 0;
          *(undefined8 *)(lVar20 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar20 + 0x38d480)) {
          FUN_02bcc824(plVar15,local_358,local_348 - local_358,0x10);
          lVar23 = local_310;
          lVar20 = local_308;
          goto joined_r0x00c69954;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,local_358,local_348 - local_358,0x10);
      lVar23 = local_310;
      lVar20 = local_308;
    }
joined_r0x00c69954:
    local_310 = lVar23;
    local_308 = lVar20;
    if (lVar23 != 0) {
      if (lVar20 != lVar23) {
        plVar15 = *(long **)(lVar20 + -0x240);
        puVar6 = PTR_DAT_04379498;
        puVar7 = PTR_DAT_043794a0;
        puVar8 = PTR_DAT_043794a8;
        puVar10 = PTR_DAT_043794a8;
        puVar11 = PTR_DAT_043794a0;
        puVar12 = PTR_DAT_04379498;
        if (plVar15 != (long *)0x0) {
          plVar19 = plVar15 + 1;
          do {
            iVar13 = (int)*plVar19 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
            if (bVar5) {
              *(int *)plVar19 = iVar13;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          puVar6 = PTR_DAT_04379498;
          puVar7 = PTR_DAT_043794a0;
          puVar8 = PTR_DAT_043794a8;
          puVar10 = PTR_DAT_043794a8;
          puVar11 = PTR_DAT_043794a0;
          puVar12 = PTR_DAT_04379498;
          if (iVar13 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_88 = (long *)*plVar15;
            FUN_02a44274(lVar16 + 0xd8,&local_88);
            puVar6 = PTR_DAT_04379498;
            puVar7 = PTR_DAT_043794a0;
            puVar8 = PTR_DAT_043794a8;
            puVar10 = PTR_DAT_043794a8;
            puVar11 = PTR_DAT_043794a0;
            puVar12 = PTR_DAT_04379498;
          }
        }
        while (PTR_DAT_04379498 = puVar12, PTR_DAT_043794a0 = puVar11, PTR_DAT_043794a8 = puVar10,
              puVar10 = PTR_DAT_043794a8, puVar11 = PTR_DAT_043794a0, puVar12 = PTR_DAT_04379498,
              lVar16 = lVar20 + -0x250, PTR_DAT_04379498 = puVar6, PTR_DAT_043794a0 = puVar7,
              PTR_DAT_043794a8 = puVar8, lVar16 != lVar23) {
          plVar15 = *(long **)(lVar20 + -0x490);
          lVar20 = lVar16;
          if (plVar15 != (long *)0x0) {
            plVar19 = plVar15 + 1;
            do {
              iVar13 = (int)*plVar19 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
              if (bVar5) {
                *(int *)plVar19 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            puVar6 = PTR_DAT_04379498;
            puVar7 = PTR_DAT_043794a0;
            puVar8 = PTR_DAT_043794a8;
            if (iVar13 == 0) {
              plVar15[2] = 0;
              if (((*puVar12 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar12), iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar11,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar12);
              }
              lVar16 = *(long *)puVar11;
              *(long *)puVar10 = lVar16;
              local_88 = (long *)*plVar15;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
              puVar6 = PTR_DAT_04379498;
              puVar7 = PTR_DAT_043794a0;
              puVar8 = PTR_DAT_043794a8;
            }
          }
        }
      }
      plVar15 = local_2f8;
      lVar20 = local_310;
      lVar16 = local_300 - local_310;
      local_308 = lVar23;
      uVar14 = (**(code **)(*local_2f8 + 0xc0))(local_2f8);
      if ((uVar14 & 1) != 0) {
        lVar23 = tpidr_el0;
        if (*(char *)(lVar23 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar23 + 0x38d488) = 1;
          *(undefined8 *)(lVar23 + 0x38d478) = 0;
          *(undefined8 *)(lVar23 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar23 + 0x38d480)) {
          FUN_02bcc824(plVar15,lVar20,lVar16,0x10);
          goto joined_r0x00c6a0d8;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,lVar16,0x10);
    }
joined_r0x00c6a0d8:
    if (iVar3 <= iVar9) {
      return 1;
    }
    param_1 = param_2;
    goto LAB_00c69334;
  }
  local_150 = 0;
  local_158 = 0;
  local_160 = 0;
  lVar20 = param_3[1] - *param_3;
  local_148 = local_88;
  local_140 = uStack_80;
  local_138 = local_78;
  local_130 = lStack_70;
  if (lVar20 != 0) {
    uVar14 = uStack_80;
    if (0x7ffffffffffffffe < uStack_80) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (**(code **)(*local_88 + 0x10))(local_88,lVar20,0x10);
    if (lVar23 == 0) {
      (**(code **)(*local_148 + 0xb8))();
    }
    local_150 = lVar23 + (lVar20 >> 4) * 0x10;
    lVar20 = *param_3;
    lVar16 = param_3[1];
    local_160 = lVar23;
    local_158 = lVar23;
    if (lVar20 != lVar16) {
      do {
        FUN_00bac10c(&local_148,local_158,lVar20);
        lVar20 = lVar20 + 0x250;
        local_158 = local_158 + 0x250;
      } while (lVar16 != lVar20);
    }
  }
  local_128 = (int)param_3[7];
  local_120 = param_3[8];
  local_1a8 = 0;
  local_1a0 = 0;
  local_190 = (long *)*plVar19;
  local_188 = param_2[4];
  local_180 = param_2[5];
  lStack_178 = param_2[6];
  local_198 = 0;
  lVar20 = param_2[1] - *param_2;
  if (lVar20 != 0) {
    uVar14 = local_188;
    if (0x7ffffffffffffffe < local_188) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (**(code **)(*local_190 + 0x10))(local_190,lVar20,0x10);
    if (lVar23 == 0) {
      (**(code **)(*local_190 + 0xb8))();
    }
    local_198 = lVar23 + (lVar20 >> 4) * 0x10;
    lVar20 = *param_2;
    lVar16 = param_2[1];
    local_1a8 = lVar23;
    local_1a0 = lVar23;
    if (lVar20 != lVar16) {
      do {
        FUN_00bac10c(&local_190,local_1a0,lVar20);
        lVar20 = lVar20 + 0x250;
        local_1a0 = local_1a0 + 0x250;
      } while (lVar16 != lVar20);
    }
  }
  iVar9 = local_128;
  lVar23 = local_1a8;
  iVar3 = (int)param_2[7];
  local_168 = param_2[8];
  local_170 = iVar3;
  lVar20 = local_160;
  if (local_1a8 != 0) {
    if (local_1a0 != local_1a8) {
      plVar15 = *(long **)(local_1a0 + -0x240);
      lVar20 = local_1a0 + -0x250;
      if (plVar15 != (long *)0x0) {
        plVar22 = plVar15 + 1;
        do {
          iVar13 = (int)*plVar22 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *(int *)plVar22 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_88 = (long *)*plVar15;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
        }
      }
      if (lVar20 != lVar23) {
        pbVar18 = PTR_DAT_04379498;
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar22 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar20 + -0x240);
          lVar20 = lVar20 + -0x250;
          plVar21 = (long *)*puVar17;
          if (plVar21 != (long *)0x0) {
            plVar2 = plVar21 + 1;
            do {
              iVar13 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              plVar21[2] = 0;
              if (((*pbVar18 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0
                 , plVar22 = (long *)PTR_DAT_043794a8, iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar22 = (long *)PTR_DAT_043794a8;
              }
              lVar16 = *plVar15;
              *plVar22 = lVar16;
              local_88 = (long *)*plVar21;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
              pbVar18 = PTR_DAT_04379498;
              plVar15 = (long *)PTR_DAT_043794a0;
            }
          }
        } while (lVar20 != lVar23);
      }
    }
    plVar15 = local_190;
    lVar20 = local_1a8;
    lVar16 = local_198 - local_1a8;
    local_1a0 = lVar23;
    uVar14 = (**(code **)(*local_190 + 0xc0))(local_190);
    if ((uVar14 & 1) != 0) {
      lVar23 = tpidr_el0;
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar20,lVar16,0x10);
        lVar20 = local_160;
        goto joined_r0x00c697d0;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,lVar16,0x10);
    lVar20 = local_160;
  }
joined_r0x00c697d0:
  local_160 = lVar20;
  if (lVar20 != 0) {
    if (local_158 != lVar20) {
      lVar23 = local_158 + -0x250;
      plVar15 = *(long **)(local_158 + -0x240);
      if (plVar15 != (long *)0x0) {
        plVar22 = plVar15 + 1;
        do {
          iVar13 = (int)*plVar22 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar5) {
            *(int *)plVar22 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_88 = (long *)*plVar15;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
        }
      }
      if (lVar23 != lVar20) {
        pbVar18 = PTR_DAT_04379498;
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar22 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar23 + -0x240);
          lVar23 = lVar23 + -0x250;
          plVar21 = (long *)*puVar17;
          if (plVar21 != (long *)0x0) {
            plVar2 = plVar21 + 1;
            do {
              iVar13 = (int)*plVar2 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar5) {
                *(int *)plVar2 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              plVar21[2] = 0;
              if (((*pbVar18 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), plVar15 = (long *)PTR_DAT_043794a0
                 , plVar22 = (long *)PTR_DAT_043794a8, iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar22 = (long *)PTR_DAT_043794a8;
              }
              lVar16 = *plVar15;
              *plVar22 = lVar16;
              local_88 = (long *)*plVar21;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
              pbVar18 = PTR_DAT_04379498;
            }
          }
        } while (lVar23 != lVar20);
      }
    }
    plVar15 = local_148;
    lVar23 = local_160;
    lVar16 = local_150 - local_160;
    local_158 = lVar20;
    uVar14 = (**(code **)(*local_148 + 0xc0))(local_148);
    if ((uVar14 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar23,lVar16,0x10);
        goto joined_r0x00c69294;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar23,lVar16,0x10);
  }
joined_r0x00c69294:
  if (iVar3 <= iVar9) {
    return 0;
  }
  FUN_00c68810(param_2,param_3);
  local_1f0 = 0;
  local_1e8 = 0;
  local_1d8 = (long *)*plVar19;
  local_1d0 = param_2[4];
  local_1c8 = param_2[5];
  lStack_1c0 = param_2[6];
  local_1e0 = 0;
  lVar20 = param_2[1] - *param_2;
  if (lVar20 != 0) {
    uVar14 = local_1d0;
    if (0x7ffffffffffffffe < local_1d0) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (**(code **)(*local_1d8 + 0x10))(local_1d8,lVar20,0x10);
    if (lVar23 == 0) {
      (**(code **)(*local_1d8 + 0xb8))();
    }
    local_1e0 = lVar23 + (lVar20 >> 4) * 0x10;
    lVar20 = *param_2;
    lVar16 = param_2[1];
    local_1f0 = lVar23;
    local_1e8 = lVar23;
    if (lVar20 != lVar16) {
      do {
        FUN_00bac10c(&local_1d8,local_1e8,lVar20);
        lVar20 = lVar20 + 0x250;
        local_1e8 = local_1e8 + 0x250;
      } while (lVar16 != lVar20);
    }
  }
  local_1b8 = (int)param_2[7];
  local_1b0 = param_2[8];
  local_238 = 0;
  local_230 = 0;
  local_220 = (long *)param_1[3];
  local_218 = param_1[4];
  local_210 = param_1[5];
  lStack_208 = param_1[6];
  local_228 = 0;
  lVar20 = param_1[1] - *param_1;
  if (lVar20 != 0) {
    uVar14 = local_218;
    if (0x7ffffffffffffffe < local_218) {
      uVar14 = 0x7fffffffffffffff;
    }
    if (uVar14 < (ulong)((lVar20 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar23 = (**(code **)(*local_220 + 0x10))(local_220,lVar20,0x10);
    if (lVar23 == 0) {
      (**(code **)(*local_220 + 0xb8))();
    }
    local_228 = lVar23 + (lVar20 >> 4) * 0x10;
    lVar20 = *param_1;
    lVar16 = param_1[1];
    local_238 = lVar23;
    local_230 = lVar23;
    if (lVar20 != lVar16) {
      do {
        FUN_00bac10c(&local_220,local_230,lVar20);
        lVar20 = lVar20 + 0x250;
        local_230 = local_230 + 0x250;
      } while (lVar16 != lVar20);
    }
  }
  iVar9 = local_1b8;
  lVar23 = local_238;
  iVar3 = (int)param_1[7];
  local_1f8 = param_1[8];
  local_200 = iVar3;
  lVar20 = local_1f0;
  if (local_238 != 0) {
    if (local_230 != local_238) {
      plVar15 = *(long **)(local_230 + -0x240);
      lVar20 = local_230 + -0x250;
      if (plVar15 != (long *)0x0) {
        plVar19 = plVar15 + 1;
        do {
          iVar13 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_88 = (long *)*plVar15;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
        }
      }
      puVar6 = PTR_DAT_04379498;
      if (lVar20 != lVar23) {
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar19 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar20 + -0x240);
          lVar20 = lVar20 + -0x250;
          plVar22 = (long *)*puVar17;
          if (plVar22 != (long *)0x0) {
            plVar21 = plVar22 + 1;
            do {
              iVar13 = (int)*plVar21 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar5) {
                *(int *)plVar21 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              plVar22[2] = 0;
              if (((*puVar6 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(puVar6), plVar15 = (long *)PTR_DAT_043794a0,
                 plVar19 = (long *)PTR_DAT_043794a8, iVar13 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar19 = (long *)PTR_DAT_043794a8;
              }
              lVar16 = *plVar15;
              *plVar19 = lVar16;
              local_88 = (long *)*plVar22;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
            }
          }
        } while (lVar20 != lVar23);
      }
    }
    plVar15 = local_220;
    lVar20 = local_238;
    lVar16 = local_228 - local_238;
    local_230 = lVar23;
    uVar14 = (**(code **)(*local_220 + 0xc0))(local_220);
    if ((uVar14 & 1) != 0) {
      lVar23 = tpidr_el0;
      if (*(char *)(lVar23 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar23 + 0x38d488) = 1;
        *(undefined8 *)(lVar23 + 0x38d478) = 0;
        *(undefined8 *)(lVar23 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar23 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar23 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar20,lVar16,0x10);
        lVar20 = local_1f0;
        goto joined_r0x00c69810;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar20,lVar16,0x10);
    lVar20 = local_1f0;
  }
joined_r0x00c69810:
  local_1f0 = lVar20;
  if (lVar20 != 0) {
    if (local_1e8 != lVar20) {
      lVar23 = local_1e8 + -0x250;
      plVar15 = *(long **)(local_1e8 + -0x240);
      if (plVar15 != (long *)0x0) {
        plVar19 = plVar15 + 1;
        do {
          iVar13 = (int)*plVar19 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar13;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar13 == 0) {
          plVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar16 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar16;
          local_88 = (long *)*plVar15;
          FUN_02a44274(lVar16 + 0xd8,&local_88);
        }
      }
      puVar7 = PTR_LAB_04379590;
      puVar6 = PTR_DAT_04379498;
      if (lVar23 != lVar20) {
        plVar15 = (long *)PTR_DAT_043794a0;
        plVar19 = (long *)PTR_DAT_043794a8;
        do {
          puVar17 = (undefined8 *)(lVar23 + -0x240);
          lVar23 = lVar23 + -0x250;
          plVar22 = (long *)*puVar17;
          if (plVar22 != (long *)0x0) {
            plVar21 = plVar22 + 1;
            do {
              iVar13 = (int)*plVar21 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
              if (bVar5) {
                *(int *)plVar21 = iVar13;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar13 == 0) {
              plVar22[2] = 0;
              if (((*puVar6 & 1) == 0) &&
                 (iVar13 = __cxa_guard_acquire(puVar6), plVar15 = (long *)PTR_DAT_043794a0,
                 plVar19 = (long *)PTR_DAT_043794a8, iVar13 != 0)) {
                FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
                plVar15 = (long *)PTR_DAT_043794a0;
                plVar19 = (long *)PTR_DAT_043794a8;
              }
              lVar16 = *plVar15;
              *plVar19 = lVar16;
              local_88 = (long *)*plVar22;
              FUN_02a44274(lVar16 + 0xd8,&local_88);
            }
          }
        } while (lVar23 != lVar20);
      }
    }
    plVar15 = local_1d8;
    lVar23 = local_1f0;
    lVar16 = local_1e0 - local_1f0;
    local_1e8 = lVar20;
    uVar14 = (**(code **)(*local_1d8 + 0xc0))(local_1d8);
    if ((uVar14 & 1) != 0) {
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar20 + 0x38d480)) {
        FUN_02bcc824(plVar15,lVar23,lVar16,0x10);
        goto joined_r0x00c69830;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,lVar23,lVar16,0x10);
  }
joined_r0x00c69830:
  if (iVar3 <= iVar9) {
    return 1;
  }
  param_3 = param_2;
LAB_00c69334:
  FUN_00c68810(param_1,param_3);
  return 2;
}


