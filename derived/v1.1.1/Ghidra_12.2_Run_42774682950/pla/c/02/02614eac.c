/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02614eac; name: FUN_02614eac
 */


void FUN_02614eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  plVar1 = (long *)(param_1 + 0x18);
  lVar10 = *plVar1;
  lVar8 = nn::os::GetCurrentThread();
  if (lVar8 == lVar10) {
    uVar9 = FUN_026151a4(param_3,param_1 + 0x78);
    if ((uVar9 & 1) != 0) {
      return;
    }
    uVar9 = FUN_026151a4(param_3,param_1 + 0xb0);
    if ((uVar9 & 1) != 0) {
      return;
    }
    bVar6 = false;
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xc));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02614f54;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02614f54:
    lVar8 = nn::os::GetCurrentThread();
    plVar1 = (long *)(param_1 + 0x30);
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x24));
          while (*plVar1 == 0) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar6) {
              *plVar1 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_02614f9c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *plVar1 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_02614f9c:
    uVar9 = FUN_02615200(param_2,param_1 + 0x78);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
      goto LAB_02614fbc;
    }
    uVar9 = FUN_02615200(param_2,param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0x30) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x24));
    if ((uVar9 & 1) != 0) goto LAB_02614fbc;
    bVar6 = true;
  }
  plVar1 = (long *)(param_1 + 0x50);
  do {
    lVar8 = *plVar1;
    cVar5 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar8;
      *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x58);
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar10 = nn::os::GetCurrentThread();
  if (lVar10 == lVar8) {
    FUN_026151a4(param_3,param_1 + 0xe8);
  }
  else {
    lVar8 = nn::os::GetCurrentThread();
    plVar2 = (long *)(param_1 + 0x50);
    do {
      if (*plVar2 != 0 || *(long *)(param_1 + 0x58) != 0) {
        bVar4 = false;
        ClearExclusiveLocal();
        goto LAB_02615068;
      }
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = lVar8;
        *(undefined8 *)(param_1 + 0x58) = 0;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    bVar4 = true;
LAB_02615068:
    lVar8 = nn::os::GetCurrentThread();
    plVar2 = (long *)(param_1 + 0x70);
    do {
      if (*plVar2 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)(param_1 + 100));
          while (*plVar2 == 0) {
            cVar5 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar8;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_026150b0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *plVar2 = lVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
LAB_026150b0:
    if (bVar4) {
      uVar9 = FUN_02615200(param_2);
      if ((uVar9 & 1) != 0) {
        FUN_02615360(*(undefined8 *)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0xf0));
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
      do {
        lVar8 = *plVar1;
        lVar10 = *(long *)(param_1 + 0x58);
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar8;
          *(long *)(param_1 + 0x58) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      do {
        if (*plVar1 != lVar8 || *(long *)(param_1 + 0x58) != lVar10) {
          ClearExclusiveLocal();
          lVar8 = *plVar1;
          lVar10 = *(long *)(param_1 + 0x58);
          goto LAB_02615168;
        }
        cVar5 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = 0;
          *(long *)(param_1 + 0x54) = lVar10;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_02615140;
    }
    FUN_026151a4(param_3,param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x70) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 100));
  }
  goto joined_r0x02615130;
LAB_02615168:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar8 && *(long *)(param_1 + 0x58) == lVar10) {
      cVar5 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x54) = lVar10;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_02615168;
      bVar4 = true;
    }
    else {
      bVar4 = false;
      ClearExclusiveLocal();
    }
    lVar8 = lVar3;
    lVar10 = *(long *)(param_1 + 0x58);
  } while (!bVar4);
LAB_02615140:
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x44));
joined_r0x02615130:
  if (!bVar6) {
    return;
  }
LAB_02614fbc:
  *(undefined8 *)(param_1 + 0x18) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc));
  return;
}


