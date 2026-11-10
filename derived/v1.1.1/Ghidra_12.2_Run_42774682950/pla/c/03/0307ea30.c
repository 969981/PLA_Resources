/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0307ea30; name: FUN_0307ea30
 */


void FUN_0307ea30(long param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  int iVar8;
  
  do {
    uVar4 = *(ulong *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
    iVar8 = param_2;
    iVar2 = param_3;
    do {
      puVar6 = (ulong *)(param_1 + (long)iVar8 * 8);
      do {
        iVar1 = iVar8;
        puVar5 = puVar6;
        puVar6 = puVar5 + 1;
        iVar8 = iVar1 + 1;
      } while (*puVar5 < uVar4);
      puVar6 = (ulong *)(param_1 + 8 + (long)iVar2 * 8);
      iVar2 = iVar2 + 1;
      do {
        iVar3 = iVar2;
        puVar6 = puVar6 + -1;
        uVar7 = *puVar6;
        iVar2 = iVar3 + -1;
      } while (uVar4 < uVar7);
      iVar8 = iVar1;
      if (iVar1 <= iVar2) {
        if (iVar1 != iVar2) {
          *puVar6 = *puVar5;
          *puVar5 = uVar7;
        }
        iVar2 = iVar3 + -2;
        iVar8 = iVar1 + 1;
      }
    } while (iVar8 <= iVar2);
    if (param_2 < iVar2) {
      FUN_0307ea30(param_1);
    }
    param_2 = iVar8;
  } while (iVar8 < param_3);
  return;
}


