/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d9a49c; name: FUN_00d9a49c
 */


void FUN_00d9a49c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  undefined8 *local_70;
  undefined8 uStack_68;
  long *local_60;
  undefined8 local_58;
  
  lVar10 = nn::os::GetCurrentThread();
  plVar11 = (long *)(param_1 + 0xf8);
  do {
    if (*plVar11 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xec));
        while (*plVar11 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *plVar11 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00d9a504;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00d9a504:
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar11 = *(long **)(param_1 + 0xb0);
  if (plVar11 != (long *)0x0) {
    do {
      local_70 = (undefined8 *)0x0;
      uStack_68 = 0;
      FUN_008802f0(&local_70,plVar11 + 3);
      local_60 = (long *)plVar11[5];
      if ((local_70 == (undefined8 *)0x0) || (*(int *)((long)local_70 + 0xc) == 0)) {
        plVar11 = (long *)FUN_00d99230(param_1 + 0x80,plVar11);
        puVar4 = local_70;
      }
      else {
        (**(code **)(*local_60 + 0x30))(local_60,0);
        plVar11 = (long *)*plVar11;
        puVar4 = local_70;
      }
      local_70 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar4[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar10 = *(long *)puVar6;
          *(long *)puVar7 = lVar10;
          local_58 = *puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_58);
        }
      }
    } while (plVar11 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  return;
}


