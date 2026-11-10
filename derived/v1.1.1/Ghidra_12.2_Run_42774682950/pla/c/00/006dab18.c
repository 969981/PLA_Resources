/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dab18; name: FUN_006dab18
 */


long FUN_006dab18(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
    if (lVar1 != 0) {
                    /* try { // try from 006dab44 to 006dab4f has its CatchHandler @ 006dab68 */
      FUN_002e0ddc(lVar1,0);
    }
    *param_1 = lVar1;
  }
  *param_1 = 0;
  return lVar1;
}


