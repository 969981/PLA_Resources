/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300e724; name: FUN_0300e724
 */


void FUN_0300e724(long *param_1)

{
  *param_1 = (long)&PTR_LAB_042da948;
  if (param_1[0x22] != 0 && (long)param_1 + param_1[0x22] + 0x110 != 0) {
    FUN_032d647c();
  }
  if ((param_1[0x23] != 0) && ((long)param_1 + param_1[0x23] + 0x118 != 0)) {
    FUN_032d647c();
  }
  if ((param_1[0x24] != 0) && ((long)param_1 + param_1[0x24] + 0x120 != 0)) {
    FUN_032d647c();
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


