/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003da0b0; name: FUN_003da0b0
 */


long FUN_003da0b0(ulong param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  switch((uint)param_1 & 3) {
  case 0:
    (*param_2)(param_3);
    return 0;
  case 1:
    (*param_2)(param_3);
    lVar2 = FUN_003db7f0();
    if (lVar2 == -0x35010ff23f0011ef) {
      if (*(long *)PTR_DAT_043740b0 != 0) {
        return *(long *)(PTR_DAT_043740b8 +
                        ((long)((param_1 & 0xfffffffffffffffc) - *(long *)PTR_DAT_043740b0) >> 4) *
                        0x6666666666666668);
      }
LAB_003da214:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x138,2
                   ,"assertion failed: %s","grpc_core::g_static_mdelem_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    break;
  case 2:
LAB_003da16c:
    param_1 = param_1 & 0xfffffffffffffffc;
    if ((param_2 == (code *)0x0) != (param_3 == 0)) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x249,2,
                   "assertion failed: %s","(data == nullptr) == (destroy_func == nullptr)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002ef750();
    if (*(long *)(param_1 + 0x70) == 0) {
      *(long *)(param_1 + 0x78) = param_3;
      *(code **)(param_1 + 0x70) = param_2;
                    /* try { // try from 003da2dc to 003da2e3 has its CatchHandler @ 003da31c */
      FUN_002ef790(param_1 + 0x50);
      return param_3;
    }
    FUN_002ef790(param_1 + 0x50);
    if (param_2 != (code *)0x0) {
      (*param_2)(param_3);
    }
    return *(long *)(param_1 + 0x78);
  case 3:
    lVar2 = FUN_003db7f0();
    puVar1 = PTR_DAT_043740b0;
    if (lVar2 == -0x35010ff23f0011ef) {
      if (*(ulong *)PTR_DAT_043740b0 == 0) goto LAB_003da214;
      if (*(ulong *)PTR_DAT_043740b0 <= (param_1 & 0xfffffffffffffffc)) {
        lVar2 = FUN_003db7f0();
        if (lVar2 != -0x35010ff23f0011ef) break;
        if (*(long *)puVar1 == 0) goto LAB_003da214;
        if ((param_1 & 0xfffffffffffffffc) < *(long *)puVar1 + 0x1a90U) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata.cc",0x26b,2,
                       "assertion failed: %s","!is_mdelem_static(md)");
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_003da16c;
    }
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x137,2,
               "assertion failed: %s",
               "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary");
                    /* WARNING: Subroutine does not return */
  abort();
}


