/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ce390; name: FUN_003ce390
 */


void FUN_003ce390(void)

{
  ulong uVar1;
  
  uVar1 = thunk_FUN_002f93f0();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_002f5c10(), (uVar1 & 1) == 0)) {
    FUN_002ef750(&DAT_0439a8a0);
    if (DAT_0439a898 != 0) {
                    /* try { // try from 003ce3bc to 003ce3bf has its CatchHandler @ 003ce3e0 */
      FUN_003ce410();
    }
    DAT_0439a898 = 0;
                    /* try { // try from 003ce3c4 to 003ce3cb has its CatchHandler @ 003ce400 */
    FUN_002ef790(&DAT_0439a8a0);
                    /* try { // try from 003ce3cc to 003ce3d7 has its CatchHandler @ 003ce3fc */
    FUN_002ef710(&DAT_0439a8a0);
  }
  return;
}


