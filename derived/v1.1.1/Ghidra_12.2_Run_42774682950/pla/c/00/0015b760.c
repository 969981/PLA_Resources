/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015b760; name: FUN_0015b760
 */


undefined8 FUN_0015b760(long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  
  if (*(short *)(param_1 + 0xc4) != 0) {
    if (*(long *)(*(long *)(param_1 + 0x18) + 200) == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_001599d0(param_1,"attempt to yield from outside a coroutine");
    }
                    /* WARNING: Subroutine does not return */
    FUN_001599d0(param_1,"attempt to yield across a C-call boundary");
  }
  plVar1 = *(long **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0xc) = 1;
  plVar1[7] = *plVar1 - *(long *)(param_1 + 0x38);
  if ((*(byte *)((long)plVar1 + 0x42) >> 1 & 1) != 0) {
    return 0;
  }
  plVar1[4] = param_4;
  if (param_4 != 0) {
    plVar1[6] = param_3;
  }
  *plVar1 = *(long *)(param_1 + 0x10) + (long)param_2 * -0x10 + -0x10;
                    /* WARNING: Subroutine does not return */
  FUN_0015a320(param_1,1);
}


