/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e651a4; name: FUN_01e651a4
 */


void FUN_01e651a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 *__dest;
  long lVar11;
  undefined8 *puVar12;
  
  *param_1 = &PTR_FUN_04255c28;
  param_1[9] = &PTR_LAB_04255c58;
  plVar9 = (long *)param_1[0x14];
  if (plVar9 == (long *)0x0) {
LAB_01e651ec:
    plVar9 = (long *)param_1[0x13];
    if (plVar9 == (long *)0x0) goto LAB_01e65210;
LAB_01e651f4:
    lVar11 = plVar9[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01e65210;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x12];
  }
  else {
    lVar11 = plVar9[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 != 0) goto LAB_01e651ec;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    (**(code **)(*plVar9 + 0x20))();
    plVar9 = (long *)param_1[0x13];
    if (plVar9 != (long *)0x0) goto LAB_01e651f4;
LAB_01e65210:
    plVar9 = (long *)param_1[0x12];
  }
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
      plVar9 = (long *)param_1[0xf];
      goto joined_r0x01e65238;
    }
  }
  plVar9 = (long *)param_1[0xf];
joined_r0x01e65238:
  if (plVar9 != (long *)0x0) {
    lVar11 = plVar9[0xb];
    piVar2 = (int *)(lVar11 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar5 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  puVar8 = PTR_DAT_04380718;
  plVar9 = param_1 + 10;
  *plVar9 = (long)&PTR_LAB_04255f98;
  *(undefined8 *)puVar8 = 0;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)param_1[0xb] + 0xb8))();
  }
  *plVar9 = (long)(PTR_DAT_0437a000 + 0x10);
  lVar11 = FUN_02bcf6a4();
  lVar10 = nn::os::GetCurrentThread();
  plVar3 = (long *)(lVar11 + 0x10);
  do {
    if (*plVar3 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 4));
        while (*plVar3 == 0) {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *plVar3 = lVar10;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') goto LAB_01e65368;
        }
      } while( true );
    }
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar7) {
      *plVar3 = lVar10;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
LAB_01e65368:
  lVar10 = DAT_043f1fb0 * 8;
  puVar4 = &DAT_043f17b0 + DAT_043f1fb0;
  __dest = &DAT_043f17b0;
  if ((lVar10 != 0) && (DAT_043f17b0 != plVar9)) {
    puVar12 = &DAT_043f17b0;
    do {
      lVar10 = lVar10 + -8;
      if (lVar10 == 0) {
        __dest = puVar4;
        break;
      }
      __dest = puVar12 + 1;
      puVar1 = puVar12 + 1;
      puVar12 = __dest;
    } while ((long *)*puVar1 != plVar9);
  }
  if (puVar4 != __dest) {
    puVar12 = __dest + 1;
    if (puVar12 != puVar4) {
      memmove(__dest,puVar12,(long)puVar4 - (long)puVar12);
    }
    DAT_043f1fb0 = DAT_043f1fb0 + -1;
  }
  *(undefined8 *)(lVar11 + 0x10) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 4));
  return;
}


