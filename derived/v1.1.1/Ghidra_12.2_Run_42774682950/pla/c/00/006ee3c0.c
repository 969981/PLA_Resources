/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ee3c0; name: FUN_006ee3c0
 */


void FUN_006ee3c0(long *param_1,long *param_2)

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
    if (0x186186186186186 < (ulong)((lVar2 >> 3) * -0x30c30c30c30c30c3)) {
                    /* try { // try from 006ee478 to 006ee47f has its CatchHandler @ 006ee480 */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3,lVar2,8);
    param_1[2] = lVar4 + (lVar2 >> 3) * 8;
    *param_1 = lVar4;
    param_1[1] = lVar4;
    lVar1 = param_2[1];
    for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xa8) {
                    /* try { // try from 006ee448 to 006ee44f has its CatchHandler @ 006ee490 */
      FUN_006ee4ec(lVar4,lVar2);
      lVar4 = param_1[1] + 0xa8;
      param_1[1] = lVar4;
    }
  }
  return;
}


