/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ae9d0; name: FUN_005ae9d0
 */


byte FUN_005ae9d0(ulong param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar4 = FUN_003db7f0();
  puVar1 = PTR_DAT_04373fe0;
  if (lVar4 != -0x35010ff23f0011ef) {
LAB_005aeb14:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)PTR_DAT_04373fe0 != 0) {
    plVar5 = (long *)(param_1 & 0xfffffffffffffffc);
    lVar4 = *plVar5;
    if ((lVar4 == 0) || (1 < *(uint *)(lVar4 + 8))) {
LAB_005aeaec:
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0x186,2,"assertion failed: %s",
                   "grpc_slice_is_interned((((grpc_mdelem_data*)((md).payload & ~(uintptr_t)3))->key))"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar4 != *(long *)(*(long *)PTR_DAT_04373fe0 + 0xe0)) {
      return 0;
    }
    lVar4 = FUN_003db7f0();
    if (lVar4 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13d,2
                   ,"assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)PTR_DAT_04373ff0 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13e,2
                   ,"assertion failed: %s","grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar6 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + 0x1e8);
    lVar4 = FUN_003db7f0();
    if (lVar4 != -0x35010ff23f0011ef) goto LAB_005aeb14;
    if (*(long *)puVar1 != 0) {
      if ((param_1 & 1) == 0) {
        lVar4 = *plVar5;
        if ((lVar4 == 0) || (1 < *(uint *)(lVar4 + 8))) goto LAB_005aeaec;
        if (lVar4 == *(long *)(*(long *)puVar1 + 0xe0)) {
          if (plVar5[4] == *(long *)((uVar6 & 0xfffffffffffffffc) + 0x20)) {
            bVar2 = true;
          }
          else {
            iVar3 = FUN_002f3c80(plVar5 + 4);
            bVar2 = iVar3 == 0;
          }
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = uVar6 == param_1;
      }
      return bVar2 ^ 1;
    }
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
               "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


