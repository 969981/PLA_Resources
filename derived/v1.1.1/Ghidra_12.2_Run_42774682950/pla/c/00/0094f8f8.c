/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094f8f8; name: FUN_0094f8f8
 */


void FUN_0094f8f8(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  undefined8 *local_110;
  undefined8 uStack_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  long *local_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined8 local_78 [3];
  
  local_e8 = *(long **)(param_1 + 8);
  local_d0 = 0;
  local_e0 = 0xaaaaaaaaaaaaaaa;
  uStack_d8 = 0;
  local_a8 = &DAT_cbf29ce484222645;
  local_a0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0x101;
  local_f0 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_96 = 0;
  uStack_95 = 0;
  uStack_94 = 0;
  uStack_93 = 0;
  local_92 = 0;
  local_91 = 0;
  local_90 = 0;
  puVar19 = *(undefined1 **)(*param_2 + 0x58);
  puVar3 = *(undefined1 **)(*param_2 + 0x60);
  if (puVar19 != puVar3) {
    do {
      local_118 = *puVar19;
      local_110 = (undefined8 *)0x0;
      uStack_108 = 0;
      FUN_008c4b3c(&local_110,puVar19 + 8);
      local_128 = (undefined8 *)0x0;
      uStack_120 = 0;
      local_130 = CONCAT71(local_130._1_7_,local_118);
      FUN_008c4b3c(&local_128,&local_110);
      if (local_f8 < local_f0) {
        FUN_0095e420(&local_e8,local_f8,&local_130);
        local_f8 = local_f8 + 0x18;
        puVar15 = local_128;
      }
      else {
        lVar13 = (long)(local_f8 - local_100) >> 3;
        uVar10 = local_e0;
        if (0x7ffffffffffffffe < local_e0) {
          uVar10 = 0x7fffffffffffffff;
        }
        uVar20 = lVar13 * -0x5555555555555555 + 1;
        if (uVar10 < uVar20) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar11 = (long)(local_f0 - local_100) >> 3;
        uVar14 = lVar11 * 0x5555555555555556;
        if (uVar20 <= uVar14) {
          uVar20 = uVar14;
        }
        if ((ulong)(lVar11 * -0x5555555555555555) < uVar10 >> 1) {
          uVar10 = uVar20;
        }
        if (uVar10 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = (**(code **)(*local_e8 + 0x10))(local_e8,uVar10 * 0x18,8);
          if (lVar11 == 0) {
            (**(code **)(*local_e8 + 0xb8))();
          }
        }
        uVar16 = lVar11 + lVar13 * 8;
        FUN_0095e420(&local_e8,uVar16,&local_130);
        uVar8 = local_100;
        uVar17 = uVar16;
        uVar14 = local_100;
        uVar20 = local_100;
        uVar18 = local_f8;
        uVar7 = local_f0;
        while (local_100 = uVar17, local_f0 = lVar11 + uVar10 * 0x18, uVar17 = uVar16 + 0x18,
              plVar12 = local_e8, uVar18 != uVar8) {
          uVar17 = local_100 - 0x18;
          uVar18 = uVar18 - 0x18;
          local_100 = uVar14;
          local_f0 = uVar7;
          FUN_0095e52c(&local_e8,uVar17,uVar18);
          uVar14 = local_100;
          uVar20 = local_f8;
          uVar7 = local_f0;
        }
        while (local_f8 = uVar17, local_e8 = plVar12, uVar20 != uVar14) {
          puVar15 = *(undefined8 **)(uVar20 - 0x10);
          uVar20 = uVar20 - 0x18;
          uVar17 = local_f8;
          if (puVar15 != (undefined8 *)0x0) {
            piVar2 = (int *)(puVar15 + 1);
            do {
              iVar9 = *piVar2;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = iVar9 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (iVar9 + -1 == 0) {
              puVar15[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar13 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar13;
              local_78[0] = *puVar15;
              FUN_02a44274(lVar13 + 0xd8,local_78);
              uVar17 = local_f8;
              plVar12 = local_e8;
            }
          }
        }
        puVar15 = local_128;
        if (uVar14 != 0) {
          uVar10 = (**(code **)(*plVar12 + 0xc0))(plVar12);
          if ((uVar10 & 1) != 0) {
            lVar13 = tpidr_el0;
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar13 + 0x38d480)) {
              FUN_02bcc824(plVar12,uVar14,uVar7 - uVar14,8);
              puVar15 = local_128;
              goto joined_r0x0094fc70;
            }
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,uVar14,uVar7 - uVar14,8);
          puVar15 = local_128;
        }
      }
joined_r0x0094fc70:
      local_128 = puVar15;
      if (puVar15 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar15 + 1);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          puVar15[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_78[0] = *puVar15;
          FUN_02a44274(lVar13 + 0xd8,local_78);
        }
      }
      puVar15 = local_110;
      if (local_110 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_110 + 1);
        do {
          iVar9 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar9 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar9 + -1 == 0) {
          local_110[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_130 = *puVar15;
          FUN_02a44274(lVar13 + 0xd8,&local_130);
        }
      }
      puVar19 = puVar19 + 0x18;
    } while (puVar19 != puVar3);
  }
  local_c8 = *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0xe0);
  lVar13 = *(long *)(param_1 + 0x98);
  local_b8 = *(undefined8 *)(lVar13 + 0x318);
  local_c0 = *(undefined8 *)(lVar13 + 0x310);
  local_b0 = *(undefined4 *)(lVar13 + 800);
  local_98 = *(undefined2 *)(lVar13 + 0x34a);
  local_96 = *(undefined1 *)(lVar13 + 0x355);
  uStack_95 = *(undefined1 *)(lVar13 + 0x354);
  local_a0 = CONCAT44(*(undefined4 *)(lVar13 + 0x380),*(undefined4 *)(lVar13 + 0x350));
  uStack_94 = *(undefined1 *)(lVar13 + 0x356);
  local_92 = *(undefined1 *)(lVar13 + 0x359);
  local_90 = *(undefined1 *)(lVar13 + 0x3d0);
  plVar12 = *(long **)(lVar13 + 0x90);
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    local_138 = plVar12;
    iVar9 = FUN_0093f344(&local_138);
    if (local_138 != (long *)0x0) {
      plVar12 = local_138 + 10;
      do {
        iVar6 = (int)*plVar12 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar5) {
          *(int *)plVar12 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_138 + 0x10))();
      }
    }
    if (iVar9 == 5) {
      uStack_93 = 1;
    }
  }
  lVar13 = *(long *)(param_1 + 0x98);
  if (*(char *)(lVar13 + 0x354) != '\0') {
    local_a8 = *(undefined1 **)(lVar13 + 0x428);
  }
  FUN_00956dac(&local_118,lVar13 + 0x98);
  if (CONCAT71(uStack_117,local_118) != 0) {
    lVar13 = FUN_0095c190(CONCAT71(uStack_117,local_118) + 0xf0,&local_130);
    if (lVar13 != 0) {
      local_91 = *(int *)(lVar13 + 0x918) == 1;
    }
    plVar12 = (long *)CONCAT71(uStack_117,local_118);
    if (plVar12 != (long *)0x0) {
      lVar13 = plVar12[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar12 + 0x20))();
      }
    }
  }
  FUN_0098f2f4(*(undefined8 *)(param_1 + 200),&local_100);
  FUN_00957a50(&local_100);
  return;
}


