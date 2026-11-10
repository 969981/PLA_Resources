/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9f048; name: FUN_02e9f048
 */


void FUN_02e9f048(long param_1)

{
  nn::os::LockMutex((MutexType *)&DAT_0440a398);
  if ((*(byte *)(param_1 + 0x184) >> 6 & 1) != 0) {
    FUN_02ea49e4(param_1);
    *(byte *)(param_1 + 0x184) = *(byte *)(param_1 + 0x184) & 0xbf;
    FUN_02ea495c(param_1);
    if ((DAT_0440a378 == 0) && (DAT_0440a370 != 0)) {
      DAT_0440a378 = 0;
      (*DAT_0442d150)(0);
      DAT_0440a370 = 0;
      DAT_0440a37c = 0;
    }
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a398);
  return;
}


