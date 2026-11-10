/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da6454; name: FUN_00da6454
 */


void FUN_00da6454(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (ulong)(param_3 - 1U) * 8 + 0x48;
  if (4 < param_3 - 1U) {
    lVar1 = 0x40;
  }
  param_1[4] = param_2;
  param_1[5] = lVar1;
  param_1[6] = 1;
  *param_1 = &LAB_00da7a2c;
  param_1[1] = &LAB_00da7a4c;
  param_1[2] = &LAB_00da7a50;
  param_1[3] = &LAB_00da7a64;
  return;
}


