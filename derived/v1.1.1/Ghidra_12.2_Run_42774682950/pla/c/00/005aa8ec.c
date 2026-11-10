/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aa8ec; name: FUN_005aa8ec
 */


void FUN_005aa8ec(long *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04374f70 + 0x10;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = param_3;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  return;
}


