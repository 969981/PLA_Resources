/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f68f4; name: FUN_003f68f4
 */


void FUN_003f68f4(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04374140;
  puVar1 = PTR_DAT_04374138;
  param_1[4] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = 1;
  param_1[3] = param_2;
  param_1[4] = *param_3;
  *param_3 = 0;
  param_1[5] = 0;
  param_1[5] = *param_4;
  *param_4 = 0;
  param_1[6] = 0;
  return;
}


