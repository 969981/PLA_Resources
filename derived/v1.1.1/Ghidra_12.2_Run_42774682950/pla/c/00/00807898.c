/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00807898; name: FUN_00807898
 */


void FUN_00807898(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377880;
  param_1[0xb] = param_2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}


