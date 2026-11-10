/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a5c678; name: FUN_02a5c678
 */


void FUN_02a5c678(long param_1,undefined8 param_2)

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
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined8 local_68;
  
  lVar17 = (long)*(int *)(param_1 + 0x2f0);
  plVar14 = (long *)(param_1 + lVar17 * 0x50 + 0x260);
  lVar13 = *plVar14;
  local_68 = param_2;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar13) {
    bVar4 = false;
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + lVar17 * 0x50 + 0x250;
    lVar13 = nn::os::GetCurrentThread();
    do {
      if (*plVar14 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + lVar17 * 0x50 + 0x254));
          while (*plVar14 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
            if (bVar4) {
              *plVar14 = lVar13;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_02a5c724;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar4) {
        *plVar14 = lVar13;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_02a5c724:
    bVar4 = true;
  }
  lVar20 = param_1 + lVar17 * 0x50;
  lVar13 = *(long *)(lVar20 + 0x270);
  plVar14 = (long *)(lVar20 + 0x270);
  puVar1 = (undefined8 *)(lVar20 + 0x280);
  if (lVar13 == *(long *)(lVar20 + 0x278)) {
    plVar2 = (long *)(lVar20 + 0x268);
    uVar12 = *(ulong *)(param_1 + lVar17 * 0x50 + 0x288);
    lVar13 = lVar13 - *plVar2 >> 3;
    uVar10 = lVar13 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar17 = *(long *)(lVar20 + 0x278) - *plVar2;
    uVar11 = lVar17 >> 2;
    if (uVar10 <= uVar11) {
      uVar10 = uVar11;
    }
    if ((ulong)(lVar17 >> 3) < uVar12 >> 1) {
      uVar12 = uVar10;
    }
    if (uVar12 == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar12 << 3,8);
      if (lVar17 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar13 = lVar17 + lVar13 * 8;
    FUN_02a630c8(puVar1,lVar13,&local_68);
    puVar6 = PTR_DAT_04379528;
    puVar5 = PTR_DAT_04379520;
    lVar16 = *plVar2;
    lVar15 = *plVar14;
    lVar19 = lVar13;
    if (lVar15 != lVar16) {
      do {
        uVar18 = *puVar1;
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar9 == 0) {
          *(undefined8 *)(lVar19 + -8) = *(undefined8 *)(lVar15 + -8);
        }
        else {
          if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar18;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
          *(undefined8 *)(lVar19 + -8) = *(undefined8 *)(lVar15 + -8);
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
        lVar15 = lVar15 + -8;
        lVar19 = lVar19 + -8;
      } while (lVar16 != lVar15);
      lVar16 = *plVar2;
    }
    *plVar2 = lVar19;
    *plVar14 = lVar13 + 8;
    lVar13 = *(long *)(lVar20 + 0x278);
    *(long *)(lVar20 + 0x278) = lVar17 + uVar12 * 8;
    if (lVar16 != 0) {
      plVar14 = (long *)*puVar1;
      lVar13 = lVar13 - lVar16;
      uVar10 = (**(code **)(*plVar14 + 0xc0))(plVar14);
      if ((uVar10 & 1) != 0) {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar17 + 0x38d480)) {
          FUN_02bcc824(plVar14,lVar16,lVar13,8);
          goto joined_r0x02a5c760;
        }
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,lVar16,lVar13,8);
    }
  }
  else {
    FUN_02a630c8(puVar1,lVar13,&local_68);
    *plVar14 = *plVar14 + 8;
  }
joined_r0x02a5c760:
  if (!bVar4) {
    return;
  }
  *(undefined8 *)(lVar8 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
  return;
}


