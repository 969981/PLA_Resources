/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007068c4; name: FUN_007068c4
 */


void FUN_007068c4(long param_1)

{
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x60));
  FUN_00706914(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


