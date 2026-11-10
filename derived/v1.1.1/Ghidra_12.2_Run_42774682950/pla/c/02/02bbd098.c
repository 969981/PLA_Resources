/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bbd098; name: FUN_02bbd098
 */


void FUN_02bbd098(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined4 local_64;
  
  if (*(char *)(param_1 + 0x240) == '\0') {
    return;
  }
  local_64 = param_4;
  lVar7 = nn::os::GetCurrentThread();
  plVar18 = (long *)(param_1 + 0xd0);
  do {
    if (*plVar18 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc4));
        while (*plVar18 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar3) {
            *plVar18 = lVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02bbd138;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar3) {
      *plVar18 = lVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02bbd138:
  uVar8 = *(ulong *)(param_1 + 0x90);
  if (uVar8 < *(ulong *)(param_1 + 0x98)) {
    FUN_02bbe8e4(*(undefined8 *)(param_1 + 0xa0),uVar8,param_2,param_3,&local_64);
    *(long *)(param_1 + 0x90) = *(long *)(param_1 + 0x90) + 0x30;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0xa8);
    lVar7 = (long)(uVar8 - *(long *)(param_1 + 0x88)) >> 4;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    uVar8 = lVar7 * -0x5555555555555555 + 1;
    if (uVar15 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = (long)(*(ulong *)(param_1 + 0x98) - *(long *)(param_1 + 0x88)) >> 4;
    uVar11 = lVar9 * 0x5555555555555556;
    if (uVar8 <= uVar11) {
      uVar8 = uVar11;
    }
    if ((ulong)(lVar9 * -0x5555555555555555) < uVar15 >> 1) {
      uVar15 = uVar8;
    }
    if (uVar15 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_1 + 0xa0) + 0x10))
                        (*(long **)(param_1 + 0xa0),uVar15 * 0x30,0x10);
      if (lVar9 == 0) {
        (**(code **)(**(long **)(param_1 + 0xa0) + 0xb8))();
      }
    }
    plVar20 = (long *)(lVar9 + lVar7 * 0x10);
    FUN_02bbe8e4(*(undefined8 *)(param_1 + 0xa0),plVar20,param_2,param_3,&local_64);
    puVar5 = PTR_DAT_04379528;
    puVar4 = PTR_DAT_04379520;
    plVar18 = *(long **)(param_1 + 0x88);
    if (*(long **)(param_1 + 0x90) == plVar18) {
      plVar10 = plVar20;
      plVar17 = plVar18;
    }
    else {
      plVar17 = plVar20;
      plVar19 = *(long **)(param_1 + 0x90);
      do {
        uVar21 = *(undefined8 *)(param_1 + 0xa0);
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
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar21;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
        }
        plVar12 = plVar19 + -6;
        lVar13 = *plVar12;
        plVar10 = plVar17 + -6;
        *plVar10 = lVar13;
        if (lVar13 != 0) {
          piVar1 = (int *)(lVar13 + 0x50);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        lVar13 = plVar19[-1];
        plVar17[-3] = plVar19[-3];
        lVar14 = plVar19[-4];
        lVar16 = plVar19[-2];
        *(char *)(plVar17 + -1) = (char)lVar13;
        plVar17[-2] = lVar16;
        plVar17[-4] = lVar14;
        if (lVar7 != 0) {
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        plVar17 = plVar10;
        plVar19 = plVar12;
      } while (plVar12 != plVar18);
      plVar18 = *(long **)(param_1 + 0x88);
      plVar17 = *(long **)(param_1 + 0x90);
    }
    lVar7 = *(long *)(param_1 + 0x98);
    *(long **)(param_1 + 0x88) = plVar10;
    *(long **)(param_1 + 0x90) = plVar20 + 6;
    *(ulong *)(param_1 + 0x98) = lVar9 + uVar15 * 0x30;
LAB_02bbd33c:
    if (plVar17 != plVar18) {
      while( true ) {
        plVar17 = plVar17 + -6;
        plVar20 = (long *)*plVar17;
        if (plVar20 == (long *)0x0) break;
        plVar10 = plVar20 + 10;
        do {
          iVar6 = (int)*plVar10 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *(int *)plVar10 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 != 0) break;
        (**(code **)(*plVar20 + 0x10))();
        if (plVar17 == plVar18) goto LAB_02bbd378;
      }
      goto LAB_02bbd33c;
    }
LAB_02bbd378:
    if (plVar18 != (long *)0x0) {
      plVar20 = *(long **)(param_1 + 0xa0);
      lVar7 = lVar7 - (long)plVar18;
      uVar8 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar8 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar20,plVar18,lVar7,0x10);
          goto LAB_02bbd3f8;
        }
      }
      (**(code **)(*plVar20 + 0x18))(plVar20,plVar18,lVar7,0x10);
    }
  }
LAB_02bbd3f8:
  lVar7 = *(long *)(param_1 + 0x88);
  lVar9 = *(long *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc4));
  FUN_02bc16bc(*(undefined8 *)(*(long *)(param_1 + 0x58) + 0x98),param_1,
               (int)((ulong)(lVar9 - lVar7) >> 4) * -0x55555555 + -1);
  return;
}


