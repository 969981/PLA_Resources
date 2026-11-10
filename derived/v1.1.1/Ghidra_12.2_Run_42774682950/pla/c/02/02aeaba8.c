/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aeaba8; name: FUN_02aeaba8
 */


void FUN_02aeaba8(long param_1)

{
  long *plVar1;
  LightEventType *pLVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined8 local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  int local_38;
  int local_34;
  
  if (((*PTR_DAT_0437b680 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437b680), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437e478,PTR_DAT_0437b688,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437b680);
  }
  *(undefined8 *)PTR_DAT_0437b690 = *(undefined8 *)PTR_DAT_0437b688;
  iVar6 = nn::oe::GetPerformanceMode();
  local_34 = 0;
  local_38 = 0;
  local_58 = 0x7ebb95ac4a09f984;
  pcStack_50 = "UserResolutionWidth";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  FUN_02aeebd0(param_1 + 0xa0,&local_58,&local_34);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = 0xbb12c6dec7a82e53;
  pcStack_50 = "UserResolutionHeight";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  FUN_02aeebd0(param_1 + 0xa0,&local_58,&local_38);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  lVar7 = DAT_043ef568;
  if (local_34 == 0) {
    local_34 = *(int *)(param_1 + (ulong)(iVar6 == 1) * 4 + 0x3f0);
  }
  if (local_38 == 0) {
    local_38 = *(int *)(param_1 + (ulong)(iVar6 == 1) * 4 + 0x3f8);
  }
  *(int *)(DAT_043ef568 + 0x128) = local_34;
  *(undefined8 *)(lVar7 + 0x120) = 0;
  *(int *)(lVar7 + 300) = local_38;
  local_58 = 0x385e1419bea9d841;
  pcStack_50 = "ResolutionWidth";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 0x330);
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x338) != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x324));
        while (*plVar1 == 0 && *(long *)(param_1 + 0x338) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x338) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02aead24;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x338) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02aead24:
  iVar6 = local_34;
  piVar8 = (int *)FUN_01aac988(param_1 + 0x248,&local_58);
  *piVar8 = iVar6;
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x338);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x338) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x338) != lVar9) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x338);
      goto LAB_02aeaec0;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x334) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_02aead80;
LAB_02aeaefc:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar7 && *(long *)(param_1 + 0x338) == lVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x334) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02aeaefc;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar3;
    lVar9 = *(long *)(param_1 + 0x338);
  } while (!bVar5);
  goto LAB_02aeae5c;
LAB_02aeaec0:
  do {
    lVar3 = *plVar1;
    if (lVar3 == lVar7 && *(long *)(param_1 + 0x338) == lVar9) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = 0;
        *(long *)(param_1 + 0x334) = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 != '\0') goto LAB_02aeaec0;
      bVar5 = true;
    }
    else {
      bVar5 = false;
      ClearExclusiveLocal();
    }
    lVar7 = lVar3;
    lVar9 = *(long *)(param_1 + 0x338);
  } while (!bVar5);
LAB_02aead80:
  pLVar2 = (LightEventType *)(param_1 + 0x324);
  nn::os::SignalLightEvent(pLVar2);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  local_58 = 0x3a6b9c3a7665a410;
  pcStack_50 = "ResolutionHeight";
  local_48 = 0x1f;
  local_40 = (long *)0x0;
  lVar7 = nn::os::GetCurrentThread();
  do {
    if (*plVar1 != 0 || *(long *)(param_1 + 0x338) != 0) {
      do {
        ClearExclusiveLocal();
        nn::os::WaitLightEvent(pLVar2);
        while (*plVar1 == 0 && *(long *)(param_1 + 0x338) == 0) {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7;
            *(undefined8 *)(param_1 + 0x338) = 0;
            cVar4 = ExclusiveMonitorsStatus();
          }
          if (cVar4 == '\0') goto LAB_02aeae04;
        }
      } while( true );
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(undefined8 *)(param_1 + 0x338) = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02aeae04:
  iVar6 = local_38;
  piVar8 = (int *)FUN_01aac988(param_1 + 0x248,&local_58);
  *piVar8 = iVar6;
  do {
    lVar7 = *plVar1;
    lVar9 = *(long *)(param_1 + 0x338);
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = lVar7;
      *(long *)(param_1 + 0x338) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    if (*plVar1 != lVar7 || *(long *)(param_1 + 0x338) != lVar9) {
      ClearExclusiveLocal();
      lVar7 = *plVar1;
      lVar9 = *(long *)(param_1 + 0x338);
      goto LAB_02aeaefc;
    }
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *plVar1 = 0;
      *(long *)(param_1 + 0x334) = lVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_02aeae5c:
  nn::os::SignalLightEvent(pLVar2);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  return;
}


