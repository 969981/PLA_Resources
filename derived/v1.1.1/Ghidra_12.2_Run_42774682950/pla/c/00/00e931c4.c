/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e931c4; name: FUN_00e931c4
 */


undefined1 FUN_00e931c4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  long *local_28;
  
  FUN_00e92288(&local_28);
  uVar5 = FUN_02c607cc(local_28,param_3);
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
      (**(code **)(*local_28 + 0x10))(local_28);
    }
  }
  return uVar5;
}


