/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028078e0; name: FUN_028078e0
 */


void FUN_028078e0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_0426d540;
  param_1[9] = (long)&PTR_LAB_0426d630;
  param_1[10] = (long)&PTR_LAB_0426d678;
  plVar8 = (long *)param_1[0x1d];
  if (plVar8 == (long *)0x0) {
LAB_02807928:
    plVar8 = (long *)param_1[0x1c];
  }
  else {
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
    if (iVar7 != 0) goto LAB_02807928;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x1c];
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x20))();
  }
  plVar8 = (long *)param_1[0x13];
  if (plVar8 == (long *)0x0) {
LAB_02807974:
    plVar8 = (long *)param_1[0x12];
  }
  else {
    lVar9 = plVar8[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 != 0) goto LAB_02807974;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x12];
  }
  if (plVar8 != (long *)0x0) {
    lVar9 = plVar8[0xb];
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
      plVar8 = (long *)param_1[0x10];
      goto joined_r0x02807a7c;
    }
  }
  plVar8 = (long *)param_1[0x10];
joined_r0x02807a7c:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  puVar3 = PTR_DAT_04379610 + 0x58;
  puVar4 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  puVar10 = (undefined8 *)param_1[0xb];
  if (puVar10 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar10 + 1);
    do {
      iVar7 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar7 + -1;
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


