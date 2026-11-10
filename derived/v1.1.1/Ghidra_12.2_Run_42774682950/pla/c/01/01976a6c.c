/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01976a6c; name: FUN_01976a6c
 */


void FUN_01976a6c(long param_1,uint *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar4 = *param_2;
  if (uVar4 < 3) {
    lVar13 = param_1 + (ulong)uVar4 * 0x28;
    puVar14 = (undefined8 *)(lVar13 + 0x10);
    plVar15 = (long *)(lVar13 + 8);
    (*(code *)**(undefined8 **)*puVar14)();
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar8 != 0)) {
      local_38 = FUN_00938550();
      puVar7 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_38);
      FUN_00100250(PTR_LAB_0437a8d8,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    plVar12 = *(long **)PTR_DAT_0437a7d0;
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x18))(plVar12);
    }
    plVar9 = (long *)*plVar15;
    *plVar15 = (long)plVar12;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x20))();
    }
    *puVar14 = 0;
    param_1 = param_1 + (ulong)uVar4 * 0x28;
    plVar15 = *(long **)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    uVar10 = (**(code **)(*plVar15 + 0xc0))(plVar15);
    if ((uVar10 & 1) != 0) {
      lVar13 = tpidr_el0;
      if (*(char *)(lVar13 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar13 + 0x38d488) = 1;
        *(undefined8 *)(lVar13 + 0x38d478) = 0;
        *(undefined8 *)(lVar13 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar13 + 0x38d480)) {
        FUN_02bcc824(plVar15,uVar2,uVar3,8);
        goto LAB_01976b6c;
      }
    }
    (**(code **)(*plVar15 + 0x18))(plVar15,uVar2,uVar3,8);
LAB_01976b6c:
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    return;
  }
  puVar14 = (undefined8 *)FUN_01977370();
  uStack_48 = 0x1976c60;
  *puVar14 = &DAT_042325f8;
  puVar14[9] = &PTR_LAB_04232688;
  puVar14[10] = &PTR_LAB_042326d0;
  local_50 = (long)register0x00000008 + -0x10;
  if ((long *)puVar14[0x83] != (long *)0x0) {
    (**(code **)(*(long *)puVar14[0x83] + 0x20))();
  }
  FUN_0197711c(puVar14 + 0x7c);
  plVar15 = (long *)puVar14[0x7b];
  if (plVar15 == (long *)0x0) {
LAB_01976ccc:
    plVar15 = (long *)puVar14[0x7a];
    if (plVar15 == (long *)0x0) goto LAB_01976cf0;
LAB_01976cd4:
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01976cf0;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))();
    plVar15 = (long *)puVar14[0x77];
    if (plVar15 != (long *)0x0) goto LAB_01976cf8;
LAB_01976d14:
    plVar15 = (long *)puVar14[0x76];
  }
  else {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01976ccc;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))();
    plVar15 = (long *)puVar14[0x7a];
    if (plVar15 != (long *)0x0) goto LAB_01976cd4;
LAB_01976cf0:
    plVar15 = (long *)puVar14[0x77];
    if (plVar15 == (long *)0x0) goto LAB_01976d14;
LAB_01976cf8:
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 != 0) goto LAB_01976d14;
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))();
    plVar15 = (long *)puVar14[0x76];
  }
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
      plVar15 = (long *)puVar14[0x75];
      goto joined_r0x01976e50;
    }
  }
  plVar15 = (long *)puVar14[0x75];
joined_r0x01976e50:
  if (plVar15 != (long *)0x0) {
    lVar13 = plVar15[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))();
    }
  }
  *puVar14 = &DAT_0427e7a0;
  puVar14[9] = &PTR_LAB_0427e828;
  puVar14[10] = &PTR_LAB_0427e870;
  puVar11 = (undefined8 *)puVar14[0x71];
  if (puVar11 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar11 + 1);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      puVar11[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_58 = *puVar11;
      FUN_02a44274(lVar13 + 0xd8,&local_58);
    }
  }
  FUN_02a6f838(puVar14);
  return;
}


