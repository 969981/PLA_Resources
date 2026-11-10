/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0e350; name: FUN_02f0e350
 */


void FUN_02f0e350(long param_1)

{
  *(undefined1 *)(param_1 + 0x178) = 1;
  if (DAT_0440ab98 != '\0') {
    nn::os::SignalEvent((EventType *)(param_1 + 0x150));
    nn::os::WaitThread((ThreadType *)&DAT_0440ab58);
    FUN_02e719d0(&DAT_0440ab58);
  }
  if (*(char *)(param_1 + 0x163) == '\x01') {
    nn::os::FinalizeEvent((EventType *)(param_1 + 0x150));
    return;
  }
  return;
}


