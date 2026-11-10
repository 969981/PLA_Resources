/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006e4acc; name: FUN_006e4acc
 */


void FUN_006e4acc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x20);
  if (lVar1 != 0) {
                    /* try { // try from 006e4b00 to 006e4b0b has its CatchHandler @ 006e4b30 */
    FUN_002deb18(lVar1,0);
  }
  *param_1 = lVar1;
                    /* try { // try from 006e4b10 to 006e4b1f has its CatchHandler @ 006e4b34 */
  FUN_006da5cc(lVar1,param_2,param_3);
  return;
}


