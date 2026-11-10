/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010bf6ac; name: FUN_010bf6ac
 */


void FUN_010bf6ac(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_041f0150;
  param_1[9] = &PTR_LAB_041f01f0;
  if (*(int *)((long)param_1 + 0x184) == -1) {
    plVar6 = (long *)param_1[0x3d];
  }
  else {
    if (((*PTR_DAT_0437b228 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437b228), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_0437b240,PTR_DAT_0437b230,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b228);
    }
    uVar7 = *(undefined8 *)PTR_DAT_0437b230;
    *(undefined8 *)PTR_DAT_0437b238 = uVar7;
    FUN_010b7d48(uVar7,*(undefined4 *)((long)param_1 + 0x184));
    plVar6 = (long *)param_1[0x3d];
  }
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))();
  }
  plVar6 = (long *)param_1[0x39];
  if (plVar6 == (long *)0x0) {
LAB_010bf710:
    plVar6 = (long *)param_1[0x38];
    if (plVar6 == (long *)0x0) goto LAB_010bf734;
LAB_010bf718:
    lVar8 = plVar6[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 != 0) goto LAB_010bf734;
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))();
    plVar6 = (long *)param_1[0x36];
    if (plVar6 != (long *)0x0) goto LAB_010bf73c;
LAB_010bf754:
    plVar6 = (long *)param_1[0x35];
    if (plVar6 == (long *)0x0) goto LAB_010bf774;
LAB_010bf75c:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_010bf774;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x34];
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_010bf710;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x38];
    if (plVar6 != (long *)0x0) goto LAB_010bf718;
LAB_010bf734:
    plVar6 = (long *)param_1[0x36];
    if (plVar6 == (long *)0x0) goto LAB_010bf754;
LAB_010bf73c:
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_010bf754;
    (**(code **)(*plVar6 + 0x10))();
    plVar6 = (long *)param_1[0x35];
    if (plVar6 != (long *)0x0) goto LAB_010bf75c;
LAB_010bf774:
    plVar6 = (long *)param_1[0x34];
  }
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar6 + 0x10))();
      plVar6 = (long *)param_1[0x32];
      goto joined_r0x010bf798;
    }
  }
  plVar6 = (long *)param_1[0x32];
joined_r0x010bf798:
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  FUN_00220498(param_1 + 0x24);
  FUN_010bf8d8(param_1);
  return;
}


