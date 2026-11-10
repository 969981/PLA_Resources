/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad0a24; name: FUN_00ad0a24
 */


void FUN_00ad0a24(long *param_1,byte param_2)

{
  if (((*(char *)((long)param_1 + 0x31d) != '\0' ^ param_2) & 1) == 0) {
    return;
  }
  *(byte *)((long)param_1 + 0x31d) = param_2 & 1;
  if ((param_2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ad0a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x130))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00ad0a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x128))();
  return;
}


