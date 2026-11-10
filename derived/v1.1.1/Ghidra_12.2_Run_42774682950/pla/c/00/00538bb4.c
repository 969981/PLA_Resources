/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00538bb4; name: FUN_00538bb4
 */


void FUN_00538bb4(undefined8 param_1)

{
  long lVar1;
  
  FUN_002e4780(param_1,"grpc.subchannel_address");
  lVar1 = FUN_002e4de0();
  if (lVar1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x373,2,"assertion failed: %s","addr_str != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


