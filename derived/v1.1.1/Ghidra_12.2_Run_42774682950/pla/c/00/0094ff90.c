/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0094ff90; name: FUN_0094ff90
 */


void FUN_0094ff90(long param_1,long *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  long *local_90;
  ulong local_88;
  undefined8 local_68;
  
  uVar17 = *(undefined8 *)(param_1 + 8);
  local_b0 = *(long **)(param_1 + 200);
  if (local_b0 != (long *)0x0) {
    lVar20 = local_b0[0xb];
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_00960024(&local_a8,uVar17,&local_b0);
  if (local_b0 != (long *)0x0) {
    lVar20 = local_b0[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_b0 + 0x20))();
    }
  }
  puVar22 = *(undefined1 **)(*param_2 + 0x58);
  puVar2 = *(undefined1 **)(*param_2 + 0x60);
  if (puVar22 != puVar2) {
    do {
      uVar3 = *puVar22;
      local_c0 = (undefined8 *)0x0;
      uStack_b8 = 0;
      FUN_008c4b3c(&local_c0,puVar22 + 8);
      local_68 = FUN_00933eec(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0xb0) + 0xe0) + 0xd0),
                              uVar3);
      puVar7 = local_a8;
      if (local_a0 < local_98) {
        if (local_a0 == local_a8) {
          FUN_0095e6e8(&local_90,local_a8,&local_68);
          puVar7 = local_c0;
          puVar21 = local_a8;
          local_a0 = local_a0 + 1;
          puVar15 = local_98;
        }
        else {
          FUN_0095e638(&local_a8,local_a8,local_a0,local_a8 + 1);
          puVar15 = &local_68;
          if (puVar7 <= puVar15) {
            puVar15 = (undefined8 *)((long)register0x00000008 + -0x60);
            if (local_a0 <= &local_68) {
              puVar15 = &local_68;
            }
          }
          *puVar7 = *puVar15;
          puVar7 = local_c0;
          puVar21 = local_a8;
          puVar15 = local_98;
        }
      }
      else {
        uVar13 = ((long)local_a0 - (long)local_a8 >> 3) + 1;
        uVar18 = local_88;
        if (0x7ffffffffffffffe < local_88) {
          uVar18 = 0x7fffffffffffffff;
        }
        if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_98 - (long)local_a8 >> 3) < uVar18 >> 1) {
          uVar14 = (long)local_98 - (long)local_a8 >> 2;
          uVar18 = uVar13;
          if (uVar13 <= uVar14) {
            uVar18 = uVar14;
          }
        }
        if (uVar18 == 0) {
          puVar12 = (undefined8 *)(**(code **)(*local_90 + 0x10))(local_90,8,8);
          if (puVar12 == (undefined8 *)0x0) {
            (**(code **)(*local_90 + 0xb8))();
          }
          puVar15 = puVar12 + 1;
        }
        else {
          puVar12 = (undefined8 *)(**(code **)(*local_90 + 0x10))(local_90,uVar18 << 3,8);
          if (puVar12 == (undefined8 *)0x0) {
            (**(code **)(*local_90 + 0xb8))();
          }
          puVar15 = puVar12 + uVar18;
        }
        FUN_0095e6e8(&local_90,puVar12,&local_68);
        puVar8 = local_a8;
        puVar19 = puVar12 + 1;
        puVar21 = puVar12;
        if (local_a8 != puVar7) {
          puVar16 = puVar7;
          do {
            puVar21 = puVar21 + -1;
            puVar16 = puVar16 + -1;
            FUN_0095e7c0(&local_90,puVar21,puVar16);
          } while (puVar8 != puVar16);
        }
        puVar8 = local_a0;
        if (local_a0 != puVar7) {
          FUN_0095e7c0(&local_90,puVar19,puVar7);
          puVar19 = puVar12 + 2;
          while (puVar7 = puVar7 + 1, puVar7 != puVar8) {
            FUN_0095e7c0(&local_90,puVar19,puVar7);
            puVar19 = puVar19 + 1;
          }
        }
        plVar9 = local_90;
        puVar12 = local_a8;
        puVar7 = local_c0;
        local_a0 = puVar19;
        if (local_a8 != (undefined8 *)0x0) {
          lVar20 = (long)local_98 - (long)local_a8;
          local_a8 = puVar21;
          local_98 = puVar15;
          uVar13 = (**(code **)(*local_90 + 0xc0))(local_90);
          if ((uVar13 & 1) != 0) {
            lVar6 = tpidr_el0;
            if (*(char *)(lVar6 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar6 + 0x38d488) = 1;
              *(undefined8 *)(lVar6 + 0x38d478) = 0;
              *(undefined8 *)(lVar6 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar6 + 0x38d480)) {
              FUN_02bcc824(plVar9,puVar12,lVar20,8);
              puVar7 = local_c0;
              puVar21 = local_a8;
              puVar15 = local_98;
              goto joined_r0x00950354;
            }
          }
          (**(code **)(*plVar9 + 0x18))(plVar9,puVar12,lVar20,8);
          puVar7 = local_c0;
          puVar21 = local_a8;
          puVar15 = local_98;
        }
      }
joined_r0x00950354:
      local_98 = puVar15;
      local_a8 = puVar21;
      local_c0 = puVar7;
      if (puVar7 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar7 + 1);
        do {
          iVar10 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          puVar7[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_68 = *puVar7;
          FUN_02a44274(lVar20 + 0xd8,&local_68);
        }
      }
      puVar22 = puVar22 + 0x18;
    } while (puVar22 != puVar2);
  }
  FUN_00960104(*(undefined8 *)(param_1 + 0xd0),&local_a8);
  FUN_009600ac(&local_a8);
  return;
}


