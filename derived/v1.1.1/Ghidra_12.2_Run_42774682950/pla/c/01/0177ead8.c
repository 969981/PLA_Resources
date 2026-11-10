/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0177ead8; name: FUN_0177ead8
 */


void FUN_0177ead8(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  bool bVar8;
  undefined4 local_34;
  
  *param_1 = &PTR_FUN_04225290;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379678), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar4 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar4;
  plVar6 = *(long **)(lVar4 + 0x100);
  if (plVar6 != (long *)0x0) {
    plVar7 = plVar6 + 10;
    do {
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar8) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar7 = (long *)plVar6[0x23];
  if (plVar7 == (long *)0x0) {
    bVar8 = true;
  }
  else {
    plVar5 = plVar7 + 10;
    do {
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *(int *)plVar5 = (int)*plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    bVar8 = false;
  }
  local_34 = *(undefined4 *)((long)param_1 + 0x4c);
  FUN_017871c4(plVar7 + 0x38,&local_34);
  FUN_017840cc(plVar7 + 0x45,&local_34);
  if (!bVar8) {
    plVar5 = plVar7 + 10;
    do {
      iVar2 = (int)*plVar5 + -1;
      cVar1 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar8) {
        *(int *)plVar5 = iVar2;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (iVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
  plVar7 = plVar6 + 10;
  do {
    iVar2 = (int)*plVar7 + -1;
    cVar1 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar8) {
      *(int *)plVar7 = iVar2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar6 = (long *)param_1[2];
  }
  else {
    plVar6 = (long *)param_1[2];
  }
  if (plVar6 != (long *)0x0) {
    plVar5 = (long *)param_1[3];
    plVar7 = plVar6;
    if (plVar5 != plVar6) {
      do {
        plVar5 = plVar5 + -2;
        if (*plVar5 != 0) {
          FUN_02a43934();
        }
      } while (plVar6 != plVar5);
      plVar7 = (long *)param_1[2];
    }
    param_1[3] = plVar6;
    lVar4 = param_1[4];
    plVar6 = (long *)param_1[5];
    uVar3 = FUN_02bcc75c(plVar6);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,plVar7,lVar4 - (long)plVar7,8);
    }
    else {
      FUN_02bcc824(plVar6,plVar7,lVar4 - (long)plVar7,8);
    }
  }
  return;
}


