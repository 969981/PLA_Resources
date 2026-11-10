/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ba7ba0; name: FUN_02ba7ba0
 */


void FUN_02ba7ba0(long param_1,int param_2,char *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int *piVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  undefined8 uVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  int local_a8 [2];
  undefined8 local_a0;
  long *local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a0 = *(undefined8 *)(param_1 + 8);
  plVar18 = *(long **)(param_1 + 0x1d0);
  local_a8[0] = param_2;
  if (plVar18 == (long *)0x0) {
    FUN_02baaae0(&local_98,local_a0,&local_a0);
    plVar18 = local_98;
    local_98 = (long *)0x0;
    plVar12 = *(long **)(param_1 + 0x1d0);
    *(long **)(param_1 + 0x1d0) = plVar18;
    if (plVar12 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x1e0) = local_88;
      *(undefined8 *)(param_1 + 0x1e8) = local_80;
      *(long **)(param_1 + 0x1d8) = local_90;
      local_98 = (long *)0x0;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      plVar18 = (long *)plVar12[0xb];
      if (plVar18 != (long *)0x0) {
        plVar1 = plVar18 + 10;
        do {
          iVar10 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar10 == 0) {
          (**(code **)(*plVar18 + 0x10))();
        }
      }
      lVar13 = plVar12[7];
      plVar12[7] = 0;
      if (lVar13 != 0) {
        FUN_02baac24(plVar12 + 8);
      }
      lVar13 = *plVar12;
      if (lVar13 != 0) {
        lVar15 = plVar12[1];
        if (plVar12[1] == lVar13) {
          lVar15 = lVar13;
        }
        else {
          do {
            lVar19 = lVar15 + -0x30;
            if (*(char *)(lVar15 + -0x28) != '\0') {
              if (*(long **)(lVar15 + -8) != (long *)0x0) {
                (**(code **)(**(long **)(lVar15 + -8) + 0x20))();
              }
              *(undefined1 *)(lVar15 + -0x28) = 0;
            }
            lVar15 = lVar19;
          } while (lVar13 != lVar19);
          lVar15 = *plVar12;
        }
        lVar19 = plVar12[2];
        plVar18 = (long *)plVar12[3];
        plVar12[1] = lVar13;
        uVar16 = (**(code **)(*plVar18 + 0xc0))(plVar18);
        if ((uVar16 & 1) != 0) {
          lVar13 = tpidr_el0;
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar13 + 0x38d480)) {
            FUN_02bcc824(plVar18,lVar15,lVar19 - lVar15,8);
            goto LAB_02ba7d30;
          }
        }
        (**(code **)(*plVar18 + 0x18))(plVar18,lVar15,lVar19 - lVar15,8);
      }
