/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117d780; name: FUN_0117d780
 */


void FUN_0117d780(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if (*(int *)(param_1 + 0x5b8) != 0) {
    plVar6 = *(long **)(param_1 + 0x2c8);
    if (plVar6 != (long *)0x0) {
      plVar1 = plVar6 + 10;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_40 = 0x8207f61e5e224943;
    pcStack_38 = "anime_L_list_poke_00_in_4line";
    local_30 = 0x1d;
    local_28 = (long *)0x0;
    FUN_0283b430(plVar6,&local_40);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
    local_40 = 0xfd94a482587346a4;
    pcStack_38 = "anime_L_list_poke_00_state_4line_open";
    local_30 = 0x25;
    local_28 = (long *)0x0;
    FUN_0283b1e8(plVar6,&local_40);
    uVar5 = FUN_0117b878(param_1);
    if ((uVar5 & 1) == 0) {
      local_40 = 0xb9b74b360976bde8;
      pcStack_38 = "anime_shift_list_poke_L";
      local_30 = 0x17;
      local_28 = (long *)0x0;
      FUN_0283b430(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
      local_40 = 0xb9b7393609769f52;
      pcStack_38 = "anime_shift_list_poke_R";
      local_30 = 0x17;
      local_28 = (long *)0x0;
      FUN_0283b430(plVar6,&local_40);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
    *(int *)(param_1 + 0x5bc) = *(int *)(param_1 + 0x5c0) + -1;
    FUN_0117ad84(param_1,0);
    FUN_0117a33c(param_1);
    local_40 = 0x8a4920ee3f3bfb33;
    pcStack_38 = "anime_shift_list_poke_reset";
    local_30 = 0x1b;
    local_28 = (long *)0x0;
    FUN_0283b1e8(plVar6,&local_40);
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
  }
  return;
}


