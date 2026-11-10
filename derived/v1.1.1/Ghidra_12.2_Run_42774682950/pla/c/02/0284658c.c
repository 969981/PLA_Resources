/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0284658c; name: FUN_0284658c
 */


void FUN_0284658c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  long *local_48;
  
  local_48 = (long *)0x0;
  local_60 = (long *)&DAT_121d7307bd58c49b;
  puStack_58 = &DAT_03a81ce8;
  local_50 = 0x1f;
  FUN_02c41480(*(undefined8 *)(param_1 + 0x98),&local_60);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379690), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
  FUN_0286b588(&local_60);
  plVar5 = local_60;
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = plVar5 + 0x41;
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)plVar5 + 0x1fc));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_02846668;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = lVar7;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_02846668:
  uVar8 = FUN_02c414fc(*(undefined8 *)(param_1 + 0x98));
  FUN_02a70468(plVar5,0,uVar8);
  plVar5[0x41] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)plVar5 + 0x1fc));
  if (local_60 != (long *)0x0) {
    lVar7 = local_60[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  return;
}


