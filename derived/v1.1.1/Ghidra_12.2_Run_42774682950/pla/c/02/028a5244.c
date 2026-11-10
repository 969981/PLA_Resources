/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028a5244; name: FUN_028a5244
 */


void FUN_028a5244(float param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  float fVar18;
  
  if (*(char *)(param_2 + 0x128) == '\0') goto LAB_028a5570;
  lVar5 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_2 + 0x80);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x74));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028a52bc;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028a52bc:
  lVar5 = *(long *)(param_2 + 0xf0);
  plVar13 = *(long **)(param_2 + 0xf8);
  uVar16 = (long)plVar13 - lVar5 >> 3;
  uVar17 = *(long *)(param_2 + 0xc0) - *(long *)(param_2 + 0xb8) >> 3;
  uVar6 = uVar17 + uVar16;
  if (uVar16 < uVar6) {
    puVar11 = (undefined8 *)(param_2 + 0x108);
    if ((ulong)(*(long *)(param_2 + 0x100) - (long)plVar13 >> 3) < uVar17) {
      uVar10 = *(ulong *)(param_2 + 0x110);
      if (0x7ffffffffffffffe < uVar10) {
        uVar10 = 0x7fffffffffffffff;
      }
      if (uVar10 < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar5 = *(long *)(param_2 + 0x100) - lVar5;
      uVar9 = lVar5 >> 2;
      if (uVar6 <= uVar9) {
        uVar6 = uVar9;
      }
      if ((ulong)(lVar5 >> 3) < uVar10 >> 1) {
        uVar10 = uVar6;
      }
      if (uVar10 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,uVar10 << 3,8);
        if (lVar5 == 0) {
          (**(code **)(*(long *)*puVar11 + 0xb8))();
        }
      }
      lVar14 = lVar5 + uVar16 * 8;
      lVar15 = lVar14;
      do {
        FUN_028a634c(puVar11,lVar15);
        lVar15 = lVar15 + 8;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      plVar13 = *(long **)(param_2 + 0xf0);
      plVar12 = *(long **)(param_2 + 0xf8);
      if (plVar12 == plVar13) {
        plVar12 = plVar13;
      }
      else {
        do {
          lVar14 = lVar14 + -8;
          plVar12 = plVar12 + -1;
          FUN_028a6158(puVar11,lVar14,plVar12);
        } while (plVar13 != plVar12);
        plVar13 = *(long **)(param_2 + 0xf0);
        plVar12 = *(long **)(param_2 + 0xf8);
      }
      *(long *)(param_2 + 0xf0) = lVar14;
      *(long *)(param_2 + 0xf8) = lVar15;
      lVar15 = *(long *)(param_2 + 0x100);
      *(ulong *)(param_2 + 0x100) = lVar5 + uVar10 * 8;
      while (plVar12 != plVar13) {
        plVar12 = plVar12 + -1;
        if ((long *)*plVar12 != (long *)0x0) {
          (**(code **)(*(long *)*plVar12 + 0x18))();
        }
      }
      if (plVar13 != (long *)0x0) {
        plVar12 = (long *)*puVar11;
        lVar15 = lVar15 - (long)plVar13;
        uVar6 = (**(code **)(*plVar12 + 0xc0))(plVar12);
        if ((uVar6 & 1) != 0) {
          lVar5 = tpidr_el0;
          if (*(char *)(lVar5 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar5 + 0x38d488) = 1;
            *(undefined8 *)(lVar5 + 0x38d478) = 0;
            *(undefined8 *)(lVar5 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar5 + 0x38d480)) {
            FUN_02bcc824(plVar12,plVar13,lVar15,8);
            goto LAB_028a54b4;
          }
        }
        (**(code **)(*plVar12 + 0x18))(plVar12,plVar13,lVar15,8);
      }
    }
    else {
      do {
        FUN_028a634c(puVar11,plVar13);
        plVar13 = (long *)(*(long *)(param_2 + 0xf8) + 8);
        uVar17 = uVar17 - 1;
        *(long **)(param_2 + 0xf8) = plVar13;
      } while (uVar17 != 0);
    }
  }
  else if (uVar16 != uVar6) {
    plVar12 = (long *)(lVar5 + uVar6 * 8);
    while (plVar12 != plVar13) {
      while( true ) {
        plVar13 = plVar13 + -1;
        if ((long *)*plVar13 == (long *)0x0) break;
        (**(code **)(*(long *)*plVar13 + 0x18))();
        if (plVar12 == plVar13) goto LAB_028a53b8;
      }
    }
LAB_028a53b8:
    *(long **)(param_2 + 0xf8) = plVar12;
  }
LAB_028a54b4:
  plVar13 = *(long **)(param_2 + 0xb8);
  plVar12 = *(long **)(param_2 + 0xc0);
  if (plVar13 != plVar12) {
    plVar8 = (long *)(*(long *)(param_2 + 0xf0) + uVar16 * 8);
    do {
      plVar7 = (long *)*plVar8;
      *plVar8 = 0;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))();
      }
      lVar5 = *plVar13;
      plVar7 = plVar13 + 1;
      *plVar13 = 0;
      *plVar8 = lVar5;
      plVar8 = plVar8 + 1;
      plVar13 = plVar7;
    } while (plVar12 != plVar7);
    plVar13 = *(long **)(param_2 + 0xb8);
    plVar12 = *(long **)(param_2 + 0xc0);
    while (plVar12 != plVar13) {
      plVar12 = plVar12 + -1;
      if ((long *)*plVar12 != (long *)0x0) {
        (**(code **)(*(long *)*plVar12 + 0x18))();
      }
    }
  }
  *(long **)(param_2 + 0xc0) = plVar13;
  *(undefined1 *)(param_2 + 0x128) = 0;
  FUN_028a6420(*(undefined8 *)(param_2 + 0xf0),*(undefined8 *)(param_2 + 0xf8));
  *(undefined4 *)(param_2 + 0x184) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x74));
