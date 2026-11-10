/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e4bf0; name: FUN_006e4bf0
 */


long * FUN_006e4bf0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x20);
      if (lVar1 != 0) {
                    /* try { // try from 006e4c38 to 006e4c43 has its CatchHandler @ 006e4ca0 */
        FUN_002deb18(lVar1,0);
      }
      *param_1 = lVar1;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *param_2;
    }
    if (lVar2 == 0) {
      lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x20);
      if (lVar2 != 0) {
                    /* try { // try from 006e4c68 to 006e4c73 has its CatchHandler @ 006e4c9c */
        FUN_002deb18(lVar2,0);
      }
      *param_2 = lVar2;
      lVar1 = *param_1;
    }
    FUN_002e03d4(lVar1,lVar2);
  }
  return param_1;
}


