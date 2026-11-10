/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011509cc; name: FUN_011509cc
 */


void FUN_011509cc(long *param_1,long param_2,long param_3,long param_4)

{
  param_3 = param_3 - (*param_1 - param_4);
  if (0 < param_3) {
    nn::crypto::detail::Sha256Impl::Update(param_1 + 2,param_2 + (*param_1 - param_4));
    *param_1 = *param_1 + param_3;
  }
  return;
}


