/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a52f0; name: FUN_005a52f0
 */


void FUN_005a52f0(uint *param_1,undefined8 *param_2,long param_3,long param_4,int *param_5,
                 long param_6)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined1 auVar12 [16];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  int local_84;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 auStack_3c [12];
  
  local_84 = *param_5;
  if (local_84 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x34d,2,"assertion failed: %s","options->stream_id != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_88 = 0;
  local_a0[0] = 1;
  auVar12 = NEON_ext(*(undefined1 (*) [16])(param_5 + 2),*(undefined1 (*) [16])(param_5 + 2),8,1);
  uStack_70 = auVar12._8_8_;
  local_78 = auVar12._0_8_;
  local_68 = *(undefined1 *)((long)param_5 + 5);
  local_67 = (undefined1)param_5[1];
  local_60 = 0;
  local_58 = 9;
  local_80 = param_6;
  uStack_90 = FUN_00305230(param_6,&local_60);
  local_98 = *(undefined8 *)(param_6 + 0x20);
  if ((char)param_1[10] == '\0') goto joined_r0x005a53e0;
  if (*param_1 < 0x1f) {
    pbVar6 = (byte *)FUN_005a6270(local_a0,1);
LAB_005a53b8:
    *pbVar6 = (byte)*param_1 | 0x20;
  }
  else {
    iVar5 = FUN_005a7a00(*param_1 - 0x1f);
    pbVar6 = (byte *)FUN_005a6270(local_a0,iVar5);
    if (iVar5 + -1 == 0) goto LAB_005a53b8;
    *pbVar6 = 0x3f;
    FUN_005a7a40(*param_1 - 0x1f,pbVar6 + 1,iVar5 + -1);
  }
  *(undefined1 *)(param_1 + 10) = 0;
joined_r0x005a53e0:
  for (; param_3 != 0; param_3 = param_3 + -1) {
    while ((uVar8 = *(ulong *)*param_2, (uVar8 & 3) == 1 &&
           (uVar10 = *(ulong *)((uVar8 & 0xfffffffffffffffc) + 0x48), uVar10 < 0x3d))) {
      FUN_005a5690((int)uVar10 + 1,local_a0);
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      if (param_3 == 0) goto LAB_005a53e4;
    }
    FUN_005a5780(param_1,uVar8,local_a0);
    param_2 = param_2 + 1;
  }
LAB_005a53e4:
  thunk_FUN_003de0a0(param_4);
  for (puVar11 = *(ulong **)(param_4 + 0x10); puVar11 != (ulong *)0x0; puVar11 = (ulong *)puVar11[1]
      ) {
    while ((uVar8 = *puVar11, (uVar8 & 3) == 1 &&
           (uVar10 = *(ulong *)((uVar8 & 0xfffffffffffffffc) + 0x48), uVar10 < 0x3d))) {
      FUN_005a5690((int)uVar10 + 1,local_a0);
      puVar11 = (ulong *)puVar11[1];
      if (puVar11 == (ulong *)0x0) goto LAB_005a53f4;
    }
    FUN_005a5780(param_1,uVar8,local_a0);
  }
LAB_005a53f4:
  lVar9 = *(long *)(param_4 + 0xe0);
  if (lVar9 != 0x7fffffffffffffff) {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar7 = tpidr_el0;
    lVar7 = FUN_002f00fc(*(undefined8 *)(lVar7 + 0x30));
    FUN_005a72c0(lVar9 - lVar7,auStack_3c);
    lVar9 = FUN_003db7f0();
    if (lVar9 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = *(long *)PTR_DAT_04373fe0;
    if (lVar9 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                   "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_002f2ea0(&local_60,auStack_3c);
    uVar8 = FUN_002e2e80(PTR_FUN_04373078,0x80);
    if (uVar8 != 0) {
      FUN_003d86a4(uVar8,lVar9 + 0x300,&local_60);
    }
    FUN_005a5780(param_1,uVar8 | 2,local_a0);
    uVar10 = uVar8 & 0xfffffffffffffffc;
    uVar2 = *(undefined4 *)(uVar10 + 0x48);
    plVar1 = (long *)(uVar10 + 0x40);
    FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x2f4);
    do {
      lVar9 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      FUN_003da320((uint)(uVar8 | 2) & 3,uVar10,uVar2,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x2f4);
    }
  }
  FUN_005a6140(local_a0,1);
  return;
}


