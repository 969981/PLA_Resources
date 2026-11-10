/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9e4ac; name: FUN_02e9e4ac
 */


long FUN_02e9e4ac(long param_1,long param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  
  uVar8 = *(uint *)(param_1 + 0x148);
  if (uVar8 != 0) {
    lVar3 = *(long *)(param_1 + 0x140);
    lVar4 = *(long *)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
    if (param_3 == 0) {
      lVar5 = lVar3 + (ulong)uVar8 * 0x68;
      do {
        if (uVar2 != 0) {
          uVar7 = *(ulong *)(lVar3 + 0x50);
          iVar6 = 0;
          uVar8 = uVar2;
          do {
            iVar1 = iVar6 + (uVar8 >> 1);
            uVar9 = *(ulong *)(lVar4 + (long)iVar1 * 8);
            if (uVar9 == uVar7) {
              if (lVar4 + (long)iVar1 * 8 != 0) {
                if (param_4 == 0) {
                  return lVar3;
                }
                param_4 = param_4 + -1;
              }
              break;
            }
            if (uVar9 < uVar7) {
              iVar6 = iVar1 + 1;
            }
            uVar8 = uVar8 - (uVar9 < uVar7) >> 1;
          } while (uVar8 != 0);
        }
        lVar3 = lVar3 + 0x68;
      } while (lVar3 != lVar5);
    }
    else if (param_3 == 1) {
      lVar5 = lVar3 + (ulong)uVar8 * 0x68;
      do {
        if (uVar2 != 0) {
          uVar7 = *(ulong *)(lVar3 + 0x50);
          iVar6 = 0;
          uVar8 = uVar2;
          do {
            iVar1 = iVar6 + (uVar8 >> 1);
            uVar9 = *(ulong *)(lVar4 + (long)iVar1 * 8);
            if (uVar9 == uVar7) {
              if (lVar4 + (long)iVar1 * 8 != 0) goto LAB_02e9e548;
              break;
            }
            if (uVar9 < uVar7) {
              iVar6 = iVar1 + 1;
            }
            uVar8 = uVar8 - (uVar9 < uVar7) >> 1;
          } while (uVar8 != 0);
        }
        if (param_4 == 0) {
          return lVar3;
        }
        param_4 = param_4 + -1;
LAB_02e9e548:
        lVar3 = lVar3 + 0x68;
      } while (lVar3 != lVar5);
    }
  }
  return 0;
}


