/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052ecb0; name: FUN_0052ecb0
 */


long FUN_0052ecb0(long param_1,long param_2)

{
  int iVar1;
  
  if ((*(char **)(param_2 + 8) ==
       "ZZN9grpc_core12_GLOBAL__N_18CallData20PickSubchannelLockedEP17grpc_call_elementPP10grpc_errorENK3$_9clEPvS5_EUlvE_"
      ) || (iVar1 = strcmp(*(char **)(param_2 + 8),
                           "ZZN9grpc_core12_GLOBAL__N_18CallData20PickSubchannelLockedEP17grpc_call_elementPP10grpc_errorENK3$_9clEPvS5_EUlvE_"
                          ), iVar1 == 0)) {
    return param_1 + 8;
  }
  return 0;
}


