/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011c15cc; name: FUN_011c15cc
 */


void FUN_011c15cc(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  plVar6 = *(long **)(*param_1 + 0x1c0);
  if (plVar6 == (long *)0x0) {
LAB_011c161c:
    if (param_2 == 1) goto LAB_011c1624;
LAB_011c16bc:
    if (param_2 != 2) goto LAB_011c1648;
    lVar5 = param_1[1];
    local_50 = 0xbe1d034442d8e1b3;
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      iVar4 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 != 0) goto LAB_011c161c;
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if (param_2 != 1) goto LAB_011c16bc;
LAB_011c1624:
    lVar5 = param_1[1];
    local_50 = 0x2362b9997060eefb;
  }
  FUN_02c2e7d0(lVar5,&local_50,plVar6);
LAB_011c1648:
  local_50 = 0x2a135c35aaf0206d;
  pcStack_48 = "pane_L_wazamode_info_00_T_text_00";
  local_40 = 0x21;
  local_38 = (long *)0x0;
  FUN_0283d080(*param_1,&local_50,10);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return;
}


