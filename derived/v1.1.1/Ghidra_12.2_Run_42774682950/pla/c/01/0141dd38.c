/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141dd38; name: FUN_0141dd38
 */


void FUN_0141dd38(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if (((DAT_043c2e78 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043c2e78), iVar4 != 0)) {
    DAT_043c2e18 = 0x367407ac6540ec1d;
    DAT_043c2e20 = "pane_T_h_rprogressed_00";
    DAT_043c2e38 = 0x84e93b300a136ad5;
    DAT_043c2e40 = "pane_T_p_rprogressed_00";
    DAT_043c2e28 = 0x17;
    DAT_043c2e30 = 0;
    DAT_043c2e48 = 0x17;
    DAT_043c2e50 = 0;
    DAT_043c2e58 = 0xbb4f724dbb6ca362;
    DAT_043c2e60 = "pane_T_p_rprogressed_point_00";
    DAT_043c2e68 = 0x1d;
    DAT_043c2e70 = 0;
    FUN_00100250(&LAB_0141dbf0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c2e78);
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar5 == (long *)0x0) {
    param_2 = param_2 & 1;
    FUN_0283b11c(0,&DAT_043c2e18,param_2);
    FUN_0283b11c(0,&DAT_043c2e38,param_2);
    FUN_0283b11c(0,&DAT_043c2e58,param_2);
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
  FUN_0283b11c(plVar5,&DAT_043c2e18,param_2);
  FUN_0283b11c(plVar5,&DAT_043c2e38,param_2);
  FUN_0283b11c(plVar5,&DAT_043c2e58,param_2);
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
                    /* WARNING: Could not recover jumptable at 0x0141ddec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
  return;
}


