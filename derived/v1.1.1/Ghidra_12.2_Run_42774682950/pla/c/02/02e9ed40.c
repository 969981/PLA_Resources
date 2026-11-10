/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9ed40; name: FUN_02e9ed40
 */


long FUN_02e9ed40(long param_1)

{
  if (*(char *)(param_1 + 0xb9) == '\0') {
    param_1 = DAT_0440a410;
    do {
      while (param_1 == 0) {
        FUN_02e43d1c();
        param_1 = DAT_0440a410;
        if (*(char *)(DAT_0440a410 + 0xb9) != '\0') goto LAB_02e9ed64;
      }
    } while (*(char *)(param_1 + 0xb9) == '\0');
  }
LAB_02e9ed64:
  return param_1 + 0x60;
}


