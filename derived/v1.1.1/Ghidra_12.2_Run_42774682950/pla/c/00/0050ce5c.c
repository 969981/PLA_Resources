/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050ce5c; name: FUN_0050ce5c
 */


void FUN_0050ce5c(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04374a20;
  *param_1 = (long)(PTR_DAT_04374a00 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = 1;
  lVar2 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
  lVar2 = *param_3;
  *param_3 = 0;
  param_1[5] = lVar2;
  return;
}


