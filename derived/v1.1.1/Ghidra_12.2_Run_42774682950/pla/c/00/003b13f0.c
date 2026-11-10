/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b13f0; name: FUN_003b13f0
 */


void FUN_003b13f0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373f30 + 0x10);
                    /* try { // try from 003b140c to 003b1417 has its CatchHandler @ 003b1454 */
  FUN_003b1468();
  FUN_003a2ec4(param_1 + 1);
                    /* try { // try from 003b141c to 003b1423 has its CatchHandler @ 003b1440 */
  FUN_003c3820(param_1 + 3);
  if (param_1[3] != 0) {
                    /* try { // try from 003b142c to 003b142f has its CatchHandler @ 003b143c */
    FUN_0032ce8c();
  }
  return;
}


