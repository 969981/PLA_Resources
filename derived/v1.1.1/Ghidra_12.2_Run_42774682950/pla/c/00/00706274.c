/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00706274; name: FUN_00706274
 */


void FUN_00706274(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = (long)plVar3;
  lVar2 = param_2[1] - *param_2;
  if (lVar2 != 0) {
    if (0x38e38e38e38e38e < (ulong)((lVar2 >> 3) * -0x71c71c71c71c71c7)) {
                    /* try { // try from 0070632c to 00706333 has its CatchHandler @ 00706334 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
    param_1[2] = lVar4 + (lVar2 >> 3) * 8;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
                    /* try { // try from 007062fc to 00706303 has its CatchHandler @ 00706344 */
      FUN_007070bc(lVar4,lVar2);
      lVar4 = param_1[1] + 0x48;
      param_1[1] = lVar4;
    }
  }
  return;
}


