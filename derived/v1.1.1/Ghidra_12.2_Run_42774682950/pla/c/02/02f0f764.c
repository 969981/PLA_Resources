/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0f764; name: FUN_02f0f764
 */


void FUN_02f0f764(void)

{
  FUN_02f333b8();
  FUN_02f0f7fc();
  DAT_0440ad38 = 0;
  DAT_0440ad40 = 0;
  DAT_0440ad48 = 0;
  FUN_02f0fa44();
  if (DAT_0440adc8 != 0) {
    DAT_0440add0 = 0;
    (*DAT_0442d150)(0);
    DAT_0440adc8 = 0;
    DAT_0440add4 = 0;
  }
  if (DAT_0440adb8 != 0) {
    DAT_0440adc0 = 0;
    (*DAT_0442d150)(0);
    DAT_0440adb8 = 0;
    DAT_0440adc4 = 0;
  }
  return;
}


