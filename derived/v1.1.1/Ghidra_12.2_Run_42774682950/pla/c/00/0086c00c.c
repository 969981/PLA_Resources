/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0086c00c; name: FUN_0086c00c
 */


void FUN_0086c00c(undefined8 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ErrorResultVariant *this;
  long lVar6;
  long *plVar7;
  ulong local_48;
  long *local_40;
  undefined4 local_38 [2];
  
  uVar5 = (**(code **)(*param_2 + 0x20))();
  if ((uVar5 & 1) == 0) {
    if ((param_3 & 1) == 0) {
      local_48 = 0;
      FUN_007ecf14(&local_48);
      if (local_48 < (ulong)param_2[0x15b]) {
        *(undefined1 *)(param_2 + 0x160) = 1;
        goto LAB_0086c03c;
      }
    }
    this = (ErrorResultVariant *)((ulong)&local_48 | 4);
    *(undefined1 *)(param_2 + 0x160) = 0;
    local_48 = local_48 & 0xffffffff00000000;
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
    lVar1 = (long)param_2 + 0xb04;
    FUN_007ee660(lVar1,&local_48);
    uVar5 = FUN_00867b04(param_2[0x15d]);
    if ((uVar5 & 1) == 0) {
      local_48._0_4_ = 0xec63;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
      FUN_007ee660(lVar1,&local_48);
      local_48 = CONCAT44(local_48._4_4_,0xec63);
      goto LAB_0086c1c8;
    }
    FUN_00867f58(&local_48,param_2[0x15d]);
    plVar2 = local_40;
    uVar5 = local_48;
    local_48 = 0;
    local_40 = (long *)0x0;
    plVar7 = (long *)param_2[6];
    param_2[5] = uVar5;
    param_2[6] = (long)plVar2;
    if (plVar7 != (long *)0x0) {
      plVar2 = plVar7 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        std::__shared_weak_count::__release_weak();
      }
    }
    if (local_40 != (long *)0x0) {
      plVar2 = local_40 + 1;
      do {
        lVar6 = *plVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar4) {
          *plVar2 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
        std::__shared_weak_count::__release_weak();
      }
    }
    local_48 = 0;
    FUN_007ecf14(&local_48);
    param_2[0x15c] = local_48;
    if (param_2[5] == 0) {
      this = (ErrorResultVariant *)((ulong)&local_48 | 4);
      local_48._0_4_ = 0xec63;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
      FUN_007ee660(lVar1,&local_48);
      local_48 = CONCAT44(local_48._4_4_,0xec63);
      goto LAB_0086c1c8;
    }
  }
LAB_0086c03c:
  local_48 = local_48 & 0xffffffff00000000;
  this = (ErrorResultVariant *)((ulong)&local_48 | 4);
LAB_0086c1c8:
  local_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_38);
  FUN_007ee578(param_1,&local_48);
  return;
}


