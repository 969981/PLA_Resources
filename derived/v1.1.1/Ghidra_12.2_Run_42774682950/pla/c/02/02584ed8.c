/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02584ed8; name: FUN_02584ed8
 */


void FUN_02584ed8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  if ((int)param_1[0x13] == 1) {
    if ((char)param_1[0x11] != '\0') {
      (**(code **)(*(long *)param_1[0xd] + 0x60))((long *)param_1[0xd],param_1[0xf]);
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    FUN_028379b8(param_1[0xd]);
                    /* WARNING: Could not recover jumptable at 0x02584f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x40))(param_1);
    return;
  }
  if ((int)param_1[0x13] != 0) {
    return;
  }
  local_28 = (long *)param_1[0xe];
  if (local_28 != (long *)0x0) {
    if (local_28[0xb] == 0) {
      lVar6 = param_1[0xd];
    }
    else {
      if ((*(byte *)(local_28[0xb] + 0xd8) & 1) == 0) {
        return;
      }
      lVar6 = param_1[0xd];
      local_28 = (long *)param_1[0xe];
      if (local_28 == (long *)0x0) {
        FUN_02837164(lVar6,&local_28);
        goto LAB_02584fa8;
      }
    }
    plVar5 = local_28;
    plVar1 = local_28 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_02837164(lVar6,&local_28);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 10;
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
  }
LAB_02584fa8:
  *(undefined4 *)(param_1 + 0x13) = 1;
  return;
}


