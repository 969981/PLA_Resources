/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876f2c; name: FUN_00876f2c
 */


void FUN_00876f2c(undefined1 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 2;
  uVar1 = (**(code **)PTR_DAT_04378460)(param_2);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[2] = param_1[2] | 1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *param_1 = 1;
  return;
}


