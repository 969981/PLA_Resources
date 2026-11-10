/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420090; name: FUN_00420090
 */


int FUN_00420090(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x100;
  if (uVar1 == (*(uint *)(param_2 + 4) & 0x100)) {
    iVar2 = FUN_0040a680();
    iVar3 = -iVar2;
    if (uVar1 == 0) {
      iVar3 = iVar2;
    }
    return iVar3;
  }
  iVar3 = -1;
  if (uVar1 == 0) {
    iVar3 = 1;
  }
  return iVar3;
}


