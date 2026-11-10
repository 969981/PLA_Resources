/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066e8f0; name: FUN_0066e8f0
 */


void FUN_0066e8f0(__shared_weak_count *param_1)

{
  *(undefined **)param_1 = PTR_DAT_043759c0 + 0x10;
  FUN_0066d108(param_1 + 0x30);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


