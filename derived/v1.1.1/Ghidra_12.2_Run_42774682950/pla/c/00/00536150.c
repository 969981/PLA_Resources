/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00536150; name: FUN_00536150
 */


void FUN_00536150(long param_1,long param_2)

{
  if (*(long *)(param_1 + 8) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0xc4,2,"assertion failed: %s","after_call_stack_destroy_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0xc5,2,"assertion failed: %s","closure != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long *)(param_1 + 8) = param_2;
  return;
}


