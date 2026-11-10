/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e4a70; name: FUN_006e4a70
 */


void FUN_006e4a70(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 006e4a9c to 006e4aa7 has its CatchHandler @ 006e4ac4 */
    FUN_002deb18(lVar1,0);
  }
  *param_1 = lVar1;
                    /* try { // try from 006e4aac to 006e4ab7 has its CatchHandler @ 006e4ac8 */
  FUN_006da248(lVar1,param_2);
  return;
}


