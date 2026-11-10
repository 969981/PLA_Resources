/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02835e14; name: FUN_02835e14
 */


void FUN_02835e14(long *param_1)

{
  int *piVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_0426f1d8;
  param_1[9] = (long)&PTR_LAB_0426f2b0;
  param_1[10] = (long)&PTR_LAB_0426f2f8;
  param_1[0xd] = (long)&PTR_LAB_0426f320;
  if ((long *)param_1[0x5b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x5b] + 0x20))();
  }
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 0x20))();
  }
  pcVar9 = (code *)param_1[0x29];
  if (pcVar9 == (code *)0x0) {
    plVar8 = (long *)param_1[0x26];
  }
  else {
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    (*pcVar9)(param_1 + 0x2c);
    plVar8 = (long *)param_1[0x26];
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  FUN_00d20548(param_1 + 0x1d);
  plVar8 = (long *)param_1[0x19];
  if (plVar8 == (long *)0x0) {
LAB_02835eb4:
    plVar8 = (long *)param_1[0x18];
    if (plVar8 == (long *)0x0) goto LAB_02835ed4;
LAB_02835ebc:
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_02835ed4;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x16];
    if (plVar8 != (long *)0x0) goto LAB_02835edc;
LAB_02835ef8:
    plVar8 = (long *)param_1[0x15];
    if (plVar8 == (long *)0x0) goto LAB_02835f18;
LAB_02835f00:
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_02835f18;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x14];
    if (plVar8 != (long *)0x0) goto LAB_02835f20;
LAB_02835f38:
    plVar8 = (long *)param_1[0x13];
    if (plVar8 == (long *)0x0) goto LAB_02835f58;
LAB_02835f40:
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_02835f58;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x12];
  }
  else {
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 != 0) goto LAB_02835eb4;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x18];
    if (plVar8 != (long *)0x0) goto LAB_02835ebc;
LAB_02835ed4:
    plVar8 = (long *)param_1[0x16];
    if (plVar8 == (long *)0x0) goto LAB_02835ef8;
LAB_02835edc:
    lVar10 = plVar8[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 != 0) goto LAB_02835ef8;
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar8 = (long *)param_1[0x15];
    if (plVar8 != (long *)0x0) goto LAB_02835f00;
LAB_02835f18:
    plVar8 = (long *)param_1[0x14];
    if (plVar8 == (long *)0x0) goto LAB_02835f38;
LAB_02835f20:
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 != 0) goto LAB_02835f38;
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)param_1[0x13];
    if (plVar8 != (long *)0x0) goto LAB_02835f40;
LAB_02835f58:
    plVar8 = (long *)param_1[0x12];
  }
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
      plVar8 = (long *)param_1[0x11];
      goto joined_r0x02835f7c;
    }
  }
  plVar8 = (long *)param_1[0x11];
joined_r0x02835f7c:
  if (plVar8 != (long *)0x0) {
    plVar2 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar6) {
        *(int *)plVar2 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  puVar3 = PTR_DAT_04379610 + 0x58;
  puVar4 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  puVar11 = (undefined8 *)param_1[0xb];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar7 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_18 = *puVar11;
      FUN_02a44274(lVar10 + 0xd8,&local_18);
    }
  }
  return;
}


