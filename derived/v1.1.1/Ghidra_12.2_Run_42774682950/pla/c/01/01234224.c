/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01234224; name: FUN_01234224
 */


void FUN_01234224(long param_1,uint param_2)

{
  if (param_2 < 7) {
    FUN_01234258(param_1,param_1 + (long)*(int *)(&DAT_03a7a230 + (ulong)param_2 * 8) * 0x58 + 0x10)
    ;
    return;
  }
  FUN_01234258(param_1,0);
  return;
}


