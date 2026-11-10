/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0247776c; name: FUN_0247776c
 */


void FUN_0247776c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x290);
  *param_1 = *(undefined8 *)(param_2 + 0x288);
  param_1[1] = uVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_00b63974(param_1 + 2,param_2 + 0x298);
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_019c86bc(param_1 + 4,param_2 + 0x2a8);
  return;
}


