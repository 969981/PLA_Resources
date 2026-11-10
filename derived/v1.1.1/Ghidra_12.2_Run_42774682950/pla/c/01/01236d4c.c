/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01236d4c; name: FUN_01236d4c
 */


long FUN_01236d4c(long param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  
  switch(param_2) {
  case 0:
    plVar1 = (long *)(param_1 + 0x10);
    lVar2 = *plVar1;
    break;
  case 1:
    plVar1 = (long *)(param_1 + 0x48);
    lVar2 = *plVar1;
    break;
  case 2:
    plVar1 = (long *)(param_1 + 0x80);
    lVar2 = *plVar1;
    break;
  case 3:
    plVar1 = (long *)(param_1 + 0xb8);
    lVar2 = *plVar1;
    break;
  case 4:
    plVar1 = (long *)(param_1 + 0xf0);
    lVar2 = *plVar1;
    break;
  case 5:
    lVar2 = *(long *)(param_1 + 0x128);
    uVar3 = (*(long *)(param_1 + 0x130) - lVar2 >> 4) * -0x3333333333333333;
    if (param_3 < (uint)uVar3) {
      if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      goto LAB_01236db0;
    }
    goto LAB_01236e80;
  case 6:
    lVar2 = *(long *)(param_1 + 0x160);
    uVar3 = (*(long *)(param_1 + 0x168) - lVar2 >> 4) * -0x3333333333333333;
    if ((uint)uVar3 <= param_3) goto LAB_01236e80;
    if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    goto LAB_01236db0;
  case 7:
    lVar2 = *(long *)(param_1 + 0x198);
    uVar3 = (*(long *)(param_1 + 0x1a0) - lVar2 >> 4) * -0x3333333333333333;
    if ((uint)uVar3 <= param_3) goto LAB_01236e80;
    if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    goto LAB_01236db0;
  default:
    return param_1 + 0x3a8;
  }
  uVar3 = (plVar1[1] - lVar2 >> 4) * -0x3333333333333333;
  if ((uint)uVar3 <= param_3) {
LAB_01236e80:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (uVar3 <= param_3) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_01236db0:
  return lVar2 + (ulong)param_3 * 0x50;
}


