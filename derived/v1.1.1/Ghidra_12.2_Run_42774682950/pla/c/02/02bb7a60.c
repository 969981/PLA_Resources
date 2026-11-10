/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bb7a60; name: FUN_02bb7a60
 */


void FUN_02bb7a60(long param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a8 = *(undefined8 *)(param_1 + 8);
  local_ac = param_2;
  uStack_a0 = local_a8;
  if (*(long *)(param_1 + 400) == 0) {
    FUN_02bb93c0(&local_98,local_a8,&uStack_a0);
    lVar24 = local_98;
    local_98 = 0;
    lVar17 = *(long *)(param_1 + 400);
    *(long *)(param_1 + 400) = lVar24;
    if (lVar17 != 0) {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bad2b8(lVar17);
      plVar8 = *(long **)(param_1 + 0x198);
      uVar20 = *(undefined8 *)(param_1 + 0x1a0);
      uVar22 = *(undefined8 *)(param_1 + 0x1a8);
      uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar9 & 1) == 0) {
LAB_02bb7b48:
        (**(code **)(*plVar8 + 0x18))(plVar8,lVar17,uVar20,uVar22);
      }
      else {
        lVar24 = tpidr_el0;
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar24 + 0x38d480) < 1) goto LAB_02bb7b48;
        FUN_02bcc824(plVar8,lVar17,uVar20,uVar22);
      }
      lVar24 = tpidr_el0;
      if (*(char *)(lVar24 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar24 + 0x38d488) = 1;
        *(undefined8 *)(lVar24 + 0x38d478) = 0;
        *(undefined8 *)(lVar24 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar6 = *(int *)(lVar24 + 0x38d480) + -1;
      *(int *)(lVar24 + 0x38d480) = iVar6;
      if (iVar6 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar24 + 0x38d484) = 0;
      }
    }
    bVar2 = true;
    *(undefined8 *)(param_1 + 0x1a0) = uStack_88;
    *(undefined8 *)(param_1 + 0x1a8) = local_80;
    *(undefined8 *)(param_1 + 0x198) = local_90;
    lVar24 = *(long *)(param_1 + 0x1b0);
    if (lVar24 == 0) goto LAB_02bb7c04;
