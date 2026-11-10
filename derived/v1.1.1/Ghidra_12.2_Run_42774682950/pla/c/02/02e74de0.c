/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e74de0; name: FUN_02e74de0
 */


void FUN_02e74de0(long param_1)

{
  if (param_1 == 0) {
    param_1 = time((time_t *)0x0);
  }
  DAT_0440a190 = param_1;
  return;
}


