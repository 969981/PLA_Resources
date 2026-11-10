/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058b794; name: FUN_0058b794
 */


void FUN_0058b794(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374e70 + 0x10);
                    /* try { // try from 0058b7b0 to 0058b7bb has its CatchHandler @ 0058b7c4 */
  FUN_0058bc80(param_1[4]);
  free((void *)param_1[5]);
  return;
}


