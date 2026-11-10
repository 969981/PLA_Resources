/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308aa0; name: FUN_00308aa0
 */


undefined8 FUN_00308aa0(long param_1,uint param_2)

{
  uint16_t uVar1;
  
  if (*(char *)(param_1 + 1) == '\x1c') {
    if (0xffff < param_2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x11e,2,
                   "assertion failed: %s","port >= 0 && port < 65536");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (*(char *)(param_1 + 1) != '\x02') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x123,2,
                   "Unknown socket family %d in grpc_sockaddr_set_port");
      return 0;
    }
    if (0xffff < param_2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x119,2,
                   "assertion failed: %s","port >= 0 && port < 65536");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  uVar1 = htons((uint16_t)param_2);
  *(uint16_t *)(param_1 + 2) = uVar1;
  return 1;
}


