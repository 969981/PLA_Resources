/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2ab64; name: FUN_02b2ab64
 */


void FUN_02b2ab64(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  
  FUN_02b2ae3c();
  lVar6 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_1 + 0x1a0);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x194));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b2abd0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b2abd0:
  lVar6 = *(long *)(param_1 + 0x158);
  puVar1 = (undefined8 *)(param_1 + 0x168);
  if (lVar6 == *(long *)(param_1 + 0x160)) {
    uVar11 = *(ulong *)(param_1 + 0x170);
    lVar6 = lVar6 - *(long *)(param_1 + 0x150) >> 3;
    uVar7 = lVar6 + 1;
    if (0x7ffffffffffffffe < uVar11) {
      uVar11 = 0x7fffffffffffffff;
    }
    if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar9 = *(long *)(param_1 + 0x160) - *(long *)(param_1 + 0x150);
    uVar10 = lVar9 >> 2;
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if ((ulong)(lVar9 >> 3) < uVar11 >> 1) {
      uVar11 = uVar7;
    }
    if (uVar11 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar11 << 3,8);
      if (lVar9 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar14 = lVar9 + lVar6 * 8;
    FUN_02b2e120(puVar1,lVar14,param_2);
    plVar13 = *(long **)(param_1 + 0x150);
    plVar12 = *(long **)(param_1 + 0x158);
    lVar6 = lVar14 + 8;
    if (plVar12 == plVar13) {
      plVar12 = plVar13;
    }
    else {
      do {
        lVar14 = lVar14 + -8;
        plVar12 = plVar12 + -1;
        FUN_02b2e120(puVar1,lVar14,plVar12);
      } while (plVar13 != plVar12);
      plVar13 = *(long **)(param_1 + 0x150);
      plVar12 = *(long **)(param_1 + 0x158);
    }
    *(long *)(param_1 + 0x150) = lVar14;
    *(long *)(param_1 + 0x158) = lVar6;
    lVar6 = *(long *)(param_1 + 0x160);
    *(ulong *)(param_1 + 0x160) = lVar9 + uVar11 * 8;
    while (plVar12 != plVar13) {
      plVar12 = plVar12 + -1;
      plVar8 = (long *)*plVar12;
      if (plVar8 != (long *)0x0) {
        plVar2 = plVar8 + 10;
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
      }
    }
    if (plVar13 != (long *)0x0) {
      plVar12 = (long *)*puVar1;
      lVar6 = lVar6 - (long)plVar13;
      uVar7 = (**(code **)(*plVar12 + 0xc0))(plVar12);
      if ((uVar7 & 1) != 0) {
        lVar9 = tpidr_el0;
        if (*(char *)(lVar9 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar9 + 0x38d488) = 1;
          *(undefined8 *)(lVar9 + 0x38d478) = 0;
          *(undefined8 *)(lVar9 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar9 + 0x38d480)) {
          FUN_02bcc824(plVar12,plVar13,lVar6,8);
          goto LAB_02b2ad64;
        }
      }
      (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,lVar6,8);
    }
  }
  else {
    FUN_02b2e120(puVar1,lVar6,param_2);
    *(long *)(param_1 + 0x158) = *(long *)(param_1 + 0x158) + 8;
  }
LAB_02b2ad64:
  *(undefined1 *)(param_1 + 0x188) = 1;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x194));
  return;
}