LAB_028a5570:
  if (*(char *)(param_2 + 0x12a) == '\0') {
    lVar5 = nn::os::GetCurrentThread();
    plVar13 = (long *)(param_2 + 0x98);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x8c));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar4) {
              *plVar13 = lVar5;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_028a56bc;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_028a56bc:
    param_1 = *(float *)(param_2 + 0x130) * param_1;
    fVar18 = *(float *)(param_2 + 0x188) + param_1;
    *(float *)(param_2 + 0x188) = fVar18;
    if (*(int *)(param_2 + 0x184) == 0) {
      uVar2 = *(undefined4 *)(param_2 + 0x18c);
      *(float *)(param_2 + 0x18c) = fVar18;
      *(undefined4 *)(param_2 + 400) = uVar2;
    }
    puVar11 = *(undefined8 **)(param_2 + 0xf0);
    puVar1 = *(undefined8 **)(param_2 + 0xf8);
    if (puVar11 != puVar1) {
      if (*(int *)(param_2 + 0x184) == 0) {
        do {
          uVar6 = (**(code **)(*(long *)*puVar11 + 0x88))();
          if ((uVar6 & 1) == 0) {
            lVar5 = *(long *)*puVar11;
            fVar18 = param_1;
          }
          else {
            lVar5 = *(long *)*puVar11;
            fVar18 = *(float *)(param_2 + 0x188);
          }
          (**(code **)(lVar5 + 0x38))(fVar18);
          puVar11 = puVar11 + 1;
        } while (puVar1 != puVar11);
      }
      else {
        do {
          uVar6 = (**(code **)(*(long *)*puVar11 + 0x88))();
          if ((uVar6 & 1) == 0) {
            (**(code **)(*(long *)*puVar11 + 0x38))(param_1);
          }
          puVar11 = puVar11 + 1;
        } while (puVar1 != puVar11);
      }
    }
    *(undefined8 *)(param_2 + 0x98) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x8c));
    cVar3 = *(char *)(param_2 + 0x129);
  }
  else {
    cVar3 = *(char *)(param_2 + 0x129);
  }
  if (cVar3 == '\0') {
    return;
  }
  lVar5 = nn::os::GetCurrentThread();
  plVar13 = (long *)(param_2 + 0x80);
  do {
    if (*plVar13 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x74));
        while (*plVar13 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_028a55e8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar4) {
      *plVar13 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_028a55e8:
  plVar13 = *(long **)(param_2 + 0xf0);
  plVar12 = *(long **)(param_2 + 0xf8);
  if ((plVar13 != plVar12) && (uVar6 = (**(code **)(*(long *)*plVar13 + 0x70))(), (uVar6 & 1) == 0))
  {
    do {
      if (plVar12 + -1 == plVar13) {
        plVar8 = plVar12;
        goto LAB_028a57b0;
      }
      plVar8 = plVar13 + 1;
      plVar13 = plVar13 + 1;
      uVar6 = (**(code **)(*(long *)*plVar8 + 0x70))();
    } while ((uVar6 & 1) == 0);
  }
  plVar8 = plVar13;
  if (plVar13 != plVar12) {
    while( true ) {
      plVar13 = plVar13 + 1;
      if (plVar13 == plVar12) break;
      uVar6 = (**(code **)(*(long *)*plVar13 + 0x70))();
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)*plVar8;
        *plVar8 = 0;
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x18))();
        }
        lVar5 = *plVar13;
        *plVar13 = 0;
        *plVar8 = lVar5;
        plVar8 = plVar8 + 1;
      }
    }
  }
LAB_028a57b0:
  plVar13 = *(long **)(param_2 + 0xf8);
  lVar5 = (long)plVar13 - (long)plVar8;
  if (lVar5 != 0) {
    if ((long *)((long)plVar8 + lVar5) != plVar13) {
      lVar5 = lVar5 >> 3;
      plVar12 = plVar8;
      do {
        plVar8 = (long *)*plVar12;
        *plVar12 = 0;
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x18))();
        }
        lVar15 = plVar12[lVar5];
        plVar12[lVar5] = 0;
        plVar8 = plVar12 + 1;
        *plVar12 = lVar15;
        plVar12 = plVar8;
      } while (plVar13 + -lVar5 != plVar8);
      plVar13 = *(long **)(param_2 + 0xf8);
    }
    while (plVar13 != plVar8) {
      plVar13 = plVar13 + -1;
      if ((long *)*plVar13 != (long *)0x0) {
        (**(code **)(*(long *)*plVar13 + 0x18))();
      }
    }
    *(long **)(param_2 + 0xf8) = plVar8;
  }
  *(undefined1 *)(param_2 + 0x129) = 0;
  *(undefined8 *)(param_2 + 0x80) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x74));
  return;
}


