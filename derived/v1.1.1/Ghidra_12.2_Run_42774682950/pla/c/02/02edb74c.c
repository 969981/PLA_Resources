/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edb74c; name: FUN_02edb74c
 */


void FUN_02edb74c(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = param_1[0x11] + (param_2 - param_1[0x16]);
  param_1[0x11] = uVar1;
  param_1[0x12] = param_1[0x12] + (param_2 - param_1[0x16]);
  *param_1 = 1;
  param_1[0x15] = -((float)param_1[0x14] * (float)uVar1);
  return;
}


