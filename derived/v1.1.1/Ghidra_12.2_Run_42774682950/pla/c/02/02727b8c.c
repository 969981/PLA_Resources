/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02727b8c; name: FUN_02727b8c
 */


void FUN_02727b8c(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  uVar1 = *param_2;
  *param_1 = 1;
  param_1[8] = 0;
  param_1[0x20] = 0;
  param_1[0x30] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return;
}


