/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01808e3c; name: FUN_01808e3c
 */


void FUN_01808e3c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar10 = (long *)(param_1 + 0xf8);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0xec));
        while (*plVar10 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01808eac;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar3) {
      *plVar10 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01808eac:
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  plVar10 = *(long **)(param_1 + 0xb0);
  if (plVar10 != (long *)0x0) {
    do {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_008802f0(&local_80,plVar10 + 3);
      plVar9 = (long *)plVar10[5];
      local_70 = plVar9;
      if ((local_80 == (undefined8 *)0x0) || (*(int *)((long)local_80 + 0xc) == 0)) {
        plVar10 = (long *)FUN_0180e600(param_1 + 0x80,plVar10);
        puVar4 = local_80;
      }
      else {
        local_c0 = (undefined8 *)0x0;
        uStack_b8 = 0;
        FUN_00b63974(&local_c0,param_2);
        local_b0 = (undefined8 *)0x0;
        uStack_a8 = 0;
        FUN_00cfa028(&local_b0,param_2 + 0x10);
        local_98 = *(undefined8 *)(param_2 + 0x28);
        local_90 = *(undefined4 *)(param_2 + 0x30);
        local_a0 = *(undefined8 *)(param_2 + 0x20);
        (**(code **)(*plVar9 + 0x30))(plVar9,&local_c0);
        puVar4 = local_b0;
        if (local_b0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_b0 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            local_b0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)puVar5;
            *(long *)puVar6 = lVar8;
            local_68 = *puVar4;
            FUN_02a44274(lVar8 + 0xd8,&local_68);
          }
        }
        puVar4 = local_c0;
        if (local_c0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_c0 + 1);
          do {
            iVar7 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar7 + -1 == 0) {
            local_c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar8 = *(long *)puVar5;
            *(long *)puVar6 = lVar8;
            local_68 = *puVar4;
            FUN_02a44274(lVar8 + 0xd8,&local_68);
          }
        }
        plVar10 = (long *)*plVar10;
        puVar4 = local_80;
      }
      local_80 = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)puVar5;
          *(long *)puVar6 = lVar8;
          local_68 = *puVar4;
          FUN_02a44274(lVar8 + 0xd8,&local_68);
        }
      }
    } while (plVar10 != (long *)0x0);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xec));
  return;
}


