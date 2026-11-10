/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003096d0; name: FUN_003096d0
 */


undefined8 FUN_003096d0(undefined4 param_1,undefined8 param_2)

{
  int *piVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [32];
  
  piVar1 = (int *)FUN_002e4780(param_2,"grpc.socket_mutator");
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 2) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc",
                   0x195,2,"assertion failed: %s","socket_mutator_arg->type == GRPC_ARG_POINTER");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)(piVar1 + 4) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc",
                   0x187,2,"assertion failed: %s","mutator");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = FUN_002e4230(*(long *)(piVar1 + 4),param_1);
    if ((uVar2 & 1) == 0) {
      FUN_002f2c60(auStack_30,"grpc_socket_mutator failed.");
      uVar3 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/socket_utils_common_posix.cc"
                           ,0x189,auStack_30,0,0);
      return uVar3;
    }
  }
  return 0;
}


