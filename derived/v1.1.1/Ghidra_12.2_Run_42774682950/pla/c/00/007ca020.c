/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ca020; name: FUN_007ca020
 */


long FUN_007ca020(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(char **)(param_2 + 8) == PTR_s_ZN9grpc_impl8internal24ClientCal_04377220) ||
     (iVar1 = strcmp(*(char **)(param_2 + 8),PTR_s_ZN9grpc_impl8internal24ClientCal_04377220),
     iVar1 == 0)) {
    return param_1 + 8;
  }
  return 0;
}


