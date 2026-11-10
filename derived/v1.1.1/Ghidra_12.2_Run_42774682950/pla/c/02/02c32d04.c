/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c32d04; name: FUN_02c32d04
 */


void FUN_02c32d04(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int *piVar4;
  long lVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 local_58 [3];
  
  lVar13 = param_1[0x1f];
  *param_1 = (long)&PTR_FUN_04289f70;
  param_1[9] = (long)&PTR_LAB_0428a020;
  param_1[10] = (long)&PTR_LAB_0428a068;
  param_1[0x1f] = 0;
  lVar11 = tpidr_el0;
  if (lVar13 != 0) {
    FUN_02bcbe58(local_58,0);
    plVar10 = (long *)param_1[0x20];
    lVar5 = param_1[0x21];
    lVar14 = param_1[0x22];
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) == 0) {
LAB_02c32db0:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar5,lVar14);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02c32db0;
      FUN_02bcc824(plVar10,lVar13,lVar5,lVar14);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar8;
    if (iVar8 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  lVar13 = param_1[0x1b];
  param_1[0x1b] = 0;
  if (lVar13 != 0) {
    FUN_02bcbe58(local_58,0);
    plVar10 = (long *)param_1[0x1c];
    lVar5 = param_1[0x1d];
    lVar14 = param_1[0x1e];
    uVar9 = (**(code **)(*plVar10 + 0xc0))(plVar10);
    if ((uVar9 & 1) == 0) {
LAB_02c32ec0:
      (**(code **)(*plVar10 + 0x18))(plVar10,lVar13,lVar5,lVar14);
    }
    else {
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar11 + 0x38d480) < 1) goto LAB_02c32ec0;
      FUN_02bcc824(plVar10,lVar13,lVar5,lVar14);
    }
    if (*(char *)(lVar11 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar11 + 0x38d488) = 1;
      *(undefined8 *)(lVar11 + 0x38d478) = 0;
      *(undefined8 *)(lVar11 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar8 = *(int *)(lVar11 + 0x38d480) + -1;
    *(int *)(lVar11 + 0x38d480) = iVar8;
    if (iVar8 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar11 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar11 + 0x38d488) = 1;
        *(undefined8 *)(lVar11 + 0x38d478) = 0;
        *(undefined8 *)(lVar11 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar11 + 0x38d484) = 0;
    }
  }
  FUN_02c39b18(param_1 + 0x17,0);
  lVar11 = param_1[0x13];
  param_1[0x13] = 0;
  if (lVar11 != 0) {
    FUN_02c39858(param_1 + 0x14);
  }
  plVar10 = (long *)param_1[0x11];
  if (plVar10 == (long *)0x0) {
LAB_02c32f9c:
    plVar10 = (long *)param_1[0x10];
    if (plVar10 == (long *)0x0) goto LAB_02c32fbc;
LAB_02c32fa4:
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 != 0) goto LAB_02c32fbc;
    (**(code **)(*plVar10 + 0x10))();
    plVar10 = (long *)param_1[0xf];
    if (plVar10 != (long *)0x0) goto LAB_02c32fc4;
LAB_02c32fdc:
    plVar10 = (long *)param_1[0xe];
  }
  else {
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 != 0) goto LAB_02c32f9c;
    (**(code **)(*plVar10 + 0x10))();
    plVar10 = (long *)param_1[0x10];
    if (plVar10 != (long *)0x0) goto LAB_02c32fa4;
LAB_02c32fbc:
    plVar10 = (long *)param_1[0xf];
    if (plVar10 == (long *)0x0) goto LAB_02c32fdc;
LAB_02c32fc4:
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 != 0) goto LAB_02c32fdc;
    (**(code **)(*plVar10 + 0x10))();
    plVar10 = (long *)param_1[0xe];
  }
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
      plVar10 = (long *)param_1[0xd];
      goto joined_r0x02c33108;
    }
  }
  plVar10 = (long *)param_1[0xd];
joined_r0x02c33108:
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  puVar2 = PTR_DAT_04379610 + 0x58;
  puVar3 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar2;
  param_1[10] = (long)puVar3;
  puVar12 = (undefined8 *)param_1[0xb];
  if (puVar12 != (undefined8 *)0x0) {
    piVar4 = (int *)(puVar12 + 1);
    do {
      iVar8 = *piVar4;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
      if (bVar7) {
        *piVar4 = iVar8 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar8 + -1 == 0) {
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58[0] = *puVar12;
      FUN_02a44274(lVar11 + 0xd8,local_58);
    }
  }
  return;
}


