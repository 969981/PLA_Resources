/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e3670; name: FUN_031e3670
 */


undefined8 FUN_031e3670(long *param_1,undefined4 *param_2,long *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  
  uVar6 = FUN_031e4f3c();
  iVar8 = (int)uVar6;
  if ((int)param_1[1] == iVar8) {
    lVar7 = *param_1;
    iVar2 = iVar8 + 1;
    if ((int)(*(uint *)((long)param_1 + 0xc) & 0x3fffffff) <= iVar8) {
      lVar7 = FUN_031e5024(PTR_PTR_0434a080,iVar2);
      iVar8 = (int)param_1[1];
      *param_1 = lVar7;
    }
    puVar1 = (undefined4 *)(lVar7 + (long)iVar8 * 0x10);
    *puVar1 = *param_2;
    lVar7 = *param_3;
    *(long *)(puVar1 + 2) = lVar7;
    if ((lVar7 != 0) && (*(long *)(lVar7 + 8) != 0)) {
      plVar3 = (long *)(lVar7 + 0x10);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar5) {
          *plVar3 = *plVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return uVar6;
}


