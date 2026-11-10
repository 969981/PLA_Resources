/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ba9c0; name: FUN_003ba9c0
 */


void FUN_003ba9c0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373ed8 + 0x10);
                    /* try { // try from 003ba9d8 to 003ba9e3 has its CatchHandler @ 003ba9ec */
  FUN_003ba9f0();
  FUN_003a2ec4(param_1 + 1);
  return;
}


