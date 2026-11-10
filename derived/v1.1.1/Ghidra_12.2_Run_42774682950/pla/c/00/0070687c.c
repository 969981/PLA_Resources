/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070687c; name: FUN_0070687c
 */


void FUN_0070687c(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_043764c8 + 0x10;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x60));
  FUN_00706914(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
  if (*(long *)(param_1 + 0x28) != 0) {
    std::__shared_weak_count::__release_weak();
  }
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


