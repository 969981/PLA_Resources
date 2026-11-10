/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c3d28; name: FUN_031c3d28
 */


void FUN_031c3d28(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  
  if ((param_2 != 0) && (0 < *(int *)(param_1 + 0x20))) {
    lVar2 = 0;
    do {
      if (((param_2 & 1) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x18) + lVar2 * 8), lVar3 != 0)) {
        if (*(int *)(lVar3 + 0x28) != 0) {
          lVar5 = (long)*(int *)(lVar3 + 0x28) * 0x38;
          piVar6 = (int *)(*(long *)(lVar3 + 0x20) + 0x30);
          do {
            lVar5 = lVar5 + -0x38;
            *piVar6 = *piVar6 + 1;
            piVar6 = piVar6 + 0xe;
          } while (lVar5 != 0);
        }
        if (*(int *)(lVar3 + 0x38) != 0) {
          lVar5 = (long)*(int *)(lVar3 + 0x38) * 0x38;
          piVar6 = (int *)(*(long *)(lVar3 + 0x30) + 0x30);
          do {
            lVar5 = lVar5 + -0x38;
            *piVar6 = *piVar6 + 1;
            piVar6 = piVar6 + 0xe;
          } while (lVar5 != 0);
        }
        iVar1 = *(int *)(lVar3 + 0x48);
        if (iVar1 != 0) {
          plVar4 = *(long **)(lVar3 + 0x40);
          *(int *)(*plVar4 + 0x1c) = *(int *)(*plVar4 + 0x1c) + 1;
          if (iVar1 != 1) {
            lVar5 = (long)iVar1 * 8 + -8;
            do {
              plVar4 = plVar4 + 1;
              lVar5 = lVar5 + -8;
              *(int *)(*plVar4 + 0x1c) = *(int *)(*plVar4 + 0x1c) + 1;
            } while (lVar5 != 0);
          }
        }
        if (*(int *)(lVar3 + 0x58) != 0) {
          lVar5 = (long)*(int *)(lVar3 + 0x58) << 3;
          plVar4 = *(long **)(lVar3 + 0x50);
          do {
            lVar5 = lVar5 + -8;
            *(int *)(*plVar4 + 0x1c) = *(int *)(*plVar4 + 0x1c) + 1;
            plVar4 = plVar4 + 1;
          } while (lVar5 != 0);
        }
      }
      param_2 = param_2 >> 1;
    } while ((param_2 != 0) && (lVar2 = lVar2 + 1, lVar2 < *(int *)(param_1 + 0x20)));
  }
  return;
}


