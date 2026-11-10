/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ebc50; name: FUN_002ebc50
 */


void FUN_002ebc50(long *param_1)

{
  if (*param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/alloc.cc",0x2c,2,
                 "assertion failed: %s","functions.malloc_fn != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[2] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/alloc.cc",0x2d,2,
                 "assertion failed: %s","functions.realloc_fn != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[3] == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/alloc.cc",0x2e,2,
                 "assertion failed: %s","functions.free_fn != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_1[1] == 0) {
    param_1[1] = (long)FUN_002ebd10;
  }
  PTR_FUN_04152f80 = (undefined *)param_1[1];
  PTR_malloc_04152f78 = (undefined *)*param_1;
  PTR_free_04152f90 = (undefined *)param_1[3];
  PTR_realloc_04152f88 = (undefined *)param_1[2];
  return;
}


