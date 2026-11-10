/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f333b8; name: FUN_02f333b8
 */


void FUN_02f333b8(void)

{
  FUN_02f33f20(&DAT_0440b2d8);
  FUN_02f13854();
  if (DAT_0440b280._3_1_ == '\x01') {
    nn::os::FinalizeEvent((EventType *)&DAT_0440b270);
  }
  DAT_0440b270 = 0;
  DAT_0440b288 = 0;
  DAT_0440b290 = 0;
  DAT_0440b278 = 0;
  DAT_0440b280 = 0;
  return;
}


