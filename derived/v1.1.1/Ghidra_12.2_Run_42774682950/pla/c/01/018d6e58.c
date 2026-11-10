/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018d6e58; name: FUN_018d6e58
 */


void FUN_018d6e58(long param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  
  FUN_016c24d0(&local_28,param_1 + 0x748);
  if (local_28 != (long *)0x0) {
    if (*(undefined8 **)(param_1 + 0x7f8) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = **(undefined8 **)(param_1 + 0x7f8);
    }
    FUN_018d6ef0(local_28,uVar5,~param_2 & 1,0x100);
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


