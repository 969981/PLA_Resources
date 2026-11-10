/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a2bf0; name: FUN_005a2bf0
 */


undefined8 FUN_005a2bf0(long *param_1,uint param_2,uint *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  
  lVar3 = FUN_003db7f0();
  puVar1 = PTR_DAT_04373fe0;
  if (lVar3 != -0x35010ff23f0011ef) {
LAB_005a2ccc:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)PTR_DAT_04373fe0;
  if (lVar3 == 0) {
LAB_005a2cf4:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*param_1 == *(long *)(lVar3 + 0xc40)) ||
     (iVar2 = FUN_002f3c80(param_1,lVar3 + 0xc40), iVar2 == 0)) {
    uVar4 = ~param_2 & 1;
  }
  else {
    lVar3 = FUN_003db7f0();
    if (lVar3 != -0x35010ff23f0011ef) goto LAB_005a2ccc;
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) goto LAB_005a2cf4;
    if ((*param_1 != *(long *)(lVar3 + 0x4e0)) &&
       (iVar2 = FUN_002f3c80(param_1,lVar3 + 0x4e0), iVar2 != 0)) {
      return 0;
    }
    uVar4 = 2;
    if ((param_2 & 1) == 0) {
      uVar4 = 3;
    }
  }
  *param_3 = uVar4;
  return 1;
}


