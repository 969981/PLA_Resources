/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a5220; name: FUN_005a5220
 */


void FUN_005a5220(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  uVar3 = uVar1 + 1;
  *(uint *)(param_1 + 0x10) = uVar3;
  if (0xfffffffe < uVar1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x187,2,"assertion failed: %s","c->tail_remote_index > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar1 = *(uint *)(param_1 + 8);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar3 / uVar1;
  }
  uVar3 = (uint)*(ushort *)(*(long *)(param_1 + 0x20) + (ulong)(uVar3 - uVar2 * uVar1) * 2);
  if (*(uint *)(param_1 + 0x14) < uVar3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x189,2,"assertion failed: %s",
                 "c->table_size >= c->table_elem_size[c->tail_remote_index % c->cap_table_elems]");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(param_1 + 0x18) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x18a,2,"assertion failed: %s","c->table_elems > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) - uVar3 & 0xffff;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
  return;
}


