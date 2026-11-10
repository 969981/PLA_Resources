/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002937d4; name: FUN_002937d4
 */


uint FUN_002937d4(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long *local_b0;
  long *local_a8;
  undefined *local_a0;
  long *plStack_98;
  undefined8 ***local_90;
  undefined8 ***pppuStack_88;
  undefined1 auStack_78 [64];
  long **local_38;
  undefined8 uStack_30;
  
  plStack_98 = (long *)param_1[7];
  local_a0 = (undefined *)param_1[6];
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_00294220(&local_b0,&local_a0,*(undefined8 *)(*param_1 + 0x198),0x10000,
               *(undefined8 *)(*param_1 + 0x348));
  if (plStack_98 != (long *)0x0) {
    plVar1 = plStack_98 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plStack_98 + 0x10))(plStack_98);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar2 = PTR_DAT_04373168 + 0x10;
  local_38 = (long **)0x0;
  uStack_30 = 0;
  plStack_98 = (long *)(PTR_DAT_04373170 + 0x10);
  local_90 = &local_90;
  local_a0 = puVar2;
  pppuStack_88 = local_90;
  (**(code **)(*local_b0 + 0x10))(local_b0,auStack_78);
  local_38 = &plStack_98;
  thunk_FUN_00783af0(&local_a0);
  local_a0 = puVar2;
  FUN_00782f18(&plStack_98);
  plVar5 = local_a8;
  plVar1 = local_b0;
  local_b0 = (long *)0x0;
  local_a8 = (long *)0x0;
  uVar6 = (**(code **)(*plVar1 + 0x30))();
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_a8 != (long *)0x0) {
    plVar1 = local_a8 + 1;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*local_a8 + 0x10))(local_a8);
      std::__shared_weak_count::__release_weak();
    }
  }
  return uVar6 & 1;
}


