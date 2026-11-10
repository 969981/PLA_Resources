/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d2120; name: FUN_003d2120
 */


undefined ** FUN_003d2120(int *param_1)

{
  if (1 < *param_1 - 1U) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue_factory.cc",
                 0x31,2,"assertion failed: %s",
                 "attributes->version >= 1 && attributes->version <= GRPC_CQ_CURRENT_VERSION");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return &PTR_s_Default_Factory_04156b08;
}


