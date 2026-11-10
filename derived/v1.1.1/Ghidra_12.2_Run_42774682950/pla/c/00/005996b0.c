/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005996b0; name: FUN_005996b0
 */


undefined8 FUN_005996b0(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 local_18;
  
  if (*(long *)(param_1 + 800) == 0) {
    return 0;
  }
  if ((*(long *)(param_1 + 0x28) != 0) &&
     (uVar1 = FUN_003078f0(*(long *)(param_1 + 0x28),0x3c00), (uVar1 & 1) == 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x2fa,2,"Memory exhausted, rejecting the stream.");
    FUN_005aba00(param_1,param_2,7,0);
    FUN_00598190(param_1,8);
    return 0;
  }
  local_18 = 0;
  if (*(long *)(param_1 + 0x318) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x301,2,"assertion failed: %s","t->accepting_stream == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 **)(param_1 + 0x318) = &local_18;
  (**(code **)(param_1 + 800))(*(undefined8 *)(param_1 + 0x328),param_1,param_2);
  *(undefined8 *)(param_1 + 0x318) = 0;
  return local_18;
}


