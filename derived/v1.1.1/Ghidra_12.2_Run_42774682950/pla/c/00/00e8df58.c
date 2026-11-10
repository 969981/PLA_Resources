/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e8df58; name: FUN_00e8df58
 */


void FUN_00e8df58(long param_1)

{
  int *piVar1;
  long *plVar2;
  short sVar3;
  short sVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  plVar11 = *(long **)(lVar9 + 0x100);
  if (plVar11 != (long *)0x0) {
    plVar12 = plVar11 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar12 = (long *)plVar11[0x20];
  if (plVar12 != (long *)0x0) {
    plVar10 = plVar12 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar6) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar10 = (long *)plVar12[0xf];
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar2 = plVar12 + 10;
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
    (**(code **)(*plVar12 + 0x10))(plVar12);
  }
  plVar12 = plVar11 + 10;
  do {
    iVar7 = (int)*plVar12 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar6) {
      *(int *)plVar12 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = *(long *)(param_1 + 0x170);
  }
  else {
    lVar9 = *(long *)(param_1 + 0x170);
  }
  if (lVar9 == 0) {
    FUN_016605fc(plVar10,0,0);
  }
  else {
    sVar3 = **(short **)(param_1 + 0x168);
    sVar4 = (*(short **)(param_1 + 0x168))[1];
    FUN_016605fc(plVar10,0,1);
    FUN_016605fc(plVar10,1,(int)sVar3);
    FUN_016605fc(plVar10,2,(int)sVar4);
  }
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00e8e11c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))(plVar10);
      return;
    }
  }
  return;
}


