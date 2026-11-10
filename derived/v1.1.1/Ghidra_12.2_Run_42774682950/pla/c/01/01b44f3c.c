/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b44f3c; name: FUN_01b44f3c
 */


void FUN_01b44f3c(undefined8 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  if ((*(long *)(param_2 + 0xe90) == 0) || (FUN_018e3920(&local_18), local_18 == (long *)0x0)) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00b182e0(param_1,local_18 + 0x9a);
    if (local_18 != (long *)0x0) {
      lVar5 = local_18[0xb];
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
        (**(code **)(*local_18 + 0x20))();
      }
    }
  }
  return;
}


