/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f331a4; name: FUN_02f331a4
 */


void FUN_02f331a4(undefined1 *param_1)

{
  *param_1 = 1;
  if (DAT_0440b0d0 != '\0') {
    nn::os::SignalEvent((EventType *)&DAT_0440b270);
    nn::os::WaitThread((ThreadType *)&DAT_0440b090);
    FUN_02e719d0(&DAT_0440b090);
    DAT_0440b0d0 = '\0';
  }
  return;
}


