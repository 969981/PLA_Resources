/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b02f4; name: FUN_003b02f4
 */


void FUN_003b02f4(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373d80 + 0x10);
                    /* try { // try from 003b030c to 003b0317 has its CatchHandler @ 003b0320 */
  FUN_003b0324();
  FUN_003a2ec4(param_1 + 1);
  return;
}


