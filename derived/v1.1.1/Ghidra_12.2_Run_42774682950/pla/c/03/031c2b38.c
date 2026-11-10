/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c2b38; name: FUN_031c2b38
 */


void FUN_031c2b38(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  int iVar6;
  
  if ((param_2 != 0) && (*(long *)(param_2 + 8) != 0)) {
    plVar2 = (long *)(param_2 + 0x10);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *plVar2 = *plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  iVar6 = *(int *)(param_1 + 0x58);
  lVar5 = *(long *)(param_1 + 0x50);
  iVar1 = iVar6 + 1;
  if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) <= iVar6) {
    lVar5 = FUN_031c585c(PTR_PTR_0434a080,iVar1);
    iVar6 = *(int *)(param_1 + 0x58);
    *(long *)(param_1 + 0x50) = lVar5;
  }
  *(long *)(lVar5 + (long)iVar6 * 8) = param_2;
  *(int *)(param_1 + 0x58) = iVar1;
  return;
}


