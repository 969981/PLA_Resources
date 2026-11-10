/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0125ba14; name: FUN_0125ba14
 */


void FUN_0125ba14(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 local_18;
  
  puVar7 = *(undefined8 **)(param_1 + 0x578);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x568);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x558);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  plVar6 = *(long **)(param_1 + 0x3e0);
  if (plVar6 == (long *)0x0) {
LAB_0125bb68:
    plVar6 = *(long **)(param_1 + 0x3d8);
    if (plVar6 == (long *)0x0) goto LAB_0125bb88;
LAB_0125bb70:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bb88;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3d0);
    if (plVar6 != (long *)0x0) goto LAB_0125bb90;
LAB_0125bba8:
    plVar6 = *(long **)(param_1 + 0x3c8);
    if (plVar6 == (long *)0x0) goto LAB_0125bbc8;
LAB_0125bbb0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bbc8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3c0);
    if (plVar6 != (long *)0x0) goto LAB_0125bbd0;
LAB_0125bbe8:
    plVar6 = *(long **)(param_1 + 0x3b8);
    if (plVar6 == (long *)0x0) goto LAB_0125bc08;
LAB_0125bbf0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bc08;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3b0);
    if (plVar6 != (long *)0x0) goto LAB_0125bc10;
LAB_0125bc28:
    plVar6 = *(long **)(param_1 + 0x3a8);
    if (plVar6 == (long *)0x0) goto LAB_0125bc48;
LAB_0125bc30:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bc48;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3a0);
    if (plVar6 != (long *)0x0) goto LAB_0125bc50;
LAB_0125bc68:
    plVar6 = *(long **)(param_1 + 0x398);
    if (plVar6 == (long *)0x0) goto LAB_0125bc88;
LAB_0125bc70:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bc88;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x390);
    if (plVar6 != (long *)0x0) goto LAB_0125bc90;
LAB_0125bca8:
    plVar6 = *(long **)(param_1 + 0x388);
    if (plVar6 == (long *)0x0) goto LAB_0125bcc8;
LAB_0125bcb0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bcc8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x380);
    if (plVar6 != (long *)0x0) goto LAB_0125bcd0;
LAB_0125bce8:
    plVar6 = *(long **)(param_1 + 0x378);
    if (plVar6 == (long *)0x0) goto LAB_0125bd08;
LAB_0125bcf0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bd08;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x370);
    if (plVar6 != (long *)0x0) goto LAB_0125bd10;
LAB_0125bd28:
    plVar6 = *(long **)(param_1 + 0x368);
    if (plVar6 == (long *)0x0) goto LAB_0125bd48;
LAB_0125bd30:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bd48;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x360);
    if (plVar6 != (long *)0x0) goto LAB_0125bd50;
LAB_0125bd68:
    plVar6 = *(long **)(param_1 + 0x358);
    if (plVar6 == (long *)0x0) goto LAB_0125bd88;
LAB_0125bd70:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bd88;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x350);
    if (plVar6 != (long *)0x0) goto LAB_0125bd90;
LAB_0125bda8:
    plVar6 = *(long **)(param_1 + 0x348);
  }
  else {
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bb68;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3d8);
    if (plVar6 != (long *)0x0) goto LAB_0125bb70;
LAB_0125bb88:
    plVar6 = *(long **)(param_1 + 0x3d0);
    if (plVar6 == (long *)0x0) goto LAB_0125bba8;
LAB_0125bb90:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bba8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3c8);
    if (plVar6 != (long *)0x0) goto LAB_0125bbb0;
LAB_0125bbc8:
    plVar6 = *(long **)(param_1 + 0x3c0);
    if (plVar6 == (long *)0x0) goto LAB_0125bbe8;
LAB_0125bbd0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bbe8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3b8);
    if (plVar6 != (long *)0x0) goto LAB_0125bbf0;
LAB_0125bc08:
    plVar6 = *(long **)(param_1 + 0x3b0);
    if (plVar6 == (long *)0x0) goto LAB_0125bc28;
LAB_0125bc10:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bc28;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x3a8);
    if (plVar6 != (long *)0x0) goto LAB_0125bc30;
LAB_0125bc48:
    plVar6 = *(long **)(param_1 + 0x3a0);
    if (plVar6 == (long *)0x0) goto LAB_0125bc68;
LAB_0125bc50:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bc68;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x398);
    if (plVar6 != (long *)0x0) goto LAB_0125bc70;
LAB_0125bc88:
    plVar6 = *(long **)(param_1 + 0x390);
    if (plVar6 == (long *)0x0) goto LAB_0125bca8;
LAB_0125bc90:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bca8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x388);
    if (plVar6 != (long *)0x0) goto LAB_0125bcb0;
LAB_0125bcc8:
    plVar6 = *(long **)(param_1 + 0x380);
    if (plVar6 == (long *)0x0) goto LAB_0125bce8;
LAB_0125bcd0:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bce8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x378);
    if (plVar6 != (long *)0x0) goto LAB_0125bcf0;
LAB_0125bd08:
    plVar6 = *(long **)(param_1 + 0x370);
    if (plVar6 == (long *)0x0) goto LAB_0125bd28;
LAB_0125bd10:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bd28;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x368);
    if (plVar6 != (long *)0x0) goto LAB_0125bd30;
LAB_0125bd48:
    plVar6 = *(long **)(param_1 + 0x360);
    if (plVar6 == (long *)0x0) goto LAB_0125bd68;
LAB_0125bd50:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bd68;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x358);
    if (plVar6 != (long *)0x0) goto LAB_0125bd70;
LAB_0125bd88:
    plVar6 = *(long **)(param_1 + 0x350);
    if (plVar6 == (long *)0x0) goto LAB_0125bda8;
LAB_0125bd90:
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_0125bda8;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = *(long **)(param_1 + 0x348);
  }
  if (plVar6 != (long *)0x0) {
    plVar2 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      puVar7 = *(undefined8 **)(param_1 + 0x338);
      goto joined_r0x0125c750;
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x338);
joined_r0x0125c750:
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x328);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x318);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x308);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2f8);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2e8);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2d8);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2c8);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2b8);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x2a8);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x298);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x288);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x278);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x268);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 600);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x248);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x238);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x228);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x218);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  puVar7 = *(undefined8 **)(param_1 + 0x208);
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar7;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  if (*(long **)(param_1 + 0x18) == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0125c564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
  return;
}


