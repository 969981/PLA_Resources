/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00680b78; name: FUN_00680b78
 */


long * FUN_00680b78(long *param_1,long *param_2)

{
  long lVar1;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      FUN_00690a48(lVar1);
      FUN_002e2ea0(PTR_LAB_04373088,lVar1);
      *param_1 = 0;
    }
    if (*param_2 != 0) {
      lVar1 = FUN_002e2e80(PTR_FUN_04373078,0x20);
      if (lVar1 != 0) {
                    /* try { // try from 00680bd4 to 00680bdf has its CatchHandler @ 00680c00 */
        FUN_006903b4(lVar1,0);
      }
      *param_1 = lVar1;
                    /* try { // try from 00680be8 to 00680bef has its CatchHandler @ 00680c04 */
      FUN_0069177c(lVar1,*param_2);
    }
  }
  return param_1;
}


