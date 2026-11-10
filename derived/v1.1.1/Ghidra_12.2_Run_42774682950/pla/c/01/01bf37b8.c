/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf37b8; name: FUN_01bf37b8
 */


void FUN_01bf37b8(undefined4 param_1,long param_2)

{
  FUN_01a51334(param_2,param_2 + 0xe30,2);
  FUN_01a5bd74(param_2,param_2 + 0xe18,1);
  *(undefined4 *)(param_2 + 0xe60) = param_1;
  *(undefined4 *)(param_2 + 0xe64) = 0;
  FUN_01a51c14(param_2);
  FUN_01a4f4d4(param_2,param_2 + 0xe00,0);
  return;
}


