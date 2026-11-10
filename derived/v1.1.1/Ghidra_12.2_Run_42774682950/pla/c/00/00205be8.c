/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00205be8; name: FUN_00205be8
 */


void FUN_00205be8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(bool *)(param_1 + 2) = param_4 != 0;
  return;
}


