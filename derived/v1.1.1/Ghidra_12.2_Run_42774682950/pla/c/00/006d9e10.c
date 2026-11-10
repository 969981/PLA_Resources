/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d9e10; name: FUN_006d9e10
 */


long FUN_006d9e10(long *param_1)

{
  long lVar1;
  
  if (*param_1 != 0) {
    return *param_1;
  }
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (lVar1 != 0) {
                    /* try { // try from 006d9e4c to 006d9e57 has its CatchHandler @ 006d9e6c */
    FUN_002e0ddc(lVar1,0);
  }
  *param_1 = lVar1;
  return lVar1;
}


