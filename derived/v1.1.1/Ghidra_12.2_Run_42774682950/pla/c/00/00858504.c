/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00858504; name: FUN_00858504
 */


void FUN_00858504(long *param_1)

{
  *param_1 = (long)(PTR_DAT_043780e0 + 0x10);
  if ((param_1[0xd] != 0) || (param_1[0xc] != 0)) {
    FUN_00858540(param_1);
  }
  thunk_FUN_00847210(param_1);
  return;
}


