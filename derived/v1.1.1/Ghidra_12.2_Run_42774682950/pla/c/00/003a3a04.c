/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a3a04; name: FUN_003a3a04
 */


void FUN_003a3a04(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373ee8 + 0x10);
                    /* try { // try from 003a3a20 to 003a3a2b has its CatchHandler @ 003a3a94 */
  FUN_003a3ad8();
  FUN_003a2ec4(param_1 + 1);
  FUN_00326c10(param_1 + 0x14);
  FUN_00326c10(param_1 + 0x12);
                    /* try { // try from 003a3a40 to 003a3a47 has its CatchHandler @ 003a3a80 */
  FUN_003c2628(param_1 + 0xf);
  if (param_1[0xf] != 0) {
                    /* try { // try from 003a3a50 to 003a3a53 has its CatchHandler @ 003a3a7c */
    FUN_0032ce8c();
  }
  FUN_003a37f4(param_1 + 0xc);
  FUN_003a38a4(param_1 + 9);
  FUN_003a3954(param_1 + 6);
  FUN_0032b6e4(param_1 + 3);
  return;
}


