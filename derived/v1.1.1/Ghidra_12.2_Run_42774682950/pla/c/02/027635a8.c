/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027635a8; name: FUN_027635a8
 */


void FUN_027635a8(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  size_t sVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = FUN_00612290();
  param_1[3] = uVar1;
  sVar2 = strlen(param_2);
  FUN_027625d0(param_1,param_2,sVar2);
  return;
}


