/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538b3c; name: FUN_00538b3c
 */


void FUN_00538b3c(long param_1)

{
  FUN_002ef750(param_1 + 0x20);
                    /* try { // try from 00538b58 to 00538b83 has its CatchHandler @ 00538b9c */
  FUN_0053ed04(param_1 + 0xf0);
  if (*(char *)(param_1 + 0x1b8) == '\0') {
    *(undefined1 *)(param_1 + 0x130) = 0;
    FUN_005388d0(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0x1b9) = 1;
    FUN_002f5c80(param_1 + 0x138);
  }
                    /* try { // try from 00538b84 to 00538b8b has its CatchHandler @ 00538b98 */
  FUN_002ef790(param_1 + 0x20);
  return;
}


