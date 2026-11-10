/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a6678; name: FUN_025a6678
 */


void FUN_025a6678(long param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_30;
  undefined8 local_28;
  
  local_28 = param_2;
  lVar5 = FUN_025a8238(param_1 + 0x90,&local_28);
  if (((lVar5 != 0) && (*(long *)(lVar5 + 0x18) != 0)) &&
     (FUN_025a8344(&local_30), local_30 != (long *)0x0)) {
    FUN_01c5ea60(local_30,param_3 & 1);
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
      (**(code **)(*local_30 + 0x20))(local_30);
    }
  }
  return;
}


