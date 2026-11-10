/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b23b0; name: FUN_005b23b0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_005b23b0(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = _DAT_03889650;
  uVar2 = *(ulong *)(param_1 + 0xb8);
  if (uVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                 ,0x32f,2,"assertion failed: %s","p->md_for_index.payload != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(ulong *)(param_1 + 0xc0) != (ulong)*(uint *)(param_1 + 0xb0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                 ,0x330,2,"assertion failed: %s",
                 "static_cast<int64_t>(p->index) == p->precomputed_md_index");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar2 < 4) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                 ,0x332,2,"assertion failed: %s",
                 "!(((grpc_mdelem_data*)((md).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined8 *)(param_1 + 0xc0) = _UNK_03889658;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  return uVar2;
}


