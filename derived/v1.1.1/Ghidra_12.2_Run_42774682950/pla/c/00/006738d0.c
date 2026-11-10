/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006738d0; name: FUN_006738d0
 */


void FUN_006738d0(long param_1)

{
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  std::__shared_weak_count::__release_weak();
  return;
}


