/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00304a1c; name: FUN_00304a1c
 */


void FUN_00304a1c(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0xa2,2,
                 "assertion failed: %s","buf_.count == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0xa3,2,
                 "assertion failed: %s","buf_.length == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0xa4,2,
                 "assertion failed: %s","ref_.Load(MemoryOrder::RELAXED) == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


