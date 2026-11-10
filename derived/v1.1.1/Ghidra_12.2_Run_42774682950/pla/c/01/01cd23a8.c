/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd23a8; name: FUN_01cd23a8
 */


void FUN_01cd23a8(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  bool bVar14;
  long *local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  undefined1 **local_60;
  undefined1 **ppuStack_58;
  undefined1 *local_48;
  
  lVar7 = FUN_00b13c20(*param_2 + 0xf0,&local_68);
  if (lVar7 != 0) {
    plVar1 = (long *)(lVar7 + 0x220);
    lVar13 = *plVar1;
    lVar8 = nn::os::GetCurrentThread();
    if (lVar8 == lVar13) {
      lVar8 = 0;
      bVar10 = true;
    }
    else {
      lVar8 = lVar7 + 0x210;
      lVar13 = nn::os::GetCurrentThread();
      do {
        if (*plVar1 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x214));
            while (*plVar1 == 0) {
              cVar5 = '\x01';
              bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar10) {
                *plVar1 = lVar13;
                cVar5 = ExclusiveMonitorsStatus();
              }
              bVar10 = false;
              if (cVar5 == '\0') goto LAB_01cd2440;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar5 = '\x01';
        bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar10) {
          *plVar1 = lVar13;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      bVar10 = false;
    }
LAB_01cd2440:
    lVar13 = *(long *)(lVar7 + 0x230);
    lVar11 = *(long *)(lVar7 + 0x228);
    if (!bVar10) {
      *(undefined8 *)(lVar8 + 0x10) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar8 + 4));
    }
    iVar12 = (int)((ulong)(lVar13 - lVar11) >> 4);
joined_r0x01cd2468:
    iVar12 = iVar12 + -1;
    if (-1 < iVar12) {
      while( true ) {
        FUN_00d81884(&local_68,lVar7,iVar12);
        local_70 = (long *)*param_1;
        if (local_70 != (long *)0x0) {
          lVar8 = local_70[0xb];
          if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar8 + 0x10) == 0) {
            uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
            *(undefined8 *)(lVar8 + 0x10) = uVar9;
          }
          piVar3 = (int *)(lVar8 + 0xc);
          do {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = *piVar3 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        FUN_009c69bc(&local_78,local_68);
        FUN_01cd23a8(&local_70,&local_78);
        if (local_78 != (long *)0x0) {
          lVar8 = local_78[0xb];
          piVar3 = (int *)(lVar8 + 0xc);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
          }
        }
        if (local_70 != (long *)0x0) {
          lVar8 = local_70[0xb];
          piVar3 = (int *)(lVar8 + 0xc);
          do {
            iVar4 = *piVar3;
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar10) {
              *piVar3 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 + -1 == 0) {
            *(undefined8 *)(lVar8 + 0x18) = 0;
            (**(code **)(*local_70 + 0x20))();
          }
        }
        if (local_68 == (long *)0x0) break;
        lVar8 = local_68[0xb];
        piVar3 = (int *)(lVar8 + 0xc);
        do {
          iVar4 = *piVar3;
          cVar5 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar10) {
            *piVar3 = iVar4 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar4 + -1 != 0) break;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_68 + 0x20))();
        iVar12 = iVar12 + -1;
        if (iVar12 < 0) goto LAB_01cd246c;
      }
      goto joined_r0x01cd2468;
    }
  }
LAB_01cd246c:
  lVar13 = *param_2;
  local_60 = &local_48;
  local_68 = (long *)(lVar13 + 0xf0);
  plVar1 = (long *)(lVar13 + 0x108);
  lVar8 = *plVar1;
  local_80 = param_1;
  ppuStack_58 = local_60;
  local_48 = (undefined1 *)&local_80;
  lVar7 = nn::os::GetCurrentThread();
  if (lVar7 == lVar8) {
    FUN_01cd74c8(&local_68,lVar13 + 0x168);
    FUN_01cd74c8(&local_68,lVar13 + 0x1a0);
    bVar10 = false;
  }
  else {
    lVar7 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0xfc));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01cd24e4;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01cd24e4:
    lVar7 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar13 + 0x120);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x114));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar10) {
              *plVar1 = lVar7;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_01cd252c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *plVar1 = lVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_01cd252c:
    FUN_01cd7540(&ppuStack_58,lVar13 + 0x168);
    FUN_01cd7540(&ppuStack_58,lVar13 + 0x1a0);
    *(undefined8 *)(lVar13 + 0x120) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x114));
    bVar10 = true;
  }
  plVar1 = (long *)(lVar13 + 0x140);
  do {
    lVar7 = *plVar1;
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar7;
      *(undefined8 *)(lVar13 + 0x148) = *(undefined8 *)(lVar13 + 0x148);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar7) {
    FUN_01cd74c8(&local_68,lVar13 + 0x1d8);
    goto joined_r0x01cd26ac;
  }
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || *(long *)(lVar13 + 0x148) != 0) {
      bVar14 = false;
      ClearExclusiveLocal();
      goto LAB_01cd259c;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar7;
      *(undefined8 *)(lVar13 + 0x148) = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  bVar14 = true;
LAB_01cd259c:
  lVar7 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar13 + 0x160);
  do {
    if (*plVar2 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar13 + 0x154));
        while (*plVar2 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar6) {
            *plVar2 = lVar7;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01cd25e4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar6) {
      *plVar2 = lVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01cd25e4:
  if (!bVar14) {
    FUN_01cd74c8(&local_68,lVar13 + 0x1d8);
    *(undefined8 *)(lVar13 + 0x160) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x154));
    goto joined_r0x01cd26ac;
  }
  FUN_01cd7540(&ppuStack_58);
  *(undefined8 *)(lVar13 + 0x160) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x154));
  do {
    lVar7 = *plVar1;
    lVar8 = *(long *)(lVar13 + 0x148);
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = lVar7;
      *(long *)(lVar13 + 0x148) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(lVar13 + 0x148) != lVar8) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar8 = *(long *)(lVar13 + 0x148);
      goto LAB_01cd26d4;
    }
    cVar5 = '\x01';
    bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar14) {
      *plVar1 = 0;
      *(long *)(lVar13 + 0x144) = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  goto LAB_01cd2648;
LAB_01cd26d4:
  do {
    lVar11 = *plVar1;
    if (lVar11 == lVar7 && *(long *)(lVar13 + 0x148) == lVar8) {
      cVar5 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar14) {
        *plVar1 = 0;
        *(long *)(lVar13 + 0x144) = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_01cd26d4;
      bVar14 = true;
    }
    else {
      bVar14 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar11;
    lVar8 = *(long *)(lVar13 + 0x148);
  } while (!bVar14);
LAB_01cd2648:
  nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0x134));
joined_r0x01cd26ac:
  if (bVar10) {
    *(undefined8 *)(lVar13 + 0x108) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar13 + 0xfc));
  }
  return;
}


