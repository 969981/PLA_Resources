/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c58a10; name: FUN_02c58a10
 */


undefined8 FUN_02c58a10(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (**(code **)(*param_1 + 0x58))(param_1,0);
  lVar5 = *(long *)(lVar4 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58a90;
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
LAB_02c58a90:
  FUN_02c65ef8(lVar5,param_2,param_2 + 0x168);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  lVar4 = (**(code **)(*param_1 + 0x58))(param_1,1);
  lVar5 = *(long *)(lVar4 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58b18;
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
LAB_02c58b18:
  FUN_02c65ef8(lVar5,param_2 + 0x178,param_2 + 0x2e0);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  lVar4 = (**(code **)(*param_1 + 0x58))(param_1,2);
  lVar5 = *(long *)(lVar4 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58ba0;
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
LAB_02c58ba0:
  FUN_02c65ef8(lVar5,param_2 + 0x2f0,param_2 + 0x458);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  lVar4 = (**(code **)(*param_1 + 0x58))(param_1,3);
  lVar5 = *(long *)(lVar4 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58c28;
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
LAB_02c58c28:
  FUN_02c65ef8(lVar5,param_2 + 0x468,param_2 + 0x5d0);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  lVar4 = (**(code **)(*param_1 + 0x58))(param_1,4);
  lVar5 = *(long *)(lVar4 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58cb0;
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
LAB_02c58cb0:
  FUN_02c65ef8(lVar5,param_2 + 0x5e0,param_2 + 0x748);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  lVar4 = (**(code **)(*param_1 + 0x58))(param_1,5);
  lVar5 = *(long *)(lVar4 + 0x98);
  lVar4 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar5 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar5 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar4;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02c58d38;
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
LAB_02c58d38:
  FUN_02c65ef8(lVar5,param_2 + 0x758,param_2 + 0x8c0);
  *(undefined8 *)(lVar5 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar5 + 0x24));
  *(char *)(param_2 + 0x8d0) = (char)param_1[0x11];
  *(undefined1 *)(param_2 + 0x8d1) = *(undefined1 *)((long)param_1 + 0x89);
  *(undefined2 *)(param_2 + 0x8d2) = 0;
  return 0x8d4;
}


