/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003f1790; name: FUN_003f1790
 */


undefined8 FUN_003f1790(int param_1)

{
  long lVar1;
  
  if (param_1 == 1) {
    lVar1 = FUN_003db7f0();
    if (lVar1 != -0x35010ff23f0011ef) goto LAB_003f1824;
    if (*(long *)PTR_DAT_04373ff0 != 0) {
      return *(undefined8 *)(*(long *)PTR_DAT_04373ff0 + 0x248);
    }
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    lVar1 = FUN_003db7f0();
    if (lVar1 != -0x35010ff23f0011ef) {
LAB_003f1824:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13d,2
                   ,"assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)PTR_DAT_04373ff0 != 0) {
      return *(undefined8 *)(*(long *)PTR_DAT_04373ff0 + 0x240);
    }
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13e,2,
               "assertion failed: %s","grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
  abort();
}


