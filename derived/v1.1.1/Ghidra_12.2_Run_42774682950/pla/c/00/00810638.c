/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00810638; name: FUN_00810638
 */


void FUN_00810638(long *param_1)

{
  *param_1 = (long)(PTR_DAT_043779c0 + 0x10);
  thunk_FUN_00843660(param_1 + 2);
  FUN_00808f9c(param_1);
  operator_delete(param_1);
  return;
}


