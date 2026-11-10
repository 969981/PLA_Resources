/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db8708; name: FUN_00db8708
 */


void FUN_00db8708(tm *param_1,time_t param_2)

{
  time_t local_18;
  
  local_18 = param_2;
  localtime_r(&local_18,param_1);
  return;
}


