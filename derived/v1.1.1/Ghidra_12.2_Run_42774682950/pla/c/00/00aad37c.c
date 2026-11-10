/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad37c; name: FUN_00aad37c
 */


void FUN_00aad37c(undefined8 *param_1,long *param_2,int param_3)

{
  if (param_3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00aad388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x10))();
    return;
  }
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00aad39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x18))();
    return;
  }
  *param_1 = 0;
  return;
}


