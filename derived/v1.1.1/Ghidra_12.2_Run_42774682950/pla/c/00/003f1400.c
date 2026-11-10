/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1400; name: FUN_003f1400
 */


undefined8 FUN_003f1400(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_003db7f0();
  puVar1 = PTR_DAT_04373fe0;
  if (lVar3 != -0x35010ff23f0011ef) {
LAB_003f1500:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)PTR_DAT_04373fe0;
  if (lVar3 != 0) {
    if (*param_1 == *(long *)(lVar3 + 0xc40)) {
      return 0;
    }
    uVar4 = FUN_002f3c80(param_1,lVar3 + 0xc40);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    lVar3 = FUN_003db7f0();
    if (lVar3 != -0x35010ff23f0011ef) goto LAB_003f1500;
    lVar3 = *(long *)puVar1;
    if (lVar3 != 0) {
      if ((*param_1 == *(long *)(lVar3 + 0x4c0)) ||
         (iVar2 = FUN_002f3c80(param_1,lVar3 + 0x4c0), iVar2 == 0)) {
        return 1;
      }
      lVar3 = FUN_003db7f0();
      if (lVar3 != -0x35010ff23f0011ef) goto LAB_003f1500;
      lVar3 = *(long *)puVar1;
      if (lVar3 != 0) {
        if ((*param_1 == *(long *)(lVar3 + 0x4e0)) ||
           (iVar2 = FUN_002f3c80(param_1,lVar3 + 0x4e0), iVar2 == 0)) {
          return 2;
        }
        return 3;
      }
    }
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
               "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


