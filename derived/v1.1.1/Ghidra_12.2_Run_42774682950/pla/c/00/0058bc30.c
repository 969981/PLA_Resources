/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058bc30; name: FUN_0058bc30
 */


undefined8 FUN_0058bc30(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/credentials/alts/grpc_alts_credentials_options.cc"
                 ,0x21,2,"Invalid arguments to grpc_alts_credentials_options_copy()");
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0058bc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


