/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc28c0; name: FUN_02cc28c0
 */


void FUN_02cc28c0(int *param_1)

{
  int local_40 [4];
  ErrorResultVariant aEStack_30 [16];
  
  if (*param_1 != 0) {
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30);
    FUN_007ee738(local_40,param_1,aEStack_30);
    if (local_40[0] == 0) {
      nn::err::ShowError(aEStack_30);
    }
  }
  return;
}


