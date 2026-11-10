/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00531ec0; name: FUN_00531ec0
 */


void FUN_00531ec0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04374b78 + 0x10);
                    /* try { // try from 00531ed8 to 00531edb has its CatchHandler @ 00531ee8 */
  FUN_002ef710(param_1 + 9);
  FUN_00531e34(param_1 + 3);
  return;
}


