/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027049f4; name: FUN_027049f4
 */


void FUN_027049f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  param_2[2] = 0;
  *param_2 = uVar1;
  param_2[1] = 0;
  FUN_00b63974(param_2 + 1,param_1 + 1);
  param_2[3] = param_1[3];
  return;
}


