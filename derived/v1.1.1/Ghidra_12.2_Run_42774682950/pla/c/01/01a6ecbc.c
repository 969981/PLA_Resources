/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a6ecbc; name: FUN_01a6ecbc
 */


void FUN_01a6ecbc(long param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
  undefined8 local_58;
  
  lVar11 = nn::os::GetCurrentThread();
  plVar12 = (long *)(param_1 + 0xf8);
  do {
    if (*plVar12 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xec));
        while (*plVar12 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *plVar12 = lVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01a6ed2c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar11;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01a6ed2c:
  plVar12 = *(long **)(param_1 + 0xb0);
  if (plVar12 != (long *)0x0) {
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_008802f0(&local_78,plVar12 + 3);
    local_68 = (long *)plVar12[5];
    if ((local_78 == (undefined8 *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
      plVar12 = (long *)FUN_017f1670(param_1 + 0x80,plVar12);
    }
    else {
      (**(code **)(*local_68 + 0x30))(local_68,param_2);
      plVar12 = (long *)*plVar12;
    }
    puVar5 = local_78;
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    puVar4 = PTR_LAB_04379590;
    puVar9 = PTR_LAB_04379590;
    if (local_78 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4 = PTR_LAB_04379590;
      puVar9 = PTR_LAB_04379590;
      if (iVar10 + -1 == 0) {
        local_78[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)puVar7;
        *(long *)puVar8 = lVar11;
        local_58 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
        puVar4 = PTR_LAB_04379590;
        puVar9 = PTR_LAB_04379590;
      }
    }
    while (PTR_LAB_04379590 = puVar9, puVar9 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar4,
          plVar12 != (long *)0x0) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_008802f0(&local_78,plVar12 + 3);
      local_68 = (long *)plVar12[5];
      if ((local_78 == (undefined8 *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
        plVar12 = (long *)FUN_017f1670(param_1 + 0x80,plVar12);
        puVar5 = local_78;
      }
      else {
        (**(code **)(*local_68 + 0x30))(local_68,param_2);
        plVar12 = (long *)*plVar12;
        puVar5 = local_78;
      }
      puVar4 = PTR_LAB_04379590;
      local_78 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        puVar4 = PTR_LAB_04379590;
        if (iVar10 + -1 == 0) {
          puVar5[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar11 = *(long *)puVar7;
          *(long *)puVar8 = lVar11;
          local_58 = *puVar5;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
          puVar4 = PTR_LAB_04379590;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  return;
}


