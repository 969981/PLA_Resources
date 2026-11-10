/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257c2d8; name: FUN_0257c2d8
 */


void FUN_0257c2d8(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  
  *(undefined1 *)(param_1 + 0x740) = 1;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379678), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar8 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar8;
  plVar6 = *(long **)(lVar8 + 0xd0);
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6 + 10;
    do {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar10) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar9 = (long *)plVar6[0xb];
  if (plVar9 != (long *)0x0) {
    plVar1 = plVar9 + 10;
    do {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar10) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar1 = plVar6 + 10;
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar10) {
      *(int *)plVar1 = iVar4;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar4 == 0) {
    (**(code **)(*plVar6 + 0x10))();
  }
  *(byte *)(param_1 + 0x740) = *(byte *)(param_1 + 0x740) & (char)plVar9[0x11] == '\x06';
  if (plVar9 != (long *)0x0) {
    plVar6 = plVar9 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar10) {
        *(int *)plVar6 = iVar4;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar6 = *(long **)(lVar8 + 0x240);
  if (plVar6 == (long *)0x0) {
    bVar10 = true;
  }
  else {
    lVar8 = plVar6[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    bVar10 = false;
  }
  iVar4 = FUN_010e630c();
  iVar5 = FUN_010e3c70(plVar6 + 0xa8ce);
  *(byte *)(param_1 + 0x740) = *(byte *)(param_1 + 0x740) & (iVar4 + 0x1d) * 0x1e == iVar5;
  if (!bVar10) {
    lVar8 = plVar6[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar4 = *piVar2;
      cVar3 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar10) {
        *piVar2 = iVar4 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0257c4c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))(plVar6);
      return;
    }
  }
  return;
}


