/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01284244; name: FUN_01284244
 */


void FUN_01284244(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_40;
  long *local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x1a8),param_2,0);
  local_30 = 0;
  local_26 = 0;
  local_28 = 0x101;
  FUN_00d591fc(&local_40,*(undefined8 *)(param_1 + 0x1a8));
  local_38 = local_40;
  if (local_40 != (long *)0x0) {
    plVar1 = local_40 + 10;
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
      (**(code **)(*local_40 + 0x10))();
    }
  }
  local_28 = CONCAT11(local_28._1_1_,1);
  FUN_014e9a10(param_1 + 0x90,&local_38,param_3);
  lVar5 = FUN_01283b84(param_1);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x1c0) = 1;
  return;
}


