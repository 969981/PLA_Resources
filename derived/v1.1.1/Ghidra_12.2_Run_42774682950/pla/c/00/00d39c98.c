/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d39c98; name: FUN_00d39c98
 */


void FUN_00d39c98(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((param_2 == 0) || (*(long *)(param_1 + 0xd0) != 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar1 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 0xd0) = param_2;
  *(long *)(param_2 + 8) = lVar1;
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x348);
  }
                    /* WARNING: Could not recover jumptable at 0x00d39ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xd0) + 0x10))(*(long **)(param_1 + 0xd0),param_3);
  return;
}


