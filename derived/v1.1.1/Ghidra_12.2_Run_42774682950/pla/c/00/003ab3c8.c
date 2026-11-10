/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ab3c8; name: FUN_003ab3c8
 */


void FUN_003ab3c8(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373db8 + 0x10);
                    /* try { // try from 003ab3e0 to 003ab3eb has its CatchHandler @ 003ab3f4 */
  FUN_003ab3f8();
  FUN_003a2ec4(param_1 + 1);
  return;
}


