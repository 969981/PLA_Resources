/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd43dc; name: FUN_01cd43dc
 */


/* WARNING: Removing unreachable block (ram,0x01cd47e0) */

void FUN_01cd43dc(long *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  bool bVar9;
  long lVar10;
  bool bVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long *local_60;
  long *local_58;
  long *local_48;
  
  lVar6 = FUN_00b13c20(*param_1 + 0xf0,&local_48);
  if (lVar6 != 0) {
    plVar1 = (long *)(lVar6 + 0x220);
    lVar13 = *plVar1;
    lVar7 = nn::os::GetCurrentThread();
    if (lVar7 == lVar13) {
      lVar7 = 0;
      bVar9 = true;
    }
    else {
      lVar7 = lVar6 + 0x210;
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar6 + 0x214));
            while (*plVar1 == 0) {
              cVar5 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar9) {
                *plVar1 = lVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              bVar9 = false;
              if (cVar5 == '\0') goto LAB_01cd4474;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar9) {
          *plVar1 = lVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar9 = false;
    }
LAB_01cd4474:
    lVar13 = *(long *)(lVar6 + 0x230);
    lVar10 = *(long *)(lVar6 + 0x228);
    if (!bVar9) {
      *(undefined8 *)(lVar7 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar7 + 4));
    }
    iVar14 = (int)((ulong)(lVar13 - lVar10) >> 4);
    if (iVar14 != 0) {
      iVar12 = 0;
      do {
        FUN_00d81884(&local_48,lVar6,iVar12);
        FUN_009c69bc(&local_58,local_48);
        local_60 = (long *)*param_2;
        if (local_60 != (long *)0x0) {
          lVar7 = local_60[0xb];
          if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar7 + 0x10) == 0) {
            uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
            *(undefined8 *)(lVar7 + 0x10) = uVar8;
          }
          piVar2 = (int *)(lVar7 + 0xc);
          do {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = *piVar2 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_01cd43dc(&local_58,&local_60);
        if (local_60 != (long *)0x0) {
          lVar7 = local_60[0xb];
          piVar2 = (int *)(lVar7 + 0xc);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))();
          }
        }
        if (local_58 != (long *)0x0) {
          lVar7 = local_58[0xb];
          piVar2 = (int *)(lVar7 + 0xc);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*local_58 + 0x20))();
          }
        }
        if (local_48 != (long *)0x0) {
          lVar7 = local_48[0xb];
          piVar2 = (int *)(lVar7 + 0xc);
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar9) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar7 + 0x18) = 0;
            (**(code **)(*local_48 + 0x20))();
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != iVar14);
    }
  }
  *(int *)(*param_2 + 0x68) = *(int *)(*param_2 + 0x68) + 1;
  lVar13 = *param_1;
  plVar1 = (long *)(lVar13 + 0x108);
  lVar7 = *plVar1;
  local_48 = param_2;
  lVar6 = nn::os::GetCurrentThread();
  if (lVar6 == lVar7) {
    bVar9 = false;
  }
  else {
    lVar6 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xfc));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar9) {
              *plVar1 = lVar6;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01cd450c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar9) {
        *plVar1 = lVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01cd450c:
    bVar9 = true;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar13 + 0x120);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x114));
        while (*plVar1 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar11) {
            *plVar1 = lVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01cd4558;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01cd4558:
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar13 + 0x140);
  do {
    lVar7 = *plVar1;
    lVar10 = *(long *)(lVar13 + 0x148);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar7;
      *(long *)(lVar13 + 0x148) = lVar10;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    while ((lVar7 != 0 && (lVar6 != lVar7))) {
      nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x134));
      do {
        lVar7 = *plVar1;
        lVar10 = *(long *)(lVar13 + 0x148);
        cVar5 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar11) {
          *plVar1 = lVar7;
          *(long *)(lVar13 + 0x148) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    while( true ) {
      if (*plVar1 != lVar7 || *(long *)(lVar13 + 0x148) != lVar10) break;
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar7;
        *(long *)(lVar13 + 0x144) = lVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 == '\0') {
        plVar3 = (long *)(lVar13 + 0x160);
        lVar7 = *plVar3;
        lVar6 = nn::os::GetCurrentThread();
        if (lVar6 != lVar7) {
          lVar6 = nn::os::GetCurrentThread();
          goto LAB_01cd4734;
        }
        bVar11 = true;
        goto LAB_01cd4774;
      }
    }
    ClearExclusiveLocal();
    lVar7 = *plVar1;
    lVar10 = *(long *)(lVar13 + 0x148);
  } while( true );
  while( true ) {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar11) {
      *plVar3 = lVar6;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') break;
LAB_01cd4734:
    if (*plVar3 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x154));
        while (*plVar3 == 0) {
          cVar5 = '\x01';
          bVar11 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar11) {
            *plVar3 = lVar6;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01cd4770;
        }
        ClearExclusiveLocal();
      } while( true );
    }
  }
LAB_01cd4770:
  bVar11 = false;
LAB_01cd4774:
  FUN_01cd95e0(*(undefined8 *)(lVar13 + 0x168),*(undefined8 *)(lVar13 + 0x170),&local_48);
  FUN_01cd95e0(*(undefined8 *)(lVar13 + 0x1a0),*(undefined8 *)(lVar13 + 0x1a8),&local_48);
  FUN_01cd95e0(*(undefined8 *)(lVar13 + 0x1d8),*(undefined8 *)(lVar13 + 0x1e0),&local_48);
  if (!bVar11) {
    *(undefined8 *)(lVar13 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x154));
  }
  do {
    lVar6 = *plVar1;
    lVar7 = *(long *)(lVar13 + 0x148);
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      *(long *)(lVar13 + 0x148) = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while( true ) {
    if (*plVar1 != lVar6 || *(long *)(lVar13 + 0x148) != lVar7) break;
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar11) {
      *plVar1 = lVar6;
      *(long *)(lVar13 + 0x144) = lVar7 + -1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    if (cVar5 == '\0') goto LAB_01cd47f0;
  }
  ClearExclusiveLocal();
  lVar6 = *plVar1;
  lVar7 = *(long *)(lVar13 + 0x148);
  do {
    do {
      lVar10 = *plVar1;
      if (lVar10 != lVar6 || *(long *)(lVar13 + 0x148) != lVar7) {
        bVar11 = false;
        ClearExclusiveLocal();
        goto LAB_01cd4888;
      }
      cVar5 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar11) {
        *plVar1 = lVar6;
        *(long *)(lVar13 + 0x144) = lVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar11 = true;
LAB_01cd4888:
    lVar6 = lVar10;
    lVar7 = *(long *)(lVar13 + 0x148);
  } while (!bVar11);
LAB_01cd47f0:
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x134));
  *(undefined8 *)(lVar13 + 0x120) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x114));
  if (bVar9) {
    *(undefined8 *)(lVar13 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xfc));
  }
  return;
}


