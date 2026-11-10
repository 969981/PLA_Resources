/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6423c; name: FUN_02b6423c
 */


void FUN_02b6423c(long param_1,undefined8 param_2,undefined2 param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  short local_58 [2];
  undefined2 local_54 [2];
  
  local_54[0] = param_3;
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x470);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x478) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x464));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x478) == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar8;
            *(undefined8 *)(param_1 + 0x478) = 0;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02b642b4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x478) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b642b4:
  sVar4 = *(short *)(*(long *)(param_1 + 0x60) + -6);
  local_58[0] = (**(code **)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x60) + -0x10) + 0x58
                                                ) + 0x58) + 0x10))();
  local_58[0] = local_58[0] + sVar4;
  uVar9 = *(ulong *)(param_1 + 0x60);
  if (uVar9 < *(ulong *)(param_1 + 0x68)) {
    FUN_02b6d0d0(*(undefined8 *)(param_1 + 0x70),uVar9,param_2,local_54,local_58);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 0x10;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0x78);
    lVar8 = (long)(uVar9 - *(long *)(param_1 + 0x58)) >> 4;
    uVar9 = lVar8 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(ulong *)(param_1 + 0x68) - *(long *)(param_1 + 0x58);
    if ((ulong)(lVar11 >> 4) < uVar13 >> 1) {
      uVar12 = lVar11 >> 3;
      uVar13 = uVar9;
      if (uVar9 <= uVar12) {
        uVar13 = uVar12;
      }
    }
    puVar2 = (undefined8 *)(param_1 + 0x70);
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar13 << 4,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar16 = lVar11 + lVar8 * 0x10;
    FUN_02b6d0d0(*(undefined8 *)(param_1 + 0x70),lVar16,param_2,local_54,local_58);
    plVar14 = *(long **)(param_1 + 0x58);
    plVar15 = *(long **)(param_1 + 0x60);
    lVar8 = lVar16 + 0x10;
    if (plVar15 == plVar14) {
      plVar15 = plVar14;
    }
    else {
      do {
        lVar16 = lVar16 + -0x10;
        plVar15 = plVar15 + -2;
        FUN_02b6cfe0(puVar2,lVar16,plVar15);
      } while (plVar14 != plVar15);
      plVar14 = *(long **)(param_1 + 0x58);
      plVar15 = *(long **)(param_1 + 0x60);
    }
    *(long *)(param_1 + 0x58) = lVar16;
    *(long *)(param_1 + 0x60) = lVar8;
    lVar8 = *(long *)(param_1 + 0x68);
    *(ulong *)(param_1 + 0x68) = lVar11 + uVar13 * 0x10;
    while (plVar15 != plVar14) {
      plVar15 = plVar15 + -2;
      plVar10 = (long *)*plVar15;
      if (plVar10 != (long *)0x0) {
        plVar3 = plVar10 + 10;
        do {
          iVar7 = (int)*plVar3 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar6) {
            *(int *)plVar3 = iVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))();
        }
      }
    }
    if (plVar14 != (long *)0x0) {
      plVar15 = (long *)*puVar2;
      lVar8 = lVar8 - (long)plVar14;
      uVar9 = (**(code **)(*plVar15 + 0xc0))(plVar15);
      if ((uVar9 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar14,lVar8,8);
          goto LAB_02b6447c;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar14,lVar8,8);
    }
  }
LAB_02b6447c:
  do {
    lVar8 = *plVar1;
    lVar11 = *(long *)(param_1 + 0x478);
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = lVar8;
      *(long *)(param_1 + 0x478) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar8 || *(long *)(param_1 + 0x478) != lVar11) {
      ClearExclusiveLocal();
      lVar8 = *plVar1;
      lVar11 = *(long *)(param_1 + 0x478);
      goto LAB_02b64584;
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x474) = lVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02b644f8:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x464));
  return;
LAB_02b64584:
  do {
    lVar16 = *plVar1;
    if (lVar16 == lVar8 && *(long *)(param_1 + 0x478) == lVar11) {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x474) = lVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02b64584;
      bVar6 = true;
    }
    else {
      bVar6 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar16;
    lVar11 = *(long *)(param_1 + 0x478);
  } while (!bVar6);
  goto LAB_02b644f8;
}


