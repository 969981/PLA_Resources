/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a4ddd4; name: FUN_02a4ddd4
 */


/* WARNING: Removing unreachable block (ram,0x02a4e2bc) */

void FUN_02a4ddd4(long param_1,undefined8 *param_2)

{
  LightEventType *pLVar1;
  long lVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *plVar15;
  bool bVar16;
  ulong uVar17;
  
  *(undefined1 *)(param_1 + 0x121) = 0;
  if (*(char *)(param_1 + 0x120) != '\0') {
    lVar6 = nn::os::GetCurrentThread();
    plVar12 = (long *)(param_1 + 0x18);
    do {
      if (*plVar12 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar12 == 0) {
            cVar4 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar16) {
              *plVar12 = lVar6;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_02a4de4c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar16) {
        *plVar12 = lVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_02a4de4c:
    if (*(char *)(param_1 + 0x122) != '\0') {
      lVar6 = nn::os::GetCurrentThread();
      plVar12 = (long *)(param_1 + 0x30);
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
            while (*plVar12 == 0) {
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar16) {
                *plVar12 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02a4de9c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar16) {
          *plVar12 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02a4de9c:
      plVar12 = (long *)(param_1 + 0xb0);
      plVar14 = *(long **)(param_1 + 0xb8);
      uVar17 = (long)plVar14 - *plVar12 >> 3;
      uVar8 = (*(long *)(param_1 + 0x80) - *(long *)(param_1 + 0x78) >> 3) + uVar17;
      if (uVar17 < uVar8) {
        FUN_02a4ebd0(plVar12);
      }
      else if (uVar17 != uVar8) {
        plVar15 = (long *)(*plVar12 + uVar8 * 8);
        while (plVar15 != plVar14) {
          while( true ) {
            plVar14 = plVar14 + -1;
            if ((long *)*plVar14 == (long *)0x0) break;
            (**(code **)(*(long *)*plVar14 + 0x18))();
            if (plVar15 == plVar14) goto LAB_02a4df00;
          }
        }
LAB_02a4df00:
        *(long **)(param_1 + 0xb8) = plVar15;
      }
      plVar14 = *(long **)(param_1 + 0x78);
      plVar15 = *(long **)(param_1 + 0x80);
      if (plVar14 != plVar15) {
        plVar12 = (long *)(*plVar12 + uVar17 * 8);
        do {
          plVar7 = (long *)*plVar12;
          *plVar12 = 0;
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x18))();
          }
          lVar6 = *plVar14;
          plVar7 = plVar14 + 1;
          *plVar14 = 0;
          *plVar12 = lVar6;
          plVar12 = plVar12 + 1;
          plVar14 = plVar7;
        } while (plVar15 != plVar7);
        plVar14 = *(long **)(param_1 + 0x78);
        plVar12 = *(long **)(param_1 + 0x80);
        while (plVar12 != plVar14) {
          plVar12 = plVar12 + -1;
          if ((long *)*plVar12 != (long *)0x0) {
            (**(code **)(*(long *)*plVar12 + 0x18))();
          }
        }
      }
      *(long **)(param_1 + 0x80) = plVar14;
      *(undefined2 *)(param_1 + 0x121) = 1;
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    }
    puVar13 = *(undefined8 **)(param_1 + 0xb0);
    puVar3 = *(undefined8 **)(param_1 + 0xb8);
    if (puVar13 != puVar3) {
      bVar16 = true;
      *(undefined1 *)(param_1 + 0x121) = 1;
      do {
        uVar8 = (**(code **)(*(long *)*puVar13 + 0x88))();
        if ((uVar8 & 1) == 0) {
          uVar8 = (**(code **)(*(long *)*puVar13 + 0xa0))((long *)*puVar13,param_2);
          if ((uVar8 & 1) == 0) {
            bVar16 = false;
          }
          else {
            (**(code **)(*(long *)*puVar13 + 0x80))();
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar3 != puVar13);
      if ((bVar16) && (*(char *)(param_1 + 0x122) == '\0')) {
        lVar6 = nn::os::GetCurrentThread();
        plVar12 = (long *)(param_1 + 0x50);
        do {
          if (*plVar12 != 0 || *(long *)(param_1 + 0x58) != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x44));
              while (*plVar12 == 0 && *(long *)(param_1 + 0x58) == 0) {
                cVar4 = '\x01';
                bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
                if (bVar16) {
                  *plVar12 = lVar6;
                  *(undefined8 *)(param_1 + 0x58) = 0;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_02a4e060;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar16) {
            *plVar12 = lVar6;
            *(undefined8 *)(param_1 + 0x58) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_02a4e060:
        plVar14 = (long *)(param_1 + 0xe8);
        plVar15 = *(long **)(param_1 + 0xf0);
        uVar17 = (long)plVar15 - *plVar14 >> 3;
        uVar8 = (*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0) >> 3) + uVar17;
        if (uVar17 < uVar8) {
          FUN_02a4ebd0(plVar14);
        }
        else if (uVar17 != uVar8) {
          plVar7 = (long *)(*plVar14 + uVar8 * 8);
          while (plVar7 != plVar15) {
            while( true ) {
              plVar15 = plVar15 + -1;
              if ((long *)*plVar15 == (long *)0x0) break;
              (**(code **)(*(long *)*plVar15 + 0x18))();
              if (plVar7 == plVar15) goto LAB_02a4e0c4;
            }
          }
LAB_02a4e0c4:
          *(long **)(param_1 + 0xf0) = plVar7;
        }
        plVar15 = *(long **)(param_1 + 0xb0);
        plVar7 = *(long **)(param_1 + 0xb8);
        if (plVar15 != plVar7) {
          plVar14 = (long *)(*plVar14 + uVar17 * 8);
          do {
            plVar9 = (long *)*plVar14;
            *plVar14 = 0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x18))();
            }
            lVar6 = *plVar15;
            plVar9 = plVar15 + 1;
            *plVar15 = 0;
            *plVar14 = lVar6;
            plVar14 = plVar14 + 1;
            plVar15 = plVar9;
          } while (plVar7 != plVar9);
          plVar15 = *(long **)(param_1 + 0xb0);
          plVar14 = *(long **)(param_1 + 0xb8);
          while (plVar14 != plVar15) {
            plVar14 = plVar14 + -1;
            if ((long *)*plVar14 != (long *)0x0) {
              (**(code **)(*(long *)*plVar14 + 0x18))();
            }
          }
        }
        *(long **)(param_1 + 0xb8) = plVar15;
        *(undefined1 *)(param_1 + 0x120) = 0;
        FUN_02a4ef30(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
        do {
          lVar6 = *plVar12;
          lVar11 = *(long *)(param_1 + 0x58);
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar16) {
            *plVar12 = lVar6;
            *(long *)(param_1 + 0x58) = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        do {
          if (*plVar12 != lVar6 || *(long *)(param_1 + 0x58) != lVar11) {
            ClearExclusiveLocal();
            lVar6 = *plVar12;
            lVar11 = *(long *)(param_1 + 0x58);
            goto LAB_02a4e5b8;
          }
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar16) {
            *plVar12 = 0;
            *(long *)(param_1 + 0x54) = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        goto LAB_02a4e194;
      }
    }
    goto LAB_02a4e19c;
  }
  goto LAB_02a4e1ac;
LAB_02a4e1d0:
  ClearExclusiveLocal();
  lVar11 = *plVar12;
  lVar2 = *(long *)(param_1 + 0x58);
  goto joined_r0x02a4e1c8;
LAB_02a4e57c:
  do {
    lVar2 = *plVar12;
    if (lVar2 == lVar6 && *(long *)(param_1 + 0x58) == lVar11) {
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar16) {
        *plVar12 = 0;
        *(long *)(param_1 + 0x54) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02a4e57c;
      bVar16 = true;
    }
    else {
      bVar16 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar2;
    lVar11 = *(long *)(param_1 + 0x58);
  } while (!bVar16);
  goto LAB_02a4e51c;
LAB_02a4e5b8:
  do {
    lVar2 = *plVar12;
    if (lVar2 == lVar6 && *(long *)(param_1 + 0x58) == lVar11) {
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar16) {
        *plVar12 = 0;
        *(long *)(param_1 + 0x54) = lVar11;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02a4e5b8;
      bVar16 = true;
    }
    else {
      bVar16 = false;
      ClearExclusiveLocal();
    }
    lVar6 = lVar2;
    lVar11 = *(long *)(param_1 + 0x58);
  } while (!bVar16);
LAB_02a4e194:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
LAB_02a4e19c:
  *(undefined8 *)(param_1 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
LAB_02a4e1ac:
  lVar6 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0x50);
  do {
    lVar11 = *plVar12;
    lVar2 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar11;
      *(long *)(param_1 + 0x58) = lVar2;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  pLVar1 = (LightEventType *)(param_1 + 0x44);
joined_r0x02a4e1c8:
  while ((lVar11 != 0 && (lVar6 != lVar11))) {
    nn::os::WaitLightEvent(pLVar1);
    do {
      lVar11 = *plVar12;
      lVar2 = *(long *)(param_1 + 0x58);
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar16) {
        *plVar12 = lVar11;
        *(long *)(param_1 + 0x58) = lVar2;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  do {
    if (*plVar12 != lVar11 || *(long *)(param_1 + 0x58) != lVar2) goto LAB_02a4e1d0;
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar11;
      *(long *)(param_1 + 0x54) = lVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  puVar3 = *(undefined8 **)(param_1 + 0xf0);
  for (puVar13 = *(undefined8 **)(param_1 + 0xe8); puVar13 != puVar3; puVar13 = puVar13 + 1) {
    uVar5 = (**(code **)(*(long *)*puVar13 + 0x40))();
    lVar6 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,uVar5);
    if (0 < *(long *)(lVar6 + 8)) {
      (**(code **)(*(long *)*puVar13 + 0xa8))((long *)*puVar13,param_2);
    }
  }
  do {
    lVar6 = *plVar12;
    lVar11 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x58) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  while( true ) {
    if (*plVar12 != lVar6 || *(long *)(param_1 + 0x58) != lVar11) break;
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x54) = lVar11 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') goto LAB_02a4e2cc;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar12;
  lVar11 = *(long *)(param_1 + 0x58);
  do {
    do {
      lVar2 = *plVar12;
      if (lVar2 != lVar6 || *(long *)(param_1 + 0x58) != lVar11) {
        bVar16 = false;
        ClearExclusiveLocal();
        goto LAB_02a4e56c;
      }
      cVar4 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar16) {
        *plVar12 = lVar6;
        *(long *)(param_1 + 0x54) = lVar11 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    bVar16 = true;
LAB_02a4e56c:
    lVar6 = lVar2;
    lVar11 = *(long *)(param_1 + 0x58);
  } while (!bVar16);
LAB_02a4e2cc:
  nn::os::SignalLightEvent(pLVar1);
  lVar6 = nn::os::GetCurrentThread();
  do {
    if (*plVar12 != 0 || *(long *)(param_1 + 0x58) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar1);
        while (*plVar12 == 0 && *(long *)(param_1 + 0x58) == 0) {
          cVar4 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar16) {
            *plVar12 = lVar6;
            *(undefined8 *)(param_1 + 0x58) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02a4e314;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar6;
      *(undefined8 *)(param_1 + 0x58) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a4e314:
  if (*(char *)(param_1 + 0x123) != '\0') {
    plVar14 = (long *)(param_1 + 0x70);
    do {
      *(undefined1 *)(param_1 + 0x123) = 0;
      lVar6 = nn::os::GetCurrentThread();
      do {
        if (*plVar14 != 0) {
          do {
            ClearExclusiveLocal();
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
            while (*plVar14 == 0) {
              cVar4 = '\x01';
              bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar16) {
                *plVar14 = lVar6;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_02a4e360;
            }
          } while( true );
        }
        cVar4 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar16) {
          *plVar14 = lVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_02a4e360:
      plVar15 = *(long **)(param_1 + 0xe8);
      plVar7 = *(long **)(param_1 + 0xf0);
      if ((plVar15 == plVar7) ||
         (uVar8 = (**(code **)(*(long *)*plVar15 + 0x78))(), (uVar8 & 1) != 0)) {
LAB_02a4e3ac:
        plVar9 = plVar15;
        if (plVar15 != plVar7) {
          while( true ) {
            plVar15 = plVar15 + 1;
            if (plVar15 == plVar7) break;
            uVar8 = (**(code **)(*(long *)*plVar15 + 0x78))();
            if ((uVar8 & 1) == 0) {
              plVar10 = (long *)*plVar9;
              *plVar9 = 0;
              if (plVar10 != (long *)0x0) {
                (**(code **)(*plVar10 + 0x18))();
              }
              lVar6 = *plVar15;
              *plVar15 = 0;
              *plVar9 = lVar6;
              plVar9 = plVar9 + 1;
            }
          }
        }
      }
      else {
        while (plVar7 + -1 != plVar15) {
          plVar9 = plVar15 + 1;
          plVar15 = plVar15 + 1;
          uVar8 = (**(code **)(*(long *)*plVar9 + 0x78))();
          if ((uVar8 & 1) != 0) goto LAB_02a4e3ac;
        }
        plVar9 = plVar7;
      }
      plVar15 = *(long **)(param_1 + 0xf0);
      lVar6 = (long)plVar15 - (long)plVar9;
      if (lVar6 != 0) {
        if ((long *)((long)plVar9 + lVar6) != plVar15) {
          lVar6 = lVar6 >> 3;
          plVar7 = plVar9;
          do {
            plVar9 = (long *)*plVar7;
            *plVar7 = 0;
            if (plVar9 != (long *)0x0) {
              (**(code **)(*plVar9 + 0x18))();
            }
            lVar11 = plVar7[lVar6];
            plVar7[lVar6] = 0;
            plVar9 = plVar7 + 1;
            *plVar7 = lVar11;
            plVar7 = plVar9;
          } while (plVar15 + -lVar6 != plVar9);
          plVar15 = *(long **)(param_1 + 0xf0);
        }
        while (plVar15 != plVar9) {
          plVar15 = plVar15 + -1;
          if ((long *)*plVar15 != (long *)0x0) {
            (**(code **)(*(long *)*plVar15 + 0x18))();
          }
        }
        *(long **)(param_1 + 0xf0) = plVar9;
      }
      FUN_02a4fd40(*(undefined8 *)(param_1 + 0xe8),plVar9);
      *(undefined8 *)(param_1 + 0x70) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
    } while (*(char *)(param_1 + 0x123) != '\0');
  }
  *(byte *)(param_1 + 0x121) =
       *(byte *)(param_1 + 0x121) | *(long *)(param_1 + 0xe8) != *(long *)(param_1 + 0xf0);
  do {
    lVar6 = *plVar12;
    lVar11 = *(long *)(param_1 + 0x58);
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = lVar6;
      *(long *)(param_1 + 0x58) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar12 != lVar6 || *(long *)(param_1 + 0x58) != lVar11) {
      ClearExclusiveLocal();
      lVar6 = *plVar12;
      lVar11 = *(long *)(param_1 + 0x58);
      goto LAB_02a4e57c;
    }
    cVar4 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar16) {
      *plVar12 = 0;
      *(long *)(param_1 + 0x54) = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02a4e51c:
  nn::os::SignalLightEvent(pLVar1);
  return;
}


