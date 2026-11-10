/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a87ef0; name: FUN_01a87ef0
 */


void FUN_01a87ef0(long *param_1,int param_2)

{
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a87efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x350))();
    return;
  }
  if (param_2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x01a87f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x368))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a87f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x380))();
  return;
}


