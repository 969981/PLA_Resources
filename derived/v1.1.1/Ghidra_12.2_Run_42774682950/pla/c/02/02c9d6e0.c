/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c9d6e0; name: FUN_02c9d6e0
 */


void FUN_02c9d6e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x7e0);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7d4));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c9d748;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02c9d748:
  lVar4 = *(long *)(param_1 + 0x7a0);
  puVar1 = (undefined8 *)(param_1 + 0x7b0);
  if (lVar4 == *(long *)(param_1 + 0x7a8)) {
    uVar9 = *(ulong *)(param_1 + 0x7b8);
    lVar4 = lVar4 - *(long *)(param_1 + 0x798) >> 7;
    uVar5 = lVar4 + 1;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(param_1 + 0x7a8) - *(long *)(param_1 + 0x798);
    uVar7 = lVar6 >> 6;
    if (uVar5 <= uVar7) {
      uVar5 = uVar7;
    }
    if ((ulong)(lVar6 >> 7) < uVar9 >> 1) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 << 7,0x10);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar12 = lVar6 + lVar4 * 0x80;
    FUN_02c9fecc(puVar1,lVar12,param_2);
    lVar13 = *(long *)(param_1 + 0x798);
    lVar4 = lVar12 + 0x80;
    lVar11 = *(long *)(param_1 + 0x7a0);
    if (lVar11 == lVar13) {
      lVar11 = lVar13;
    }
    else {
      do {
        lVar12 = lVar12 + -0x80;
        lVar11 = lVar11 + -0x80;
        FUN_00d9361c(puVar1,lVar12,lVar11);
      } while (lVar13 != lVar11);
      lVar13 = *(long *)(param_1 + 0x798);
      lVar11 = *(long *)(param_1 + 0x7a0);
    }
    *(long *)(param_1 + 0x798) = lVar12;
    lVar12 = *(long *)(param_1 + 0x7a8);
    *(long *)(param_1 + 0x7a0) = lVar4;
    *(ulong *)(param_1 + 0x7a8) = lVar6 + uVar9 * 0x80;
    while (lVar4 = lVar11, lVar4 != lVar13) {
      pcVar8 = *(code **)(lVar4 + -0x78);
      lVar11 = lVar4 + -0x80;
      if (pcVar8 != (code *)0x0) {
        *(undefined8 *)(lVar4 + -0x70) = 0;
        *(undefined8 *)(lVar4 + -0x68) = 0;
        *(undefined8 *)(lVar4 + -0x80) = 0;
        *(undefined8 *)(lVar4 + -0x78) = 0;
        (*pcVar8)(lVar4 + -0x60);
      }
    }
    if (lVar13 != 0) {
      plVar10 = (long *)*puVar1;
      lVar12 = lVar12 - lVar13;
      uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar4 = tpidr_el0;
        if (*(char *)(lVar4 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar4 + 0x38d488) = 1;
          *(undefined8 *)(lVar4 + 0x38d478) = 0;
          *(undefined8 *)(lVar4 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar4 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar4 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar13,lVar12,0x10);
          goto LAB_02c9d8d4;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar12,0x10);
    }
  }
  else {
    FUN_02c9fecc(puVar1,lVar4,param_2);
    *(long *)(param_1 + 0x7a0) = *(long *)(param_1 + 0x7a0) + 0x80;
  }
LAB_02c9d8d4:
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x7d4));
  return;
}


