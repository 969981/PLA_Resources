/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01923f88; name: FUN_01923f88
 */


void FUN_01923f88(undefined8 *param_1,uint param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (((param_2 & 1) != 0) && (*(uint *)(param_1 + 1) < 0xb)) {
    switch(*(uint *)(param_1 + 1)) {
    case 0:
      FUN_0191efdc();
      break;
    case 1:
      FUN_0191f194();
      break;
    case 2:
      FUN_0191f34c();
      break;
    case 3:
      FUN_0191f508();
      break;
    case 4:
      FUN_0191f6c0();
      break;
    case 5:
      FUN_0191f878();
      break;
    case 7:
      FUN_0191fbd4();
      break;
    case 8:
      FUN_0191fd8c();
      break;
    case 9:
      FUN_01920040();
      break;
    case 10:
      FUN_019202f4(*param_1);
    }
  }
  lVar9 = param_1[2];
  if ((*(byte *)(lVar9 + 0x79) & 1) != 0) {
    return;
  }
  lVar6 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar9 + 0x90);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 0x84));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0192406c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0192406c:
  puVar8 = *(undefined8 **)(lVar9 + 0x98);
  puVar2 = *(undefined8 **)(lVar9 + 0xa0);
  if (puVar8 != puVar2) {
    do {
      if ((*(byte *)(lVar9 + 0x79) & 1) == 0) {
        (*(code *)*puVar8)(puVar8 + 4);
      }
      if ((*(byte *)(lVar9 + 0x79) & 1) != 0) {
        (*(code *)**(undefined8 **)puVar8[0x10])();
        *(int *)(lVar9 + 0x7c) = *(int *)(lVar9 + 0x7c) + 1;
      }
      puVar8 = puVar8 + 0x12;
    } while (puVar2 != puVar8);
    puVar8 = *(undefined8 **)(lVar9 + 0x98);
    puVar2 = *(undefined8 **)(lVar9 + 0xa0);
    while (puVar5 = puVar2, puVar5 != puVar8) {
      pcVar7 = (code *)puVar5[-0x11];
      puVar2 = puVar5 + -0x12;
      if (pcVar7 != (code *)0x0) {
        puVar5[-0x10] = 0;
        puVar5[-0xf] = 0;
        puVar5[-0x12] = 0;
        puVar5[-0x11] = 0;
        (*pcVar7)(puVar5 + -0xe);
      }
    }
  }
  *(undefined8 **)(lVar9 + 0xa0) = puVar8;
  *(undefined1 *)(lVar9 + 0x78) = 1;
  *(undefined1 *)(lVar9 + 0x68) = 1;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 0x84));
  return;
}


