/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005d0cd4; name: FUN_005d0cd4
 */


void FUN_005d0cd4(long *param_1,long param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_3 != 0) {
    if (0x333333333333333 < param_3) {
                    /* try { // try from 005d0d64 to 005d0d6b has its CatchHandler @ 005d0d6c */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar2 = param_3 * 0x50;
    lVar1 = FUN_002e2e80(PTR_FUN_04373078,lVar2);
    *param_1 = lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1 + lVar2;
    do {
                    /* try { // try from 005d0d30 to 005d0d37 has its CatchHandler @ 005d0d7c */
      FUN_003eaa30(lVar1,param_2);
      param_2 = param_2 + 0x50;
      lVar2 = lVar2 + -0x50;
      lVar1 = param_1[1] + 0x50;
      param_1[1] = lVar1;
    } while (lVar2 != 0);
  }
  return;
}


