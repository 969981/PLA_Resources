/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea2a18; name: FUN_02ea2a18
 */


void FUN_02ea2a18(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xec);
  if ((param_2 & 0xf00) == 0x100) {
    uVar1 = param_2 >> 0xc & 0x3ff3f;
    uVar3 = uVar1 - (uVar1 >> 1 & 0x55555555);
    uVar3 = (uVar3 & 0x33333333) + (uVar3 >> 2 & 0x33333333);
    param_2 = uVar1 << 0xc | (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18 | 0x100;
  }
  *(uint *)(param_1 + 0xec) = param_2;
  if (uVar2 == param_2) {
    return;
  }
  FUN_02f1406c(*(undefined4 *)(param_1 + 0x10));
  return;
}


