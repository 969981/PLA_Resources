/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a4a870; name: FUN_01a4a870
 */


void FUN_01a4a870(long *param_1,byte param_2)

{
  if (((*(char *)((long)param_1 + 0x3e1) != '\0' ^ param_2) & 1) == 0) {
    return;
  }
  *(byte *)((long)param_1 + 0x3e1) = param_2 & 1;
  if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a4a8a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x120))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01a4a898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))();
  return;
}


