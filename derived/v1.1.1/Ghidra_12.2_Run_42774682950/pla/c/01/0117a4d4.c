/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0117a4d4; name: FUN_0117a4d4
 */


void FUN_0117a4d4(long param_1)

{
  uint uVar1;
  int iVar2;
  
  FUN_0117a52c();
  uVar1 = *(uint *)(param_1 + 0x5b8);
  if (uVar1 == 0) {
    iVar2 = 1;
  }
  else {
    *(uint *)(param_1 + 0x5c0) = uVar1 / 0x28;
    if (uVar1 % 0x28 == 0) {
      return;
    }
    iVar2 = uVar1 / 0x28 + 1;
  }
  *(int *)(param_1 + 0x5c0) = iVar2;
  return;
}


