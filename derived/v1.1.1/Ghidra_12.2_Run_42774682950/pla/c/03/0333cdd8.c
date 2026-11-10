/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333cdd8; name: FUN_0333cdd8
 */


void FUN_0333cdd8(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int *piVar7;
  
  piVar1 = (int *)(param_1 + 0x18);
  (**(code **)(**(long **)(param_1 + 8) + 0x20))(*(long **)(param_1 + 8),param_2,piVar1);
  piVar7 = *(int **)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x1c);
  do {
    iVar4 = *piVar7;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar7,0x10);
    if (bVar6) {
      *piVar7 = iVar4 + iVar3;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  while (iVar3 = *piVar1, iVar4 < iVar3) {
    iVar2 = *(int *)(param_1 + 0x1c) + iVar4;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x28))
              (*(long **)(param_1 + 8),param_2,piVar1,iVar4,iVar3 - iVar4);
    piVar7 = *(int **)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x1c);
    do {
      iVar4 = *piVar7;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar6) {
        *piVar7 = iVar4 + iVar3;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
                    /* WARNING: Could not recover jumptable at 0x0333ce94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x30))(*(long **)(param_1 + 8),param_2,piVar1);
  return;
}


