/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0119541c; name: FUN_0119541c
 */


void FUN_0119541c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *local_50;
  long *local_48;
  undefined8 local_40;
  ushort local_38;
  undefined1 local_36;
  
  FUN_00d58ef0(*(undefined8 *)(param_1 + 0x1a8),param_2,param_5);
  local_40 = 0;
  local_36 = 0;
  local_38 = 0x101;
  FUN_00d591fc(&local_50,*(undefined8 *)(param_1 + 0x1a8));
  local_48 = local_50;
  if (local_50 != (long *)0x0) {
    plVar1 = local_50 + 10;
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
      (**(code **)(*local_50 + 0x10))();
    }
  }
  local_38 = CONCAT11(param_6,param_4) & 0x101;
  FUN_014e9a10(param_1 + 0x90,&local_48,param_3);
  lVar5 = FUN_011945c8(param_1);
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x70) = 0;
  }
  *(undefined8 *)(param_1 + 0x1d0) = 1;
  return;
}


