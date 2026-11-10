/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01236ba0; name: FUN_01236ba0
 */


long FUN_01236ba0(long param_1,undefined4 param_2,uint param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  
  if (param_4 != (long *)0x0) {
    switch(param_2) {
    case 0:
      plVar1 = (long *)(param_1 + 0x10);
      plVar2 = (long *)(param_1 + 0x18);
      break;
    case 1:
      plVar1 = (long *)(param_1 + 0x48);
      plVar2 = (long *)(param_1 + 0x50);
      break;
    case 2:
      plVar1 = (long *)(param_1 + 0x80);
      plVar2 = (long *)(param_1 + 0x88);
      break;
    case 3:
      plVar1 = (long *)(param_1 + 0xb8);
      plVar2 = (long *)(param_1 + 0xc0);
      break;
    case 4:
      plVar1 = (long *)(param_1 + 0xf0);
      plVar2 = (long *)(param_1 + 0xf8);
      break;
    case 5:
      plVar1 = (long *)(param_1 + 0x128);
      plVar2 = (long *)(param_1 + 0x130);
      break;
    case 6:
      plVar1 = (long *)(param_1 + 0x160);
      plVar2 = (long *)(param_1 + 0x168);
      break;
    case 7:
      plVar1 = (long *)(param_1 + 0x198);
      plVar2 = (long *)(param_1 + 0x1a0);
      break;
    default:
      goto switchD_01236bcc_default;
    }
    if (param_3 < (uint)((int)((ulong)(*plVar2 - *plVar1) >> 4) * -0x33333333)) {
      if ((ulong)((param_4[1] - *param_4 >> 4) * -0x3333333333333333) <= (ulong)param_3) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      return *param_4 + (ulong)param_3 * 0x50;
    }
  }
switchD_01236bcc_default:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


