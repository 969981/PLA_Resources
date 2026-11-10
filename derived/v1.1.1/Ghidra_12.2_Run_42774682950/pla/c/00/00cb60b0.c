/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cb60b0; name: FUN_00cb60b0
 */


/* WARNING: Removing unreachable block (ram,0x00cb68fc) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_00cb60b0(long *param_1,long *param_2)

{
  ulong *puVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  byte *pbVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  ulong *puVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  int local_2bc;
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
    plVar29 = (long *)param_2[-6];
    local_a8 = param_2[-5];
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_a0 = param_2[-4];
    lStack_98 = param_2[-3];
    lVar18 = param_2[-8] - param_2[-9];
    plStack_b0 = plVar29;
    if (lVar18 != 0) {
      uVar15 = local_a8;
      if (0x7ffffffffffffffe < local_a8) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar24 = (**(code **)(*plVar29 + 0x10))(plVar29,lVar18,0x10);
      if (lVar24 == 0) {
        (**(code **)(*plVar29 + 0xb8))(plVar29);
      }
      local_b8 = lVar24 + (lVar18 >> 4) * 0x10;
      lVar18 = param_2[-9];
      lVar17 = param_2[-8];
      local_c8 = lVar24;
      local_c0 = lVar24;
      if (lVar18 != lVar17) {
        do {
          FUN_00bac10c(&plStack_b0,local_c0,lVar18);
          lVar18 = lVar18 + 0x250;
          local_c0 = local_c0 + 0x250;
        } while (lVar17 != lVar18);
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
    lVar18 = param_1[1] - *param_1;
    if (lVar18 != 0) {
      uVar15 = local_f0;
      if (0x7ffffffffffffffe < local_f0) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar24 = (**(code **)(*local_f8 + 0x10))(local_f8,lVar18,0x10);
      if (lVar24 == 0) {
        (**(code **)(*local_f8 + 0xb8))();
      }
      local_100 = lVar24 + (lVar18 >> 4) * 0x10;
      lVar18 = *param_1;
      lVar17 = param_1[1];
      local_110 = lVar24;
      local_108 = lVar24;
      if (lVar18 != lVar17) {
        do {
          FUN_00bac10c(&local_f8,local_108,lVar18);
          lVar18 = lVar18 + 0x250;
          local_108 = local_108 + 0x250;
        } while (lVar17 != lVar18);
      }
    }
    iVar13 = local_90;
    lVar22 = local_110;
    puVar10 = PTR_DAT_043794a8;
    puVar9 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_04379498;
    iVar3 = (int)param_1[7];
    local_d0 = param_1[8];
    local_d8 = iVar3;
    lVar18 = local_110;
    lVar24 = local_108;
    plVar29 = local_f8;
    pbVar7 = PTR_DAT_04379498;
    plVar27 = (long *)PTR_DAT_043794a0;
    plVar14 = (long *)PTR_DAT_043794a8;
    lVar21 = local_c8;
    lVar17 = local_c0;
    if (local_110 != 0) {
      while( true ) {
        local_110 = lVar18;
        local_f8 = plVar29;
        if (lVar24 == lVar22) break;
        puVar20 = (undefined8 *)(lVar24 + -0x240);
        lVar24 = lVar24 + -0x250;
        puVar26 = (ulong *)*puVar20;
        if (puVar26 != (ulong *)0x0) {
          puVar1 = puVar26 + 1;
          do {
            iVar12 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            puVar26[2] = 0;
            if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar8);
            }
            lVar18 = *(long *)puVar9;
            *(long *)puVar10 = lVar18;
            local_80 = *puVar26;
            FUN_02a44274(lVar18 + 0xd8,&local_80);
            lVar18 = local_110;
            plVar29 = local_f8;
          }
        }
      }
      lVar24 = local_100 - lVar18;
      local_108 = lVar22;
      uVar15 = (**(code **)(*plVar29 + 0xc0))(plVar29);
      if ((uVar15 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar29,lVar18,lVar24,0x10);
          pbVar7 = PTR_DAT_04379498;
          plVar27 = (long *)PTR_DAT_043794a0;
          plVar14 = (long *)PTR_DAT_043794a8;
          lVar21 = local_c8;
          lVar17 = local_c0;
          goto joined_r0x00cb65c0;
        }
      }
      (**(code **)(*plVar29 + 0x18))(plVar29,lVar18,lVar24,0x10);
      pbVar7 = PTR_DAT_04379498;
      plVar27 = (long *)PTR_DAT_043794a0;
      plVar14 = (long *)PTR_DAT_043794a8;
      lVar21 = local_c8;
      lVar17 = local_c0;
    }
joined_r0x00cb65c0:
    PTR_DAT_04379498 = pbVar7;
    PTR_DAT_043794a0 = (undefined *)plVar27;
    PTR_DAT_043794a8 = (undefined *)plVar14;
    lVar18 = lVar21;
    local_c0 = lVar17;
    plVar29 = plStack_b0;
    local_c8 = lVar21;
    if (lVar21 != 0) {
      while( true ) {
        local_c8 = lVar18;
        plStack_b0 = plVar29;
        if (lVar17 == lVar21) break;
        puVar20 = (undefined8 *)(lVar17 + -0x240);
        lVar17 = lVar17 + -0x250;
        puVar26 = (ulong *)*puVar20;
        if (puVar26 != (ulong *)0x0) {
          puVar1 = puVar26 + 1;
          do {
            iVar12 = (int)*puVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *(int *)puVar1 = iVar12;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar12 == 0) {
            puVar26[2] = 0;
            if (((*pbVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar7), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,plVar27,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar7);
            }
            lVar18 = *plVar27;
            *plVar14 = lVar18;
            local_80 = *puVar26;
            FUN_02a44274(lVar18 + 0xd8,&local_80);
            lVar18 = local_c8;
            plVar29 = plStack_b0;
          }
        }
      }
      lVar24 = local_b8 - lVar18;
      local_c0 = lVar21;
      uVar15 = (**(code **)(*plVar29 + 0xc0))(plVar29);
      if ((uVar15 & 1) != 0) {
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar29,lVar18,lVar24,0x10);
          goto joined_r0x00cb674c;
        }
      }
      (**(code **)(*plVar29 + 0x18))(plVar29,lVar18,lVar24,0x10);
    }
joined_r0x00cb674c:
    if (iVar13 < iVar3) {
      FUN_00cb0840(param_1,param_2 + -9);
    }
    break;
  case 3:
    FUN_00cb0af0(param_1,param_1 + 9,param_2 + -9);
    break;
  case 4:
    FUN_00cb27b0(param_1,param_1 + 9,param_1 + 0x12,param_2 + -9);
    break;
  case 5:
    FUN_00cb38f0(param_1,param_1 + 9,param_1 + 0x12,param_1 + 0x1b,param_2 + -9);
    break;
  default:
    FUN_00cb0af0(param_1,param_1 + 9,param_1 + 0x12);
    if (param_1 + 0x1b == param_2) {
      return true;
    }
    local_2bc = 0;
    plVar29 = param_1 + 0x1b;
    plVar27 = param_1 + 0x12;
    do {
      plVar14 = plVar29;
      local_140[0] = (long *)plVar14[3];
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      uVar15 = plVar14[4];
      local_130 = plVar14[5];
      lStack_128 = plVar14[6];
      lVar18 = plVar14[1] - *plVar14;
      if (lVar18 != 0) {
        if (0x7ffffffffffffffe < uVar15) {
          uVar15 = 0x7fffffffffffffff;
        }
        if (uVar15 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar24 = (**(code **)(*local_140[0] + 0x10))(local_140[0],lVar18,0x10);
        if (lVar24 == 0) {
          (**(code **)(*local_140[0] + 0xb8))();
        }
        local_148 = lVar24 + (lVar18 >> 4) * 0x10;
        lVar17 = plVar14[1];
        local_150 = lVar24;
        local_158 = lVar24;
        for (lVar18 = *plVar14; lVar18 != lVar17; lVar18 = lVar18 + 0x250) {
          FUN_00bac10c(local_140,local_150,lVar18);
          local_150 = local_150 + 0x250;
        }
      }
      local_120 = (int)plVar14[7];
      local_118 = plVar14[8];
      local_188[0] = (long *)plVar27[3];
      uVar15 = plVar27[4];
      local_190 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_178 = plVar27[5];
      lStack_170 = plVar27[6];
      lVar18 = plVar27[1] - *plVar27;
      if (lVar18 != 0) {
        if (0x7ffffffffffffffe < uVar15) {
          uVar15 = 0x7fffffffffffffff;
        }
        if (uVar15 < (ulong)((lVar18 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar24 = (**(code **)(*local_188[0] + 0x10))(local_188[0],lVar18,0x10);
        if (lVar24 == 0) {
          (**(code **)(*local_188[0] + 0xb8))();
        }
        local_190 = lVar24 + (lVar18 >> 4) * 0x10;
        lVar18 = *plVar27;
        lVar17 = plVar27[1];
        local_1a0 = lVar24;
        local_198 = lVar24;
        if (lVar18 != lVar17) {
          do {
            FUN_00bac10c(local_188,local_198,lVar18);
            lVar18 = lVar18 + 0x250;
            local_198 = local_198 + 0x250;
          } while (lVar17 != lVar18);
        }
      }
      iVar13 = local_120;
      lVar17 = local_1a0;
      iVar3 = (int)plVar27[7];
      local_160 = plVar27[8];
      local_168 = iVar3;
      lVar18 = local_1a0;
      lVar24 = local_198;
      plVar29 = local_188[0];
      if (local_1a0 != 0) {
        while( true ) {
          local_1a0 = lVar18;
          local_188[0] = plVar29;
          if (lVar24 == lVar17) break;
          puVar20 = (undefined8 *)(lVar24 + -0x240);
          lVar24 = lVar24 + -0x250;
          puVar26 = (ulong *)*puVar20;
          if (puVar26 != (ulong *)0x0) {
            puVar1 = puVar26 + 1;
            do {
              iVar12 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 == 0) {
              puVar26[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_80 = *puVar26;
              FUN_02a44274(lVar18 + 0xd8,&local_80);
              lVar18 = local_1a0;
              plVar29 = local_188[0];
            }
          }
        }
        lVar24 = local_190 - lVar18;
        local_198 = lVar17;
        uVar15 = (**(code **)(*plVar29 + 0xc0))(plVar29);
        if ((uVar15 & 1) != 0) {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar6 + 0x38d480)) {
            FUN_02bcc824(plVar29,lVar18,lVar24,0x10);
            goto LAB_00cb6878;
          }
        }
        (**(code **)(*plVar29 + 0x18))(plVar29,lVar18,lVar24,0x10);
      }
LAB_00cb6878:
      lVar17 = local_158;
      lVar18 = local_158;
      lVar24 = local_150;
      plVar29 = local_140[0];
      if (local_158 == 0) {
        if (iVar13 < iVar3) goto LAB_00cb688c;
      }
      else {
        while( true ) {
          local_158 = lVar18;
          local_140[0] = plVar29;
          if (lVar24 == lVar17) break;
          puVar20 = (undefined8 *)(lVar24 + -0x240);
          lVar24 = lVar24 + -0x250;
          puVar26 = (ulong *)*puVar20;
          if (puVar26 != (ulong *)0x0) {
            puVar1 = puVar26 + 1;
            do {
              iVar12 = (int)*puVar1 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar5) {
                *(int *)puVar1 = iVar12;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar12 == 0) {
              puVar26[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar18 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar18;
              local_80 = *puVar26;
              FUN_02a44274(lVar18 + 0xd8,&local_80);
              lVar18 = local_158;
              plVar29 = local_140[0];
            }
          }
        }
        local_150 = lVar17;
        lVar24 = local_148 - lVar18;
        uVar15 = (**(code **)(*plVar29 + 0xc0))(plVar29);
        if ((uVar15 & 1) == 0) {
LAB_00cb6c2c:
          (**(code **)(*plVar29 + 0x18))(plVar29,lVar18,lVar24,0x10);
        }
        else {
          if (*(char *)(lVar6 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar6 + 0x38d488) = 1;
            *(undefined8 *)(lVar6 + 0x38d478) = 0;
            *(undefined8 *)(lVar6 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00cb6c2c;
          FUN_02bcc824(plVar29,lVar18,lVar24,0x10);
        }
        if (iVar13 < iVar3) {
LAB_00cb688c:
          local_1a8 = plVar14[6];
          plVar16 = (long *)plVar14[3];
          local_1b8 = plVar14[4];
          local_1b0 = plVar14[5];
          lVar21 = plVar14[2];
          lVar18 = *plVar14;
          lVar24 = plVar14[1];
          iVar3 = (int)plVar14[7];
          plVar14[1] = 0;
          plVar14[2] = 0;
          lVar22 = plVar14[8];
          lVar17 = lVar24 - lVar18;
          *plVar14 = 0;
          plVar29 = plVar14;
          while( true ) {
            plVar28 = plVar27;
            lVar23 = plVar28[3];
            lVar19 = plVar28[4];
            lVar25 = plVar28[5];
            *(int *)(plVar29 + 6) = (int)plVar28[6];
            plVar29[3] = lVar23;
            plVar29[4] = lVar19;
            plVar29[5] = lVar25;
            *plVar29 = *plVar28;
            plVar29[1] = plVar28[1];
            plVar29[2] = plVar28[2];
            plVar28[1] = 0;
            plVar28[2] = 0;
            *plVar28 = 0;
            *(int *)(plVar29 + 7) = (int)plVar28[7];
            plVar29[8] = plVar28[8];
            if (plVar28 == param_1) break;
            local_1f0 = 0;
            local_200 = 0;
            local_1f8 = 0;
            local_1d8 = local_1b0;
            lStack_1d0 = local_1a8;
            local_1e8[0] = plVar16;
            if (lVar17 != 0) {
              uVar15 = local_1b8;
              if (0x7ffffffffffffffe < local_1b8) {
                uVar15 = 0x7fffffffffffffff;
              }
              if (uVar15 < (ulong)((lVar17 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar23 = (**(code **)(*plVar16 + 0x10))(plVar16,lVar17,0x10);
              if (lVar23 == 0) {
                (**(code **)(*local_1e8[0] + 0xb8))();
              }
              local_1f0 = lVar23 + (lVar17 >> 4) * 0x10;
              local_200 = lVar23;
              local_1f8 = lVar23;
              if (lVar18 != lVar24) {
                lVar23 = lVar18;
                do {
                  FUN_00bac10c(local_1e8,local_1f8,lVar23);
                  lVar23 = lVar23 + 0x250;
                  local_1f8 = local_1f8 + 0x250;
                } while (lVar24 != lVar23);
              }
            }
            local_230[0] = (long *)plVar28[-6];
            local_80 = plVar28[-5];
            local_78 = plVar28[-4];
            lStack_70 = plVar28[-3];
            local_248 = 0;
            local_240 = 0;
            local_238 = 0;
            plVar27 = plVar28 + -9;
            lVar23 = plVar28[-8] - *plVar27;
            local_1c8 = iVar3;
            local_1c0 = lVar22;
            local_220 = local_78;
            lStack_218 = lStack_70;
            if (lVar23 != 0) {
              uVar15 = local_80;
              if (0x7ffffffffffffffe < local_80) {
                uVar15 = 0x7fffffffffffffff;
              }
              if (uVar15 < (ulong)((lVar23 >> 4) * 0x14c1bacf914c1bad)) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              local_248 = (**(code **)(*local_230[0] + 0x10))(local_230[0],lVar23,0x10);
              if (local_248 == 0) {
                (**(code **)(*local_230[0] + 0xb8))();
              }
              local_238 = local_248 + (lVar23 >> 4) * 0x10;
              lVar23 = plVar28[-9];
              lVar19 = plVar28[-8];
              local_240 = local_248;
              if (lVar23 != lVar19) {
                do {
                  FUN_00bac10c(local_230,local_240,lVar23);
                  lVar23 = lVar23 + 0x250;
                  local_240 = local_240 + 0x250;
                } while (lVar19 != lVar23);
              }
            }
            iVar12 = local_1c8;
            iVar13 = (int)plVar28[-2];
            local_208 = plVar28[-1];
            local_210 = iVar13;
            plVar29 = local_230[0];
            lVar19 = local_200;
            lVar23 = local_1f8;
            if (local_248 != 0) {
              while (local_230[0] = plVar29, local_240 != local_248) {
                puVar20 = (undefined8 *)(local_240 + -0x240);
                local_240 = local_240 + -0x250;
                puVar26 = (ulong *)*puVar20;
                if (puVar26 != (ulong *)0x0) {
                  puVar1 = puVar26 + 1;
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
                    puVar26[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar23 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar23;
                    local_80 = *puVar26;
                    FUN_02a44274(lVar23 + 0xd8,&local_80);
                    plVar29 = local_230[0];
                  }
                }
              }
              uVar15 = (**(code **)(*plVar29 + 0xc0))(plVar29);
              if ((uVar15 & 1) != 0) {
                if (*(char *)(lVar6 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar6 + 0x38d488) = 1;
                  *(undefined8 *)(lVar6 + 0x38d478) = 0;
                  *(undefined8 *)(lVar6 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar6 + 0x38d480)) {
                  FUN_02bcc824(plVar29,local_248,local_238 - local_248,0x10);
                  lVar19 = local_200;
                  lVar23 = local_1f8;
                  goto joined_r0x00cb7278;
                }
              }
              (**(code **)(*plVar29 + 0x18))(plVar29,local_248,local_238 - local_248,0x10);
              lVar19 = local_200;
              lVar23 = local_1f8;
            }
joined_r0x00cb7278:
            lVar25 = lVar19;
            local_1f8 = lVar23;
            plVar29 = local_1e8[0];
            local_200 = lVar19;
            if (lVar19 != 0) {
              while( true ) {
                local_200 = lVar25;
                local_1e8[0] = plVar29;
                if (lVar23 == lVar19) break;
                puVar20 = (undefined8 *)(lVar23 + -0x240);
                lVar23 = lVar23 + -0x250;
                puVar26 = (ulong *)*puVar20;
                if (puVar26 != (ulong *)0x0) {
                  puVar1 = puVar26 + 1;
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
                    puVar26[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar25 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar25;
                    local_80 = *puVar26;
                    FUN_02a44274(lVar25 + 0xd8,&local_80);
                    lVar25 = local_200;
                    plVar29 = local_1e8[0];
                  }
                }
              }
              lVar23 = local_1f0 - lVar25;
              local_1f8 = lVar19;
              uVar15 = (**(code **)(*plVar29 + 0xc0))(plVar29);
              if ((uVar15 & 1) != 0) {
                if (*(char *)(lVar6 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar6 + 0x38d488) = 1;
                  *(undefined8 *)(lVar6 + 0x38d478) = 0;
                  *(undefined8 *)(lVar6 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar6 + 0x38d480)) {
                  FUN_02bcc824(plVar29,lVar25,lVar23,0x10);
                  goto joined_r0x00cb7250;
                }
              }
              (**(code **)(*plVar29 + 0x18))(plVar29,lVar25,lVar23,0x10);
            }
joined_r0x00cb7250:
            if (iVar13 <= iVar12) {
              plVar29 = plVar28;
              goto LAB_00cb735c;
            }
            lVar23 = *plVar28;
            plVar29 = plVar28;
            if (lVar23 != 0) {
              lVar25 = plVar28[1];
              lVar19 = lVar23;
              if (lVar25 != lVar23) {
                do {
                  puVar20 = (undefined8 *)(lVar25 + -0x240);
                  lVar25 = lVar25 + -0x250;
                  puVar26 = (ulong *)*puVar20;
                  if (puVar26 != (ulong *)0x0) {
                    puVar1 = puVar26 + 1;
                    do {
                      iVar13 = (int)*puVar1 + -1;
                      cVar4 = '\x01';
                      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                      if (bVar5) {
                        *(int *)puVar1 = iVar13;
                        cVar4 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar4 != '\0');
                    if (iVar13 == 0) {
                      puVar26[2] = 0;
                      if (((*PTR_DAT_04379498 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                        __cxa_guard_release(PTR_DAT_04379498);
                      }
                      lVar19 = *(long *)PTR_DAT_043794a0;
                      *(long *)PTR_DAT_043794a8 = lVar19;
                      local_80 = *puVar26;
                      FUN_02a44274(lVar19 + 0xd8,&local_80);
                    }
                  }
                } while (lVar25 != lVar23);
                lVar19 = *plVar28;
              }
              lVar25 = plVar28[2];
              plVar2 = (long *)plVar28[3];
              plVar28[1] = lVar23;
              uVar15 = (**(code **)(*plVar2 + 0xc0))(plVar2);
              if ((uVar15 & 1) == 0) {
LAB_00cb6dc0:
                (**(code **)(*plVar2 + 0x18))(plVar2,lVar19,lVar25 - lVar19,0x10);
              }
              else {
                if (*(char *)(lVar6 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar6 + 0x38d488) = 1;
                  *(undefined8 *)(lVar6 + 0x38d478) = 0;
                  *(undefined8 *)(lVar6 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00cb6dc0;
                FUN_02bcc824(plVar2,lVar19,lVar25 - lVar19,0x10);
              }
              plVar28[1] = 0;
              plVar28[2] = 0;
              *plVar28 = 0;
            }
          }
          plVar29 = param_1;
LAB_00cb735c:
          lVar17 = *plVar29;
          if (lVar17 != 0) {
            lVar23 = plVar28[1];
            if (lVar23 == lVar17) {
              lVar23 = lVar17;
            }
            else {
              do {
                puVar20 = (undefined8 *)(lVar23 + -0x240);
                lVar23 = lVar23 + -0x250;
                puVar26 = (ulong *)*puVar20;
                if (puVar26 != (ulong *)0x0) {
                  puVar1 = puVar26 + 1;
                  do {
                    iVar13 = (int)*puVar1 + -1;
                    cVar4 = '\x01';
                    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                    if (bVar5) {
                      *(int *)puVar1 = iVar13;
                      cVar4 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar4 != '\0');
                  if (iVar13 == 0) {
                    puVar26[2] = 0;
                    if (((*PTR_DAT_04379498 & 1) == 0) &&
                       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
                      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                      __cxa_guard_release(PTR_DAT_04379498);
                    }
                    lVar19 = *(long *)PTR_DAT_043794a0;
                    *(long *)PTR_DAT_043794a8 = lVar19;
                    local_80 = *puVar26;
                    FUN_02a44274(lVar19 + 0xd8,&local_80);
                  }
                }
              } while (lVar23 != lVar17);
              lVar23 = *plVar29;
            }
            plVar28[1] = lVar17;
            lVar17 = plVar28[2];
            plVar27 = (long *)plVar29[3];
            uVar15 = (**(code **)(*plVar27 + 0xc0))(plVar27);
            if ((uVar15 & 1) == 0) {
LAB_00cb7518:
              (**(code **)(*plVar27 + 0x18))(plVar27,lVar23,lVar17 - lVar23,0x10);
            }
            else {
              if (*(char *)(lVar6 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar6 + 0x38d488) = 1;
                *(undefined8 *)(lVar6 + 0x38d478) = 0;
                *(undefined8 *)(lVar6 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_00cb7518;
              FUN_02bcc824(plVar27,lVar23,lVar17 - lVar23,0x10);
            }
            plVar29[1] = 0;
            plVar29[2] = 0;
            *plVar29 = 0;
          }
          plVar29[3] = (long)plVar16;
          plVar29[4] = local_1b8;
          plVar29[5] = local_1b0;
          *plVar29 = lVar18;
          *(undefined4 *)(plVar29 + 6) = (undefined4)local_1a8;
          plVar28[1] = lVar24;
          plVar28[2] = lVar21;
          *(int *)(plVar29 + 7) = iVar3;
          local_2bc = local_2bc + 1;
          plVar29[8] = lVar22;
          if (local_2bc == 8) {
            return plVar14 + 9 == param_2;
          }
        }
      }
      plVar29 = plVar14 + 9;
      plVar27 = plVar14;
    } while (plVar14 + 9 != param_2);
  }
  return true;
}


