/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008e9338; name: FUN_008e9338
 */


undefined1  [16] FUN_008e9338(long *param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  param_2 = *param_1 + param_2;
  uVar1 = param_2 + param_1[1] + param_1[2];
  uVar2 = param_2 + param_3 + param_1[3];
  auVar3._8_8_ = (uVar1 >> 0x2c | uVar1 * 0x100000) + param_2 + (uVar2 >> 0x15 | uVar2 << 0x2b);
  auVar3._0_8_ = uVar1 + param_1[3];
  return auVar3;
}


