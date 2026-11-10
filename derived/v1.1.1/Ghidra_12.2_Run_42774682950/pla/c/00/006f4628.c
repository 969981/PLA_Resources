/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006f4628; name: FUN_006f4628
 */


void FUN_006f4628(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_b8;
  long *local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 ****local_98;
  undefined8 ****ppppuStack_90;
  undefined1 auStack_80 [64];
  undefined **local_40;
  undefined8 uStack_38;
  
  local_a8 = param_2;
  FUN_006f4840(&local_b8,&local_a8,*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x198),0x10000,
               *(undefined8 *)(*(long *)(param_2 + 0x40) + 0x348));
  puVar1 = PTR_DAT_04373168 + 0x10;
  local_40 = (undefined **)0x0;
  uStack_38 = 0;
  puStack_a0 = PTR_DAT_04373170 + 0x10;
  local_98 = &local_98;
  local_a8 = puVar1;
  ppppuStack_90 = local_98;
  (**(code **)(*local_b8 + 0x10))(local_b8,auStack_80);
  local_40 = &puStack_a0;
  thunk_FUN_00783af0(&local_a8);
  local_a8 = puVar1;
  FUN_00782f18(&puStack_a0);
  plVar5 = local_b0;
  plVar2 = local_b8;
  local_b8 = (long *)0x0;
  local_b0 = (long *)0x0;
  (**(code **)(*plVar2 + 0x30))(param_1);
  if (plVar5 != (long *)0x0) {
    plVar2 = plVar5 + 1;
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
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_b0 != (long *)0x0) {
    plVar2 = local_b0 + 1;
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
      (**(code **)(*local_b0 + 0x10))(local_b0);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


