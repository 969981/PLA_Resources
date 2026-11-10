/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f42994; name: FUN_02f42994
 */


int FUN_02f42994(long param_1,int param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  iVar4 = *(int *)(param_1 + 0x108);
  uVar3 = iVar4 - 2;
  if (iVar4 != 2) {
    lVar6 = *(long *)(param_1 + 0x100);
    iVar7 = *param_3;
    uVar2 = *(int *)(lVar6 + 4) + param_2;
    if (iVar7 == 0) {
      uVar5 = 1;
      while (*(uint *)(lVar6 + uVar5 * 0x10 + 4) <= uVar2) {
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        if (uVar3 < uVar1) {
          return 2;
        }
      }
      iVar7 = *(int *)(lVar6 + uVar5 * 0x10);
LAB_02f429ec:
      *param_3 = iVar7;
      *param_4 = *(int *)(*(long *)(param_1 + 0x100) + uVar5 * 0x10 + 4) -
                 *(int *)(*(long *)(param_1 + 0x100) + 4);
      iVar4 = 1;
    }
    else {
      uVar5 = 1;
      do {
        if ((uVar2 < *(uint *)(lVar6 + uVar5 * 0x10 + 4)) &&
           (*(int *)(lVar6 + uVar5 * 0x10) == iVar7)) goto LAB_02f429ec;
        uVar1 = (int)uVar5 + 1;
        uVar5 = (ulong)uVar1;
        iVar4 = 2;
      } while (uVar1 <= uVar3);
    }
  }
  return iVar4;
}


