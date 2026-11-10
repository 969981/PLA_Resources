/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d9d50; name: FUN_006d9d50
 */


long * FUN_006d9d50(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 == 0) {
      lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
      if (lVar1 != 0) {
                    /* try { // try from 006d9da0 to 006d9dab has its CatchHandler @ 006d9e08 */
        FUN_002e0ddc(lVar1,0);
      }
      *param_1 = lVar1;
      lVar2 = *param_2;
    }
    else {
      lVar2 = *param_2;
    }
    if (lVar2 == 0) {
      lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x30);
      if (lVar2 != 0) {
                    /* try { // try from 006d9dd0 to 006d9ddb has its CatchHandler @ 006d9e04 */
        FUN_002e0ddc(lVar2,0);
      }
      *param_2 = lVar2;
      lVar1 = *param_1;
    }
                    /* try { // try from 006d9de4 to 006d9def has its CatchHandler @ 006d9e0c */
    FUN_002e1668(lVar1,lVar2);
  }
  return param_1;
}


