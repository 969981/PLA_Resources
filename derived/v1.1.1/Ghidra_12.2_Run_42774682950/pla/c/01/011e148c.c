/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011e148c; name: FUN_011e148c
 */


undefined8 FUN_011e148c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (*(long *)(param_1 + 2) != 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  *param_1 = *param_2;
  uVar1 = FUN_011e1500(DAT_043be8d0);
  *(undefined8 *)(param_1 + 2) = uVar1;
  FUN_00d16158(&local_30,uVar1);
  *(undefined8 *)(param_1 + 4) = local_30;
  *(undefined8 *)(param_1 + 6) = uStack_28;
  return *(undefined8 *)(param_1 + 2);
}


