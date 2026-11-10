/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea48b4; name: FUN_02ea48b4
 */


void FUN_02ea48b4(void)

{
  ulong uVar1;
  
  if (DAT_0440a390 != '\x01') {
    return;
  }
  DAT_0440a390 = 0;
  nn::os::LockMutex((MutexType *)&DAT_0440a398);
  if (DAT_0440a378 != 0) {
    uVar1 = 0;
    do {
      FUN_02ea495c(*(undefined8 *)(DAT_0440a370 + uVar1 * 8));
      uVar1 = uVar1 + 1;
    } while (uVar1 < DAT_0440a378);
  }
  if (DAT_0440a1d0 != (code *)0x0) {
    (*DAT_0440a1d0)(DAT_0440a390,DAT_0440a1d8);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440a398);
  return;
}


