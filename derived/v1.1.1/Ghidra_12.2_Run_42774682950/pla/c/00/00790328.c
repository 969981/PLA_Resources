/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00790328; name: FUN_00790328
 */


void FUN_00790328(long *param_1,long *param_2)

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
    if (0x11a7b9611a7b961 < (ulong)((lVar2 >> 3) * 0x34f72c234f72c235)) {
                    /* try { // try from 007903e0 to 007903e7 has its CatchHandler @ 007903e8 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
    param_1[2] = lVar4 + (lVar2 >> 3) * 8;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xe8) {
                    /* try { // try from 007903b0 to 007903b7 has its CatchHandler @ 007903f8 */
      FUN_007897dc(lVar4,lVar2);
      lVar4 = param_1[1] + 0xe8;
      param_1[1] = lVar4;
    }
  }
  return;
}


