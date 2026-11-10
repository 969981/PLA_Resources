/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf4e48; name: FUN_01bf4e48
 */


void FUN_01bf4e48(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_01a51334(param_1,param_1 + 0xf98,1);
  }
  FUN_01a5bd74(param_1,param_1 + 0xf80,param_2 & 1);
  return;
}


