/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec6234; name: FUN_02ec6234
 */


void FUN_02ec6234(long param_1)

{
  long *plVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  piVar3 = *(int **)(param_1 + 0x18);
  if (piVar3 != (int *)0x0) {
    lVar6 = *(long *)(piVar3 + 4);
    if (lVar6 != 0) {
      lVar5 = 0;
      lVar7 = 0;
      do {
        uVar2 = FUN_02ec1600(lVar6);
        lVar4 = *(long *)(lVar6 + 8);
        if ((uVar2 & 1) == 0) {
          lVar7 = lVar6;
        }
        else {
          plVar1 = (long *)(piVar3 + 4);
          if (*(long *)(piVar3 + 4) != lVar6) {
            plVar1 = (long *)(lVar7 + 8);
          }
          *plVar1 = lVar4;
          if (*(long *)(piVar3 + 2) == lVar6) {
            *(long *)(piVar3 + 2) = lVar7;
          }
          *piVar3 = *piVar3 + -1;
          *(long *)(lVar6 + 8) = lVar5;
          lVar5 = lVar6;
        }
        lVar6 = lVar4;
      } while (lVar4 != 0);
      while (lVar5 != 0) {
        lVar6 = *(long *)(lVar5 + 8);
        FUN_02ec10a4(lVar5);
        FUN_02eb939c(lVar5);
        lVar5 = lVar6;
      }
    }
  }
  return;
}


