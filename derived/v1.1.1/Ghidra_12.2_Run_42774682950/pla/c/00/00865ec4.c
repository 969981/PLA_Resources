/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00865ec4; name: FUN_00865ec4
 */


void FUN_00865ec4(undefined8 param_1,long param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  long *local_48;
  int local_40 [4];
  undefined4 local_28 [2];
  
  plVar3 = *(long **)(param_2 + 0x1410);
  if (plVar3 == (long *)0x0) {
    local_40[0] = 0x10407;
  }
  else {
    if (*(int *)(param_2 + 0x1420) != 1) {
      if (*(int *)(param_2 + 0x1450) != 0) {
        FUN_007e5bd8(param_2 + 0x1420);
        plVar3 = *(long **)(param_2 + 0x1410);
        *(undefined4 *)(param_2 + 0x1450) = 0;
      }
      (**(code **)(*plVar3 + 0x10))(plVar3,1);
      local_50 = *param_4;
      uVar4 = *(undefined8 *)(param_2 + 0x1410);
      local_48 = (long *)param_4[1];
      if (local_48 != (long *)0x0) {
        plVar3 = local_48 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = *plVar3 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      FUN_0086a10c(local_40,uVar4,param_2 + 0x1420,param_3 & 1,&local_50);
      if (local_48 != (long *)0x0) {
        plVar3 = local_48 + 1;
        do {
          lVar5 = *plVar3;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar2) {
            *plVar3 = lVar5 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar5 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_40[0] == 0) {
        *(undefined4 *)(param_2 + 0x1450) = 1;
        FUN_007e5e70(*(undefined8 *)(param_2 + 0x1410),0);
      }
      goto LAB_00866004;
    }
    local_40[0] = 0x10408;
  }
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
LAB_00866004:
  FUN_007ee578(param_1,local_40);
  return;
}


