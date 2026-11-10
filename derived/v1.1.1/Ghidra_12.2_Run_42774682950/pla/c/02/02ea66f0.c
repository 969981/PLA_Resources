/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea66f0; name: FUN_02ea66f0
 */


uint FUN_02ea66f0(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  param_2 = param_2 & 0xff;
  if ((uVar1 >> 0xf & 1) != 0) {
    uVar2 = uVar1 >> 0xc & 7;
    uVar2 = uVar2 - (uVar2 >> 1 & 1);
    uVar2 = (uVar2 & 0x33333333) + (uVar2 >> 2 & 0x33333333);
    uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
    if (uVar2 == param_2) {
      return (uVar1 & 0xff) - 1;
    }
    if (uVar2 < param_2) {
      return param_2 - 1;
    }
  }
  return param_2;
}


