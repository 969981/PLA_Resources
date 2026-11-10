/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135cd08; name: FUN_0135cd08
 */


void FUN_0135cd08(long param_1,undefined8 param_2)

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
  long *plVar12;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  lVar10 = nn::os::GetCurrentThread();
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
            *plVar12 = lVar10;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_0135cd78;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar3) {
      *plVar12 = lVar10;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_0135cd78:
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar12 = *(long **)(param_1 + 0xb0);
  if (plVar12 != (long *)0x0) {
    do {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_008802f0(&local_80,plVar12 + 3);
      plVar11 = (long *)plVar12[5];
      local_70 = plVar11;
      if ((local_80 == (undefined8 *)0x0) || (*(int *)((long)local_80 + 0xc) == 0)) {
        plVar12 = (long *)FUN_0135cf34(param_1 + 0x80,plVar12);
        puVar4 = local_80;
      }
      else {
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        FUN_00aeaa8c(&local_90,param_2);
        (**(code **)(*plVar11 + 0x30))(plVar11,&local_90);
        puVar4 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_90 + 1);
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
            local_90[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
              FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar10 = *(long *)puVar6;
            *(long *)puVar7 = lVar10;
            local_68 = *puVar4;
            FUN_02a44274(lVar10 + 0xd8,&local_68);
          }
        }
        plVar12 = (long *)*plVar12;
        puVar4 = local_80;
      }
      local_80 = puVar4;
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
          local_68 = *puVar4;
          FUN_02a44274(lVar10 + 0xd8,&local_68);
        }
      }
    } while (plVar12 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  return;
}


