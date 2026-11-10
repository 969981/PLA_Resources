/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d99e0; name: FUN_006d99e0
 */


void FUN_006d99e0(long *param_1,undefined8 param_2)

{
  long lVar1;
  
  *param_1 = 0;
  lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x30);
  if (lVar1 != 0) {
                    /* try { // try from 006d9a0c to 006d9a17 has its CatchHandler @ 006d9a34 */
    FUN_002e0ddc(lVar1,0);
  }
  *param_1 = lVar1;
                    /* try { // try from 006d9a1c to 006d9a27 has its CatchHandler @ 006d9a38 */
  FUN_002e1668(lVar1,param_2);
  return;
}


