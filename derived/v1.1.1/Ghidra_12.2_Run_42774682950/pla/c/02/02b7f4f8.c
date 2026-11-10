/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b7f4f8; name: FUN_02b7f4f8
 */


void FUN_02b7f4f8(long param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  ulong uVar17;
  long *plVar18;
  long lVar19;
  
  if (*param_2 == '\0') {
    return;
  }
  lVar19 = *(long *)(param_1 + 0x6120);
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar19 + 0x80);
  do {
    if (*plVar1 != 0 || *(long *)(lVar19 + 0x88) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x74));
        while (*plVar1 == 0 && *(long *)(lVar19 + 0x88) == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            *(undefined8 *)(lVar19 + 0x88) = 0;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02b7f580;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(undefined8 *)(lVar19 + 0x88) = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b7f580:
  uVar17 = *(ulong *)(param_2 + 8);
  plVar15 = *(long **)(param_2 + 0x20);
  if (plVar15 == (long *)0x0) {
    uVar7 = *(ulong *)(lVar19 + 0x10);
  }
  else {
    (**(code **)(*plVar15 + 0x18))(plVar15);
    uVar7 = *(ulong *)(lVar19 + 0x10);
  }
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar12 = uVar7 - 1 & uVar17;
    }
    else {
      uVar12 = uVar17;
      if (uVar7 <= uVar17) {
        uVar12 = 0;
        if (uVar7 != 0) {
          uVar12 = uVar17 / uVar7;
        }
        uVar12 = uVar17 - uVar12 * uVar7;
      }
    }
    lVar6 = *(long *)(lVar19 + 8);
    puVar10 = *(undefined8 **)(lVar6 + uVar12 * 8);
    if ((puVar10 != (undefined8 *)0x0) && (plVar16 = (long *)*puVar10, plVar16 != (long *)0x0)) {
      uVar11 = uVar7 - 1;
      if (uVar8 < 2) {
        do {
          if (plVar16[1] == uVar17) {
            if (plVar16[2] == uVar17) goto LAB_02b7f67c;
          }
          else if ((plVar16[1] & uVar11) != uVar12) break;
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar16[1];
          if (uVar13 == uVar17) {
            if (plVar16[2] == uVar17) goto LAB_02b7f67c;
          }
          else {
            if (uVar7 <= uVar13) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar13 / uVar7;
              }
              uVar13 = uVar13 - uVar5 * uVar7;
            }
            if (uVar13 != uVar12) break;
          }
          plVar16 = (long *)*plVar16;
        } while (plVar16 != (long *)0x0);
      }
    }
  }
joined_r0x02b7f8cc:
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  do {
    lVar6 = *plVar1;
    lVar9 = *(long *)(lVar19 + 0x88);
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      *(long *)(lVar19 + 0x88) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  do {
    if (*plVar1 != lVar6 || *(long *)(lVar19 + 0x88) != lVar9) {
      ClearExclusiveLocal();
      lVar6 = *plVar1;
      lVar9 = *(long *)(lVar19 + 0x88);
      goto LAB_02b7f930;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = 0;
      *(long *)(lVar19 + 0x84) = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02b7f8a0:
  nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x74));
  return;
LAB_02b7f67c:
  if (uVar8 < 2) {
    uVar17 = uVar11 & uVar17;
  }
  else if (uVar7 <= uVar17) {
    uVar12 = 0;
    if (uVar7 != 0) {
      uVar12 = uVar17 / uVar7;
    }
    uVar17 = uVar17 - uVar12 * uVar7;
  }
  plVar18 = *(long **)(lVar6 + uVar17 * 8);
  do {
    plVar14 = plVar18;
    plVar18 = (long *)*plVar14;
  } while ((long *)*plVar14 != plVar16);
  if (plVar14 == (long *)(lVar19 + 0x38)) {
LAB_02b7f70c:
    if (*plVar16 != 0) {
      uVar12 = *(ulong *)(*plVar16 + 8);
      if (uVar8 < 2) {
        uVar12 = uVar12 & uVar11;
      }
      else if (uVar7 <= uVar12) {
        uVar13 = 0;
        if (uVar7 != 0) {
          uVar13 = uVar12 / uVar7;
        }
        uVar12 = uVar12 - uVar13 * uVar7;
      }
      if (uVar12 == uVar17) goto LAB_02b7f74c;
    }
    *(undefined8 *)(lVar6 + uVar17 * 8) = 0;
  }
  else {
    uVar12 = plVar14[1];
    if (uVar8 < 2) {
      uVar12 = uVar12 & uVar11;
    }
    else if (uVar7 <= uVar12) {
      uVar13 = 0;
      if (uVar7 != 0) {
        uVar13 = uVar12 / uVar7;
      }
      uVar12 = uVar12 - uVar13 * uVar7;
    }
    if (uVar12 != uVar17) goto LAB_02b7f70c;
  }
LAB_02b7f74c:
  lVar6 = *plVar16;
  if (lVar6 != 0) {
    uVar12 = *(ulong *)(lVar6 + 8);
    if (uVar8 < 2) {
      uVar12 = uVar12 & uVar11;
    }
    else if (uVar7 <= uVar12) {
      uVar8 = 0;
      if (uVar7 != 0) {
        uVar8 = uVar12 / uVar7;
      }
      uVar12 = uVar12 - uVar8 * uVar7;
    }
    if (uVar12 != uVar17) {
      *(long **)(*(long *)(lVar19 + 8) + uVar12 * 8) = plVar14;
      lVar6 = *plVar16;
    }
  }
  *plVar14 = lVar6;
  *plVar16 = 0;
  *(long *)(lVar19 + 0x60) = *(long *)(lVar19 + 0x60) + -1;
  lVar6 = plVar16[6];
  plVar16[6] = 0;
  if (lVar6 != 0) {
    FUN_02b8b43c(plVar16 + 7);
  }
  if ((long *)plVar16[5] != (long *)0x0) {
    (**(code **)(*(long *)plVar16[5] + 0x20))();
  }
  plVar18 = *(long **)(lVar19 + 0x40);
  uVar17 = (**(code **)(*plVar18 + 0xc0))(plVar18);
  if ((uVar17 & 1) != 0) {
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar6 + 0x38d480)) {
      FUN_02bcc824(plVar18,plVar16,0x50,8);
      goto joined_r0x02b7f8cc;
    }
  }
  (**(code **)(*plVar18 + 0x18))(plVar18,plVar16,0x50,8);
  goto joined_r0x02b7f8cc;
LAB_02b7f930:
  do {
    lVar2 = *plVar1;
    if (lVar2 == lVar6 && *(long *)(lVar19 + 0x88) == lVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(lVar19 + 0x84) = lVar9;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_02b7f930;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar2;
    lVar9 = *(long *)(lVar19 + 0x88);
  } while (!bVar4);
  goto LAB_02b7f8a0;
}


