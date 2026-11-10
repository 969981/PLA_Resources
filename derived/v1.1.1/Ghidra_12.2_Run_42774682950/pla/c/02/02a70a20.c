/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a70a20; name: FUN_02a70a20
 */


/* WARNING: Removing unreachable block (ram,0x02a70a7c) */

void FUN_02a70a20(long param_1,long param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  
  if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
LAB_02a70ac4:
    FUN_02a68a08(param_1 + 0x218,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
    for (puVar8 = *(undefined8 **)(param_1 + 0xa8); puVar8 != puVar2; puVar8 = puVar8 + 1) {
      (**(code **)(*(long *)*puVar8 + 0x68))((long *)*puVar8,param_2);
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 8);
    FUN_02a68a08(param_1 + 0x2b8,param_2);
    return;
  }
  piVar1 = (int *)(param_1 + 0x1f0);
  iVar6 = *(int *)(param_1 + 0x1f0) + 1;
  iVar7 = *piVar1;
  if (iVar7 == *(int *)(param_1 + 0x1f0)) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_02a70ab4:
      if ((long)iVar6 != *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) {
        return;
      }
      goto LAB_02a70ac4;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar3 = *piVar1;
    iVar6 = iVar7 + 1;
    if (iVar3 == iVar7) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_02a70ab4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar7 = iVar3;
  } while( true );
}


