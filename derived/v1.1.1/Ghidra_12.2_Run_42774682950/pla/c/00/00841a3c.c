/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841a3c; name: FUN_00841a3c
 */


void FUN_00841a3c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_0084a350();
  *(undefined2 *)((long)param_1 + 0x51e) = 0;
  puVar1 = PTR_DAT_043774c8;
  param_1[0xa5] = 0;
  puVar2 = PTR_DAT_04377fa8;
  param_1[0xa6] = 0;
  lVar3 = *(long *)puVar1;
  param_1[0xa7] = 0;
  param_1[0xa4] = lVar3;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  return;
}


