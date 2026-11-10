/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141df04; name: FUN_0141df04
 */


void FUN_0141df04(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if (((DAT_043c2ee0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043c2ee0), iVar4 != 0)) {
    DAT_043c2e80 = 0x3a6b0daf66d4ace0;
    DAT_043c2e88 = "pane_T_h_complete_00";
    DAT_043c2ea0 = 0xabd45d769fb3a588;
    DAT_043c2ea8 = "pane_T_p_complete_00";
    DAT_043c2e90 = 0x14;
    DAT_043c2e98 = 0;
    DAT_043c2eb0 = 0x14;
    DAT_043c2eb8 = 0;
    DAT_043c2ec0 = 0x33fba5741829bfcb;
    DAT_043c2ec8 = "pane_T_p_complete_point_00";
    DAT_043c2ed0 = 0x1a;
    DAT_043c2ed8 = 0;
    FUN_00100250(0x141dc50,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c2ee0);
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar5 == (long *)0x0) {
    param_2 = param_2 & 1;
    FUN_0283b11c(0,&DAT_043c2e80,param_2);
    FUN_0283b11c(0,&DAT_043c2ea0,param_2);
    FUN_0283b11c(0,&DAT_043c2ec0,param_2);
    return;
  }
  plVar1 = plVar5 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_2 = param_2 & 1;
  FUN_0283b11c(plVar5,&DAT_043c2e80,param_2);
  FUN_0283b11c(plVar5,&DAT_043c2ea0,param_2);
  FUN_0283b11c(plVar5,&DAT_043c2ec0,param_2);
  do {
    iVar4 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0141dfb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
  return;
}


