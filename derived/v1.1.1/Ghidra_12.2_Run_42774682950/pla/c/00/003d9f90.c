/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d9f90; name: FUN_003d9f90
 */


undefined8 FUN_003d9f90(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = 0;
  switch((uint)param_1 & 3) {
  case 0:
    goto switchD_003d9fb4_caseD_0;
  case 1:
    lVar2 = FUN_003db7f0(0);
    if (lVar2 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x137,2
                   ,"assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)PTR_DAT_043740b0 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x138,2
                   ,"assertion failed: %s","grpc_core::g_static_mdelem_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    return *(undefined8 *)
            (PTR_DAT_043740b8 +
            ((long)((param_1 & 0xfffffffffffffffc) - *(long *)PTR_DAT_043740b0) >> 4) *
            0x6666666666666668);
  case 2:
    if (*(long *)((param_1 & 0xfffffffffffffffc) + 0x70) != param_2) {
      return 0;
    }
    break;
  case 3:
    if (*(long *)((param_1 & 0xfffffffffffffffc) + 0x70) != param_2) {
      return 0;
    }
  }
  uVar1 = *(undefined8 *)((param_1 & 0xfffffffffffffffc) + 0x78);
switchD_003d9fb4_caseD_0:
  return uVar1;
}


