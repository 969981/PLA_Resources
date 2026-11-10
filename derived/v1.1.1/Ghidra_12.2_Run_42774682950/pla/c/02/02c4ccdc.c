/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4ccdc; name: FUN_02c4ccdc
 */


void FUN_02c4ccdc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_30;
  long lStack_28;
  long *local_18;
  
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(int *)(*(long *)(param_1 + 0xd0) + 0xc) != 0)) {
    if (*(long *)(param_1 + 0xd0) == 0) {
      local_18 = (long *)0x0;
    }
    else {
      FUN_0284dc38(&local_18);
    }
    lStack_28 = param_1 + 0xe0;
    local_30 = local_18;
    FUN_0284da90(&local_30);
    lVar5 = FUN_00244288();
    *(undefined8 *)(*(long *)(lVar5 + 0x18) + (long)*(int *)(param_1 + 0x160) * 0x10 + 8) =
         *(undefined8 *)(param_1 + 0x168);
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
  }
  return;
}


