/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f3070; name: FUN_001f3070
 */


void FUN_001f3070(char *param_1,ulong param_2)

{
  if ((long)param_2 < 1) {
    param_1[8] = '\0';
    *(undefined8 *)param_1 = s__________0388acd4._0_8_;
    return;
  }
  if ((long)param_2 < 360000) {
    FUN_001e64cc(param_1,9,"%2ld:%02ld:%02ld",param_2 / 0xe10,(param_2 % 0xe10) / 0x3c,
                 (param_2 % 0xe10) % 0x3c);
    return;
  }
  if ((long)param_2 < 86400000) {
    FUN_001e64cc(param_1,9,"%3ldd %02ldh",param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  FUN_001e64cc(param_1,9,"%7ldd");
  return;
}


