/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e260; name: FUN_02f3e260
 */


void FUN_02f3e260(undefined4 param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_02f3e6fc(param_2);
                    /* WARNING: Could not recover jumptable at 0x02f3e298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(param_1,param_2);
  return;
}


