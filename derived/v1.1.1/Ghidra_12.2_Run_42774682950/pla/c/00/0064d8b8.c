/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064d8b8; name: FUN_0064d8b8
 */


void FUN_0064d8b8(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_04375840 + 0x10;
  FUN_0064d90c(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


