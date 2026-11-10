/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded8e0; name: FUN_02ded8e0
 */


void FUN_02ded8e0(long param_1,uint param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  
  if (param_2 == 0) {
    *param_3 = 0;
    *param_4 = *(int *)(param_1 + 0x80);
    return;
  }
  uVar2 = *(uint *)(param_1 + 0x7c) >> 2;
  if (uVar2 != 0) {
    uVar5 = 0;
    iVar3 = 0;
    puVar6 = (ushort *)(*(long *)(param_1 + 0xa0) + 2);
    uVar4 = 0;
    do {
      uVar1 = uVar4 + puVar6[-1];
      if (param_2 < uVar1) {
        if ((int)uVar5 == 0) goto LAB_02ded954;
        goto LAB_02ded934;
      }
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + (uint)*puVar6;
      puVar6 = puVar6 + 2;
      uVar4 = uVar1;
    } while (uVar2 != uVar5);
    if (uVar2 != 0) {
LAB_02ded934:
      iVar3 = iVar3 + *(uint *)(param_1 + 0x7c);
      goto LAB_02ded95c;
    }
  }
LAB_02ded954:
  iVar3 = *(int *)(param_1 + 0x80);
  uVar4 = 0;
LAB_02ded95c:
  *param_4 = iVar3;
  *param_3 = uVar4;
  return;
}


