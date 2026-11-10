/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e657bc; name: FUN_02e657bc
 */


void FUN_02e657bc(long *param_1)

{
  if (((*(byte *)((long)param_1 + 0x34) & 1) != 0) && (*param_1 != 0)) {
    (*DAT_0442d150)(7);
  }
                    /* WARNING: Could not recover jumptable at 0x02e65800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(7,param_1);
  return;
}


