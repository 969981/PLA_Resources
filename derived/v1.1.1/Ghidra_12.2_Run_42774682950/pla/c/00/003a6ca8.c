/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003a6ca8; name: FUN_003a6ca8
 */


void FUN_003a6ca8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373d30 + 0x10);
                    /* try { // try from 003a6cc0 to 003a6ccb has its CatchHandler @ 003a6cd4 */
  FUN_003a6cd8();
  FUN_003a2ec4(param_1 + 1);
  return;
}


