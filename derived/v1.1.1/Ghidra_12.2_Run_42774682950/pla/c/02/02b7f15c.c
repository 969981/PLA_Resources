/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7f15c; name: FUN_02b7f15c
 */


void FUN_02b7f15c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x62c0);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x62b4));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b7f1d4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b7f1d4:
  lVar19 = param_1 + (ulong)*(uint *)(param_1 + 0x6370) * 0x38;
  plVar14 = (long *)(lVar19 + 0x62d0);
  lVar8 = *(long *)(lVar19 + 0x62d0);
  puVar1 = (undefined8 *)(lVar19 + 0x62e0);
  if (lVar8 == *(long *)(lVar19 + 0x62d8)) {
    plVar2 = (long *)(lVar19 + 0x62c8);
    uVar11 = *(ulong *)(param_1 + (ulong)*(uint *)(param_1 + 0x6370) * 0x38 + 0x62e8);
    lVar8 = lVar8 - *plVar2 >> 4;
    uVar10 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar12 = *(long *)(lVar19 + 0x62d8) - *plVar2;
    uVar13 = lVar12 >> 3;
    if (uVar10 <= uVar13) {
      uVar10 = uVar13;
    }
    if ((ulong)(lVar12 >> 4) < uVar11 >> 1) {
      uVar11 = uVar10;
    }
    if (uVar11 == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar11 << 4,8);
      if (lVar12 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar8 = lVar12 + lVar8 * 0x10;
    FUN_02b8b364(puVar1,lVar8,param_2);
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    lVar16 = *plVar2;
    lVar17 = *plVar14;
    lVar18 = lVar8;
    if (lVar17 != lVar16) {
      do {
        uVar15 = *puVar1;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar9 == 0) {
          uVar15 = *(undefined8 *)(lVar17 + -8);
          *(undefined8 *)(lVar18 + -0x10) = *(undefined8 *)(lVar17 + -0x10);
          *(undefined8 *)(lVar18 + -8) = uVar15;
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar15;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          uVar15 = *(undefined8 *)(lVar17 + -8);
          *(undefined8 *)(lVar18 + -0x10) = *(undefined8 *)(lVar17 + -0x10);
          *(undefined8 *)(lVar18 + -8) = uVar15;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar17 = lVar17 + -0x10;
        lVar18 = lVar18 + -0x10;
      } while (lVar16 != lVar17);
      lVar16 = *plVar2;
    }
    *plVar2 = lVar18;
    *plVar14 = lVar8 + 0x10;
    lVar8 = *(long *)(lVar19 + 0x62d8);
    *(long *)(lVar19 + 0x62d8) = lVar12 + uVar11 * 0x10;
    if (lVar16 != 0) {
      plVar14 = (long *)*puVar1;
      lVar8 = lVar8 - lVar16;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) != 0) {
        lVar19 = tpidr_el0;
        if (*(char *)(lVar19 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar19 + 0x38d488) = 1;
          *(undefined8 *)(lVar19 + 0x38d478) = 0;
          *(undefined8 *)(lVar19 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar19 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar19 + 0x38d480)) {
          FUN_02bcc824(plVar14,lVar16,lVar8,8);
          goto LAB_02b7f44c;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar8,8);
    }
  }
  else {
    FUN_02b8b364(puVar1,lVar8,param_2);
    *plVar14 = *plVar14 + 0x10;
  }
LAB_02b7f44c:
  *(undefined8 *)(param_1 + 0x62c0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x62b4));
  return;
}


