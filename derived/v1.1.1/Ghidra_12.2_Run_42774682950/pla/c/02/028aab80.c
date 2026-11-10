/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028aab80; name: FUN_028aab80
 */


void FUN_028aab80(long param_1)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  code *pcVar13;
  long lVar14;
  undefined8 local_58;
  
  lVar11 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x3a0);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x394));
        while (*plVar1 == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar11;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_028aabe8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar11;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_028aabe8:
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  lVar11 = *(long *)(param_1 + 0x70);
  lVar3 = *(long *)(param_1 + 0x78);
  if (lVar3 != lVar11) {
    puVar12 = *(undefined8 **)(lVar3 + -0x10);
    while( true ) {
      if (puVar12 != (undefined8 *)0x0) {
        piVar2 = (int *)(puVar12 + 1);
        do {
          iVar10 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar10 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar10 + -1 == 0) {
          puVar12[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar14 = *(long *)puVar7;
          *(long *)puVar8 = lVar14;
          local_58 = *puVar12;
          FUN_02a44274(lVar14 + 0xd8,&local_58);
        }
      }
      if (*(long **)(lVar3 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar3 + -0x18) + 0x20))();
      }
      if (lVar3 + -0x30 == lVar11) break;
      puVar12 = *(undefined8 **)(lVar3 + -0x40);
      lVar3 = lVar3 + -0x30;
    }
  }
  *(long *)(param_1 + 0x78) = lVar11;
  FUN_028ad6fc(param_1 + 0xa8);
  FUN_028ad6fc(param_1 + 0xe0);
  FUN_028ad6fc(param_1 + 0x118);
  FUN_028ad6fc(param_1 + 0x150);
  pcVar13 = *(code **)(param_1 + 0x198);
  if (pcVar13 == (code *)0x0) {
    pcVar13 = *(code **)(param_1 + 0x218);
  }
  else {
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    (*pcVar13)(param_1 + 0x1b0);
    pcVar13 = *(code **)(param_1 + 0x218);
  }
  if (pcVar13 == (code *)0x0) {
    pcVar13 = *(code **)(param_1 + 0x298);
  }
  else {
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    (*pcVar13)(param_1 + 0x230);
    pcVar13 = *(code **)(param_1 + 0x298);
  }
  if (pcVar13 == (code *)0x0) {
    pcVar13 = *(code **)(param_1 + 0x318);
  }
  else {
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined8 *)(param_1 + 0x2a0) = 0;
    *(undefined8 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    (*pcVar13)(param_1 + 0x2b0);
    pcVar13 = *(code **)(param_1 + 0x318);
  }
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x328) = 0;
    *(undefined8 *)(param_1 + 800) = 0;
    *(undefined8 *)(param_1 + 0x318) = 0;
    *(undefined8 *)(param_1 + 0x310) = 0;
    (*pcVar13)(param_1 + 0x330);
  }
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x394));
  return;
}


