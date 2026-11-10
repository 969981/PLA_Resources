/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d3ef4; name: FUN_003d3ef4
 */


uint FUN_003d3ef4(undefined8 *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (PTR_DAT_04374048[0x10] == '\0') {
    return uVar1;
  }
  if (4 < uVar1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",0x31,2
                 ,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/connectivity_state.cc",0xae,1,
               "ConnectivityStateTracker %s[%p]: get current state: %s",*param_1,param_1,
               (&PTR_DAT_04156c80)[(int)uVar1]);
  return uVar1;
}


