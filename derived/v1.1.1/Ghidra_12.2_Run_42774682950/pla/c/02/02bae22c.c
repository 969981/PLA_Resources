/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bae22c; name: FUN_02bae22c
 */


void FUN_02bae22c(long param_1,int param_2,long *param_3,int param_4,char *param_5)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  ulong uVar23;
  int *piVar24;
  ulong uVar25;
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  ulong *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  local_a8 = param_4;
  iStack_a4 = param_2;
  if ((param_4 < 0) && (*param_3 != 0)) {
    FUN_02ba48cc(param_1 + 0x230,*(undefined4 *)(*param_3 + 0xa0));
  }
  local_a0 = *(undefined8 *)(param_1 + 8);
  puVar22 = *(ulong **)(param_1 + 0x58);
  if (puVar22 == (ulong *)0x0) {
    FUN_02bb07f0(&local_98,local_a0,&local_a0);
    puVar22 = local_98;
    local_98 = (ulong *)0x0;
    lVar17 = *(long *)(param_1 + 0x58);
    *(ulong **)(param_1 + 0x58) = puVar22;
    if (lVar17 == 0) {
      *(undefined8 *)(param_1 + 0x68) = uStack_88;
      *(undefined8 *)(param_1 + 0x70) = local_80;
    }
    else {
      FUN_02bcbe58(auStack_78,0);
      FUN_02bacee4(lVar17);
      plVar13 = *(long **)(param_1 + 0x60);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      uVar16 = *(undefined8 *)(param_1 + 0x70);
      uVar19 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar19 & 1) == 0) {
LAB_02bae324:
        (**(code **)(*plVar13 + 0x18))(plVar13,lVar17,uVar3,uVar16);
      }
      else {
        lVar18 = tpidr_el0;
        if (*(char *)(lVar18 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar18 + 0x38d488) = 1;
          *(undefined8 *)(lVar18 + 0x38d478) = 0;
          *(undefined8 *)(lVar18 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar18 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar18 + 0x38d480) < 1) goto LAB_02bae324;
        FUN_02bcc824(plVar13,lVar17,uVar3,uVar16);
      }
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar12 = *(int *)(lVar17 + 0x38d480) + -1;
      *(int *)(lVar17 + 0x38d480) = iVar12;
      if (iVar12 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar17 + 0x38d484) = 0;
      }
      *(undefined8 *)(param_1 + 0x68) = uStack_88;
      *(undefined8 *)(param_1 + 0x70) = local_80;
      puVar22 = *(ulong **)(param_1 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x60) = local_90;
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  piVar2 = (int *)*puVar22;
  piVar4 = (int *)puVar22[1];
  if (piVar2 != piVar4) {
    piVar24 = piVar2;
    do {
      if (*piVar24 == param_2) {
        param_3 = (long *)*param_3;
        plVar13 = *(long **)(piVar24 + 2);
        if (plVar13 == param_3) {
          bVar9 = 0;
        }
        else {
          if (param_3 != (long *)0x0) {
            plVar13 = param_3 + 10;
            do {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar6) {
                *(int *)plVar13 = (int)*plVar13 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            plVar13 = *(long **)(piVar24 + 2);
          }
          *(long **)(piVar24 + 2) = param_3;
          if (plVar13 != (long *)0x0) {
            plVar1 = plVar13 + 10;
            do {
              lVar17 = *plVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar6) {
                *(int *)plVar1 = (int)lVar17 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if ((int)lVar17 == 1) {
              (**(code **)(*plVar13 + 0x10))();
            }
          }
          bVar9 = 1;
        }
        bVar8 = bVar9;
        if (piVar24[4] != local_a8) {
          bVar8 = 1;
          piVar24[4] = local_a8;
        }
        cVar5 = (char)piVar24[6];
        if ((cVar5 == '\0') || (*param_5 == '\0')) {
          if (*param_5 == '\0' && cVar5 == '\0') goto LAB_02bae778;
        }
        else if (*(long *)(piVar24 + 8) == *(long *)(param_5 + 8)) {
LAB_02bae778:
          if ((!(bool)(bVar9 | bVar8)) && (!bVar7)) {
            return;
          }
          goto LAB_02bae79c;
        }
        uVar3 = *(undefined8 *)(param_5 + 8);
        *(undefined8 *)(piVar24 + 6) = *(undefined8 *)param_5;
        *(undefined8 *)(piVar24 + 8) = uVar3;
        goto LAB_02bae79c;
      }
      piVar24 = piVar24 + 10;
    } while (piVar4 != piVar24);
  }
  if (piVar4 < (int *)puVar22[2]) {
    FUN_02bb095c(puVar22[3],piVar4,&iStack_a4,param_3,&local_a8,param_5);
    puVar22[1] = puVar22[1] + 0x28;
  }
  else {
    uVar19 = puVar22[4];
    lVar17 = (long)piVar4 - (long)piVar2 >> 3;
    if (0x7ffffffffffffffe < uVar19) {
      uVar19 = 0x7fffffffffffffff;
    }
    uVar20 = lVar17 * -0x3333333333333333 + 1;
    if (uVar19 < uVar20) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar18 = (long)puVar22[2] - (long)piVar2 >> 3;
    if ((ulong)(lVar18 * -0x3333333333333333) < uVar19 >> 1) {
      uVar14 = lVar18 * -0x6666666666666666;
      uVar19 = uVar20;
      if (uVar20 <= uVar14) {
        uVar19 = uVar14;
      }
    }
    if (uVar19 == 0) {
      lVar18 = 0;
    }
    else {
      lVar18 = (**(code **)(*(long *)puVar22[3] + 0x10))((long *)puVar22[3],uVar19 * 0x28,8);
      if (lVar18 == 0) {
        (**(code **)(*(long *)puVar22[3] + 0xb8))();
      }
    }
    uVar25 = lVar18 + lVar17 * 8;
    FUN_02bb095c(puVar22[3],uVar25,&iStack_a4,param_3,&local_a8,param_5);
    puVar11 = PTR_DAT_04379528;
    puVar10 = PTR_DAT_04379520;
    uVar20 = *puVar22;
    uVar14 = puVar22[1];
    if (uVar14 == uVar20) {
      uVar23 = uVar25;
      uVar14 = uVar20;
    }
    else {
      uVar21 = uVar25;
      do {
        uVar23 = puVar22[3];
        if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
          FUN_008a62a4(puVar11);
          FUN_00100250(PTR_LAB_04379530,puVar11,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar10);
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)puVar11);
        if (lVar17 != 0) {
          if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(ulong *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = uVar23;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        }
        *(undefined4 *)(uVar21 - 0x28) = *(undefined4 *)(uVar14 - 0x28);
        lVar15 = *(long *)(uVar14 - 0x20);
        *(long *)(uVar21 - 0x20) = lVar15;
        if (lVar15 != 0) {
          piVar2 = (int *)(lVar15 + 0x50);
          do {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        uVar3 = *(undefined8 *)(uVar14 - 0x18);
        uVar16 = *(undefined8 *)(uVar14 - 8);
        *(undefined8 *)(uVar21 - 0x10) = *(undefined8 *)(uVar14 - 0x10);
        *(undefined8 *)(uVar21 - 8) = uVar16;
        uVar23 = uVar21 - 0x28;
        uVar14 = uVar14 - 0x28;
        *(undefined8 *)(uVar21 - 0x18) = uVar3;
        if (lVar17 != 0) {
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        uVar21 = uVar23;
      } while (uVar14 != uVar20);
      uVar20 = *puVar22;
      uVar14 = puVar22[1];
    }
    uVar21 = puVar22[2];
    puVar22[2] = lVar18 + uVar19 * 0x28;
    *puVar22 = uVar23;
    puVar22[1] = uVar25 + 0x28;
LAB_02bae670:
    if (uVar14 != uVar20) {
      while( true ) {
        plVar13 = *(long **)(uVar14 - 0x20);
        uVar14 = uVar14 - 0x28;
        if (plVar13 == (long *)0x0) break;
        plVar1 = plVar13 + 10;
        do {
          iVar12 = (int)*plVar1 + -1;
          cVar5 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar12;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 != 0) break;
        (**(code **)(*plVar13 + 0x10))();
        if (uVar14 == uVar20) goto LAB_02bae6b0;
      }
      goto LAB_02bae670;
    }
LAB_02bae6b0:
    if (uVar20 != 0) {
      plVar13 = (long *)puVar22[3];
      uVar19 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar19 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar13,uVar20,uVar21 - uVar20,8);
          goto LAB_02bae79c;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,uVar20,uVar21 - uVar20,8);
    }
  }
LAB_02bae79c:
  lVar18 = *(long *)(param_1 + 0x240);
  for (lVar17 = *(long *)(param_1 + 0x238); lVar17 != lVar18; lVar17 = lVar17 + 0x18) {
    *(undefined1 *)(lVar17 + 0x10) = 1;
  }
  return;
}


