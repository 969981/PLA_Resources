/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eea7e0; name: FUN_02eea7e0
 */


void FUN_02eea7e0(undefined4 param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    *(undefined4 *)(param_2 + 0x18) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02eea838. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(param_1,param_2);
  return;
}


