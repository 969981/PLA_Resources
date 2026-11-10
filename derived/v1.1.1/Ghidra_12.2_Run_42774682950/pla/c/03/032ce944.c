/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ce944; name: FUN_032ce944
 */


void FUN_032ce944(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  
  plVar5 = *(long **)(param_1 + 8);
  iVar9 = (int)plVar5[3];
  iVar2 = (int)plVar5[1];
  lVar3 = *(long *)(param_1 + 0x18);
  iVar6 = iVar9 + -1;
  if (0 < iVar2) {
    lVar8 = (long)iVar2 + -1;
    if (*(long *)(*plVar5 + lVar8 * 0x18 + 8) == lVar3) {
      plVar7 = (long *)(*plVar5 + lVar8 * 0x18);
      lVar3 = *plVar7;
      iVar6 = (int)plVar7[2];
      *(int *)(plVar5 + 1) = iVar2 + -1;
      plVar5 = *(long **)(param_1 + 8);
      if (0 < lVar8) {
        lVar10 = (long)iVar2 * 0x18;
        do {
          lVar1 = *plVar5 + lVar10;
          if (*(long *)(lVar1 + -0x28) != lVar3) break;
          lVar8 = lVar8 + -1;
          lVar10 = lVar10 + -0x18;
          lVar3 = *(long *)(lVar1 + -0x30);
          iVar6 = *(int *)(lVar1 + -0x20);
          *(int *)(plVar5 + 1) = (int)plVar5[1] + -1;
          plVar5 = *(long **)(param_1 + 8);
        } while (0 < lVar8);
      }
      iVar9 = (int)plVar5[3];
      if (iVar6 < iVar9 + -1) {
        lVar8 = *(long *)(param_1 + 0x30);
        lVar10 = (long)(iVar9 + -1);
        do {
          if (lVar8 != 0) {
            (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                      (*(long **)(param_1 + 0x38),lVar8,*(undefined8 *)(param_1 + 0x10));
            *(int *)(*(long *)(param_1 + 8) + 0x20) = *(int *)(*(long *)(param_1 + 8) + 0x20) + -1;
            plVar5 = *(long **)(param_1 + 8);
          }
          lVar8 = *(long *)(plVar5[2] + lVar10 * 8);
          lVar10 = lVar10 + -1;
          *(long *)(param_1 + 0x30) = lVar8;
        } while (iVar6 < lVar10);
        iVar9 = (int)plVar5[3];
      }
    }
  }
  if (iVar9 <= iVar6 || iVar6 + 1 < iVar9) {
    *(int *)(plVar5 + 3) = iVar6 + 1;
  }
  *(long *)(param_1 + 0x18) = lVar3;
  plVar5 = *(long **)(param_1 + 8);
  if ((int)plVar5[3] == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x10) + *(long *)(plVar5[2] + (long)((int)plVar5[3] + -1) * 8);
  }
  *(long *)(param_1 + 0x20) = lVar3;
  if ((int)plVar5[1] == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*plVar5 + (long)((int)plVar5[1] + -1) * 0x18 + 8);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  return;
}


