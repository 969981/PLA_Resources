/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b63ed0; name: FUN_02b63ed0
 */


void FUN_02b63ed0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined4 local_58;
  undefined4 uStack_54;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x478) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x478) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x478) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02b63f44;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x478) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b63f44:
  local_58 = 0;
  uStack_54 = 0xffffffff;
  uVar8 = *(ulong *)(param_1 + 0x60);
  if (uVar8 < *(ulong *)(param_1 + 0x68)) {
    FUN_02b6ced8(*(undefined8 *)(param_1 + 0x70),uVar8,param_2,&uStack_54,&local_58);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x10;
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x78);
    lVar7 = (long)(uVar8 - *(long *)(param_1 + 0x58)) >> 4;
    uVar8 = lVar7 + 1;
    if (0x7ffffffffffffffe < uVar12) {
      uVar12 = 0x7fffffffffffffff;
    }
    if (uVar12 < uVar8) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar10 = *(ulong *)(param_1 + 0x68) - *(long *)(param_1 + 0x58);
    if ((ulong)(lVar10 >> 4) < uVar12 >> 1) {
      uVar11 = lVar10 >> 3;
      uVar12 = uVar8;
      if (uVar8 <= uVar11) {
        uVar12 = uVar11;
      }
    }
    puVar2 = (undefined8 *)(param_1 + 0x70);
    if (uVar12 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar12 << 4,8);
      if (lVar10 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar15 = lVar10 + lVar7 * 0x10;
    FUN_02b6ced8(*(undefined8 *)(param_1 + 0x70),lVar15,param_2,&uStack_54,&local_58);
    plVar14 = *(long **)(param_1 + 0x58);
    plVar13 = *(long **)(param_1 + 0x60);
    lVar7 = lVar15 + 0x10;
    if (plVar13 == plVar14) {
      plVar13 = plVar14;
    }
    else {
      do {
        lVar15 = lVar15 + -0x10;
        plVar13 = plVar13 + -2;
        FUN_02b6cfe0(puVar2,lVar15,plVar13);
      } while (plVar14 != plVar13);
      plVar14 = *(long **)(param_1 + 0x58);
      plVar13 = *(long **)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x58) = lVar15;
    *(long *)(param_1 + 0x60) = lVar7;
    lVar7 = *(long *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = lVar10 + uVar12 * 0x10;
    while (plVar13 != plVar14) {
      plVar13 = plVar13 + -2;
      plVar9 = (long *)*plVar13;
      if (plVar9 != (long *)0x0) {
        plVar3 = plVar9 + 10;
        do {
          iVar6 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar6;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar13 = (long *)*puVar2;
      lVar7 = lVar7 - (long)plVar14;
      uVar8 = (**(code **)(*plVar13 + 0xc0))(plVar13);
      if ((uVar8 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar13,plVar14,lVar7,8);
          goto LAB_02b640f0;
        }
      }
      (**(code **)(*plVar13 + 0x18))(plVar13,plVar14,lVar7,8);
    }
  }
LAB_02b640f0:
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(param_1 + 0x478);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x478) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x478) != lVar10) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar10 = *(long *)(param_1 + 0x478);
      goto LAB_02b641f8;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x474) = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02b6416c:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b641f8:
  do {
    lVar15 = *plVar1;
    if (lVar15 == lVar7 && *(long *)(param_1 + 0x478) == lVar10) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x474) = lVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02b641f8;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar15;
    lVar10 = *(long *)(param_1 + 0x478);
  } while (!bVar5);
  goto LAB_02b6416c;
}


