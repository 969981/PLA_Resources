/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00590f90; name: FUN_00590f90
 */


undefined8 FUN_00590f90(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (((param_1 == (undefined8 *)0x0) || ((undefined8 *)*param_1 == (undefined8 *)0x0)) ||
     (UNRECOVERED_JUMPTABLE = *(code **)*param_1, UNRECOVERED_JUMPTABLE == (code *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x365,2,"client or client->vtable has not been initialized properly");
    return 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00590fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}


