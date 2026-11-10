/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033099a8; name: FUN_033099a8
 */


void FUN_033099a8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  
  iVar8 = FUN_0330dd2c((long *)(param_1 + 0x10),param_3);
  if (*(int *)(param_1 + 0x18) == iVar8) {
    lVar10 = *(long *)(param_1 + 0x10);
    iVar1 = iVar8 + 1;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x3fffffff) <= iVar8) {
      lVar10 = FUN_0330de98(PTR_PTR_0434a080,iVar1);
      iVar8 = *(int *)(param_1 + 0x18);
      *(long *)(param_1 + 0x10) = lVar10;
    }
    puVar12 = (undefined8 *)(lVar10 + (long)iVar8 * 0x30);
    uVar4 = param_3[1];
    *puVar12 = *param_3;
    puVar12[1] = uVar4;
    uVar11 = param_3[2];
    puVar12[2] = uVar11;
    if ((uVar11 & 1) != 0) {
      piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar10 = lVar10 + (long)iVar8 * 0x30;
    uVar4 = param_2[1];
    *(undefined8 *)(lVar10 + 0x18) = *param_2;
    *(undefined8 *)(lVar10 + 0x20) = uVar4;
    uVar11 = param_2[2];
    *(ulong *)(lVar10 + 0x28) = uVar11;
    if ((uVar11 & 1) != 0) {
      piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    *(int *)(param_1 + 0x18) = iVar1;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x10) + (long)iVar8 * 0x30;
    uVar4 = param_2[1];
    *(undefined8 *)(lVar10 + 0x18) = *param_2;
    *(undefined8 *)(lVar10 + 0x20) = uVar4;
    if ((param_2[2] & 1) != 0) {
      piVar2 = (int *)((param_2[2] & 0xfffffffffffffffe) + 8);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar11 = *(ulong *)(lVar10 + 0x28);
    if ((uVar11 & 1) != 0) {
      plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
      plVar3 = plVar9 + 1;
      do {
        lVar7 = *plVar3;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = (int)lVar7 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if ((plVar9 != (long *)0x0) && ((int)lVar7 == 1)) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    *(ulong *)(lVar10 + 0x28) = param_2[2];
  }
  FUN_03307360(param_1,param_2,param_3,param_4);
  return;
}


