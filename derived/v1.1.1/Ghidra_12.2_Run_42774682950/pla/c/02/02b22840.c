/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b22840; name: FUN_02b22840
 */


void FUN_02b22840(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  undefined8 local_68;
  
  local_68 = param_2;
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xf0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xf8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xe4));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xf8) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0xf8) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b228b8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b228b8:
  lVar8 = *(long *)(param_1 + 0x108);
  puVar2 = (undefined8 *)(param_1 + 0x118);
  if (lVar8 == *(long *)(param_1 + 0x110)) {
    uVar13 = *(ulong *)(param_1 + 0x120);
    lVar8 = lVar8 - *(long *)(param_1 + 0x100) >> 3;
    uVar10 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(long *)(param_1 + 0x110) - *(long *)(param_1 + 0x100);
    if ((ulong)(lVar11 >> 3) < uVar13 >> 1) {
      uVar12 = lVar11 >> 2;
      uVar13 = uVar10;
      if (uVar10 <= uVar12) {
        uVar13 = uVar12;
      }
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 3,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar8 = lVar11 + lVar8 * 8;
    FUN_02b24de0(puVar2,lVar8,&local_68);
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    lVar15 = *(long *)(param_1 + 0x100);
    lVar17 = *(long *)(param_1 + 0x108);
    lVar18 = lVar8;
    if (lVar17 != lVar15) {
      do {
        uVar16 = *puVar2;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar9 == 0) {
          *(undefined8 *)(lVar18 + -8) = *(undefined8 *)(lVar17 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar16;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          *(undefined8 *)(lVar18 + -8) = *(undefined8 *)(lVar17 + -8);
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar17 = lVar17 + -8;
        lVar18 = lVar18 + -8;
      } while (lVar15 != lVar17);
      lVar15 = *(long *)(param_1 + 0x100);
    }
    *(long *)(param_1 + 0x100) = lVar18;
    *(long *)(param_1 + 0x108) = lVar8 + 8;
    lVar8 = *(long *)(param_1 + 0x110);
    *(ulong *)(param_1 + 0x110) = lVar11 + uVar13 * 8;
    if (lVar15 != 0) {
      plVar14 = (long *)*puVar2;
      lVar8 = lVar8 - lVar15;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar14,lVar15,lVar8,8);
          goto LAB_02b22ae8;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar8,8);
    }
  }
  else {
    FUN_02b24de0(puVar2,lVar8,&local_68);
    *(long *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + 8;
  }
LAB_02b22ae8:
  do {
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0xf8);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0xf8) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar8 || *(long *)(param_1 + 0xf8) != lVar11) {
      ClearExclusiveLocal();
      lVar8 = *plVar1;
      lVar11 = *(long *)(param_1 + 0xf8);
      goto LAB_02b22bbc;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xf4) = lVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b22b2c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xe4));
  return;
LAB_02b22bbc:
  do {
    lVar15 = *plVar1;
    if (lVar15 == lVar8 && *(long *)(param_1 + 0xf8) == lVar11) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xf4) = lVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b22bbc;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar15;
    lVar11 = *(long *)(param_1 + 0xf8);
  } while (!bVar4);
  goto LAB_02b22b2c;
}


