/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003aeb7c; name: FUN_003aeb7c
 */


void FUN_003aeb7c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373f20 + 0x10);
                    /* try { // try from 003aeb98 to 003aeba3 has its CatchHandler @ 003aebf0 */
  FUN_003aec14();
  FUN_003a2ec4(param_1 + 1);
  FUN_0032b6e4(param_1 + 9);
  FUN_003aea8c(param_1 + 6);
                    /* try { // try from 003aebb8 to 003aebbf has its CatchHandler @ 003aebdc */
  FUN_003c3464(param_1 + 3);
  if (param_1[3] != 0) {
                    /* try { // try from 003aebc8 to 003aebcb has its CatchHandler @ 003aebd8 */
    FUN_0032ce8c();
  }
  return;
}


