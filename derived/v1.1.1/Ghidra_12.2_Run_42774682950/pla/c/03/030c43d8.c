/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030c43d8; name: FUN_030c43d8
 */


int FUN_030c43d8(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  
  if ((int)param_3 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    iVar4 = 0;
    do {
      plVar5 = *(long **)(param_2 + uVar3 * 8);
      iVar2 = (int)plVar5[1];
      uVar10 = (ulong)iVar2;
      if (0 < iVar2) {
        lVar7 = *plVar5;
        uVar6 = uVar10 & 3;
        if (uVar10 - 1 < 3) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          piVar8 = (int *)(lVar7 + 0x4c);
          do {
            if (piVar8[-0x10] != 0) {
              iVar4 = iVar4 + 1;
            }
            iVar2 = *piVar8;
            if (piVar8[-8] != 0) {
              iVar4 = iVar4 + 1;
            }
            piVar1 = piVar8 + 8;
            piVar8 = piVar8 + 0x20;
            if (iVar2 != 0) {
              iVar4 = iVar4 + 1;
            }
            lVar9 = lVar9 + 4;
            if (*piVar1 != 0) {
              iVar4 = iVar4 + 1;
            }
          } while (uVar10 - uVar6 != lVar9);
        }
        if (uVar6 != 0) {
          piVar8 = (int *)(lVar7 + lVar9 * 0x20 + 0xc);
          do {
            if (*piVar8 != 0) {
              iVar4 = iVar4 + 1;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 8;
          } while (uVar6 != 0);
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != param_3);
  }
  return *(int *)(param_1 + 0x1c) + iVar4;
}


