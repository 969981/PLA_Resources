/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012efcb8; name: FUN_012efcb8
 */


int FUN_012efcb8(long param_1,undefined4 param_2)

{
  long *plVar1;
  long *plVar2;
  
  switch(param_2) {
  case 0:
    plVar1 = (long *)(param_1 + 0x98);
    plVar2 = (long *)(param_1 + 0xa0);
    break;
  case 1:
    plVar1 = (long *)(param_1 + 0xd0);
    plVar2 = (long *)(param_1 + 0xd8);
    break;
  case 2:
    plVar1 = (long *)(param_1 + 0x108);
    plVar2 = (long *)(param_1 + 0x110);
    break;
  case 3:
    plVar1 = (long *)(param_1 + 0x140);
    plVar2 = (long *)(param_1 + 0x148);
    break;
  default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return (int)((ulong)(*plVar2 - *plVar1) >> 4) * -0x55555555;
}


