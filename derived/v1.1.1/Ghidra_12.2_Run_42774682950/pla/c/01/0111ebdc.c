/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111ebdc; name: FUN_0111ebdc
 */


undefined * FUN_0111ebdc(undefined8 param_1,int param_2,undefined4 *param_3)

{
  undefined *puVar1;
  
  if (2 < param_2 - 0xcU) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  puVar1 = (&PTR_DAT_041f1e60)[(int)(param_2 - 0xcU)];
  *param_3 = 5;
  return puVar1;
}


