/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4ee84; name: FUN_01c4ee84
 */


void FUN_01c4ee84(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  FUN_016c24d0(&local_18,param_1 + 0x598);
  if (local_18 != (long *)0x0) {
    FUN_015916d0(local_18,0,8,0);
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
  *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) & 0xfffffff7;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  return;
}


