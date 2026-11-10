/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01dfe44c; name: FUN_01dfe44c
 */


void FUN_01dfe44c(long *param_1)

{
  long *plVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_38;
  
  *param_1 = (long)&PTR_FUN_042518a0;
  param_1[9] = (long)&PTR_LAB_042518f0;
  param_1[10] = (long)&PTR_LAB_04251938;
  if ((long *)param_1[0x59] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x59] + 0x20))();
  }
  if ((long *)param_1[0x51] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x51] + 0x20))();
  }
  puVar13 = (undefined8 *)param_1[0x4a];
  if (puVar13 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar13 + 1);
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
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  if ((char)param_1[0x42] != '\0') {
    lVar10 = param_1[0x43];
    if (lVar10 != 0) {
      lVar11 = param_1[0x44];
      if (lVar11 == lVar10) {
        lVar11 = lVar10;
      }
      else {
        do {
          plVar8 = (long *)(lVar11 + -0x48);
          lVar11 = lVar11 + -0x80;
          if ((long *)*plVar8 != (long *)0x0) {
            (**(code **)(*(long *)*plVar8 + 0x20))();
          }
        } while (lVar10 != lVar11);
        lVar11 = param_1[0x43];
      }
      lVar12 = param_1[0x45];
      param_1[0x44] = lVar10;
      plVar8 = (long *)param_1[0x46];
      uVar9 = (**(code **)(*plVar8 + 0xc0))(plVar8);
      if ((uVar9 & 1) != 0) {
        lVar10 = tpidr_el0;
        if (*(char *)(lVar10 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar10 + 0x38d488) = 1;
          *(undefined8 *)(lVar10 + 0x38d478) = 0;
          *(undefined8 *)(lVar10 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar10 + 0x38d480)) {
          FUN_02bcc824(plVar8,lVar11,lVar12 - lVar11,0x10);
          goto LAB_01dfe514;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,lVar11,lVar12 - lVar11,0x10);
    }
LAB_01dfe514:
    *(undefined1 *)(param_1 + 0x42) = 0;
  }
  if ((long *)param_1[0x3b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x3b] + 0x20))();
  }
  plVar8 = (long *)param_1[0x27];
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
      plVar8 = (long *)param_1[0x26];
      goto joined_r0x01dfe550;
    }
  }
  plVar8 = (long *)param_1[0x26];
joined_r0x01dfe550:
  if (plVar8 != (long *)0x0) {
    lVar10 = plVar8[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
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
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))();
    }
  }
  puVar3 = PTR_DAT_04379610 + 0x58;
  puVar4 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar3;
  param_1[10] = (long)puVar4;
  puVar13 = (undefined8 *)param_1[0xb];
  if (puVar13 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar13 + 1);
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
      puVar13[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38 = *puVar13;
      FUN_02a44274(lVar10 + 0xd8,&local_38);
    }
  }
  return;
}


