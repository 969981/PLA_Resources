/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e06794; name: FUN_02e06794
 */


void FUN_02e06794(long *param_1,long *param_2)

{
  if (*param_1 != 0) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1);
    *param_1 = 0;
  }
  return;
}


