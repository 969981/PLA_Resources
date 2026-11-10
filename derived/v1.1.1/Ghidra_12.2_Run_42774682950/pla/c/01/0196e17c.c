/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0196e17c; name: FUN_0196e17c
 */


void FUN_0196e17c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = param_6;
  uStack_24 = param_5;
  FUN_0196e738(&local_30,*(undefined8 *)(param_1 + 8),param_3,param_4,&uStack_24,&local_28);
  FUN_019707bc(param_1 + 0x68,param_2,&local_30);
  if (local_30 != (long *)0x0) {
    lVar5 = local_30[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_30 + 0x20))();
    }
  }
  return;
}


