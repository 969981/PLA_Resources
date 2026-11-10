/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059bad0; name: FUN_0059bad0
 */


void FUN_0059bad0(undefined8 param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [24];
  long local_70;
  ulong uStack_68;
  int local_44;
  
  FUN_003d7cb0(param_3,*(undefined8 *)(param_2 + 0x968),&local_44,&local_70,0,0);
  if (local_44 != 0) {
    *(undefined1 *)(param_2 + 0x203) = 1;
  }
  if ((*(int *)(param_2 + 0x21c) == 0) || (*(long *)(param_2 + 0x1c0) != 0)) {
    FUN_002ec790((long)local_44,auStack_88);
    lVar2 = FUN_003db7f0();
    puVar1 = PTR_DAT_04373fe0;
    if (lVar2 != -0x35010ff23f0011ef) {
LAB_0059bc78:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = *(long *)PTR_DAT_04373fe0;
    if (lVar2 == 0) {
LAB_0059bca0:
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                   "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002f2ea0(auStack_a8,auStack_88);
    uVar3 = FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (uVar3 != 0) {
      FUN_003d86a4(uVar3,lVar2 + 0xe0,auStack_a8);
    }
    lVar2 = FUN_005b37f0(param_2 + 0x468,uVar3 | 2);
    if (lVar2 != 0) {
      FUN_002f1e00("add_status",lVar2,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x84d);
    }
    uVar3 = uStack_68 & 0xff;
    if (local_70 != 0) {
      uVar3 = uStack_68;
    }
    if (uVar3 != 0) {
      lVar2 = FUN_003db7f0();
      if (lVar2 != -0x35010ff23f0011ef) goto LAB_0059bc78;
      if (*(long *)puVar1 == 0) goto LAB_0059bca0;
      uVar4 = FUN_003d92a0(*(long *)puVar1 + 0xc0,&local_70,0);
      lVar2 = FUN_005b37f0(param_2 + 0x468,uVar4);
      if (lVar2 != 0) {
        FUN_002f1e00("add_status_message",lVar2,
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x853);
      }
    }
    *(undefined4 *)(param_2 + 0x21c) = 1;
    FUN_0059ab90(param_1,param_2);
  }
  if (4 < param_3) {
    FUN_002f0430(param_3,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x859);
  }
  return;
}


