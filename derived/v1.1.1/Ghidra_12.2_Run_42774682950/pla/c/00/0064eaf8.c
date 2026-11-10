/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064eaf8; name: FUN_0064eaf8
 */


long FUN_0064eaf8(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x28);
  if (lVar1 != 0) {
                    /* try { // try from 0064eb34 to 0064eb3f has its CatchHandler @ 0064eb54 */
    FUN_00696378(lVar1,0);
  }
  *param_1 = lVar1;
  return lVar1;
}


