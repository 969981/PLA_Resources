/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b8c0b8; name: FUN_02b8c0b8
 */


void FUN_02b8c0b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  puVar5 = PTR_DAT_04388100;
  *param_1 = &PTR_LAB_04285e08;
  *(undefined8 *)puVar5 = 0;
  puVar9 = (undefined8 *)param_1[2];
  if (puVar9 == (undefined8 *)0x0) {
    param_1[2] = 0;
  }
  else {
    (**(code **)(*(long *)*puVar9 + 0x60))();
    (**(code **)(*(long *)puVar9[1] + 0x60))();
    (**(code **)(*(long *)puVar9[2] + 0x60))();
    (**(code **)(*(long *)puVar9[3] + 0x60))();
    lVar7 = param_1[2];
    param_1[2] = 0;
    if (lVar7 != 0) {
      FUN_02b8cb8c(param_1 + 3);
    }
  }
  *param_1 = &PTR___cxa_pure_virtual_04285e30;
  if (((DAT_043effb0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_043effb0), iVar6 != 0)) {
    nn::os::InitializeLightEvent(&DAT_043eff9c,0,1);
    DAT_043effa8 = 0;
    FUN_00100250(PTR_LAB_04381908,&DAT_043eff98,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043effb0);
  }
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (DAT_043effa8 != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent((LightEventType *)&DAT_043eff9c);
        while (DAT_043effa8 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(0x43effa8,0x10);
          if (bVar4) {
            cVar3 = ExclusiveMonitorsStatus();
            DAT_043effa8 = lVar7;
          }
          if (cVar3 == '\0') goto LAB_02b8c1ac;
        }
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x43effa8,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      DAT_043effa8 = lVar7;
    }
  } while (cVar3 != '\0');
LAB_02b8c1ac:
  puVar9 = &DAT_043ef790;
  lVar7 = DAT_043eff90 * 8;
  puVar2 = &DAT_043ef790 + DAT_043eff90;
  if ((lVar7 != 0) && (DAT_043ef790 != param_1)) {
    puVar8 = &DAT_043ef790;
    do {
      lVar7 = lVar7 + -8;
      if (lVar7 == 0) goto LAB_02b8c234;
      puVar9 = puVar8 + 1;
      puVar1 = puVar8 + 1;
      puVar8 = puVar9;
    } while ((undefined8 *)*puVar1 != param_1);
  }
  if (puVar2 != puVar9) {
    puVar8 = puVar9 + 1;
    if (puVar8 != puVar2) {
      memmove(puVar9,puVar8,(long)puVar2 - (long)puVar8);
    }
    DAT_043eff90 = DAT_043eff90 + -1;
  }
LAB_02b8c234:
  DAT_043effa8 = 0;
  nn::os::SignalLightEvent((LightEventType *)&DAT_043eff9c);
  return;
}


