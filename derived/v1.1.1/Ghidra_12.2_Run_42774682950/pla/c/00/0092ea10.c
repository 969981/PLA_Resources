/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092ea10; name: FUN_0092ea10
 */


void FUN_0092ea10(long param_1,long *param_2,int param_3)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *local_28;
  long *local_18;
  
  if (param_3 < 0x151) {
    switch(param_3) {
    case 3:
      lVar6 = 4;
      break;
    case 4:
      lVar6 = 5;
      break;
    case 5:
      lVar6 = 6;
      break;
    case 6:
switchD_0092ea68_caseD_6:
      param_2 = (long *)*param_2;
      local_28 = param_2;
      if (param_2 == (long *)0x0) {
        FUN_0092fa20(param_1,&local_28);
        return;
      }
      plVar1 = param_2 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_0092fa20(param_1,&local_28);
      if (param_2 == (long *)0x0) {
        return;
      }
      plVar1 = param_2 + 10;
      do {
        iVar5 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0092eb0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0x10))(param_2);
        return;
      }
      return;
    case 7:
      lVar6 = 7;
      break;
    case 8:
      lVar6 = 8;
      break;
    case 9:
      lVar6 = 9;
      break;
    default:
      if (param_3 == 0x70) {
        lVar6 = 2;
      }
      else {
        if (param_3 != 0x92) goto switchD_0092ea68_caseD_6;
        lVar6 = 10;
      }
    }
  }
  else if (param_3 < 0x168) {
    if (param_3 == 0x151) {
      lVar6 = 0;
    }
    else {
      if (param_3 != 0x152) goto switchD_0092ea68_caseD_6;
      lVar6 = 1;
    }
  }
  else if (param_3 == 0x168) {
    lVar6 = 3;
  }
  else {
    if (param_3 != 0x180) goto switchD_0092ea68_caseD_6;
    lVar6 = 0xb;
  }
  pcVar2 = (code *)(&PTR_FUN_041b8568)[lVar6 * 3];
  lVar6 = (&DAT_041b8570)[lVar6 * 3];
  local_18 = (long *)*param_2;
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  (*pcVar2)(param_1 + (lVar6 >> 1),&local_18);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return;
}


