/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003de9d0; name: FUN_003de9d0
 */


void FUN_003de9d0(undefined8 param_1,ulong *param_2,ulong param_3)

{
  if (param_3 < 4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0xcb,2,
                 "assertion failed: %s",
                 "!(((grpc_mdelem_data*)((elem_to_add).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *param_2 = param_3;
  FUN_003dea10();
  return;
}


