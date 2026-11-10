/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e074c8; name: FUN_02e074c8
 */


bool FUN_02e074c8(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1[3] != 0) {
    return false;
  }
  uVar2 = *param_1;
  uVar3 = 0;
  if (uVar2 != 0) {
    uVar3 = (param_1[6] + param_1[1]) / uVar2;
  }
  uVar3 = (param_1[6] + param_1[1]) - uVar3 * uVar2;
  iVar1 = 0;
  if (uVar3 < param_1[2]) {
    iVar1 = -uVar2;
  }
  return uVar3 - param_1[2] == iVar1;
}


