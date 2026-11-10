/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aba324; name: FUN_00aba324
 */


void FUN_00aba324(long *param_1,int param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_38;
  int local_24;
  
  if ((char)param_1[0x3f] != '\0') {
    *(undefined1 *)(param_1 + 0x3f) = 0;
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  if (((int)param_1[0x40] != param_2) || (*(int *)((long)param_1 + 0x1fc) != 0)) {
    local_24 = param_2;
    FUN_0099c578(&local_38,param_1[0x3e],&local_24);
    *(undefined4 *)((long)param_1 + 0x1fc) = 0;
    *(int *)(param_1 + 0x40) = local_24;
    FUN_00aba790(param_1,&local_38,param_3 & 1);
    if (local_38 != (long *)0x0) {
      lVar5 = local_38[0xb];
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
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


