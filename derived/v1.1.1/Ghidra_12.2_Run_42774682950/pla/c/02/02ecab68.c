/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecab68; name: FUN_02ecab68
 */


void FUN_02ecab68(void)

{
  DAT_0440a5b4 = 1;
  if (DAT_0440a128 == 0) {
    return;
  }
  nn::os::SignalEvent((EventType *)&DAT_0440b270);
  return;
}


