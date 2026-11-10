/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b0ac0; name: FUN_008b0ac0
 */


undefined4 FUN_008b0ac0(long param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x84) < 0) {
    uVar2 = 3;
    if (*(int *)(param_1 + 0x80) != 1) {
      uVar2 = 7;
    }
    return uVar2;
  }
  if (*(int *)(param_1 + 0x84) != 0) {
    uVar2 = 5;
    if (*(int *)(param_1 + 0x80) == 1) {
      uVar2 = 1;
    }
    return uVar2;
  }
  bVar1 = *(int *)(param_1 + 0x80) != 1;
  uVar2 = 4;
  if (bVar1) {
    uVar2 = 8;
  }
  uVar3 = 2;
  if (bVar1) {
    uVar3 = 6;
  }
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar2 = uVar3;
  }
  return uVar2;
}


