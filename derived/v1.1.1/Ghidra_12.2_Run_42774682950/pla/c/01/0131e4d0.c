/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131e4d0; name: FUN_0131e4d0
 */


void FUN_0131e4d0(undefined1 *param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  *param_1 = 0;
  *(long *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  param_1[0x38] = 0;
  if (6 < param_2) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar9 = *(long **)(lVar7 + 0x300);
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  lVar7 = *(long *)(PTR_DAT_0437ee60 + (long)param_2 * 0x18);
  if (plVar9[0x11] == lVar7) {
    lVar7 = 0;
  }
  else if (plVar9[0x1b] == lVar7) {
    lVar7 = 1;
  }
  else if (plVar9[0x25] == lVar7) {
    lVar7 = 2;
  }
  else if (plVar9[0x2f] == lVar7) {
    lVar7 = 3;
  }
  else {
    if (plVar9[0x39] != lVar7) goto LAB_0131e5d4;
    lVar7 = 4;
  }
  if ((int)plVar9[lVar7 * 10 + 0xe] != 0) {
    *param_1 = 1;
    lVar2 = plVar9[lVar7 * 10 + 0x13];
    *(long *)(param_1 + 0x10) = plVar9[lVar7 * 10 + 0x12];
    *(long *)(param_1 + 0x18) = lVar2;
    lVar2 = plVar9[lVar7 * 10 + 0xe];
    lVar8 = plVar9[lVar7 * 10 + 0x10];
    *(long *)(param_1 + 0x28) = plVar9[lVar7 * 10 + 0xf];
    *(long *)(param_1 + 0x30) = lVar8;
    *(long *)(param_1 + 0x20) = lVar2;
    param_1[0x38] = 1;
  }
LAB_0131e5d4:
  lVar7 = plVar9[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
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
    *(undefined8 *)(lVar7 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0131e688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar9 + 0x20))(plVar9);
    return;
  }
  return;
}


