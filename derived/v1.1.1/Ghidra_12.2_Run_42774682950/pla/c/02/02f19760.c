/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f19760; name: FUN_02f19760
 */


void FUN_02f19760(long *param_1)

{
  if ((*param_1 != 0) && (*(int *)((long)param_1 + 0xc) != -1)) {
    FUN_02e968c8(DAT_0440a148);
    if (param_1[2] != 0) {
      FUN_02e8e5e0(param_1[2],0);
      return;
    }
  }
  return;
}


