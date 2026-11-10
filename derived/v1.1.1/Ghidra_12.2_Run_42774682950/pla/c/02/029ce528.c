/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029ce528; name: FUN_029ce528
 */


uint FUN_029ce528(long param_1,ulong param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long *plVar6;
  undefined1 auStack_7c0 [896];
  code *local_440;
  code *local_438;
  undefined8 local_430;
  code *local_428;
  undefined1 auStack_420 [864];
  code *local_c0;
  code *local_b8;
  undefined8 local_b0;
  code *pcStack_a8;
  undefined1 auStack_a0 [96];
  
  plVar6 = *(long **)(param_1 + 0x1e8);
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
  FUN_009463f0(auStack_7c0,plVar6 + 0xc);
  local_b0 = 0;
  pcStack_a8 = (code *)0x0;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  if (local_428 != (code *)0x0) {
    (*local_428)(auStack_420,auStack_a0);
    pcVar5 = local_438;
    local_c0 = local_440;
    local_b8 = local_438;
    local_b0 = local_430;
    pcStack_a8 = local_428;
    if (local_438 != (code *)0x0) {
      local_430 = 0;
      local_428 = (code *)0x0;
      local_440 = (code *)0x0;
      local_438 = (code *)0x0;
      (*pcVar5)(auStack_420);
    }
  }
  FUN_00945e04(auStack_7c0);
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
  bVar3 = local_c0 == (code *)0x0;
  if (bVar3) {
    pcVar5 = local_b8;
  }
  else {
    param_2 = (*local_c0)(auStack_a0,param_2);
    param_2 = param_2 & 0xffffffff;
    pcVar5 = local_b8;
  }
  if (pcVar5 != (code *)0x0) {
    local_b0 = 0;
    pcStack_a8 = (code *)0x0;
    local_c0 = (code *)0x0;
    local_b8 = (code *)0x0;
    (*pcVar5)(auStack_a0);
  }
  return (uint)param_2 & (uint)!bVar3;
}