LAB_02bb7aac:
    bVar3 = false;
  }
  else {
    bVar2 = false;
    lVar24 = *(long *)(param_1 + 0x1b0);
    if (lVar24 != 0) goto LAB_02bb7aac;
LAB_02bb7c04:
    FUN_02bb99a0(&local_98,*(undefined8 *)(param_1 + 8),&local_a8);
    lVar24 = local_98;
    local_98 = 0;
    lVar17 = *(long *)(param_1 + 0x1b0);
    *(long *)(param_1 + 0x1b0) = lVar24;
    if (lVar17 == 0) {
      *(undefined8 *)(param_1 + 0x1c0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1c8) = local_80;
      *(undefined8 *)(param_1 + 0x1b8) = local_90;
    }
    else {
      FUN_02bade94(param_1 + 0x1b8);
      *(undefined8 *)(param_1 + 0x1c0) = uStack_88;
      *(undefined8 *)(param_1 + 0x1c8) = local_80;
      *(undefined8 *)(param_1 + 0x1b8) = local_90;
      lVar24 = *(long *)(param_1 + 0x1b0);
    }
    local_98 = 0;
    bVar3 = true;
  }
  piVar13 = *(int **)(lVar24 + 0x20);
  piVar10 = *(int **)(lVar24 + 0x28);
  if (piVar13 != piVar10) {
    piVar11 = piVar13;
    do {
      if (*piVar11 == param_2) {
        plVar16 = (long *)*param_3;
        plVar8 = *(long **)(piVar11 + 2);
        if (plVar8 == plVar16) {
          if ((!bVar3) && (!bVar2)) {
            return;
          }
        }
        else {
          if (plVar16 != (long *)0x0) {
            plVar8 = plVar16 + 10;
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
              if (bVar2) {
                *(int *)plVar8 = (int)*plVar8 + 1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            plVar8 = *(long **)(piVar11 + 2);
          }
          *(long **)(piVar11 + 2) = plVar16;
          if (plVar8 != (long *)0x0) {
            plVar16 = plVar8 + 10;
            do {
              iVar6 = (int)*plVar16 + -1;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
              if (bVar2) {
                *(int *)plVar16 = iVar6;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (iVar6 == 0) {
              (**(code **)(*plVar8 + 0x10))();
            }
          }
        }
        goto LAB_02bb7f80;
      }
      piVar11 = piVar11 + 4;
    } while (piVar10 != piVar11);
  }
  if (piVar10 < *(int **)(lVar24 + 0x30)) {
    FUN_02bb9ac0(*(undefined8 *)(lVar24 + 0x38),piVar10,&local_ac,param_3);
    *(long *)(lVar24 + 0x28) = *(long *)(lVar24 + 0x28) + 0x10;
  }
  else {
    uVar18 = *(ulong *)(lVar24 + 0x40);
    lVar17 = (long)piVar10 - (long)piVar13 >> 4;
    uVar9 = lVar17 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = (long)*(int **)(lVar24 + 0x30) - (long)piVar13;
    if ((ulong)(lVar14 >> 4) < uVar18 >> 1) {
      uVar15 = lVar14 >> 3;
      uVar18 = uVar9;
      if (uVar9 <= uVar15) {
        uVar18 = uVar15;
      }
    }
    if (uVar18 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(**(long **)(lVar24 + 0x38) + 0x10))
                         (*(long **)(lVar24 + 0x38),uVar18 << 4,8);
      if (lVar14 == 0) {
        (**(code **)(**(long **)(lVar24 + 0x38) + 0xb8))();
      }
    }
    lVar17 = lVar14 + lVar17 * 0x10;
    FUN_02bb9ac0(*(undefined8 *)(lVar24 + 0x38),lVar17,&local_ac,param_3);
    puVar5 = PTR_DAT_04379528;
    puVar4 = PTR_DAT_04379520;
    lVar19 = *(long *)(lVar24 + 0x20);
    lVar23 = *(long *)(lVar24 + 0x28);
    lVar21 = lVar17;
    if (lVar23 == lVar19) {
      lVar23 = lVar19;
    }
    else {
      do {
        uVar20 = *(undefined8 *)(lVar24 + 0x38);
        if (((*puVar4 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar4), iVar6 != 0)) {
          FUN_008a62a4(puVar5);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar4);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
        if (lVar7 != 0) {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar20;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        *(undefined4 *)(lVar21 + -0x10) = *(undefined4 *)(lVar23 + -0x10);
        lVar12 = *(long *)(lVar23 + -8);
        *(long *)(lVar21 + -8) = lVar12;
        if (lVar12 != 0) {
          piVar10 = (int *)(lVar12 + 0x50);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar10,0x10);
            if (bVar2) {
              *piVar10 = *piVar10 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar21 = lVar21 + -0x10;
        lVar23 = lVar23 + -0x10;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
      } while (lVar23 != lVar19);
      lVar19 = *(long *)(lVar24 + 0x20);
      lVar23 = *(long *)(lVar24 + 0x28);
    }
    lVar7 = *(long *)(lVar24 + 0x30);
    *(long *)(lVar24 + 0x20) = lVar21;
    *(long *)(lVar24 + 0x28) = lVar17 + 0x10;
    *(ulong *)(lVar24 + 0x30) = lVar14 + uVar18 * 0x10;
LAB_02bb7eb4:
    if (lVar23 != lVar19) {
      while( true ) {
        plVar8 = *(long **)(lVar23 + -8);
        lVar23 = lVar23 + -0x10;
        if (plVar8 == (long *)0x0) break;
        plVar16 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar16 + -1;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar2) {
            *(int *)plVar16 = iVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (iVar6 != 0) break;
        (**(code **)(*plVar8 + 0x10))();
        if (lVar23 == lVar19) goto LAB_02bb7ef4;
      }
      goto LAB_02bb7eb4;
    }
LAB_02bb7ef4:
    if (lVar19 != 0) {
      plVar8 = *(long **)(lVar24 + 0x38);
      lVar7 = lVar7 - lVar19;
      uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar9 & 1) != 0) {
        lVar24 = tpidr_el0;
        if (*(char *)(lVar24 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar24 + 0x38d488) = 1;
          *(undefined8 *)(lVar24 + 0x38d478) = 0;
          *(undefined8 *)(lVar24 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar24 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar24 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar19,lVar7,8);
          goto LAB_02bb7f80;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar19,lVar7,8);
    }
  }
LAB_02bb7f80:
  lVar17 = *(long *)(param_1 + 0x240);
  for (lVar24 = *(long *)(param_1 + 0x238); lVar24 != lVar17; lVar24 = lVar24 + 0x18) {
    *(undefined1 *)(lVar24 + 0x10) = 1;
  }
  return;
}


