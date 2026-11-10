/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01abe39c; name: FUN_01abe39c
 */


void FUN_01abe39c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2c8);
  param_1[3] = *(undefined8 *)(param_2 + 0x2b8);
  param_1[5] = uVar1;
  param_1[1] = *(undefined8 *)(param_2 + 0x2a8);
  *param_1 = *(undefined8 *)(param_2 + 0x2a0);
  uVar1 = *(undefined8 *)(param_2 + 0x2b0);
  param_1[4] = *(undefined8 *)(param_2 + 0x2c0);
  param_1[2] = uVar1;
  return;
}


