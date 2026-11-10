/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03372ea0; name: FUN_03372ea0
 */


uint FUN_03372ea0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (-*param_1 & *param_1) - 1;
  uVar2 = (-param_1[1] & param_1[1]) - 1;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar1 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101;
  uVar3 = uVar1 >> 0x18;
  if (uVar1 >> 0x1d != 0) {
    uVar3 = ((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
  }
  if (uVar3 == 0x40) {
    uVar3 = (-param_1[2] & param_1[2]) - 1;
    uVar2 = (-param_1[3] & param_1[3]) - 1;
    uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
    uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar1 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101;
    uVar3 = uVar1 >> 0x18;
    if (uVar1 >> 0x1d != 0) {
      uVar3 = ((uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 0x20;
    }
    uVar3 = uVar3 + 0x40;
  }
  return uVar3;
}


