/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a069a4; name: FUN_01a069a4
 */


void FUN_01a069a4(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_01a069fc();
  param_1[0x4c] = 0;
  puVar1 = PTR_DAT_04382378;
  param_1[0x4d] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar1 + 0x118);
  param_1[10] = (long)(puVar1 + 0x1f8);
  param_1[0x49] = (long)(puVar1 + 0x220);
  FUN_019ec938(param_1 + 0x4c,param_2);
  return;
}


