/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01351d04; name: FUN_01351d04
 */


void FUN_01351d04(long param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x80);
  if (lVar6 == 0) {
    return;
  }
  uVar2 = *(uint *)(lVar6 + 0x214);
  uVar1 = uVar2 & 0xffffffef;
  if ((param_2 & 1) == 0) {
    uVar1 = uVar2 | 0x10;
  }
  bVar4 = (uVar2 != 0) != (uVar1 != 0);
  if ((((uVar1 == uVar2) || (((uVar1 != 0 ^ param_2) & 1) == 0)) ||
      (iVar3 = *(int *)(lVar6 + 0x21c), iVar3 == 0)) || (*(int *)(lVar6 + 0x224) == 0)) {
    if (bVar4) goto LAB_01351dac;
  }
  else {
    if ((param_2 & 1) == 0) {
      bVar5 = iVar3 == 2;
    }
    else {
      bVar5 = (iVar3 == 1 & param_2) != 0;
    }
    if (bVar4 || bVar5) {
LAB_01351dac:
      FUN_01bdbf3c(lVar6,uVar1);
      *(uint *)(lVar6 + 0x214) = uVar1;
      return;
    }
  }
  *(uint *)(lVar6 + 0x214) = uVar1;
  if ((*(uint *)(lVar6 + 0x210) != uVar1) && (*(int *)(lVar6 + 0x21c) == 0)) {
    *(uint *)(lVar6 + 0x210) = uVar1;
  }
  return;
}


