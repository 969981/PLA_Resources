/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c84c0; name: FUN_003c84c0
 */


void FUN_003c84c0(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/byte_buffer.cc",0x48,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_003c8380(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
               *(undefined4 *)(param_1 + 0x10));
  return;
}


