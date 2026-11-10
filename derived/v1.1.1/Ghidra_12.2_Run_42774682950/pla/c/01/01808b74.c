/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01808b74; name: FUN_01808b74
 */


void FUN_01808b74(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
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
            *plVar11 = lVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01808be4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01808be4:
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar11 = *(long **)(param_1 + 0xb0);
  if (plVar11 != (long *)0x0) {
    do {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_008802f0(&local_80,plVar11 + 3);
      plVar10 = (long *)plVar11[5];
      local_70 = plVar10;
      if ((local_80 == (undefined8 *)0x0) || (*(int *)((long)local_80 + 0xc) == 0)) {
        plVar11 = (long *)FUN_0180e26c(param_1 + 0x80,plVar11);
        puVar4 = local_80;
      }
      else {
        local_a0 = (undefined8 *)0x0;
        uStack_98 = 0;
        FUN_00b63974(&local_a0,param_2);
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        FUN_00cfa028(&local_90,param_2 + 0x10);
        (**(code **)(*plVar10 + 0x30))(plVar10,&local_a0);
        puVar4 = local_90;
        if (local_90 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_90 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            local_90[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_68 = *puVar4;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
        puVar4 = local_a0;
        if (local_a0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_a0 + 1);
          do {
            iVar8 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar8 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar8 + -1 == 0) {
            local_a0[2] = 0;
            if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
            }
            lVar9 = *(long *)puVar6;
            *(long *)puVar7 = lVar9;
            local_68 = *puVar4;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
        plVar11 = (long *)*plVar11;
        puVar4 = local_80;
      }
      local_80 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar8 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 + -1 == 0) {
          puVar4[2] = 0;
          if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar5);
          }
          lVar9 = *(long *)puVar6;
          *(long *)puVar7 = lVar9;
          local_68 = *puVar4;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
    } while (plVar11 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  return;
}


