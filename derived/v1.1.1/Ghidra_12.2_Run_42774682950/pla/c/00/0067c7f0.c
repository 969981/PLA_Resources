/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067c7f0; name: FUN_0067c7f0
 */


void FUN_0067c7f0(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04375a10 + 0x10);
  if (param_1[2] != 0) {
    std::__shared_weak_count::__release_weak();
  }
  operator_delete(param_1);
  return;
}


