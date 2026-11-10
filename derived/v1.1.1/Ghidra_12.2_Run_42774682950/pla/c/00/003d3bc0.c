/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d3bc0; name: FUN_003d3bc0
 */


void FUN_003d3bc0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = param_2;
  if (PTR_DAT_04374048[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",0x8d,1
                 ,"ConnectivityStateTracker %s[%p]: remove watcher %p",*param_1,param_1,param_2);
  }
  FUN_003d46f4(param_1 + 2,&local_18);
  return;
}


