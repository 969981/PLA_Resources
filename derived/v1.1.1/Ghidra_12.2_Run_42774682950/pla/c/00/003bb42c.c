/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bb42c; name: FUN_003bb42c
 */


void FUN_003bb42c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373f48 + 0x10);
                    /* try { // try from 003bb448 to 003bb453 has its CatchHandler @ 003bb490 */
  FUN_003bb4a4();
  FUN_003a2ec4(param_1 + 1);
                    /* try { // try from 003bb458 to 003bb45f has its CatchHandler @ 003bb47c */
  FUN_003c3a58(param_1 + 3);
  if (param_1[3] != 0) {
                    /* try { // try from 003bb468 to 003bb46b has its CatchHandler @ 003bb478 */
    FUN_0032ce8c();
  }
  return;
}


