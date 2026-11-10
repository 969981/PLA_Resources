/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0130ee50; name: FUN_0130ee50
 */


void FUN_0130ee50(long param_1,undefined4 param_2,uint param_3)

{
  FUN_00d42438(param_1,0,1);
  *(undefined4 *)(param_1 + 0x5ac) = param_2;
  *(undefined4 *)(param_1 + 0x5b0) = 1;
  FUN_0130ee9c(param_1,param_3 & 1);
  return;
}


