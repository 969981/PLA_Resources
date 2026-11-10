/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029d25b4; name: FUN_029d25b4
 */


void FUN_029d25b4(long param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined1 auStack_780 [1040];
  undefined4 local_370;
  undefined1 local_78 [8];
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_5a;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined1 local_38;
  
  local_78[0] = *(undefined1 *)(param_2 + 0x7d);
  local_50 = 0;
  local_40 = 0;
  local_5a = 0;
  local_5c = 0;
  local_60 = 0;
  local_38 = 0;
  local_48 = 1;
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x1e8);
  local_70 = param_2;
  local_68 = param_3;
  uStack_64 = param_4;
  if (plVar5 == (long *)0x0) {
    FUN_009463f0(auStack_780,0x60);
    local_60 = local_370;
    FUN_00945e04(auStack_780);
  }
  else {
    plVar1 = plVar5 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_009463f0(auStack_780,plVar5 + 0xc);
    local_60 = local_370;
    FUN_00945e04(auStack_780);
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
  FUN_029ee8bc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15a0),auStack_780,local_78);
  return;
}


