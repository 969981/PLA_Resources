/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0131e6e0; name: FUN_0131e6e0
 */


void FUN_0131e6e0(long param_1,int param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  
  FUN_0131fa2c(param_1);
  *(undefined1 *)(param_1 + 0x500) = 0;
  if (6 < param_2) {
    return;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar8 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar8;
  plVar12 = *(long **)(lVar8 + 0x300);
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[0xb];
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
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar8 = *(long *)(PTR_DAT_0437ee60 + (long)param_2 * 0x18);
  if (plVar12[0x40] == lVar8) {
    plVar9 = plVar12 + 0x40;
  }
  else if (plVar12[0x1b0] == lVar8) {
    plVar9 = plVar12 + 0x1b0;
  }
  else if (plVar12[800] == lVar8) {
    plVar9 = plVar12 + 800;
  }
  else if (plVar12[0x490] == lVar8) {
    plVar9 = plVar12 + 0x490;
  }
  else {
    if (plVar12[0x600] != lVar8) goto LAB_0131e840;
    plVar9 = plVar12 + 0x600;
  }
  lVar8 = 0;
  plVar10 = plVar9 + 4;
  *(char *)(param_1 + 0x500) = (char)plVar9[1];
  do {
    puVar3 = (undefined4 *)(param_1 + lVar8);
    lVar8 = lVar8 + 0x40;
    *puVar3 = (int)*plVar10;
    *(long *)(puVar3 + 6) = plVar10[-1];
    *(long *)(puVar3 + 4) = plVar10[-2];
    uVar7 = *(undefined8 *)((long)plVar10 + 4);
    puVar1 = (undefined8 *)((long)plVar10 + 0xc);
    uVar11 = *(undefined8 *)((long)plVar10 + 0x14);
    plVar10 = plVar10 + 0x12;
    *(undefined8 *)(puVar3 + 10) = *puVar1;
    *(undefined8 *)(puVar3 + 0xc) = uVar11;
    *(undefined8 *)(puVar3 + 8) = uVar7;
  } while (lVar8 != 0x500);
LAB_0131e840:
  if (plVar12 != (long *)0x0) {
    lVar8 = plVar12[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0131e88c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar12 + 0x20))(plVar12);
      return;
    }
  }
  return;
}


