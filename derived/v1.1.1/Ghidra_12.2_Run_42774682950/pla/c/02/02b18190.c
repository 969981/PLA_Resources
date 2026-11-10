/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b18190; name: FUN_02b18190
 */


void FUN_02b18190(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  
  if (*param_2 == 0) {
    return;
  }
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0xb0);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0xb8) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xa4));
        while (*plVar1 == 0 && *(long *)(param_1 + 0xb8) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0xb8) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b18228;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b18228:
  plVar12 = *(long **)(param_1 + 0x60);
  plVar13 = *(long **)(param_1 + 0x68);
  if (plVar12 != plVar13) {
    do {
      FUN_02b330b0(*param_2,plVar12 + 10);
      plVar12 = plVar12 + 0xf;
    } while (plVar13 != plVar12);
    plVar12 = *(long **)(param_1 + 0x60);
    plVar13 = *(long **)(param_1 + 0x68);
LAB_02b18250:
    plVar8 = plVar13;
    if (plVar13 != plVar12) {
      while( true ) {
        if ((char)plVar8[-5] != '\0') {
          if ((long *)plVar8[-1] != (long *)0x0) {
            (**(code **)(*(long *)plVar8[-1] + 0x20))();
          }
          *(undefined1 *)(plVar8 + -5) = 0;
        }
        plVar13 = plVar8 + -0xf;
        if ((char)plVar8[-10] != '\0') {
          if ((long *)plVar8[-6] != (long *)0x0) {
            (**(code **)(*(long *)plVar8[-6] + 0x20))();
          }
          *(undefined1 *)(plVar8 + -10) = 0;
        }
        if ((long *)plVar8[-0xb] != (long *)0x0) {
          (**(code **)(*(long *)plVar8[-0xb] + 0x20))();
        }
        plVar8 = (long *)*plVar13;
        if (plVar8 == (long *)0x0) break;
        plVar2 = plVar8 + 10;
        do {
          iVar6 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 != 0) break;
        (**(code **)(*plVar8 + 0x10))();
        plVar8 = plVar13;
        if (plVar13 == plVar12) goto LAB_02b182e8;
      }
      goto LAB_02b18250;
    }
  }
LAB_02b182e8:
  *(long **)(param_1 + 0x68) = plVar12;
  if (*(long *)(param_1 + 0x118) != 0) {
    if (*(long **)(param_1 + 0xf0) != (long *)0x0) {
      lVar7 = tpidr_el0;
      plVar12 = *(long **)(param_1 + 0xf0);
      do {
        while( true ) {
          plVar13 = (long *)*plVar12;
          if ((long *)plVar12[5] != (long *)0x0) {
            (**(code **)(*(long *)plVar12[5] + 0x20))();
          }
          plVar8 = *(long **)(param_1 + 0xf8);
          uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
          if ((uVar9 & 1) != 0) break;
LAB_02b18388:
          (**(code **)(*plVar8 + 0x18))(plVar8,plVar12,0x38,8);
          plVar12 = plVar13;
          if (plVar13 == (long *)0x0) goto LAB_02b18414;
        }
        if (*(char *)(lVar7 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar7 + 0x38d488) = 1;
          *(undefined8 *)(lVar7 + 0x38d478) = 0;
          *(undefined8 *)(lVar7 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar7 + 0x38d480) < 1) goto LAB_02b18388;
        FUN_02bcc824(plVar8,plVar12,0x38,8);
        plVar12 = plVar13;
      } while (plVar13 != (long *)0x0);
    }
LAB_02b18414:
    uVar9 = *(ulong *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (uVar9 != 0) {
      uVar10 = uVar9 & 3;
      if (uVar9 - 1 < 3) {
        lVar7 = 0;
      }
      else {
        lVar7 = 0;
        do {
          lVar11 = lVar7 * 8;
          lVar7 = lVar7 + 4;
          *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar11) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar11 + 8) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar11 + 0x10) = 0;
          *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar11 + 0x18) = 0;
        } while (uVar9 - uVar10 != lVar7);
      }
      if (uVar10 != 0) {
        lVar7 = lVar7 << 3;
        do {
          *(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar7) = 0;
          uVar10 = uVar10 - 1;
          lVar7 = lVar7 + 8;
        } while (uVar10 != 0);
      }
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  do {
    lVar7 = *plVar1;
    lVar11 = *(long *)(param_1 + 0xb8);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0xb8) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0xb8) != lVar11) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar11 = *(long *)(param_1 + 0xb8);
      goto LAB_02b18504;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0xb4) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02b184e4;
LAB_02b18504:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar7 && *(long *)(param_1 + 0xb8) == lVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0xb4) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b18504;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar3;
    lVar11 = *(long *)(param_1 + 0xb8);
  } while (!bVar5);
LAB_02b184e4:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xa4));
  return;
}


