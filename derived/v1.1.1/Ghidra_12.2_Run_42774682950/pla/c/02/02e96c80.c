/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e96c80; name: FUN_02e96c80
 */


void FUN_02e96c80(void)

{
  nn::os::LockMutex((MutexType *)&DAT_0440a210);
  FUN_02f05a14(DAT_0440a138,1);
  nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  return;
}