LAB_02ba7d30:
      plVar18 = *(long **)(param_1 + 0x1d8);
      uVar4 = *(undefined8 *)(param_1 + 0x1e0);
      uVar22 = *(undefined8 *)(param_1 + 0x1e8);
      uVar16 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar16 & 1) == 0) {
LAB_02ba7d90:
        (**(code **)(*plVar18 + 0x18))(plVar18,plVar12,uVar4,uVar22);
      }
      else {
        lVar13 = tpidr_el0;
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02ba7d90;
        FUN_02bcc824(plVar18,plVar12,uVar4,uVar22);
      }
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
      *(int *)(lVar13 + 0x38d480) = iVar10;
      if (iVar10 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar13 + 0x38d484) = 0;
      }
      plVar18 = local_98;
      *(long **)(param_1 + 0x1d8) = local_90;
      *(undefined8 *)(param_1 + 0x1e0) = local_88;
      *(undefined8 *)(param_1 + 0x1e8) = local_80;
      local_98 = (long *)0x0;
      if (plVar18 != (long *)0x0) {
        FUN_02bcbe58(auStack_78,0);
        plVar12 = (long *)plVar18[0xb];
        if (plVar12 != (long *)0x0) {
          plVar1 = plVar12 + 10;
          do {
            iVar10 = (int)*plVar1 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *(int *)plVar1 = iVar10;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar10 == 0) {
            (**(code **)(*plVar12 + 0x10))();
          }
        }
        lVar15 = plVar18[7];
        plVar18[7] = 0;
        if (lVar15 != 0) {
          FUN_02baac24(plVar18 + 8);
        }
        lVar15 = *plVar18;
        if (lVar15 != 0) {
          lVar19 = plVar18[1];
          if (plVar18[1] == lVar15) {
            lVar19 = lVar15;
          }
          else {
            do {
              lVar24 = lVar19 + -0x30;
              if (*(char *)(lVar19 + -0x28) != '\0') {
                if (*(long **)(lVar19 + -8) != (long *)0x0) {
                  (**(code **)(**(long **)(lVar19 + -8) + 0x20))();
                }
                *(undefined1 *)(lVar19 + -0x28) = 0;
              }
              lVar19 = lVar24;
            } while (lVar15 != lVar24);
            lVar19 = *plVar18;
          }
          lVar24 = plVar18[2];
          plVar12 = (long *)plVar18[3];
          plVar18[1] = lVar15;
          uVar16 = (**(code **)(*plVar12 + 0xc0))(plVar12);
          if ((uVar16 & 1) != 0) {
            if (*(char *)(lVar13 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar13 + 0x38d488) = 1;
              *(undefined8 *)(lVar13 + 0x38d478) = 0;
              *(undefined8 *)(lVar13 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar13 + 0x38d480)) {
              FUN_02bcc824(plVar12,lVar19,lVar24 - lVar19,8);
              goto LAB_02ba7f58;
            }
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,lVar19,lVar24 - lVar19,8);
        }
LAB_02ba7f58:
        uVar16 = (**(code **)(*local_90 + 0xc0))(local_90);
        if ((uVar16 & 1) == 0) {
LAB_02ba7fb4:
          (**(code **)(*local_90 + 0x18))(local_90,plVar18,local_88,local_80);
        }
        else {
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar13 + 0x38d480) < 1) goto LAB_02ba7fb4;
          FUN_02bcc824(local_90,plVar18,local_88,local_80);
        }
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar10 = *(int *)(lVar13 + 0x38d480) + -1;
        *(int *)(lVar13 + 0x38d480) = iVar10;
        if (iVar10 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar13 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar13 + 0x38d488) = 1;
            *(undefined8 *)(lVar13 + 0x38d478) = 0;
            *(undefined8 *)(lVar13 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar13 + 0x38d484) = 0;
        }
      }
    }
    plVar18 = *(long **)(param_1 + 0x1d0);
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  piVar20 = (int *)*plVar18;
  piVar17 = (int *)plVar18[1];
  if (piVar20 != piVar17) {
    piVar23 = piVar20;
    if (local_a8[0] - 0x1fU < 2) {
      if (*piVar20 == local_a8[0]) {
LAB_02ba80ec:
        cVar6 = (char)piVar23[2];
        cVar5 = *param_3;
        if ((cVar6 == '\0') || (cVar5 == '\0')) {
          if (cVar5 != '\0' || cVar6 != '\0') goto LAB_02ba8458;
        }
        else if (*(long *)(piVar23 + 4) != *(long *)(param_3 + 8)) {
LAB_02ba8458:
          if (cVar6 == '\0') {
            if (cVar5 != '\0') {
              *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(param_3 + 8);
              *(undefined8 *)(piVar23 + 6) = *(undefined8 *)(param_3 + 0x10);
              *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(param_3 + 0x18);
              plVar18 = *(long **)(param_3 + 0x20);
              *(long **)(piVar23 + 10) = plVar18;
              if (plVar18 != (long *)0x0) {
                (**(code **)(*plVar18 + 0x18))();
              }
              *(undefined1 *)(piVar23 + 2) = 1;
            }
          }
          else if (cVar5 == '\0') {
            if (*(long **)(piVar23 + 10) != (long *)0x0) {
              (**(code **)(**(long **)(piVar23 + 10) + 0x20))();
            }
            *(undefined1 *)(piVar23 + 2) = 0;
          }
          else {
            *(undefined8 *)(piVar23 + 4) = *(undefined8 *)(param_3 + 8);
            *(undefined8 *)(piVar23 + 6) = *(undefined8 *)(param_3 + 0x10);
            *(undefined8 *)(piVar23 + 8) = *(undefined8 *)(param_3 + 0x18);
            plVar18 = *(long **)(param_3 + 0x20);
            if (plVar18 != (long *)0x0) {
              (**(code **)(*plVar18 + 0x18))(plVar18);
            }
            plVar12 = *(long **)(piVar23 + 10);
            *(long **)(piVar23 + 10) = plVar18;
            if (plVar12 != (long *)0x0) {
              (**(code **)(*plVar12 + 0x20))();
            }
          }
          goto LAB_02ba83d8;
        }
        if (!bVar7) {
          return;
        }
        goto LAB_02ba83d8;
      }
LAB_02ba80c8:
      do {
        piVar23 = piVar17 + -0xc;
        if ((char)piVar17[-10] != '\0') {
          if (*(long **)(piVar17 + -2) != (long *)0x0) {
            (**(code **)(**(long **)(piVar17 + -2) + 0x20))();
          }
          *(undefined1 *)(piVar17 + -10) = 0;
        }
        piVar17 = piVar23;
      } while (piVar20 != piVar23);
      plVar18[1] = (long)piVar20;
    }
    else {
      do {
        if (*piVar23 == local_a8[0]) goto LAB_02ba80ec;
        if (*piVar23 - 0x1fU < 2) goto LAB_02ba80c8;
        piVar23 = piVar23 + 0xc;
      } while (piVar17 != piVar23);
      piVar20 = piVar17;
    }
  }
  if (piVar20 < (int *)plVar18[2]) {
    FUN_02baaf88(plVar18[3],piVar20,local_a8,param_3);
    plVar18[1] = plVar18[1] + 0x30;
  }
  else {
    uVar16 = plVar18[4];
    lVar13 = (long)piVar20 - *plVar18 >> 4;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    uVar2 = lVar13 * -0x5555555555555555 + 1;
    if (uVar16 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = plVar18[2] - *plVar18 >> 4;
    uVar14 = lVar15 * 0x5555555555555556;
    if (uVar2 <= uVar14) {
      uVar2 = uVar14;
    }
    if ((ulong)(lVar15 * -0x5555555555555555) < uVar16 >> 1) {
      uVar16 = uVar2;
    }
    if (uVar16 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)plVar18[3] + 0x10))((long *)plVar18[3],uVar16 * 0x30,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)plVar18[3] + 0xb8))();
      }
    }
    lVar24 = lVar15 + lVar13 * 0x10;
    FUN_02baaf88(plVar18[3],lVar24,local_a8,param_3);
    puVar9 = PTR_DAT_04379528;
    puVar8 = PTR_DAT_04379520;
    lVar13 = *plVar18;
    lVar19 = plVar18[1];
    if (lVar19 == lVar13) {
      lVar19 = lVar24;
      lVar25 = lVar13;
    }
    else {
      lVar25 = 0;
      do {
        lVar21 = plVar18[3];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          FUN_008a62a4(puVar9);
          FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar8);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar21;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar21 = lVar19 + lVar25;
        lVar3 = lVar24 + lVar25;
        *(undefined4 *)(lVar3 + -0x30) = *(undefined4 *)(lVar21 + -0x30);
        *(undefined1 *)(lVar3 + -0x28) = 0;
        if (*(char *)(lVar21 + -0x28) != '\0') {
          *(undefined8 *)(lVar3 + -0x20) = *(undefined8 *)(lVar21 + -0x20);
          *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar21 + -0x18);
          *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(lVar21 + -0x10);
          plVar12 = *(long **)(lVar21 + -8);
          *(long **)(lVar3 + -8) = plVar12;
          if (plVar12 != (long *)0x0) {
            (**(code **)(*plVar12 + 0x18))();
          }
          *(undefined1 *)(lVar3 + -0x28) = 1;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar25 = lVar25 + -0x30;
      } while (lVar13 - lVar19 != lVar25);
      lVar13 = plVar18[1];
      lVar19 = lVar24 + lVar25;
      lVar25 = *plVar18;
    }
    lVar21 = plVar18[2];
    *plVar18 = lVar19;
    plVar18[1] = lVar24 + 0x30;
    plVar18[2] = lVar15 + uVar16 * 0x30;
    while (lVar15 = lVar13, lVar15 != lVar25) {
      lVar13 = lVar15 + -0x30;
      if (*(char *)(lVar15 + -0x28) != '\0') {
        if (*(long **)(lVar15 + -8) != (long *)0x0) {
          (**(code **)(**(long **)(lVar15 + -8) + 0x20))();
        }
        *(undefined1 *)(lVar15 + -0x28) = 0;
      }
    }
    if (lVar25 != 0) {
      plVar12 = (long *)plVar18[3];
      uVar16 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar16 & 1) != 0) {
        lVar13 = tpidr_el0;
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar12,lVar25,lVar21 - lVar25,8);
          goto LAB_02ba83c8;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,lVar25,lVar21 - lVar25,8);
    }
  }
LAB_02ba83c8:
  *(bool *)(plVar18 + 0x12) = local_a8[0] == 0x20;
LAB_02ba83d8:
  lVar15 = *(long *)(param_1 + 0x240);
  for (lVar13 = *(long *)(param_1 + 0x238); lVar13 != lVar15; lVar13 = lVar13 + 0x18) {
    *(undefined1 *)(lVar13 + 0x10) = 1;
  }
  return;
}


