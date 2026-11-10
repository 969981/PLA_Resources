/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a49c4; name: FUN_011a49c4
 */


void FUN_011a49c4(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_2 != 0) ||
     (uVar4 = *(uint *)(*(long *)(param_1 + 0x638) + 0xb0), uVar2 = uVar4 - 0x14, uVar4 < 0x14)) {
    return;
  }
  uVar4 = uVar2 / 5;
  if (uVar2 == (uVar2 / 5) * 5) {
    if (uVar2 < 5) {
      return;
    }
  }
  else {
    uVar4 = uVar2 / 5 + 1;
  }
  if (param_3 < 0) {
    iVar1 = uVar4 * 5;
  }
  else {
    FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8);
    iVar3 = FUN_0281a4fc();
    iVar1 = uVar4 * 5;
    if (iVar3 - 0xfU < 5) {
      iVar1 = 0;
    }
  }
  FUN_011a4a5c(param_1,iVar1);
  return;
}


