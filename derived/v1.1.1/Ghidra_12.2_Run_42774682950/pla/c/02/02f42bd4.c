/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f42bd4; name: FUN_02f42bd4
 */


void FUN_02f42bd4(long param_1,uint param_2,uint param_3,int *param_4,int *param_5,int *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  
  if ((int)param_2 < 0) {
    if (param_3 <= -param_2) goto LAB_02f42cc4;
    param_3 = param_3 + param_2;
    param_2 = 0;
  }
  uVar1 = *(int *)(*(long *)(param_1 + 0x100) + (ulong)*(uint *)(param_1 + 0x108) * 0x10 + -0xc) -
          *(int *)(*(long *)(param_1 + 0x100) + 4);
  if ((param_3 + param_2 <= uVar1) || (param_3 = uVar1 - param_2, param_2 <= uVar1 && param_3 != 0))
  {
    if ((*(byte *)(param_1 + 0xf4) >> 2 & 1) == 0) {
      do {
        lVar6 = *(long *)(param_1 + 0x80);
        if (lVar6 == 0) break;
        param_1 = lVar6;
      } while ((*(byte *)(lVar6 + 0xf4) >> 2 & 1) == 0);
    }
    uVar1 = *(uint *)(param_1 + 0xe8);
    iVar5 = 0;
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar1 + param_2) / uVar1;
      }
      uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar2 + param_3) / uVar1;
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      iVar5 = uVar3 - uVar4;
    }
    *param_4 = iVar5;
    uVar1 = *(uint *)(param_1 + 0xe4);
    iVar5 = 0;
    if (uVar1 != 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = (uVar1 + param_2) / uVar1;
      }
      uVar2 = (uVar1 + ((uVar1 + param_2) - uVar2 * uVar1)) - 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar2 + param_3) / uVar1;
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      iVar5 = uVar3 - uVar4;
    }
    *param_5 = iVar5;
    uVar1 = *(uint *)(param_1 + 0xec);
    iVar5 = 0;
    if (uVar1 != 0) {
      uVar2 = (uVar1 + param_2) - *(int *)(param_1 + 0xf0);
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = uVar2 / uVar1;
      }
      uVar2 = (uVar1 + (uVar2 - uVar3 * uVar1)) - 1;
      uVar3 = 0;
      if (uVar1 != 0) {
        uVar3 = (uVar2 + param_3) / uVar1;
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        uVar4 = uVar2 / uVar1;
      }
      iVar5 = uVar3 - uVar4;
    }
    *param_6 = iVar5;
    return;
  }
LAB_02f42cc4:
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  return;
}


