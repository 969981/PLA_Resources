/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d55dc; name: FUN_014d55dc
 */


undefined8 FUN_014d55dc(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0xa4) != 3) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar2 = FUN_014d65c0(*(undefined8 *)(param_1 + 8));
  if ((uVar2 & 1) == 0) {
    return 0x400000001;
  }
  uVar2 = FUN_014d67b0();
  uVar1 = 0x500000001;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0x300000001;
  }
  return uVar1;
}


