/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f6000; name: FUN_002f6000
 */


void FUN_002f6000(ulong param_1)

{
  if ((param_1 & 1) == 0) {
    FUN_002f5dd0();
    return;
  }
  FUN_002ef750(&DAT_0438f878);
  if ((DAT_0438f848 & 1) == 0) {
    DAT_0438f848 = 1;
    FUN_002f60a0();
    return;
  }
  FUN_002ef790(&DAT_0438f878);
  return;
}


