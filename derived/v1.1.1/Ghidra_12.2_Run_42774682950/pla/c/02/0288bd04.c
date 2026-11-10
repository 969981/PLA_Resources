/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0288bd04; name: FUN_0288bd04
 */


void FUN_0288bd04(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  undefined *puVar6;
  bool bVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_FUN_042718a8;
  param_1[9] = &PTR_LAB_042718d8;
  lVar9 = 0;
  do {
    plVar8 = *(long **)((long)param_1 + lVar9 + 0x1178);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar8 = *(long **)((long)param_1 + lVar9 + 0x1158);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    bVar7 = lVar9 != -0x630;
    lVar9 = lVar9 + -0x30;
  } while (bVar7);
  puVar11 = param_1 + 0x164;
  do {
    FUN_010a17b8(puVar11 + -6);
    FUN_00936104(puVar11 + -0xc);
    plVar8 = (long *)puVar11[-0xd];
    if (plVar8 == (long *)0x0) {
LAB_0288bdb8:
      plVar8 = (long *)puVar11[-0xf];
    }
    else {
      plVar2 = plVar8 + 10;
      do {
        iVar5 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar5;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar5 != 0) goto LAB_0288bdb8;
      (**(code **)(*plVar8 + 0x10))();
      plVar8 = (long *)puVar11[-0xf];
    }
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x20))();
    }
    plVar8 = puVar11 + -0x13;
    puVar11 = puVar11 + -0x14;
    if ((long *)*plVar8 != (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 0x20))();
    }
    puVar6 = PTR_DAT_0437e408;
  } while (puVar11 != param_1 + 0x10);
  plVar8 = param_1 + 10;
  *plVar8 = (long)&PTR_LAB_04271948;
  *(undefined8 *)puVar6 = 0;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)param_1[0xb] + 0xb8))();
  }
  *plVar8 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar9 = FUN_02bcf6a4();
  lVar10 = nn::os::GetCurrentThread();
  plVar2 = (long *)(lVar9 + 0x10);
  do {
    if (*plVar2 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar9 + 4));
        while (*plVar2 == 0) {
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *plVar2 = lVar10;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_0288bfcc;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *plVar2 = lVar10;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_0288bfcc:
  lVar10 = DAT_043f1fb0 * 8;
  puVar3 = &DAT_043f17b0 + DAT_043f1fb0;
  puVar11 = &DAT_043f17b0;
  if ((lVar10 != 0) && (DAT_043f17b0 != plVar8)) {
    puVar12 = &DAT_043f17b0;
    do {
      lVar10 = lVar10 + -8;
      if (lVar10 == 0) {
        puVar11 = puVar3;
        break;
      }
      puVar11 = puVar12 + 1;
      puVar1 = puVar12 + 1;
      puVar12 = puVar11;
    } while ((long *)*puVar1 != plVar8);
  }
  if (puVar3 != puVar11) {
    puVar12 = puVar11 + 1;
    if (puVar12 != puVar3) {
      memmove(puVar11,puVar12,(long)puVar3 - (long)puVar12);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  *(undefined8 *)(lVar9 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar9 + 4));
  return;
}


