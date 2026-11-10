/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c4cbd8; name: FUN_02c4cbd8
 */


void FUN_02c4cbd8(long param_1,long param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long *local_48;
  long lStack_40;
  long *local_38;
  
  plVar6 = (long *)(param_1 + 0xd0);
  if ((*plVar6 != 0) && (*(int *)(*plVar6 + 0xc) != 0)) {
    FUN_02c4ccdc(param_1);
  }
  FUN_00d62eb8(plVar6,param_2);
  FUN_01491070(param_1 + 0xe0,param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x160) = param_3;
  if ((*(long *)(param_1 + 0xd0) != 0) && (*(int *)(*(long *)(param_1 + 0xd0) + 0xc) != 0)) {
    if (*plVar6 == 0) {
      local_38 = (long *)0x0;
    }
    else {
      FUN_0284dc38(&local_38);
    }
    lStack_40 = param_1 + 0xe0;
    local_48 = local_38;
    FUN_0284da90(&local_48);
    lVar5 = FUN_00244288();
    *(undefined8 *)(param_1 + 0x168) =
         *(undefined8 *)(*(long *)(lVar5 + 0x18) + (long)*(int *)(param_1 + 0x160) * 0x10 + 8);
    if (local_48 != (long *)0x0) {
      lVar5 = local_48[0xb];
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
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  return;
}


