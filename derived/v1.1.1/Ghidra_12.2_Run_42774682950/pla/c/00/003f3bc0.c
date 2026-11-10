/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f3bc0; name: FUN_003f3bc0
 */


undefined8 FUN_003f3bc0(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0x11e,2,
                 "assertion failed: %s","sb->count > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return *(undefined8 *)(param_1 + 8);
}


