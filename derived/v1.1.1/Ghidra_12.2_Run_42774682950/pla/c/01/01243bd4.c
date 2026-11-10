/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01243bd4; name: FUN_01243bd4
 */


void FUN_01243bd4(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 local_28;
  
  FUN_00d39e50();
  *(undefined4 *)(param_1 + 0x11) = 0;
  *param_1 = &PTR_LAB_041fd3b8;
  param_1[9] = &PTR_LAB_041fd408;
  param_1[10] = &PTR_LAB_041fd450;
  *(undefined1 *)((long)param_1 + 0x8c) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  local_28 = param_1[1];
  lVar6 = FUN_0124410c(local_28,&local_28);
  if (lVar6 != 0) {
    piVar2 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar7 != (long *)0x0) {
    plVar1 = plVar7 + 10;
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
      (**(code **)(*plVar7 + 0x10))();
      param_1[0xd] = lVar6;
      goto joined_r0x01243cb4;
    }
  }
  param_1[0xd] = lVar6;
joined_r0x01243cb4:
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


