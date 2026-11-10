/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f4200; name: FUN_002f4200
 */


void FUN_002f4200(undefined8 *param_1,byte param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  param_1[1] = param_3;
  *(byte *)(param_1 + 2) = param_2 & 1;
  puVar1 = PTR_DAT_043738b0;
  *param_1 = *(undefined8 *)PTR_DAT_043738b0;
  *(undefined8 **)puVar1 = param_1;
  return;
}


