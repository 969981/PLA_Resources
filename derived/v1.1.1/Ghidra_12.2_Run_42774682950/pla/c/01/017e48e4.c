/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e48e4; name: FUN_017e48e4
 */


void FUN_017e48e4(long param_1,undefined8 param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58 [2];
  long *local_48;
  undefined8 local_38;
  
  lVar7 = nn::os::GetCurrentThread();
  plVar1 = (long *)(param_1 + 400);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x184));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_017e494c;
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
LAB_017e494c:
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_0095e070(&local_68,param_2);
  FUN_017e4b48(local_58,param_1,&local_68);
  if (local_58[0] == (undefined8 *)0x0) {
    local_48 = (long *)0x0;
    puVar5 = local_68;
  }
  else {
    FUN_017eb5b8(&local_48,local_58[0]);
    piVar2 = (int *)(local_58[0] + 1);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    puVar5 = local_68;
    if (iVar6 + -1 == 0) {
      local_58[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *local_58[0];
      FUN_02a44274(lVar7 + 0xd8,&local_38);
      puVar5 = local_68;
    }
  }
  local_68 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar5 + 1);
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
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  if (local_48 != (long *)0x0) {
    if (*(int *)((long)local_48 + 0x7c) == 0) {
      *(undefined1 *)((long)local_48 + 0x71) = 1;
    }
    else if (*(int *)((long)local_48 + 0x7c) == 1) {
      *(undefined1 *)((long)local_48 + 0x71) = 1;
      *(undefined4 *)((long)local_48 + 0x7c) = 2;
    }
    lVar7 = local_48[0xb];
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
      (**(code **)(*local_48 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 400) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x184));
  return;
}


