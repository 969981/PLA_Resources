/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2c60; name: FUN_002f2c60
 */


void FUN_002f2c60(undefined8 *param_1,char *param_2)

{
  undefined *puVar1;
  size_t sVar2;
  
  sVar2 = strlen(param_2);
  puVar1 = PTR_DAT_04373888;
  param_1[2] = param_2;
  *param_1 = puVar1;
  param_1[1] = sVar2;
  return;
}


