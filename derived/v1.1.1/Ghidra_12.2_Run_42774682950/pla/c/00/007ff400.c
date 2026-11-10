/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ff400; name: FUN_007ff400
 */


void FUN_007ff400(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_007ec3f0();
  puVar1 = PTR_DAT_04377698 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = param_2;
  *param_1 = (long)puVar1;
  return;
}


