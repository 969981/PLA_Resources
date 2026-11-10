/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db854c; name: FUN_00db854c
 */


float FUN_00db854c(float param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = uVar2 ^ uVar1;
  *param_2 = uVar3 ^ (uVar1 >> 0x28 | uVar1 << 0x18) ^ uVar3 << 0x10;
  param_2[1] = uVar3 >> 0x1b | uVar3 << 0x25;
  return (float)(uVar2 + uVar1) * 5.421011e-20 * param_1 + 0.0;
}


