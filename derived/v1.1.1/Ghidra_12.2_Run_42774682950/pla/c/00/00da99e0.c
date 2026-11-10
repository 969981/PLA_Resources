/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da99e0; name: FUN_00da99e0
 */


void FUN_00da99e0(long param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *local_48;
  
  if (*param_2 != 0) {
    if (*(long *)(param_1 + 0x318) == 0) {
      lVar7 = 0;
      local_48 = (long *)0x0;
    }
    else {
      FUN_00da9c7c(&local_48);
      plVar1 = local_48;
      if (local_48 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = local_48[0xd];
        uVar5 = FUN_02a43a5c(local_48[0xb]);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
      }
    }
    lVar4 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar7 + 0x208);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1fc));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00da9a60;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00da9a60:
    lVar6 = *param_2;
    lVar4 = lVar6;
    if (*(long *)(lVar6 + 0x1d0) != 0) {
      lVar4 = *(long *)(lVar6 + 0x1d0);
    }
    if (*(long *)(lVar6 + 0x1d8) != 0) {
      lVar6 = *(long *)(lVar6 + 0x1d8);
    }
    if (lVar4 == lVar6) goto LAB_00da9bb0;
    FUN_02a70230(lVar7);
    *(undefined8 *)(lVar7 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1fc));
  }
  if (param_2[1] != 0) {
    if (*(long *)(param_1 + 0x318) == 0) {
      lVar7 = 0;
      local_48 = (long *)0x0;
    }
    else {
      FUN_00da9c7c(&local_48);
      plVar1 = local_48;
      if (local_48 == (long *)0x0) {
        lVar7 = 0;
      }
      else {
        lVar7 = local_48[0xe];
        uVar5 = FUN_02a43a5c(local_48[0xb]);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*plVar1 + 0x20))(plVar1);
        }
      }
    }
    lVar4 = nn::os::GetCurrentThread();
    plVar1 = (long *)(lVar7 + 0x208);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x1fc));
          while (*plVar1 == 0) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *plVar1 = lVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') goto LAB_00da9af8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
LAB_00da9af8:
    lVar6 = param_2[1];
    lVar4 = lVar6;
    if (*(long *)(lVar6 + 0x1d0) != 0) {
      lVar4 = *(long *)(lVar6 + 0x1d0);
    }
    if (*(long *)(lVar6 + 0x1d8) != 0) {
      lVar6 = *(long *)(lVar6 + 0x1d8);
    }
    if (lVar4 == lVar6) {
LAB_00da9bb0:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    FUN_02a70230(lVar7);
    *(undefined8 *)(lVar7 + 0x208) = 0;
    nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x1fc));
  }
  return;
}


