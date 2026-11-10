/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014eb764; name: FUN_014eb764
 */


void FUN_014eb764(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined1 local_36;
  long *local_28;
  
  FUN_014fa7e0(*(undefined8 *)(param_1 + 0x1a8));
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_014fab84(&local_28,*(undefined8 *)(param_1 + 0x1a8));
  local_48 = local_28;
  if (local_28 != (long *)0x0) {
    plVar1 = local_28 + 10;
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
      (**(code **)(*local_28 + 0x10))();
    }
  }
  local_38 = CONCAT11(local_38._1_1_,param_4) & 0xff01;
  FUN_014e9a10(param_1 + 0x90,&local_48,param_3);
  *(undefined8 *)(param_1 + 0x1c8) = 4;
  return;
}


