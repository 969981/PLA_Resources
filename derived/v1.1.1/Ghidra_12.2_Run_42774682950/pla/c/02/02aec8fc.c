/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aec8fc; name: FUN_02aec8fc
 */


void FUN_02aec8fc(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  
  FUN_02a6f65c(param_1,DAT_043eef30);
  *(undefined4 *)(param_1 + 0x73) = 1;
  *param_1 = (long)&DAT_042831b8;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  param_1[0x74] = param_2;
  param_1[9] = (long)&PTR_LAB_04283258;
  param_1[10] = (long)&PTR_LAB_042832a0;
  lVar8 = nn::os::GetCurrentThread();
  plVar1 = param_1 + 0x41;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_1 + 0x1fc));
        while (*plVar1 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_02aec998;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_02aec998:
  puVar4 = PTR_DAT_0437b4f8;
  if (((*PTR_DAT_0437b4f8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  puVar6 = PTR_DAT_0437b508;
  puVar5 = PTR_DAT_0437b500;
  lVar8 = *(long *)PTR_DAT_0437b500;
  *(long *)PTR_DAT_0437b508 = lVar8;
  FUN_02a70468(param_1,*(undefined8 *)(lVar8 + 0x50),0);
  if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b4f8), iVar7 != 0)) {
    FUN_00100250(PTR_LAB_0437b590,PTR_DAT_0437b500,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b4f8);
  }
  lVar8 = *(long *)puVar5;
  *(long *)puVar6 = lVar8;
  FUN_02a70468(param_1,0,*(undefined8 *)(lVar8 + 0x58));
  (**(code **)(*param_1 + 0x58))(param_1);
  param_1[0x41] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_1 + 0x1fc));
  return;
}


