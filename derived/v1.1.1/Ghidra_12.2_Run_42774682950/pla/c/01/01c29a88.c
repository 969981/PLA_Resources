/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c29a88; name: FUN_01c29a88
 */


void FUN_01c29a88(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  LightEventType *pLVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  
  plVar9 = (long *)(param_1 + 0x18);
  lVar12 = *plVar9;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar12) {
    uVar7 = FUN_01c2a010(param_2,param_1 + 0x78);
    if ((uVar7 & 1) != 0) {
      return;
    }
    uVar7 = FUN_01c2a010(param_2,param_1 + 0xb0);
    if ((uVar7 & 1) != 0) {
      return;
    }
    bVar4 = false;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar9 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01c29b00;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01c29b00:
    lVar6 = nn::os::GetCurrentThread();
    plVar9 = (long *)(param_1 + 0x30);
    do {
      if (*plVar9 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
          while (*plVar9 == 0) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar4) {
              *plVar9 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01c29b48;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar4) {
        *plVar9 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01c29b48:
    plVar9 = *(long **)(param_1 + 0x78);
    plVar13 = *(long **)(param_1 + 0x80);
    if (plVar9 != plVar13) {
      do {
        if (*plVar9 != 0) {
          (*(code *)**(undefined8 **)(*plVar9 + 8))();
          uVar7 = FUN_00ab47d0();
          if ((uVar7 & 1) != 0) goto LAB_01c29b80;
        }
        plVar9 = plVar9 + 1;
      } while (plVar13 != plVar9);
      plVar9 = plVar13;
LAB_01c29b80:
      plVar13 = *(long **)(param_1 + 0x80);
      if (plVar13 == plVar9) goto LAB_01c29b90;
      plVar14 = plVar9;
      if (plVar9 + 1 == plVar13) {
LAB_01c29dc8:
        plVar13 = plVar13 + -1;
        if ((long *)*plVar13 != (long *)0x0) {
          (**(code **)(*(long *)*plVar13 + 0x18))();
        }
        while (plVar13 != plVar9) {
          plVar13 = plVar13 + -1;
          if ((long *)*plVar13 != (long *)0x0) {
            (**(code **)(*(long *)*plVar13 + 0x18))();
          }
        }
      }
      else {
        do {
          plVar9 = (long *)*plVar14;
          *plVar14 = 0;
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x18))();
          }
          plVar9 = plVar14 + 1;
          lVar6 = *plVar9;
          *plVar9 = 0;
          plVar11 = plVar14 + 2;
          *plVar14 = lVar6;
          plVar14 = plVar9;
        } while (plVar11 != plVar13);
        plVar13 = *(long **)(param_1 + 0x80);
        if (plVar13 != plVar9) goto LAB_01c29dc8;
      }
      *(long **)(param_1 + 0x80) = plVar9;
LAB_01c29d94:
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
      goto LAB_01c29da4;
    }
