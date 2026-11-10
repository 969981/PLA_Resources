/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03003ce0; name: FUN_03003ce0
 */


/* WARNING: Removing unreachable block (ram,0x03003df4) */
/* WARNING: Removing unreachable block (ram,0x03003e80) */

void FUN_03003ce0(long param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  
  puVar6 = (uint *)(*(long *)(param_1 + 0x38) + (long)(int)param_2 * 0x38 + 0x1c);
  lVar10 = (long)(int)param_2;
  if (*puVar6 != 0) {
    iVar8 = *(int *)(*(long *)(param_1 + 0x38) + lVar10 * 0x38 + 0x18);
    uVar7 = 0;
    do {
      lVar9 = *(long *)(param_1 + 8) + (long)iVar8 * 0x68;
      iVar8 = *(int *)(lVar9 + 0x38);
      *(undefined4 *)(lVar9 + 0x34) = 0x7fffffff;
      *(undefined4 *)(lVar9 + 0x38) = *(undefined4 *)(lVar9 + 0x30);
      *(undefined4 *)(lVar9 + 0x3c) = *(undefined4 *)(lVar9 + 0x30);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *puVar6);
  }
  if (*(int *)(param_1 + 0x40) <= (int)param_2) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x38);
  if (*(int *)(lVar9 + lVar10 * 0x38 + 0x14) == 0x7fffffff) {
    return;
  }
  plVar5 = *(long **)(lVar9 + lVar10 * 0x38 + 0x28);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))();
    lVar9 = *(long *)(param_1 + 0x38);
  }
  *(undefined4 *)(lVar9 + lVar10 * 0x38 + 0x14) = 0x7fffffff;
  uVar2 = *(uint *)(param_1 + 0x54);
  uVar7 = uVar2 & 0xffffff;
  puVar6 = (uint *)(param_1 + 0x54);
  if (uVar7 == 0xffffff) {
    uVar7 = 0xffffffff;
  }
  *(uint *)(*(long *)(param_1 + 0x38) + lVar10 * 0x38 + 0x18) = uVar7;
  uVar7 = *puVar6;
  if (uVar7 == uVar2) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar2 & 0xff000000 | param_2 & 0xffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') goto LAB_03003e04;
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    while( true ) {
      uVar2 = 0xffffffff;
      if ((uVar7 & 0xffffff) != 0xffffff) {
        uVar2 = uVar7 & 0xffffff;
      }
      *(uint *)(*(long *)(param_1 + 0x38) + lVar10 * 0x38 + 0x18) = uVar2;
      uVar2 = *puVar6;
      if (uVar2 == uVar7) break;
      ClearExclusiveLocal();
      uVar7 = uVar2;
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar6,0x10);
    if (bVar4) {
      *puVar6 = uVar7 & 0xff000000 | param_2 & 0xffffff;
      cVar3 = ExclusiveMonitorsStatus();
    }
    uVar7 = uVar2;
  } while (cVar3 != '\0');
LAB_03003e04:
  piVar1 = (int *)(param_1 + 0x58);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


