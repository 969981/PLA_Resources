/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f5714c; name: FUN_02f5714c
 */


void FUN_02f5714c(long param_1)

{
  int iVar1;
  short *psVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  short sVar9;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x110);
  if (lVar7 == 0) {
    return;
  }
  if (*(int *)(lVar7 + 0x18) == 0) {
    return;
  }
  piVar8 = *(int **)(lVar7 + 0x10);
  if (*(int *)(param_1 + 0x28) == *piVar8) {
    uVar4 = *(uint *)(param_1 + 0x20);
    uVar5 = *(uint *)(param_1 + 0x24);
    if (uVar5 <= uVar4) {
      iVar1 = uVar5 + (uVar5 >> 1);
      if (uVar5 == 0) {
        iVar1 = 1;
      }
      uVar5 = iVar1 + uVar5;
      lVar6 = FUN_02f59e50(0,*(undefined8 *)(param_1 + 0x18),(ulong)uVar5 << 1);
      if (lVar6 == 0) goto LAB_02f571c4;
      *(long *)(param_1 + 0x18) = lVar6;
      *(uint *)(param_1 + 0x24) = uVar5;
    }
    if (uVar4 < uVar5) {
      puVar3 = (undefined2 *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 2);
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
  }
LAB_02f571c4:
  piVar8 = piVar8 + 1;
  if (piVar8 != (int *)(*(long *)(lVar7 + 0x10) + (ulong)*(uint *)(lVar7 + 0x18) * 4)) {
    sVar9 = 1;
    do {
      if (*(int *)(param_1 + 0x28) == *piVar8) {
        uVar4 = *(uint *)(param_1 + 0x20);
        uVar5 = *(uint *)(param_1 + 0x24);
        if (uVar5 <= uVar4) {
          iVar1 = uVar5 + (uVar5 >> 1);
          if (uVar5 == 0) {
            iVar1 = 1;
          }
          uVar5 = iVar1 + uVar5;
          lVar6 = FUN_02f59e50(0,*(undefined8 *)(param_1 + 0x18),(ulong)uVar5 << 1);
          if (lVar6 == 0) goto LAB_02f571f0;
          *(long *)(param_1 + 0x18) = lVar6;
          *(uint *)(param_1 + 0x24) = uVar5;
        }
        if (uVar4 < uVar5) {
          psVar2 = (short *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 2);
          *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) + 1;
          if (psVar2 != (short *)0x0) {
            *psVar2 = sVar9;
          }
        }
      }
LAB_02f571f0:
      piVar8 = piVar8 + 1;
      sVar9 = sVar9 + 1;
    } while (piVar8 != (int *)(*(long *)(lVar7 + 0x10) + (ulong)*(uint *)(lVar7 + 0x18) * 4));
  }
  return;
}


