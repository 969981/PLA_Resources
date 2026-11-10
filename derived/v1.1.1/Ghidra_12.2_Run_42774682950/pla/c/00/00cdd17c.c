/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cdd17c; name: FUN_00cdd17c
 */


void FUN_00cdd17c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_041e7d38;
  param_1[9] = (long)&PTR_LAB_041e7d88;
  param_1[10] = (long)&PTR_LAB_041e7dd0;
  plVar8 = (long *)param_1[0xe];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    param_1[0xe] = 0;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
    if (((*PTR_DAT_0437b0c8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b0c8), iVar7 != 0)) {
      FUN_00100250(&LAB_00cdf99c,PTR_DAT_0437b0d0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b0c8);
    }
    DAT_043ab400 = *(undefined8 *)PTR_DAT_0437b0d0;
    FUN_00ce0650(DAT_043ab400,param_1 + 0xf,param_1 + 0x10);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x94));
  plVar8 = (long *)param_1[0xe];
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      plVar8 = (long *)param_1[0xd];
      goto joined_r0x00cdd224;
    }
  }
  plVar8 = (long *)param_1[0xd];
joined_r0x00cdd224:
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar4 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar4;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar6) {
        *piVar4 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar10[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_18 = *puVar10;
      FUN_02a44274(lVar9 + 0xd8,&local_18);
    }
  }
  return;
}


