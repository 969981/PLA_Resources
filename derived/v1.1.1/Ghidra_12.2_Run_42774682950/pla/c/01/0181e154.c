/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181e154; name: FUN_0181e154
 */


void FUN_0181e154(long param_1,undefined8 param_2)

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
  undefined8 *local_78;
  undefined8 uStack_70;
  long *local_68;
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
          if (cVar2 == '\0') goto LAB_0181e1c4;
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
LAB_0181e1c4:
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar11 = *(long **)(param_1 + 0xb0);
  if (plVar11 != (long *)0x0) {
    do {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_008802f0(&local_78,plVar11 + 3);
      local_68 = (long *)plVar11[5];
      if ((local_78 == (undefined8 *)0x0) || (*(int *)((long)local_78 + 0xc) == 0)) {
        plVar11 = (long *)FUN_01826fdc(param_1 + 0x80,plVar11);
        puVar4 = local_78;
      }
      else {
        (**(code **)(*local_68 + 0x30))(local_68,param_2);
        plVar11 = (long *)*plVar11;
        puVar4 = local_78;
      }
      local_78 = puVar4;
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