LAB_01c29b90:
    plVar9 = *(long **)(param_1 + 0xb0);
    plVar13 = *(long **)(param_1 + 0xb8);
    if (plVar9 != plVar13) {
      do {
        if (*plVar9 != 0) {
          (*(code *)**(undefined8 **)(*plVar9 + 8))();
          uVar7 = FUN_00ab47d0();
          if ((uVar7 & 1) != 0) goto LAB_01c29bc8;
        }
        plVar9 = plVar9 + 1;
      } while (plVar13 != plVar9);
      plVar9 = plVar13;
LAB_01c29bc8:
      plVar13 = *(long **)(param_1 + 0xb8);
      if (plVar13 != plVar9) {
        plVar14 = plVar9;
        if (plVar9 + 1 == plVar13) {
LAB_01c29e70:
          plVar13 = plVar13 + -1;
          if ((long *)*plVar13 != (long *)0x0) {
            (**(code **)(*(long *)*plVar13 + 0x18))();
          }
          while (plVar13 != plVar9) {
            plVar13 = plVar13 + -1;
            if ((long *)*plVar13 != (long *)0x0) {
              (**(code **)(*(long *)*plVar13 + 0x18))();
            }
          }
        }
        else {
          do {
            plVar9 = (long *)*plVar14;
            *plVar14 = 0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x18))();
            }
            plVar9 = plVar14 + 1;
            lVar6 = *plVar9;
            *plVar9 = 0;
            plVar11 = plVar14 + 2;
            *plVar14 = lVar6;
            plVar14 = plVar9;
          } while (plVar11 != plVar13);
          plVar13 = *(long **)(param_1 + 0xb8);
          if (plVar13 != plVar9) goto LAB_01c29e70;
        }
        *(long **)(param_1 + 0xb8) = plVar9;
        goto LAB_01c29d94;
      }
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    bVar4 = true;
  }
  plVar9 = (long *)(param_1 + 0x50);
  do {
    lVar6 = *plVar9;
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar2) {
      *plVar9 = lVar6;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar12 = nn::os::GetCurrentThread();
  if (lVar12 == lVar6) {
    FUN_01c2a010(param_2,param_1 + 0xe8);
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar9 != 0 || *(long *)(param_1 + 0x58) != 0) {
        bVar2 = false;
        ClearExclusiveLocal();
        goto LAB_01c29c30;
      }
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar6;
        *(undefined8 *)(param_1 + 0x58) = 0;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar2 = true;
LAB_01c29c30:
    lVar6 = nn::os::GetCurrentThread();
    plVar13 = (long *)(param_1 + 0x70);
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
          while (*plVar13 == 0) {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar5) {
              *plVar13 = lVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_01c29c78;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
LAB_01c29c78:
    if (!bVar2) {
      uVar7 = FUN_01c2a010(param_2,param_1 + 0xe8);
      if ((uVar7 & 1) == 0) goto LAB_01c29cc4;
      *(undefined8 *)(param_1 + 0x70) = 0;
      pLVar8 = (LightEventType *)(param_1 + 100);
      goto LAB_01c29d20;
    }
    plVar13 = *(long **)(param_1 + 0xe8);
    plVar14 = *(long **)(param_1 + 0xf0);
    if (plVar13 != plVar14) {
      do {
        if (*plVar13 != 0) {
          (*(code *)**(undefined8 **)(*plVar13 + 8))();
          uVar7 = FUN_00ab47d0();
          if ((uVar7 & 1) != 0) goto LAB_01c29cb4;
        }
        plVar13 = plVar13 + 1;
      } while (plVar14 != plVar13);
      plVar13 = plVar14;
LAB_01c29cb4:
      plVar14 = *(long **)(param_1 + 0xf0);
      if (plVar14 != plVar13) {
        plVar11 = plVar13;
        if (plVar13 + 1 == plVar14) {
LAB_01c29f24:
          plVar14 = plVar14 + -1;
          if ((long *)*plVar14 != (long *)0x0) {
            (**(code **)(*(long *)*plVar14 + 0x18))();
          }
          while (plVar14 != plVar13) {
            plVar14 = plVar14 + -1;
            if ((long *)*plVar14 != (long *)0x0) {
              (**(code **)(*(long *)*plVar14 + 0x18))();
            }
          }
        }
        else {
          do {
            plVar13 = (long *)*plVar11;
            *plVar11 = 0;
            if (plVar13 != (long *)0x0) {
              (**(code **)(*plVar13 + 0x18))();
            }
            plVar13 = plVar11 + 1;
            lVar6 = *plVar13;
            *plVar13 = 0;
            plVar10 = plVar11 + 2;
            *plVar11 = lVar6;
            plVar11 = plVar13;
          } while (plVar10 != plVar14);
          plVar14 = *(long **)(param_1 + 0xf0);
          if (plVar14 != plVar13) goto LAB_01c29f24;
        }
        *(long **)(param_1 + 0xf0) = plVar13;
        FUN_01c2a0a0(*(undefined8 *)(param_1 + 0xe8),plVar13);
      }
    }
LAB_01c29cc4:
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
    if (bVar2) {
      do {
        lVar6 = *plVar9;
        lVar12 = *(long *)(param_1 + 0x58);
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar6;
          *(long *)(param_1 + 0x58) = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      do {
        if (*plVar9 != lVar6 || *(long *)(param_1 + 0x58) != lVar12) {
          ClearExclusiveLocal();
          lVar6 = *plVar9;
          lVar12 = *(long *)(param_1 + 0x58);
          goto LAB_01c29fd4;
        }
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = 0;
          *(long *)(param_1 + 0x54) = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_01c29d1c;
    }
  }
  goto joined_r0x01c29fa4;
LAB_01c29fd4:
  do {
    lVar1 = *plVar9;
    if (lVar1 == lVar6 && *(long *)(param_1 + 0x58) == lVar12) {
      cVar3 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = 0;
        *(long *)(param_1 + 0x54) = lVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 != '\0') goto LAB_01c29fd4;
      bVar2 = true;
    }
    else {
      bVar2 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar1;
    lVar12 = *(long *)(param_1 + 0x58);
  } while (!bVar2);
LAB_01c29d1c:
  pLVar8 = (LightEventType *)(param_1 + 0x44);
LAB_01c29d20:
  nn::os::SignalLightEvent(pLVar8);
joined_r0x01c29fa4:
  if (!bVar4) {
    return;
  }
LAB_01c29da4:
  *(undefined8 *)(param_1 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  return;
}


