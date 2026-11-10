/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0185d16c; name: FUN_0185d16c
 */


void FUN_0185d16c(long param_1,long *param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  lVar6 = nn::os::GetCurrentThread();
  plVar7 = (long *)(param_1 + 0x78);
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar7 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = lVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0185d1d8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = lVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0185d1d8:
  plVar7 = *(long **)(param_1 + 0x80);
  if (plVar7 != *(long **)(param_1 + 0x88)) {
    do {
      plVar8 = plVar7 + 4;
      if (*plVar7 == *param_2) goto LAB_0185d2f8;
      plVar7 = plVar8;
    } while (*(long **)(param_1 + 0x88) != plVar8);
  }
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_00b63bec(&local_68,param_2);
  FUN_00b63974(&local_58,param_3);
  if (*(ulong *)(param_1 + 0x88) < *(ulong *)(param_1 + 0x90)) {
    FUN_018609b8(param_1 + 0x98,*(ulong *)(param_1 + 0x88),&local_68);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 0x20;
    puVar4 = local_58;
  }
  else {
    FUN_01860650((long *)(param_1 + 0x80),&local_68);
    puVar4 = local_58;
  }
  local_58 = puVar4;
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_48 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_48);
    }
  }
  puVar4 = local_68;
  if (local_68 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_68 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_68[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_48 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_48);
    }
  }
LAB_0185d2f8:
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


