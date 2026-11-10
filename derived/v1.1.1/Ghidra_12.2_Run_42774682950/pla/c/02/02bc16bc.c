/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bc16bc; name: FUN_02bc16bc
 */


void FUN_02bc16bc(long param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined4 local_6c;
  undefined8 local_68;
  
  local_6c = param_3;
  local_68 = param_2;
  lVar6 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x68);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x5c));
        while (*plVar14 == 0) {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar2) {
            *plVar14 = lVar6;
            cVar1 = ExclusiveMonitorsStatus();
          }
          if (cVar1 == '\0') goto LAB_02bc1730;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = lVar6;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
LAB_02bc1730:
  uVar8 = *(ulong *)(param_1 + 0x28);
  if (uVar8 < *(ulong *)(param_1 + 0x30)) {
    FUN_02bc223c(*(undefined8 *)(param_1 + 0x38),uVar8,&local_68,&local_6c);
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x10;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x40);
    lVar6 = (long)(uVar8 - *(long *)(param_1 + 0x20)) >> 4;
    uVar8 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(ulong *)(param_1 + 0x30) - *(long *)(param_1 + 0x20);
    if ((ulong)(lVar9 >> 4) < uVar11 >> 1) {
      uVar10 = lVar9 >> 3;
      uVar11 = uVar8;
      if (uVar8 <= uVar10) {
        uVar11 = uVar10;
      }
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                        (*(long **)(param_1 + 0x38),uVar11 << 4,8);
      if (lVar9 == 0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 0xb8))();
      }
    }
    lVar6 = lVar9 + lVar6 * 0x10;
    FUN_02bc223c(*(undefined8 *)(param_1 + 0x38),lVar6,&local_68,&local_6c);
    puVar4 = PTR_DAT_04379528;
    puVar3 = PTR_DAT_04379520;
    lVar12 = *(long *)(param_1 + 0x20);
    lVar16 = *(long *)(param_1 + 0x28);
    lVar15 = lVar6;
    if (lVar16 != lVar12) {
      do {
        uVar13 = *(undefined8 *)(param_1 + 0x38);
        if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar3), iVar5 != 0)) {
          FUN_008a62a4(puVar4);
          FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar3);
        }
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
        if (lVar7 == 0) {
          uVar13 = *(undefined8 *)(lVar16 + -8);
          *(undefined8 *)(lVar15 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
          *(undefined8 *)(lVar15 + -8) = uVar13;
        }
        else {
          if (0xf < *(ulong *)(lVar7 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar7 + *(ulong *)(lVar7 + 0x80) * 8) = uVar13;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + 1;
          uVar13 = *(undefined8 *)(lVar16 + -8);
          *(undefined8 *)(lVar15 + -0x10) = *(undefined8 *)(lVar16 + -0x10);
          *(undefined8 *)(lVar15 + -8) = uVar13;
          *(long *)(lVar7 + 0x80) = *(long *)(lVar7 + 0x80) + -1;
        }
        lVar16 = lVar16 + -0x10;
        lVar15 = lVar15 + -0x10;
      } while (lVar12 != lVar16);
      lVar12 = *(long *)(param_1 + 0x20);
    }
    *(long *)(param_1 + 0x20) = lVar15;
    *(long *)(param_1 + 0x28) = lVar6 + 0x10;
    lVar6 = *(long *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = lVar9 + uVar11 * 0x10;
    if (lVar12 != 0) {
      plVar14 = *(long **)(param_1 + 0x38);
      lVar6 = lVar6 - lVar12;
      uVar8 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar8 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar14,lVar12,lVar6,8);
          goto LAB_02bc1960;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar12,lVar6,8);
    }
  }
LAB_02bc1960:
  *(undefined8 *)(param_1 + 0x68) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x5c));
  return;
}


