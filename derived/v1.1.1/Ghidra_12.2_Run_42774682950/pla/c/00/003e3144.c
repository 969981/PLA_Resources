/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e3144; name: FUN_003e3144
 */


void FUN_003e3144(ulong *param_1,char *param_2,char *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_60;
  size_t sStack_58;
  char *local_50;
  
  lVar3 = FUN_003db7f0();
  puVar2 = PTR_DAT_04373fe0;
  if (lVar3 != -0x35010ff23f0011ef) {
LAB_003e3250:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar3 = *(long *)PTR_DAT_04373fe0;
  if (lVar3 == 0) {
LAB_003e3278:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  sStack_58 = strlen(param_2);
  puVar1 = PTR_DAT_04373888;
  local_60 = PTR_DAT_04373888;
  local_50 = param_2;
  uVar4 = FUN_002e2e80(PTR_FUN_04373078,0x80);
  if (uVar4 != 0) {
    FUN_003d86a4(uVar4,lVar3,&local_60);
  }
  *param_1 = uVar4 | 2;
  if (param_3 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_003db7f0();
    if (lVar3 != -0x35010ff23f0011ef) goto LAB_003e3250;
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) goto LAB_003e3278;
    sStack_58 = strlen(param_3);
    local_60 = puVar1;
    local_50 = param_3;
    uVar4 = FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (uVar4 != 0) {
      FUN_003d86a4(uVar4,lVar3 + 0x60,&local_60);
    }
    uVar4 = uVar4 | 2;
  }
  param_1[1] = uVar4;
  return;
}


