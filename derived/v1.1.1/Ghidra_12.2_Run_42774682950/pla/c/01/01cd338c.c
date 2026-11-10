/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd338c; name: FUN_01cd338c
 */


void FUN_01cd338c(undefined8 param_1,long param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  
  lVar5 = nn::os::GetCurrentThread();
  plVar9 = (long *)(param_2 + 0xf0);
  do {
    if (*plVar9 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0xe4));
        while (*plVar9 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = lVar5;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01cd33f8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar4) {
      *plVar9 = lVar5;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01cd33f8:
  plVar9 = *(long **)(param_2 + 0xa0);
  if (plVar9 != (long *)0x0) {
    do {
      plVar7 = (long *)plVar9[3];
      local_48 = plVar7;
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[0xb];
        if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_01cd3528;
        if (*(long *)(lVar5 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
          *(undefined8 *)(lVar5 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar8 = (long *)plVar7[0xf];
      local_50 = plVar8;
      if (plVar8 == (long *)0x0) {
        FUN_01cd2e0c(param_2,&local_48,&local_50);
      }
      else {
        lVar5 = plVar8[0xb];
        if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_01cd3528;
        if (*(long *)(lVar5 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
          *(undefined8 *)(lVar5 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_01cd2e0c(param_2,&local_48,&local_50);
        lVar5 = plVar8[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*plVar8 + 0x20))(plVar8);
        }
      }
      lVar5 = plVar7[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))(plVar7);
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
    for (plVar9 = *(long **)(param_2 + 0xa0); plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      plVar7 = (long *)plVar9[3];
      local_58 = plVar7;
      if (plVar7 != (long *)0x0) {
        lVar5 = plVar7[0xb];
        if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) goto LAB_01cd3528;
        if (*(long *)(lVar5 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
          *(undefined8 *)(lVar5 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar7 = (long *)plVar7[0xf];
      local_60 = plVar7;
      if (plVar7 == (long *)0x0) {
        FUN_01cd23a8(&local_58,&local_60);
      }
      else {
        lVar5 = plVar7[0xb];
        if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
LAB_01cd3528:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar5 + 0x10) == 0) {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
          *(undefined8 *)(lVar5 + 0x10) = uVar6;
        }
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        FUN_01cd23a8(&local_58,&local_60);
        lVar5 = plVar7[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*plVar7 + 0x20))(plVar7);
        }
      }
      if (local_58 != (long *)0x0) {
        lVar5 = local_58[0xb];
        piVar1 = (int *)(lVar5 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar5 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      *(undefined1 *)(plVar9[3] + 0xe9) = 0;
      (**(code **)(**(long **)(plVar9[3] + 0x78) + 0x98))(*(long **)(plVar9[3] + 0x78),0);
    }
  }
  if ((param_3 & 1) != 0) {
    FUN_01cd36e4(param_1,param_2,3,0xf,*(undefined8 *)(param_2 + 8));
    FUN_01cd36e4(param_1,param_2,4,0x6e,*(undefined8 *)(param_2 + 8));
  }
  *(undefined8 *)(param_2 + 0xf0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_2 + 0xe4));
  return;
}


