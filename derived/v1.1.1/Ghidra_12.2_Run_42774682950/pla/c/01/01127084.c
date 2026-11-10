/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01127084; name: FUN_01127084
 */


void FUN_01127084(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar4 = (undefined1 *)*param_3;
  if (puVar4 == &DAT_cbf29ce484222645) {
    return;
  }
  if (*(undefined1 **)(param_1 + 0x1e0) == puVar4) {
    lVar5 = 0;
  }
  else if (*(undefined1 **)(param_1 + 0x360) == puVar4) {
    lVar5 = 1;
  }
  else if (*(undefined1 **)(param_1 + 0x4e0) == puVar4) {
    lVar5 = 2;
  }
  else if (*(undefined1 **)(param_1 + 0x660) == puVar4) {
    lVar5 = 3;
  }
  else if (*(undefined1 **)(param_1 + 0x7e0) == puVar4) {
    lVar5 = 4;
  }
  else if (*(undefined1 **)(param_1 + 0x960) == puVar4) {
    lVar5 = 5;
  }
  else if (*(undefined1 **)(param_1 + 0xae0) == puVar4) {
    lVar5 = 6;
  }
  else if (*(undefined1 **)(param_1 + 0xc60) == puVar4) {
    lVar5 = 7;
  }
  else if (*(undefined1 **)(param_1 + 0xde0) == puVar4) {
    lVar5 = 8;
  }
  else if (*(undefined1 **)(param_1 + 0xf60) == puVar4) {
    lVar5 = 9;
  }
  else if (*(undefined1 **)(param_1 + 0x10e0) == puVar4) {
    lVar5 = 10;
  }
  else if (*(undefined1 **)(param_1 + 0x1260) == puVar4) {
    lVar5 = 0xb;
  }
  else if (*(undefined1 **)(param_1 + 0x13e0) == puVar4) {
    lVar5 = 0xc;
  }
  else if (*(undefined1 **)(param_1 + 0x1560) == puVar4) {
    lVar5 = 0xd;
  }
  else if (*(undefined1 **)(param_1 + 0x16e0) == puVar4) {
    lVar5 = 0xe;
  }
  else if (*(undefined1 **)(param_1 + 0x1860) == puVar4) {
    lVar5 = 0xf;
  }
  else if (*(undefined1 **)(param_1 + 0x19e0) == puVar4) {
    lVar5 = 0x10;
  }
  else if (*(undefined1 **)(param_1 + 0x1b60) == puVar4) {
    lVar5 = 0x11;
  }
  else if (*(undefined1 **)(param_1 + 0x1ce0) == puVar4) {
    lVar5 = 0x12;
  }
  else if (*(undefined1 **)(param_1 + 0x1e60) == puVar4) {
    lVar5 = 0x13;
  }
  else if (*(undefined1 **)(param_1 + 0x1fe0) == puVar4) {
    lVar5 = 0x14;
  }
  else if (*(undefined1 **)(param_1 + 0x2160) == puVar4) {
    lVar5 = 0x15;
  }
  else if (*(undefined1 **)(param_1 + 0x22e0) == puVar4) {
    lVar5 = 0x16;
  }
  else if (*(undefined1 **)(param_1 + 0x2460) == puVar4) {
    lVar5 = 0x17;
  }
  else if (*(undefined1 **)(param_1 + 0x25e0) == puVar4) {
    lVar5 = 0x18;
  }
  else if (*(undefined1 **)(param_1 + 0x2760) == puVar4) {
    lVar5 = 0x19;
  }
  else if (*(undefined1 **)(param_1 + 0x28e0) == puVar4) {
    lVar5 = 0x1a;
  }
  else if (*(undefined1 **)(param_1 + 0x2a60) == puVar4) {
    lVar5 = 0x1b;
  }
  else if (*(undefined1 **)(param_1 + 0x2be0) == puVar4) {
    lVar5 = 0x1c;
  }
  else if (*(undefined1 **)(param_1 + 0x2d60) == puVar4) {
    lVar5 = 0x1d;
  }
  else if (*(undefined1 **)(param_1 + 12000) == puVar4) {
    lVar5 = 0x1e;
  }
  else if (*(undefined1 **)(param_1 + 0x3060) == puVar4) {
    lVar5 = 0x1f;
  }
  else if (*(undefined1 **)(param_1 + 0x31e0) == puVar4) {
    lVar5 = 0x20;
  }
  else if (*(undefined1 **)(param_1 + 0x3360) == puVar4) {
    lVar5 = 0x21;
  }
  else if (*(undefined1 **)(param_1 + 0x34e0) == puVar4) {
    lVar5 = 0x22;
  }
  else if (*(undefined1 **)(param_1 + 0x3660) == puVar4) {
    lVar5 = 0x23;
  }
  else if (*(undefined1 **)(param_1 + 0x37e0) == puVar4) {
    lVar5 = 0x24;
  }
  else if (*(undefined1 **)(param_1 + 0x3960) == puVar4) {
    lVar5 = 0x25;
  }
  else if (*(undefined1 **)(param_1 + 0x3ae0) == puVar4) {
    lVar5 = 0x26;
  }
  else if (*(undefined1 **)(param_1 + 0x3c60) == puVar4) {
    lVar5 = 0x27;
  }
  else if (*(undefined1 **)(param_1 + 0x3de0) == puVar4) {
    lVar5 = 0x28;
  }
  else if (*(undefined1 **)(param_1 + 0x3f60) == puVar4) {
    lVar5 = 0x29;
  }
  else if (*(undefined1 **)(param_1 + 0x40e0) == puVar4) {
    lVar5 = 0x2a;
  }
  else if (*(undefined1 **)(param_1 + 0x4260) == puVar4) {
    lVar5 = 0x2b;
  }
  else if (*(undefined1 **)(param_1 + 0x43e0) == puVar4) {
    lVar5 = 0x2c;
  }
  else if (*(undefined1 **)(param_1 + 0x4560) == puVar4) {
    lVar5 = 0x2d;
  }
  else if (*(undefined1 **)(param_1 + 0x46e0) == puVar4) {
    lVar5 = 0x2e;
  }
  else if (*(undefined1 **)(param_1 + 0x4860) == puVar4) {
    lVar5 = 0x2f;
  }
  else if (*(undefined1 **)(param_1 + 0x49e0) == puVar4) {
    lVar5 = 0x30;
  }
  else {
    if (*(undefined1 **)(param_1 + 0x4b60) != puVar4) {
      return;
    }
    lVar5 = 0x31;
  }
  lVar6 = *param_2;
  param_1 = param_1 + lVar5 * 0x180;
  lVar7 = *(long *)(lVar6 + 0x98);
  lVar5 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar7 + 0x30);
  do {
    if (*plVar1 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar7 + 0x24));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01127374;
        }
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01127374:
  FUN_02c661d4(lVar7,param_1 + 0x68,param_1 + 0x1d0);
  *(undefined8 *)(lVar7 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar7 + 0x24));
  FUN_02c5acfc(lVar6);
  return;
}


