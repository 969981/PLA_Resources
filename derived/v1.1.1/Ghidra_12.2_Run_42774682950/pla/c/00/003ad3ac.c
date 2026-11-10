/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ad3ac; name: FUN_003ad3ac
 */


void FUN_003ad3ac(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373e68 + 0x10);
                    /* try { // try from 003ad3c4 to 003ad3cf has its CatchHandler @ 003ad3d8 */
  FUN_003ad3dc();
  FUN_003a2ec4(param_1 + 1);
  return;
}


