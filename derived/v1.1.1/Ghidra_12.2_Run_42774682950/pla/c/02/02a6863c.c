/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a6863c; name: FUN_02a6863c
 */


/* WARNING: Removing unreachable block (ram,0x02a686a8) */
/* WARNING: Removing unreachable block (ram,0x02a687ac) */

void FUN_02a6863c(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  
  if ((((*(byte *)(param_1 + 0x1e0) & 1) != 0) && (*(int *)(param_1 + 0x1e8) == 0)) &&
     (lVar6 = (*(code *)**(undefined8 **)*param_2)
                        ((undefined8 *)*param_2,*(undefined4 *)(param_1 + 0x398)),
     *(long *)(lVar6 + 8) != 0)) {
    if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
LAB_02a687f4:
      FUN_02a6b764(*(undefined8 *)(param_1 + 0x210),param_1,param_2);
      return;
    }
    piVar1 = (int *)(param_1 + 0x1f0);
    iVar7 = *(int *)(param_1 + 0x1f0) + 1;
    iVar8 = *piVar1;
    if (iVar8 == *(int *)(param_1 + 0x1f0)) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
LAB_02a687e4:
        if ((long)iVar7 != *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) {
          return;
        }
        goto LAB_02a687f4;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    do {
      iVar3 = *piVar1;
      iVar7 = iVar8 + 1;
      if (iVar3 == iVar8) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') goto LAB_02a687e4;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar3;
    } while( true );
  }
  if (*(long *)(param_1 + 0x70) == *(long *)(param_1 + 0x78)) {
LAB_02a686f0:
    FUN_02a68a08(param_1 + 0x218,param_2);
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
    for (puVar9 = *(undefined8 **)(param_1 + 0xa8); puVar9 != puVar2; puVar9 = puVar9 + 1) {
      (**(code **)(*(long *)*puVar9 + 0x68))((long *)*puVar9,param_2);
    }
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_2 + 1);
    FUN_02a68a08(param_1 + 0x2b8,param_2);
    return;
  }
  piVar1 = (int *)(param_1 + 0x1f0);
  iVar7 = *(int *)(param_1 + 0x1f0) + 1;
  iVar8 = *piVar1;
  if (iVar8 == *(int *)(param_1 + 0x1f0)) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_02a686e0:
      if ((long)iVar7 != *(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70) >> 3) {
        return;
      }
      goto LAB_02a686f0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    iVar3 = *piVar1;
    iVar7 = iVar8 + 1;
    if (iVar3 == iVar8) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_02a686e0;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar8 = iVar3;
  } while( true );
}


