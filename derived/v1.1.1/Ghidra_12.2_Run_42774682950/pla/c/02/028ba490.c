/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ba490; name: FUN_028ba490
 */


void FUN_028ba490(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x138);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 300));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028ba4f8;
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
LAB_028ba4f8:
  uVar5 = *(ulong *)(param_1 + 0xf8);
  puVar1 = (undefined8 *)(param_1 + 0x108);
  if (uVar5 < *(ulong *)(param_1 + 0x100)) {
    FUN_028bb630(puVar1,uVar5,param_2);
    *(long *)(param_1 + 0xf8) = *(long *)(param_1 + 0xf8) + 0x1a0;
  }
  else {
    uVar9 = *(ulong *)(param_1 + 0x110);
    lVar4 = (long)(uVar5 - *(long *)(param_1 + 0xf0)) >> 5;
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    uVar5 = lVar4 * 0x4ec4ec4ec4ec4ec5 + 1;
    if (uVar9 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = (long)(*(ulong *)(param_1 + 0x100) - *(long *)(param_1 + 0xf0)) >> 5;
    uVar8 = lVar6 * -0x6276276276276276;
    if (uVar5 <= uVar8) {
      uVar5 = uVar8;
    }
    if ((ulong)(lVar6 * 0x4ec4ec4ec4ec4ec5) < uVar9 >> 1) {
      uVar9 = uVar5;
    }
    if (uVar9 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar9 * 0x1a0,0x10);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar13 = lVar6 + lVar4 * 0x20;
    FUN_028bb630(puVar1,lVar13,param_2);
    lVar12 = *(long *)(param_1 + 0xf0);
    lVar11 = *(long *)(param_1 + 0xf8);
    lVar4 = lVar13 + 0x1a0;
    if (lVar11 == lVar12) {
      lVar11 = lVar12;
    }
    else {
      do {
        lVar13 = lVar13 + -0x1a0;
        lVar11 = lVar11 + -0x1a0;
        FUN_028bb630(puVar1,lVar13,lVar11);
      } while (lVar12 != lVar11);
      lVar12 = *(long *)(param_1 + 0xf0);
      lVar11 = *(long *)(param_1 + 0xf8);
    }
    *(long *)(param_1 + 0xf0) = lVar13;
    *(long *)(param_1 + 0xf8) = lVar4;
    lVar4 = *(long *)(param_1 + 0x100);
    *(ulong *)(param_1 + 0x100) = lVar6 + uVar9 * 0x1a0;
    if (lVar11 != lVar12) {
      lVar6 = 0;
      do {
        lVar13 = lVar11 + lVar6;
        pcVar7 = *(code **)(lVar13 + -0x78);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x70) = 0;
          *(undefined8 *)(lVar13 + -0x68) = 0;
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          (*pcVar7)(lVar13 + -0x60);
        }
        pcVar7 = *(code **)(lVar13 + -0xf8);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0xf0) = 0;
          *(undefined8 *)(lVar13 + -0xe8) = 0;
          *(undefined8 *)(lVar13 + -0x100) = 0;
          *(undefined8 *)(lVar13 + -0xf8) = 0;
          (*pcVar7)(lVar13 + -0xe0);
        }
        pcVar7 = *(code **)(lVar13 + -0x178);
        if (pcVar7 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x170) = 0;
          *(undefined8 *)(lVar13 + -0x168) = 0;
          *(undefined8 *)(lVar13 + -0x180) = 0;
          *(undefined8 *)(lVar13 + -0x178) = 0;
          (*pcVar7)(lVar13 + -0x160);
        }
        if (*(long **)(lVar13 + -0x188) != (long *)0x0) {
          (**(code **)(**(long **)(lVar13 + -0x188) + 0x20))();
        }
        lVar6 = lVar6 + -0x1a0;
      } while (lVar12 - lVar11 != lVar6);
    }
    if (lVar12 != 0) {
      plVar10 = (long *)*puVar1;
      lVar4 = lVar4 - lVar12;
      uVar5 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar5 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar10,lVar12,lVar4,0x10);
          goto LAB_028ba734;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar12,lVar4,0x10);
    }
  }
LAB_028ba734:
  *(undefined8 *)(param_1 + 0x138) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 300));
  return;
}


