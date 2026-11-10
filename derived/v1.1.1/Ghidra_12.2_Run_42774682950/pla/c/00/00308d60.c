/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00308d60; name: FUN_00308d60
 */


uint16_t FUN_00308d60(long param_1)

{
  uint16_t uVar1;
  int iVar2;
  
  if ((*(char *)(param_1 + 1) == '\x1c') || (*(char *)(param_1 + 1) == '\x02')) {
    uVar1 = ntohs(*(uint16_t *)(param_1 + 2));
    return uVar1;
  }
  iVar2 = FUN_002fe910(param_1);
  if (iVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/sockaddr_utils.cc",0x10d,2,
                 "Unknown socket family %d in grpc_sockaddr_get_port",*(undefined1 *)(param_1 + 1));
    return 0;
  }
  return 1;
}


