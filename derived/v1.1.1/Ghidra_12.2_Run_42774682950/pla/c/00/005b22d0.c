/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b22d0; name: FUN_005b22d0
 */


void FUN_005b22d0(long param_1,void *param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_3 != 0) {
    uVar3 = (ulong)*(uint *)(param_1 + 0x30);
    uVar1 = uVar3 + param_3;
    if (*(uint *)(param_1 + 0x34) < uVar1) {
      if (uVar1 >> 0x20 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                     ,0x4ed,2,"assertion failed: %s",
                     "str->data.copied.length + length <= UINT32_MAX");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(int *)(param_1 + 0x34) = (int)uVar1;
      lVar2 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x28),uVar1 & 0xffffffff);
      uVar3 = (ulong)*(uint *)(param_1 + 0x30);
      *(long *)(param_1 + 0x28) = lVar2;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x28);
    }
    memcpy((void *)(lVar2 + uVar3),param_2,param_3);
    if (~*(uint *)(param_1 + 0x30) < param_3) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                   ,0x4f4,2,"assertion failed: %s","length <= UINT32_MAX - str->data.copied.length")
      ;
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) + (int)param_3;
  }
  return;
}


