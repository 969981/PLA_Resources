/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00c6f280; name: FUN_00c6f280
 */


/* WARNING: Removing unreachable block (ram,0x00c6fc70) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00c6f280(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong *puVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  int local_2b4;
  long local_248;
  long local_240;
  long local_238;
  long *local_230 [2];
  long local_220;
  long lStack_218;
  int local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long *local_1e8 [2];
  long local_1d8;
  long lStack_1d0;
  int local_1c8;
  long local_1c0;
  ulong local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long *local_188 [2];
  long local_178;
  long lStack_170;
  int local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long *local_140 [2];
  long local_130;
  long lStack_128;
  int local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long *local_f8;
  ulong local_f0;
  long local_e8;
  long lStack_e0;
  int local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long *plStack_b0;
  ulong local_a8;
  long local_a0;
  long lStack_98;
  int local_90;
  long local_88;
  ulong local_80;
  long local_78;
  long lStack_70;
  
  lVar6 = tpidr_el0;
  switch(((long)param_2 - (long)param_1 >> 3) * -0x71c71c71c71c71c7) {
  case 0:
  case 1:
    break;
  case 2:
    plVar21 = (long *)param_2[-6];
    local_a8 = param_2[-5];
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_a0 = param_2[-4];
    lStack_98 = param_2[-3];
    lVar28 = param_2[-8] - param_2[-9];
    plStack_b0 = plVar21;
    if (lVar28 != 0) {
      uVar14 = local_a8;
      if (0x7ffffffffffffffe < local_a8) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar28 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar23 = (**(code **)(*plVar21 + 0x10))(plVar21,lVar28,0x10);
      if (lVar23 == 0) {
        (**(code **)(*plVar21 + 0xb8))(plVar21);
      }
      local_b8 = lVar23 + (lVar28 >> 4) * 0x10;
      lVar28 = param_2[-9];
      lVar16 = param_2[-8];
      local_c8 = lVar23;
      local_c0 = lVar23;
      if (lVar28 != lVar16) {
        do {
          FUN_00bac10c(&plStack_b0,local_c0,lVar28);
          lVar28 = lVar28 + 0x250;
          local_c0 = local_c0 + 0x250;
        } while (lVar16 != lVar28);
      }
    }
    local_90 = (int)param_2[-2];
    local_88 = param_2[-1];
    local_f8 = (long *)param_1[3];
    local_f0 = param_1[4];
    local_100 = 0;
    local_110 = 0;
    local_108 = 0;
    local_e8 = param_1[5];
    lStack_e0 = param_1[6];
    lVar28 = param_1[1] - *param_1;
    if (lVar28 != 0) {
      uVar14 = local_f0;
      if (0x7ffffffffffffffe < local_f0) {
        uVar14 = 0x7fffffffffffffff;
      }
      if (uVar14 < (ulong)((lVar28 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar23 = (**(code **)(*local_f8 + 0x10))(local_f8,lVar28,0x10);
      if (lVar23 == 0) {
        (**(code **)(*local_f8 + 0xb8))();
      }
      local_100 = lVar23 + (lVar28 >> 4) * 0x10;
      lVar28 = *param_1;
      lVar16 = param_1[1];
      local_110 = lVar23;
      local_108 = lVar23;
      if (lVar28 != lVar16) {
        do {
          FUN_00bac10c(&local_f8,local_108,lVar28);
          lVar28 = lVar28 + 0x250;
          local_108 = local_108 + 0x250;
        } while (lVar16 != lVar28);
      }
    }
    iVar12 = local_90;
    lVar28 = local_108;
    lVar16 = local_110;
    plVar26 = (long *)PTR_DAT_043794a8;
    plVar21 = (long *)PTR_DAT_043794a0;
    puVar8 = PTR_DAT_04379498;
    iVar3 = (int)param_1[7];
    local_d0 = param_1[8];
    local_d8 = iVar3;
    lVar23 = local_c8;
    if (local_110 != 0) {
      if (local_108 != local_110) {
        puVar25 = *(ulong **)(local_108 + -0x240);
        puVar7 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
        if (puVar25 != (ulong *)0x0) {
          puVar1 = puVar25 + 1;
          do {
            iVar11 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          puVar7 = PTR_LAB_04379590;
          puVar9 = PTR_LAB_04379590;
          if (iVar11 == 0) {
            puVar25[2] = 0;
            if (((*puVar8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *plVar21;
            *plVar26 = lVar23;
            local_80 = *puVar25;
            FUN_02a44274(lVar23 + 0xd8,&local_80);
            puVar7 = PTR_LAB_04379590;
            puVar9 = PTR_LAB_04379590;
          }
        }
        while( true ) {
          PTR_LAB_04379590 = puVar9;
          puVar9 = PTR_LAB_04379590;
          lVar23 = lVar28 + -0x250;
          PTR_LAB_04379590 = puVar7;
          if (lVar23 == lVar16) break;
          puVar25 = *(ulong **)(lVar28 + -0x490);
          lVar28 = lVar23;
          if (puVar25 != (ulong *)0x0) {
            puVar1 = puVar25 + 1;
            do {
              iVar11 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            puVar7 = PTR_LAB_04379590;
            if (iVar11 == 0) {
              puVar25[2] = 0;
              if ((*puVar8 & 1) == 0) {
                iVar11 = __cxa_guard_acquire(puVar8);
                plVar26 = (long *)PTR_DAT_043794a8;
                plVar21 = (long *)PTR_DAT_043794a0;
                if (iVar11 != 0) {
                  FUN_00100250(puVar9,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                  plVar26 = (long *)PTR_DAT_043794a8;
                  plVar21 = (long *)PTR_DAT_043794a0;
                }
              }
              lVar23 = *plVar21;
              *plVar26 = lVar23;
              local_80 = *puVar25;
              FUN_02a44274(lVar23 + 0xd8,&local_80);
              puVar7 = PTR_LAB_04379590;
            }
          }
        }
      }
      plVar21 = local_f8;
      lVar28 = local_110;
      lVar23 = local_100 - local_110;
      local_108 = lVar16;
      uVar14 = (**(code **)(*local_f8 + 0xc0))(local_f8);
      if ((uVar14 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar21,lVar28,lVar23,0x10);
          lVar23 = local_c8;
          goto joined_r0x00c6f904;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,lVar28,lVar23,0x10);
      lVar23 = local_c8;
    }
joined_r0x00c6f904:
    local_c8 = lVar23;
    if (lVar23 != 0) {
      if (local_c0 != lVar23) {
        lVar28 = local_c0 + -0x250;
        puVar25 = *(ulong **)(local_c0 + -0x240);
        if (puVar25 != (ulong *)0x0) {
          puVar1 = puVar25 + 1;
          do {
            iVar11 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar11 == 0) {
            puVar25[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_80 = *puVar25;
            FUN_02a44274(lVar16 + 0xd8,&local_80);
          }
        }
        puVar9 = PTR_LAB_04379590;
        puVar7 = PTR_DAT_043794a8;
        puVar8 = PTR_DAT_04379498;
        if (lVar28 != lVar23) {
          plVar21 = (long *)PTR_DAT_043794a0;
          do {
            puVar18 = (undefined8 *)(lVar28 + -0x240);
            lVar28 = lVar28 + -0x250;
            puVar25 = (ulong *)*puVar18;
            if (puVar25 != (ulong *)0x0) {
              puVar1 = puVar25 + 1;
              do {
                iVar11 = (int)*puVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *(int *)puVar1 = iVar11;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              if (iVar11 == 0) {
                puVar25[2] = 0;
                if ((*puVar8 & 1) == 0) {
                  iVar11 = __cxa_guard_acquire(puVar8);
                  plVar21 = (long *)PTR_DAT_043794a0;
                  if (iVar11 != 0) {
                    FUN_00100250(puVar9,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(puVar8);
                    plVar21 = (long *)PTR_DAT_043794a0;
                  }
                }
                lVar16 = *plVar21;
                *(long *)puVar7 = lVar16;
                local_80 = *puVar25;
                FUN_02a44274(lVar16 + 0xd8,&local_80);
              }
            }
          } while (lVar28 != lVar23);
        }
      }
      plVar21 = plStack_b0;
      lVar28 = local_c8;
      lVar16 = local_b8 - local_c8;
      local_c0 = lVar23;
      uVar14 = (**(code **)(*plStack_b0 + 0xc0))(plStack_b0);
      if ((uVar14 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar21,lVar28,lVar16,0x10);
          goto joined_r0x00c6f924;
        }
      }
      (**(code **)(*plVar21 + 0x18))(plVar21,lVar28,lVar16,0x10);
    }
joined_r0x00c6f924:
    if (iVar12 < iVar3) {
      FUN_00c68810(param_1,param_2 + -9);
    }
    break;
  case 3:
    FUN_00c68af0(param_1,param_1 + 9,param_2 + -9);
    break;
  case 4:
    FUN_00c6ae30(param_1,param_1 + 9,param_1 + 0x12,param_2 + -9);
    break;
  case 5:
    FUN_00c6c3f0(param_1,param_1 + 9,param_1 + 0x12,param_1 + 0x1b,param_2 + -9);
    break;
  default:
    FUN_00c68af0(param_1,param_1 + 9,param_1 + 0x12);
    if (param_1 + 0x1b == param_2) {
      return true;
    }
    local_2b4 = 0;
    plVar21 = param_1 + 0x1b;
    plVar26 = param_1 + 0x12;
    do {
      plVar13 = plVar21;
      local_140[0] = (long *)plVar13[3];
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      uVar14 = plVar13[4];
      local_130 = plVar13[5];
      lStack_128 = plVar13[6];
      lVar28 = plVar13[1] - *plVar13;
      if (lVar28 != 0) {
        if (0x7ffffffffffffffe < uVar14) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 < (ulong)((lVar28 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar23 = (**(code **)(*local_140[0] + 0x10))(local_140[0],lVar28,0x10);
        if (lVar23 == 0) {
          (**(code **)(*local_140[0] + 0xb8))();
        }
        local_148 = lVar23 + (lVar28 >> 4) * 0x10;
        lVar16 = plVar13[1];
        local_150 = lVar23;
        local_158 = lVar23;
        for (lVar28 = *plVar13; lVar28 != lVar16; lVar28 = lVar28 + 0x250) {
          FUN_00bac10c(local_140,local_150,lVar28);
          local_150 = local_150 + 0x250;
        }
      }
      local_120 = (int)plVar13[7];
      local_118 = plVar13[8];
      local_188[0] = (long *)plVar26[3];
      uVar14 = plVar26[4];
      local_190 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_178 = plVar26[5];
      lStack_170 = plVar26[6];
      lVar28 = plVar26[1] - *plVar26;
      if (lVar28 != 0) {
        if (0x7ffffffffffffffe < uVar14) {
          uVar14 = 0x7fffffffffffffff;
        }
        if (uVar14 < (ulong)((lVar28 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar23 = (**(code **)(*local_188[0] + 0x10))(local_188[0],lVar28,0x10);
        if (lVar23 == 0) {
          (**(code **)(*local_188[0] + 0xb8))();
        }
        local_190 = lVar23 + (lVar28 >> 4) * 0x10;
        lVar28 = *plVar26;
        lVar16 = plVar26[1];
        local_1a0 = lVar23;
        local_198 = lVar23;
        if (lVar28 != lVar16) {
          do {
            FUN_00bac10c(local_188,local_198,lVar28);
            lVar28 = lVar28 + 0x250;
            local_198 = local_198 + 0x250;
          } while (lVar16 != lVar28);
        }
      }
      iVar12 = local_120;
      lVar28 = local_1a0;
      iVar3 = (int)plVar26[7];
      local_160 = plVar26[8];
      local_168 = iVar3;
      if (local_1a0 == 0) {
        if (local_158 != 0) goto LAB_00c70640;
LAB_00c6fbfc:
        if (iVar12 < iVar3) {
LAB_00c6fc04:
          local_1a8 = plVar13[6];
          plVar15 = (long *)plVar13[3];
          local_1b8 = plVar13[4];
          local_1b0 = plVar13[5];
          lVar19 = plVar13[2];
          lVar28 = *plVar13;
          lVar23 = plVar13[1];
          iVar3 = (int)plVar13[7];
          plVar13[1] = 0;
          plVar13[2] = 0;
          lVar20 = plVar13[8];
          lVar16 = lVar23 - lVar28;
          *plVar13 = 0;
          plVar21 = plVar13;
          while( true ) {
            plVar27 = plVar26;
            lVar22 = plVar27[3];
            lVar24 = plVar27[4];
            lVar17 = plVar27[5];
            *(int *)(plVar21 + 6) = (int)plVar27[6];
            plVar21[4] = lVar24;
            plVar21[5] = lVar17;
            plVar21[3] = lVar22;
            *plVar21 = *plVar27;
            plVar21[1] = plVar27[1];
            plVar21[2] = plVar27[2];
            plVar27[1] = 0;
            plVar27[2] = 0;
            *plVar27 = 0;
            *(int *)(plVar21 + 7) = (int)plVar27[7];
            plVar21[8] = plVar27[8];
            if (plVar27 == param_1) break;
            local_1f0 = 0;
            local_200 = 0;
            local_1f8 = 0;
            local_1d8 = local_1b0;
            lStack_1d0 = local_1a8;
            local_1e8[0] = plVar15;
            if (lVar16 != 0) {
              uVar14 = local_1b8;
              if (0x7ffffffffffffffe < local_1b8) {
                uVar14 = 0x7fffffffffffffff;
              }
              if (uVar14 < (ulong)((lVar16 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar22 = (**(code **)(*plVar15 + 0x10))(plVar15,lVar16,0x10);
              if (lVar22 == 0) {
                (**(code **)(*local_1e8[0] + 0xb8))();
              }
              local_1f0 = lVar22 + (lVar16 >> 4) * 0x10;
              local_200 = lVar22;
              local_1f8 = lVar22;
              if (lVar28 != lVar23) {
                lVar22 = lVar28;
                do {
                  FUN_00bac10c(local_1e8,local_1f8,lVar22);
                  lVar22 = lVar22 + 0x250;
                  local_1f8 = local_1f8 + 0x250;
                } while (lVar23 != lVar22);
              }
            }
            local_230[0] = (long *)plVar27[-6];
            local_80 = plVar27[-5];
            local_78 = plVar27[-4];
            lStack_70 = plVar27[-3];
            local_248 = 0;
            local_238 = 0;
            plVar26 = plVar27 + -9;
            lVar22 = plVar27[-8] - *plVar26;
            local_1c8 = iVar3;
            local_1c0 = lVar20;
            local_220 = local_78;
            lStack_218 = lStack_70;
            if (lVar22 == 0) {
              local_240 = 0;
            }
            else {
              uVar14 = local_80;
              if (0x7ffffffffffffffe < local_80) {
                uVar14 = 0x7fffffffffffffff;
              }
              if (uVar14 < (ulong)((lVar22 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              local_248 = (**(code **)(*local_230[0] + 0x10))(local_230[0],lVar22,0x10);
              if (local_248 == 0) {
                (**(code **)(*local_230[0] + 0xb8))();
              }
              local_238 = local_248 + (lVar22 >> 4) * 0x10;
              lVar22 = plVar27[-9];
              lVar24 = plVar27[-8];
              local_240 = local_248;
              if (lVar22 != lVar24) {
                do {
                  FUN_00bac10c(local_230,local_240,lVar22);
                  lVar22 = lVar22 + 0x250;
                  local_240 = local_240 + 0x250;
                } while (lVar24 != lVar22);
              }
            }
            iVar11 = local_1c8;
            iVar12 = (int)plVar27[-2];
            local_208 = plVar27[-1];
            local_210 = iVar12;
            lVar22 = local_200;
            if (local_248 != 0) {
              if (local_240 != local_248) {
                puVar25 = *(ulong **)(local_240 + -0x240);
                local_240 = local_240 + -0x250;
                if (puVar25 == (ulong *)0x0) goto LAB_00c701dc;
                puVar1 = puVar25 + 1;
                do {
                  iVar10 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                do {
                  if (iVar10 == 0) {
                    puVar25[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar22 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar22;
                    local_80 = *puVar25;
                    FUN_02a44274(lVar22 + 0xd8,&local_80);
                  }
LAB_00c701dc:
                  do {
                    if (local_240 == local_248) goto LAB_00c70218;
                    puVar18 = (undefined8 *)(local_240 + -0x240);
                    local_240 = local_240 + -0x250;
                    puVar25 = (ulong *)*puVar18;
                  } while (puVar25 == (ulong *)0x0);
                  puVar1 = puVar25 + 1;
                  do {
                    iVar10 = (int)*puVar1 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *(int *)puVar1 = iVar10;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                } while( true );
              }
LAB_00c70218:
              plVar21 = local_230[0];
              uVar14 = (**(code **)(*local_230[0] + 0xc0))(local_230[0]);
              if ((uVar14 & 1) != 0) {
                if (*(char *)(lVar6 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar6 + 0x38d488) = 1;
                  *(undefined8 *)(lVar6 + 0x38d478) = 0;
                  *(undefined8 *)(lVar6 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar6 + 0x38d480)) {
                  FUN_02bcc824(plVar21,local_248,local_238 - local_248,0x10);
                  lVar22 = local_200;
                  goto joined_r0x00c702f4;
                }
              }
              (**(code **)(*plVar21 + 0x18))(plVar21,local_248,local_238 - local_248,0x10);
              lVar22 = local_200;
            }
joined_r0x00c702f4:
            local_200 = lVar22;
            if (lVar22 != 0) {
              if (local_1f8 != lVar22) {
                lVar24 = local_1f8 + -0x250;
                puVar25 = *(ulong **)(local_1f8 + -0x240);
                if (puVar25 == (ulong *)0x0) goto LAB_00c70394;
                puVar1 = puVar25 + 1;
                do {
                  iVar10 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar10;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                do {
                  if (iVar10 == 0) {
                    puVar25[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_80 = *puVar25;
                    FUN_02a44274(lVar17 + 0xd8,&local_80);
                  }
LAB_00c70394:
                  do {
                    if (lVar24 == lVar22) goto LAB_00c703cc;
                    puVar18 = (undefined8 *)(lVar24 + -0x240);
                    lVar24 = lVar24 + -0x250;
                    puVar25 = (ulong *)*puVar18;
                  } while (puVar25 == (ulong *)0x0);
                  puVar1 = puVar25 + 1;
                  do {
                    iVar10 = (int)*puVar1 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *(int *)puVar1 = iVar10;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                } while( true );
              }
LAB_00c703cc:
              plVar21 = local_1e8[0];
              lVar24 = local_200;
              lVar17 = local_1f0 - local_200;
              local_1f8 = lVar22;
              uVar14 = (**(code **)(*local_1e8[0] + 0xc0))(local_1e8[0]);
              if ((uVar14 & 1) != 0) {
                if (*(char *)(lVar6 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar6 + 0x38d488) = 1;
                  *(undefined8 *)(lVar6 + 0x38d478) = 0;
                  *(undefined8 *)(lVar6 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar6 + 0x38d480)) {
                  FUN_02bcc824(plVar21,lVar24,lVar17,0x10);
                  goto joined_r0x00c70450;
                }
              }
              (**(code **)(*plVar21 + 0x18))(plVar21,lVar24,lVar17,0x10);
            }
joined_r0x00c70450:
            if (iVar12 <= iVar11) {
              lVar16 = *plVar27;
              plVar21 = plVar27;
              goto joined_r0x00c704d8;
            }
            lVar22 = *plVar27;
            plVar21 = plVar27;
            if (lVar22 != 0) {
              lVar17 = plVar27[1];
              lVar24 = lVar22;
              if (lVar17 != lVar22) {
                lVar24 = lVar17 + -0x250;
                puVar25 = *(ulong **)(lVar17 + -0x240);
                if (puVar25 == (ulong *)0x0) goto LAB_00c700c0;
                puVar1 = puVar25 + 1;
                do {
                  iVar12 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar12;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                do {
                  if (iVar12 == 0) {
                    puVar25[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar17 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar17;
                    local_80 = *puVar25;
                    FUN_02a44274(lVar17 + 0xd8,&local_80);
                  }
LAB_00c700c0:
                  do {
                    if (lVar24 == lVar22) {
                      lVar24 = *plVar27;
                      goto LAB_00c700f8;
                    }
                    puVar18 = (undefined8 *)(lVar24 + -0x240);
                    lVar24 = lVar24 + -0x250;
                    puVar25 = (ulong *)*puVar18;
                  } while (puVar25 == (ulong *)0x0);
                  puVar1 = puVar25 + 1;
                  do {
                    iVar12 = (int)*puVar1 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *(int *)puVar1 = iVar12;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                } while( true );
              }
LAB_00c700f8:
              plVar27[1] = lVar22;
              lVar22 = plVar27[2];
              plVar2 = (long *)plVar27[3];
              uVar14 = (**(code **)(*plVar2 + 0xc0))(plVar2);
              if ((uVar14 & 1) == 0) {
LAB_00c7015c:
                (**(code **)(*plVar2 + 0x18))(plVar2,lVar24,lVar22 - lVar24,0x10);
              }
              else {
                if (*(char *)(lVar6 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar6 + 0x38d488) = 1;
                  *(undefined8 *)(lVar6 + 0x38d478) = 0;
                  *(undefined8 *)(lVar6 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00c7015c;
                FUN_02bcc824(plVar2,lVar24,lVar22 - lVar24,0x10);
              }
              plVar27[1] = 0;
              plVar27[2] = 0;
              *plVar27 = 0;
            }
          }
          lVar16 = *param_1;
          plVar21 = param_1;
joined_r0x00c704d8:
          if (lVar16 != 0) {
            lVar24 = plVar27[1];
            lVar22 = lVar16;
            if (lVar24 != lVar16) {
              lVar22 = lVar24 + -0x250;
              puVar25 = *(ulong **)(lVar24 + -0x240);
              if (puVar25 == (ulong *)0x0) goto LAB_00c70ad0;
              puVar1 = puVar25 + 1;
              do {
                iVar12 = (int)*puVar1 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar5) {
                  *(int *)puVar1 = iVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
              } while (cVar4 != '\0');
              do {
                if (iVar12 == 0) {
                  puVar25[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar24 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar24;
                  local_80 = *puVar25;
                  FUN_02a44274(lVar24 + 0xd8,&local_80);
                }
LAB_00c70ad0:
                do {
                  if (lVar22 == lVar16) {
                    lVar22 = *plVar21;
                    goto LAB_00c70b0c;
                  }
                  puVar18 = (undefined8 *)(lVar22 + -0x240);
                  lVar22 = lVar22 + -0x250;
                  puVar25 = (ulong *)*puVar18;
                } while (puVar25 == (ulong *)0x0);
                puVar1 = puVar25 + 1;
                do {
                  iVar12 = (int)*puVar1 + -1;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar5) {
                    *(int *)puVar1 = iVar12;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
              } while( true );
            }
LAB_00c70b0c:
            plVar27[1] = lVar16;
            lVar16 = plVar27[2];
            plVar26 = (long *)plVar21[3];
            uVar14 = (**(code **)(*plVar26 + 0xc0))(plVar26);
            if ((uVar14 & 1) == 0) {
LAB_00c70b74:
              (**(code **)(*plVar26 + 0x18))(plVar26,lVar22,lVar16 - lVar22,0x10);
            }
            else {
              if (*(char *)(lVar6 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar6 + 0x38d488) = 1;
                *(undefined8 *)(lVar6 + 0x38d478) = 0;
                *(undefined8 *)(lVar6 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00c70b74;
              FUN_02bcc824(plVar26,lVar22,lVar16 - lVar22,0x10);
            }
            plVar21[1] = 0;
            plVar21[2] = 0;
            *plVar21 = 0;
          }
          plVar21[3] = (long)plVar15;
          plVar21[4] = local_1b8;
          plVar21[5] = local_1b0;
          *plVar21 = lVar28;
          *(undefined4 *)(plVar21 + 6) = (undefined4)local_1a8;
          plVar27[1] = lVar23;
          plVar27[2] = lVar19;
          *(int *)(plVar21 + 7) = iVar3;
          local_2b4 = local_2b4 + 1;
          plVar21[8] = lVar20;
          if (local_2b4 == 8) {
            return plVar13 + 9 == param_2;
          }
        }
      }
      else {
        if (local_198 != local_1a0) {
          puVar25 = *(ulong **)(local_198 + -0x240);
          lVar23 = local_198 + -0x250;
          if (puVar25 == (ulong *)0x0) goto LAB_00c70580;
          puVar1 = puVar25 + 1;
          do {
            iVar11 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            if (iVar11 == 0) {
              puVar25[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_80 = *puVar25;
              FUN_02a44274(lVar16 + 0xd8,&local_80);
            }
LAB_00c70580:
            do {
              if (lVar23 == lVar28) goto LAB_00c705b8;
              puVar18 = (undefined8 *)(lVar23 + -0x240);
              lVar23 = lVar23 + -0x250;
              puVar25 = (ulong *)*puVar18;
            } while (puVar25 == (ulong *)0x0);
            puVar1 = puVar25 + 1;
            do {
              iVar11 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          } while( true );
        }
LAB_00c705b8:
        plVar21 = local_188[0];
        lVar23 = local_1a0;
        lVar16 = local_190 - local_1a0;
        local_198 = lVar28;
        uVar14 = (**(code **)(*local_188[0] + 0xc0))(local_188[0]);
        if ((uVar14 & 1) == 0) {
LAB_00c7061c:
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar23,lVar16,0x10);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00c7061c;
          FUN_02bcc824(plVar21,lVar23,lVar16,0x10);
        }
        if (local_158 == 0) goto LAB_00c6fbfc;
LAB_00c70640:
        lVar28 = local_158;
        if (local_150 != local_158) {
          lVar23 = local_150 + -0x250;
          puVar25 = *(ulong **)(local_150 + -0x240);
          if (puVar25 == (ulong *)0x0) goto LAB_00c706b8;
          puVar1 = puVar25 + 1;
          do {
            iVar11 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar11;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            if (iVar11 == 0) {
              puVar25[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar16 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar16;
              local_80 = *puVar25;
              FUN_02a44274(lVar16 + 0xd8,&local_80);
            }
LAB_00c706b8:
            do {
              if (lVar23 == lVar28) goto LAB_00c706f0;
              puVar18 = (undefined8 *)(lVar23 + -0x240);
              lVar23 = lVar23 + -0x250;
              puVar25 = (ulong *)*puVar18;
            } while (puVar25 == (ulong *)0x0);
            puVar1 = puVar25 + 1;
            do {
              iVar11 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar11;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
          } while( true );
        }
LAB_00c706f0:
        plVar21 = local_140[0];
        lVar23 = local_158;
        lVar16 = local_148 - local_158;
        local_150 = lVar28;
        uVar14 = (**(code **)(*local_140[0] + 0xc0))(local_140[0]);
        if ((uVar14 & 1) == 0) {
LAB_00c70754:
          (**(code **)(*plVar21 + 0x18))(plVar21,lVar23,lVar16,0x10);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00c70754;
          FUN_02bcc824(plVar21,lVar23,lVar16,0x10);
        }
        if (iVar12 < iVar3) goto LAB_00c6fc04;
      }
      plVar21 = plVar13 + 9;
      plVar26 = plVar13;
    } while (plVar13 + 9 != param_2);
  }
  return true;
}


