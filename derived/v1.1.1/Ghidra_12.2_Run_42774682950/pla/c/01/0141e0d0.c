/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0141e0d0; name: FUN_0141e0d0
 */


void FUN_0141e0d0(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  
  if (((DAT_043c2f28 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_043c2f28), iVar4 != 0)) {
    DAT_043c2ee8 = 0x4679c77efe8e8bc7;
    DAT_043c2ef0 = "pane_T_p_total_00";
    DAT_043c2ef8 = 0x11;
    DAT_043c2f00 = 0;
    DAT_043c2f08 = 0xf6158ead3f42edbf;
    DAT_043c2f10 = "pane_T_h_total_00";
    DAT_043c2f18 = 0x11;
    DAT_043c2f20 = 0;
    FUN_00100250(0x141dcb0,0,&PTR_LOOP_0411a000);
    __cxa_guard_release(&DAT_043c2f28);
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  else {
    plVar5 = *(long **)(param_1 + 0x2c8);
  }
  if (plVar5 == (long *)0x0) {
    FUN_0283b11c(0,&DAT_043c2ee8,param_2 & 1);
    FUN_0283b11c(0,&DAT_043c2f08,param_2 & 1);
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
  FUN_0283b11c(plVar5,&DAT_043c2ee8,param_2 & 1);
  FUN_0283b11c(plVar5,&DAT_043c2f08,param_2 & 1);
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
                    /* WARNING: Could not recover jumptable at 0x0141e178. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x10))(plVar5);
    return;
  }
  return;
}


