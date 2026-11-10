/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005356a0; name: FUN_005356a0
 */


ulong FUN_005356a0(int param_1)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_58 [32];
  undefined1 auStack_38 [24];
  
  FUN_002ec790((long)param_1,auStack_38);
  lVar1 = FUN_003db7f0();
  if (lVar1 != -0x35010ff23f0011ef) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar1 = *(long *)PTR_DAT_04373fe0;
  if (lVar1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002f2ea0(auStack_58,auStack_38);
  uVar2 = FUN_002e2e80(PTR_FUN_04373078,0x80);
  if (uVar2 != 0) {
    FUN_003d86a4(uVar2,lVar1 + 0xe0,auStack_58);
  }
  return uVar2 | 2;
}


