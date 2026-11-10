/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a075d4; name: FUN_01a075d4
 */


void FUN_01a075d4(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[3];
  *(undefined8 *)(param_1 + 0x1f8) = param_2[1];
  *(undefined8 *)(param_1 + 0x208) = uVar1;
  *(undefined8 *)(param_1 + 0x1f0) = *param_2;
  uVar1 = param_2[2];
  *(undefined8 *)(param_1 + 0x210) = param_2[4];
  *(undefined8 *)(param_1 + 0x200) = uVar1;
  FUN_008c4b3c(param_1 + 0x218,param_2 + 5);
  *(undefined4 *)(param_1 + 0x230) = 0;
  return;
}


