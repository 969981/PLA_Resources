/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aba250; name: FUN_00aba250
 */


void FUN_00aba250(long *param_1,byte param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_38;
  byte local_24 [4];
  
  if ((char)param_1[0x3f] != '\0') {
    *(undefined1 *)(param_1 + 0x3f) = 0;
    (**(code **)(*param_1 + 0x108))(param_1);
  }
  if ((*(uint *)(param_1 + 0x40) != (uint)param_2) || (*(int *)((long)param_1 + 0x1fc) != 1)) {
    local_24[0] = param_2;
    FUN_00995ec4(&local_38,param_1[0x3e],local_24);
    *(undefined4 *)((long)param_1 + 0x1fc) = 1;
    *(uint *)(param_1 + 0x40) = (uint)local_24[0];
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


