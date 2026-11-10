/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f0380; name: FUN_031f0380
 */


void FUN_031f0380(long param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  do {
    uVar2 = *(uint *)(param_1 + (long)(param_2 + param_3 >> 1) * 4);
    iVar8 = param_2;
    iVar4 = param_3;
    do {
      puVar7 = (uint *)(param_1 + (long)iVar8 * 4);
      do {
        iVar3 = iVar8;
        puVar6 = puVar7;
        puVar7 = puVar6 + 1;
        iVar8 = iVar3 + 1;
      } while (*puVar6 < uVar2);
      puVar7 = (uint *)(param_1 + 4 + (long)iVar4 * 4);
      iVar4 = iVar4 + 1;
      do {
        iVar5 = iVar4;
        puVar7 = puVar7 + -1;
        uVar1 = *puVar7;
        iVar4 = iVar5 + -1;
      } while (uVar2 < uVar1);
      iVar8 = iVar3;
      if (iVar3 <= iVar4) {
        if (iVar3 != iVar4) {
          *puVar7 = *puVar6;
          *puVar6 = uVar1;
        }
        iVar4 = iVar5 + -2;
        iVar8 = iVar3 + 1;
      }
    } while (iVar8 <= iVar4);
    if (param_2 < iVar4) {
      FUN_031f0380(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


