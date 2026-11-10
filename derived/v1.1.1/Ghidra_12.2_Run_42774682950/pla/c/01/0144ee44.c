/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144ee44; name: FUN_0144ee44
 */


void FUN_0144ee44(long param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (7 < param_2) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  local_50 = 0x9cdab70b0d0f73aa;
  pcStack_48 = "grid_yesno";
  local_40 = 10;
  local_38 = (long *)0x0;
  plVar5 = (long *)thunk_FUN_00d2ec48(param_1 + 0x180,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  plVar5 = *(long **)(param_1 + 0x2c8);
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
    if (iVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  local_50 = 0x5806902192b9887a;
  pcStack_48 = "pane_P_icon_psel_00";
  local_40 = 0x13;
  local_38 = (long *)0x0;
  local_70 = 0x9e8f1b0a7d0835d0;
  pcStack_68 = "res_psel_01";
  local_60 = 0xb;
  local_58 = (long *)0x0;
  FUN_0283bd6c(plVar5,&local_50,&local_70,(&PTR_s_psel_icon_00_u_04210d28)[param_2]);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (*(long *)(param_1 + 0x440) != 0) {
    FUN_02831440();
  }
  FUN_00d428b0(param_1,0);
  return;
}


