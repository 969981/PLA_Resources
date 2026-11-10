/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e2f70; name: FUN_003e2f70
 */


undefined8
FUN_003e2f70(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,long param_6,undefined8 param_7,long param_8)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 local_b8;
  int *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  
  if (param_8 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x197,2,
                 "assertion failed: %s","!reserved");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar4 = FUN_003db7f0();
  puVar3 = PTR_DAT_04373fe0;
  if (lVar4 != -0x35010ff23f0011ef) {
LAB_003e30cc:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)PTR_DAT_04373fe0 == 0) {
LAB_003e30f4:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = FUN_003d92a0(*(long *)PTR_DAT_04373fe0,param_5,0);
  if (param_6 == 0) {
    iVar1 = *param_1;
    uVar6 = 0;
    uVar2 = local_58;
  }
  else {
    lVar4 = FUN_003db7f0();
    if (lVar4 != -0x35010ff23f0011ef) goto LAB_003e30cc;
    if (*(long *)puVar3 == 0) goto LAB_003e30f4;
    uVar6 = FUN_003d92a0(*(long *)puVar3 + 0x60,param_6,0);
    iVar1 = *param_1;
    uVar2 = local_58;
  }
  local_58 = uVar6;
  if (iVar1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x167,2,
                 "assertion failed: %s","channel->is_client");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_58 < 4) {
    local_70 = 1;
    local_58 = uVar2;
  }
  else {
    local_70 = 2;
  }
  puStack_78 = &local_60;
  uStack_a8 = 0;
  local_90 = 0;
  local_80 = 0;
  local_b0 = param_1;
  local_a0 = param_2;
  local_98 = param_3;
  uStack_88 = param_4;
  uStack_68 = param_7;
  local_60 = uVar5;
  lVar4 = FUN_003c8c90(&local_b0,&local_b8);
  if (lVar4 != 0) {
    FUN_002f1e00("call_create",lVar4,"external/com_google_grpc_base/src/core/lib/surface/channel.cc"
                 ,0x17c);
  }
  return local_b8;
}


