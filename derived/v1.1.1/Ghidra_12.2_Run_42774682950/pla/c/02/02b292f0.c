/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b292f0; name: FUN_02b292f0
 */


void FUN_02b292f0(long param_1,long *param_2,long *param_3,uint param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  long *local_48;
  long *local_38;
  
  local_48 = *(long **)(*param_2 + 0x60);
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = (int)*plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_02b734cc(*param_3,&local_48,
               param_4 + (int)((ulong)(*(long *)(param_1 + 0xb8) - *(long *)(param_1 + 0xb0)) >> 4)
                         * -0x3b13b13b);
  lVar7 = *param_3;
  lVar5 = *(long *)(lVar7 + 0xe0);
  if (param_4 < (uint)((ulong)(*(long *)(lVar7 + 0xe8) - lVar5) >> 3)) {
    uVar8 = (ulong)param_4;
    do {
      local_38 = *(long **)(lVar5 + uVar8 * 8);
      if (local_38 == (long *)0x0) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = local_38 + 10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar3) {
            *(int *)plVar6 = (int)*plVar6 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        plVar6 = local_38;
      }
      FUN_02b29444(param_1,&local_38,(int)uVar8 - param_4);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 10;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      lVar5 = *(long *)(lVar7 + 0xe0);
      uVar8 = uVar8 + 1;
    } while (uVar8 < ((ulong)(*(long *)(lVar7 + 0xe8) - lVar5) >> 3 & 0xffffffff));
  }
  if (local_48 != (long *)0x0) {
    plVar6 = local_48 + 10;
    do {
      iVar4 = (int)*plVar6 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *(int *)plVar6 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return;
}


