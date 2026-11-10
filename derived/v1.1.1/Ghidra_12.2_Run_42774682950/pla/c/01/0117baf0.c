/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117baf0; name: FUN_0117baf0
 */


void FUN_0117baf0(long param_1,int param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 local_40;
  char *pcStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = *(int *)(param_1 + 0x5bc) + param_2;
  uVar3 = uVar2;
  if (*(uint *)(param_1 + 0x5c0) <= uVar2) {
    uVar3 = 0;
  }
  uVar4 = *(uint *)(param_1 + 0x5c0) - 1;
  if (-1 < (int)uVar2) {
    uVar4 = uVar3;
  }
  *(uint *)(param_1 + 0x5bc) = uVar4;
  FUN_0117ad84(param_1,0);
  FUN_0117a33c(param_1);
  plVar8 = *(long **)(param_1 + 0x2c8);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_40 = 0x99188cea48501503;
  pcStack_38 = "anime_L_list_poke_00_full_close";
  local_30 = 0x1f;
  uStack_28 = 0;
  FUN_0283b1e8(plVar8,&local_40);
  local_40 = 0x8a4920ee3f3bfb33;
  pcStack_38 = "anime_shift_list_poke_reset";
  local_30 = 0x1b;
  uStack_28 = 0;
  FUN_0283b1e8(plVar8,&local_40);
  if (plVar8 != (long *)0x0) {
    plVar1 = plVar8 + 10;
    do {
      iVar7 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar7 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0117bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 0x10))(plVar8);
      return;
    }
  }
  return;
}


