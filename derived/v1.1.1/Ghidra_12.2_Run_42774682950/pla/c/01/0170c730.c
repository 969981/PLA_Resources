/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0170c730; name: FUN_0170c730
 */


void FUN_0170c730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  long *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined *puStack_28;
  
  local_30 = 0;
  FUN_0170c7f4(&local_48,param_1,&local_30,param_2,param_3);
  FUN_0014ff10(param_1,0);
  FUN_01704268();
  puStack_28 = DAT_043cd7f8;
  if ((DAT_043cd7e8 & 1) == 0) {
    puStack_28 = &DAT_043cd7e9;
  }
  local_30 = param_1;
  puVar5 = (undefined8 *)FUN_01706750(param_1);
  plVar1 = local_48;
  local_48 = (long *)0x0;
  *puVar5 = plVar1;
  *(undefined4 *)(puVar5 + 2) = local_38;
  puVar5[1] = local_40;
  FUN_017068e4(&local_30);
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 10;
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
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return;
}


