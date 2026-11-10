/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f6068; name: FUN_031f6068
 */


void FUN_031f6068(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  
  bVar4 = (*(byte *)(param_1 + 0x18) & 1) != 0;
  iVar3 = (int)((uint)*(byte *)(param_1 + 0x18) << 0x18) >> 0x19;
  iVar5 = 1;
  if (bVar4) {
    iVar5 = 2;
  }
  iVar6 = 1;
  if (!bVar4) {
    iVar6 = 2;
  }
  iVar5 = (iVar5 + iVar3) % 3;
  iVar3 = (iVar6 + iVar3) % 3;
  if (iVar5 == 0) {
    uVar1 = *param_2;
  }
  else if (iVar5 == 2) {
    uVar1 = param_2[2];
  }
  else if (iVar5 == 1) {
    uVar1 = param_2[1];
  }
  else {
    uVar1 = param_2[3];
  }
  if (iVar3 != 0) {
    if (iVar3 == 2) {
      param_2 = param_2 + 2;
    }
    else if (iVar3 == 1) {
      param_2 = param_2 + 1;
    }
    else {
      param_2 = param_2 + 3;
    }
  }
  uVar2 = *param_2;
  *param_3 = uVar1;
  param_3[1] = uVar2;
  return;
}


