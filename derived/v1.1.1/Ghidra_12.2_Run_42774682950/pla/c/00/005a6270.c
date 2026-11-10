/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6270; name: FUN_005a6270
 */


void FUN_005a6270(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined1 local_38;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = *(long *)(lVar1 + 0x20) - *(long *)(param_1 + 8);
  if (*(ulong *)(param_1 + 0x30) < uVar3) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x139,2,"assertion failed: %s","frame_size <= st->max_frame_size");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(ulong *)(param_1 + 0x30) < uVar3 + param_2) {
    FUN_005a6140(param_1,0);
    local_40 = 0;
    local_38 = 9;
    uVar2 = FUN_00305230(*(undefined8 *)(param_1 + 0x20),&local_40);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar1 + 0x20);
  }
  *(long *)(*(long *)(param_1 + 0x28) + 0x10) =
       *(long *)(*(long *)(param_1 + 0x28) + 0x10) + param_2;
  FUN_00305170(lVar1,param_2);
  return;
}


