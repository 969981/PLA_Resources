/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e75f40; name: FUN_02e75f40
 */


void FUN_02e75f40(MutexType *param_1)

{
  if (param_1 == (MutexType *)0x0) {
    return;
  }
  nn::os::FinalizeMutex(param_1 + 0x2d8);
  nn::os::FinalizeMutex(param_1 + 0x2a0);
  nn::os::FinalizeMutex(param_1 + 0x268);
  nn::os::FinalizeMutex(param_1 + 0x230);
  nn::os::FinalizeMutex(param_1 + 0x1f8);
  nn::os::FinalizeMutex(param_1 + 0x1c0);
  nn::os::FinalizeMutex(param_1 + 0x188);
  nn::os::FinalizeMutex(param_1 + 0x150);
  nn::os::FinalizeMutex(param_1 + 0x118);
  nn::os::FinalizeMutex(param_1 + 0xe0);
  nn::os::FinalizeMutex(param_1 + 0xa8);
  nn::os::FinalizeMutex(param_1 + 0x70);
  nn::os::FinalizeMutex(param_1 + 0x38);
  nn::os::FinalizeMutex(param_1);
  FUN_02f59e60(0x10,param_1);
  return;
}


