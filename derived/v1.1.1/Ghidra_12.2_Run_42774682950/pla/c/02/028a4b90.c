/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a4b90; name: FUN_028a4b90
 */


void FUN_028a4b90(long param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  
  lVar4 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0x80);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x74));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_028a4bf8;
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
LAB_028a4bf8:
  (**(code **)(*(long *)*param_2 + 0x50))((long *)*param_2,param_1);
  lVar4 = *(long *)(param_1 + 0xc0);
  puVar1 = (undefined8 *)(param_1 + 0xd0);
  if (lVar4 == *(long *)(param_1 + 200)) {
    uVar8 = *(ulong *)(param_1 + 0xd8);
    lVar4 = lVar4 - *(long *)(param_1 + 0xb8) >> 3;
    uVar5 = lVar4 + 1;
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar6 = *(long *)(param_1 + 200) - *(long *)(param_1 + 0xb8);
    if ((ulong)(lVar6 >> 3) < uVar8 >> 1) {
      uVar7 = lVar6 >> 2;
      uVar8 = uVar5;
      if (uVar5 <= uVar7) {
        uVar8 = uVar7;
      }
    }
    if (uVar8 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar8 << 3,8);
      if (lVar6 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar11 = lVar6 + lVar4 * 8;
    FUN_028a6158(puVar1,lVar11,param_2);
    plVar10 = *(long **)(param_1 + 0xb8);
    plVar9 = *(long **)(param_1 + 0xc0);
    lVar4 = lVar11 + 8;
    if (plVar9 == plVar10) {
      plVar9 = plVar10;
    }
    else {
      do {
        lVar11 = lVar11 + -8;
        plVar9 = plVar9 + -1;
        FUN_028a6158(puVar1,lVar11,plVar9);
      } while (plVar10 != plVar9);
      plVar10 = *(long **)(param_1 + 0xb8);
      plVar9 = *(long **)(param_1 + 0xc0);
    }
    *(long *)(param_1 + 0xb8) = lVar11;
    *(long *)(param_1 + 0xc0) = lVar4;
    lVar4 = *(long *)(param_1 + 200);
    *(ulong *)(param_1 + 200) = lVar6 + uVar8 * 8;
    while (plVar9 != plVar10) {
      plVar9 = plVar9 + -1;
      if ((long *)*plVar9 != (long *)0x0) {
        (**(code **)(*(long *)*plVar9 + 0x18))();
      }
    }
    if (plVar10 != (long *)0x0) {
      plVar9 = (long *)*puVar1;
      lVar4 = lVar4 - (long)plVar10;
      uVar5 = (**(code **)(*plVar9 + 0xc0))(plVar9);
      if ((uVar5 & 1) != 0) {
        lVar6 = tpidr_el0;
        if (*(char *)(lVar6 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar6 + 0x38d488) = 1;
          *(undefined8 *)(lVar6 + 0x38d478) = 0;
          *(undefined8 *)(lVar6 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar6 + 0x38d480)) {
          FUN_02bcc824(plVar9,plVar10,lVar4,8);
          goto LAB_028a4da0;
        }
      }
      (**(code **)(*plVar9 + 0x18))(plVar9,plVar10,lVar4,8);
    }
  }
  else {
    FUN_028a6158(puVar1,lVar4,param_2);
    *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 8;
  }
LAB_028a4da0:
  *(undefined1 *)(param_1 + 0x128) = 1;
  *(undefined8 *)(param_1 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x74));
  return;
}


