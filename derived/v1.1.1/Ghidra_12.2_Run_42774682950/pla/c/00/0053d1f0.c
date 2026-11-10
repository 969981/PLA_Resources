/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053d1f0; name: FUN_0053d1f0
 */


void FUN_0053d1f0(long param_1)

{
  long *plVar1;
  void *__dest;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  size_t sVar8;
  void *__src;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *local_248;
  long lStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  long local_200;
  long lStack_1f8;
  undefined8 local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long local_1c0;
  undefined8 uStack_1b8;
  void *pvStack_1b0;
  undefined8 uStack_1a8;
  char *local_1a0;
  undefined4 local_198;
  long local_78;
  undefined8 uStack_70;
  void *local_68;
  undefined8 uStack_60;
  size_t local_58;
  
  lVar12 = *(long *)(param_1 + 8);
  lVar10 = *(long *)(lVar12 + 0x20);
  if (lVar10 != 0) {
    plVar1 = (long *)(lVar10 + 0x10);
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar11 = *(long *)(lVar10 + 8);
    if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar11 + 8),(long *)(lVar10 + 8),lVar9,
                   lVar9 + 1);
    }
  }
  puVar14 = *(undefined8 **)(lVar12 + 0x20);
                    /* try { // try from 0053d268 to 0053d2a3 has its CatchHandler @ 0053da9c */
  lVar10 = FUN_003db7f0();
  puVar4 = PTR_DAT_04373fe0;
  if (lVar10 != -0x35010ff23f0011ef) {
                    /* try { // try from 0053d818 to 0053d867 has its CatchHandler @ 0053da9c */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = *(long *)PTR_DAT_04373fe0;
  if (lVar10 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uStack_1d8 = *(undefined8 *)(lVar10 + 0x488);
  local_1e0 = *(undefined8 *)(lVar10 + 0x480);
  uStack_1c8 = *(undefined8 *)(lVar10 + 0x498);
  uStack_1d0 = *(undefined8 *)(lVar10 + 0x490);
  local_218 = FUN_002eee30();
  uStack_208 = *(undefined8 *)(param_1 + 0x20);
  lStack_240 = param_1 + 0x10;
  lVar10 = param_1 + 0x28;
  local_1f0 = 0;
  local_1e8 = 0;
  local_210 = 0x7fffffffffffffff;
  uStack_220 = uStack_1c8;
  local_228 = uStack_1d0;
  uStack_230 = uStack_1d8;
  local_238 = local_1e0;
                    /* try { // try from 0053d2d8 to 0053d2e7 has its CatchHandler @ 0053d9c8 */
  local_248 = puVar14;
  local_200 = param_1 + 0x88;
  lStack_1f8 = lVar10;
  FUN_00535de0(&local_1a0,&local_248,&local_1e8);
  pcVar15 = local_1a0;
  puVar14 = local_248;
  local_1a0 = (char *)0x0;
  *(char **)(param_1 + 200) = pcVar15;
  if (local_248 != (undefined8 *)0x0) {
    lVar12 = local_248[1];
    plVar1 = local_248 + 2;
    do {
      lVar9 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 0053d328 to 0053d347 has its CatchHandler @ 0053d988 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),local_248 + 1,lVar9);
    }
    if (lVar9 < 1) {
                    /* try { // try from 0053d868 to 0053d88f has its CatchHandler @ 0053d988 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar9 == 1) {
      (**(code **)*puVar14)(puVar14);
      FUN_002e2ea0(PTR_LAB_04373088,puVar14);
    }
  }
  *(long *)(param_1 + 0xa40) = param_1;
  puVar5 = PTR_LAB_04374c00;
  *(undefined8 *)(param_1 + 0xa68) = 0;
  *(undefined4 *)(param_1 + 0xa70) = 0;
  *(char **)(param_1 + 0xa58) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
  ;
  *(undefined **)(param_1 + 0xa38) = puVar5;
  *(undefined8 *)(param_1 + 0xa48) = 0;
  *(undefined2 *)(param_1 + 0xa50) = 0;
  *(undefined4 *)(param_1 + 0xa60) = 0x124;
                    /* try { // try from 0053d394 to 0053d3f7 has its CatchHandler @ 0053db54 */
  FUN_00536150(*(undefined8 *)(param_1 + 200),param_1 + 0xa30);
  if (local_1e8 == 0) {
    *(long *)(param_1 + 0x160) = param_1 + 0x88;
    *(long *)(param_1 + 0x170) = param_1 + 0xd0;
    local_1a0 = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    local_198 = 0x134;
                    /* try { // try from 0053d418 to 0053d42b has its CatchHandler @ 0053d9c4 */
    FUN_005362b0(&local_78,*(undefined8 *)(param_1 + 200),&local_1a0,"on_complete");
    *(long *)(param_1 + 0x2b0) = param_1;
    puVar5 = PTR_LAB_04374c08;
    *(undefined2 *)(param_1 + 0x2c0) = 0;
    lVar12 = param_1 + 0x2e8;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined **)(param_1 + 0x2a8) = puVar5;
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(char **)(param_1 + 0x2c8) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    *(long *)(param_1 + 0x168) = param_1 + 0x2a0;
    *(undefined4 *)(param_1 + 0x2d0) = 0x136;
                    /* try { // try from 0053d464 to 0053d4f3 has its CatchHandler @ 0053db54 */
    FUN_003de320(lVar12);
    lVar9 = FUN_003db7f0();
    if (lVar9 != -0x35010ff23f0011ef) {
                    /* try { // try from 0053d890 to 0053d97f has its CatchHandler @ 0053db54 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = *(long *)puVar4;
    if (lVar9 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                   "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar11 = FUN_003db7f0();
    if (lVar11 != -0x35010ff23f0011ef) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                   "assertion failed: %s",
                   "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar11 = *(long *)puVar4;
    if (lVar11 == 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                   "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = FUN_003d9680(lVar9,lVar11 + 0x480);
    if (uVar7 < 4) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata_batch.h",0x7e,2,
                   "assertion failed: %s",
                   "!(((grpc_mdelem_data*)((elem_to_add).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(ulong *)(param_1 + 0x3d0) = uVar7;
    local_1e8 = FUN_003de570(lVar12,(ulong *)(param_1 + 0x3d0),0);
    if (local_1e8 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                   ,0x13f,2,"assertion failed: %s","error == GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 1;
    *(long *)(param_1 + 0xd0) = lVar12;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    pcVar15 = *(char **)(*(long *)(param_1 + 8) + 0x18);
    lVar12 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 0053d4f8 to 0053d507 has its CatchHandler @ 0053d9b8 */
    puVar14 = (undefined8 *)FUN_0053ee00(PTR_DAT_04374c18,lVar12);
    sVar8 = strlen(pcVar15);
    *puVar14 = pcVar15;
    puVar14[1] = sVar8;
                    /* try { // try from 0053d518 to 0053d52f has its CatchHandler @ 0053d9ac */
    __src = (void *)FUN_00542580(puVar14,PTR_DAT_04374c18,lVar12,&local_58);
                    /* try { // try from 0053d538 to 0053d543 has its CatchHandler @ 0053d9a0 */
    FUN_002f27f0(&local_78,local_58);
    __dest = (void *)((long)&uStack_70 + 1);
    if (local_78 != 0) {
      __dest = local_68;
    }
    memcpy(__dest,__src,local_58);
                    /* try { // try from 0053d564 to 0053d58f has its CatchHandler @ 0053da84 */
    FUN_00305000(&local_1a0);
    uStack_1b8 = uStack_70;
    local_1c0 = local_78;
    uStack_1a8 = uStack_60;
    pvStack_1b0 = local_68;
    FUN_003052c0(&local_1a0,&local_1c0);
                    /* try { // try from 0053d594 to 0053d5a3 has its CatchHandler @ 0053d994 */
    FUN_004fefe4(param_1 + 0x3f0,&local_1a0,0);
                    /* try { // try from 0053d5a4 to 0053d5ab has its CatchHandler @ 0053da84 */
    FUN_00305020(&local_1a0);
    if (lVar12 != 0) {
                    /* try { // try from 0053d5b0 to 0053d5b7 has its CatchHandler @ 0053d984 */
      FUN_0053f5f0(lVar12);
    }
    puVar14 = *(undefined8 **)(param_1 + 0xf8);
    *(long *)(param_1 + 0xf8) = param_1 + 0x3f0;
    if (puVar14 != (undefined8 *)0x0) {
                    /* try { // try from 0053d5cc to 0053d5cf has its CatchHandler @ 0053d980 */
      (**(code **)*puVar14)();
    }
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 4;
                    /* try { // try from 0053d5e0 to 0053d603 has its CatchHandler @ 0053db54 */
    FUN_003de320(param_1 + 0x530);
    *(long *)(param_1 + 0xe8) = param_1 + 0x530;
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 2;
    FUN_003de320(param_1 + 0x618);
    *(long *)(param_1 + 0x108) = param_1 + 0x618;
    *(undefined8 *)(param_1 + 0x110) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    local_1a0 = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    local_198 = 0x156;
                    /* try { // try from 0053d61c to 0053d62f has its CatchHandler @ 0053d990 */
    FUN_005362b0(&local_78,*(undefined8 *)(param_1 + 200),&local_1a0,"recv_initial_metadata_ready");
    *(long *)(param_1 + 0x710) = param_1;
    puVar4 = PTR_LAB_04374c20;
    *(long *)(param_1 + 0x118) = param_1 + 0x700;
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined2 *)(param_1 + 0x720) = 0;
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 8;
    *(undefined **)(param_1 + 0x708) = puVar4;
    *(undefined4 *)(param_1 + 0x740) = 0;
    *(undefined4 *)(param_1 + 0x730) = 0x159;
    *(long *)(param_1 + 0x130) = param_1 + 0x748;
    *(undefined8 *)(param_1 + 0x738) = 0;
    *(char **)(param_1 + 0x728) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    local_1a0 = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    local_198 = 0x15e;
                    /* try { // try from 0053d688 to 0053d69b has its CatchHandler @ 0053d98c */
    FUN_005362b0(&local_78,*(undefined8 *)(param_1 + 200),&local_1a0,"recv_message_ready");
    *(long *)(param_1 + 0x760) = param_1;
    puVar4 = PTR_LAB_04374c28;
    *(undefined8 *)(param_1 + 0x768) = 0;
    *(undefined8 *)(param_1 + 0x788) = 0;
    *(char **)(param_1 + 0x778) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    *(undefined2 *)(param_1 + 0x770) = 0;
    *(long *)(param_1 + 0x138) = param_1 + 0x750;
    *(undefined **)(param_1 + 0x758) = puVar4;
    *(undefined4 *)(param_1 + 0x780) = 0x160;
    *(byte *)(param_1 + 0x178) = *(byte *)(param_1 + 0x178) | 0x10;
    *(undefined4 *)(param_1 + 0x790) = 0;
    *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 200);
    puVar4 = PTR_LAB_04374c30;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined **)(param_1 + 400) = puVar4;
    *(long *)(param_1 + 0x198) = param_1 + 0x168;
    *(undefined2 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    *(char **)(param_1 + 0x1b0) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    *(undefined4 *)(param_1 + 0x1b8) = 0x184;
                    /* try { // try from 0053d714 to 0053d7d7 has its CatchHandler @ 0053db54 */
    FUN_003d6e50(lVar10,param_1 + 0x188,0,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x186,"start_subchannel_batch");
    *(long *)(param_1 + 0x240) = param_1 + 0xd0;
    FUN_003de320(param_1 + 0x8c8);
    *(long *)(param_1 + 0x140) = param_1 + 0x8c8;
    *(long *)(param_1 + 0x148) = param_1 + 0x9b0;
    puVar5 = PTR_LAB_04374c38;
    *(long *)(param_1 + 0x9f0) = param_1;
    *(undefined2 *)(param_1 + 0xa00) = 0;
    *(undefined **)(param_1 + 0x9e8) = puVar5;
    *(undefined4 *)(param_1 + 0xa10) = 0x171;
    *(byte *)(param_1 + 0x248) = *(byte *)(param_1 + 0x248) | 0x20;
    *(undefined8 *)(param_1 + 0x9f8) = 0;
    *(undefined8 *)(param_1 + 0xa18) = 0;
    *(undefined4 *)(param_1 + 0xa20) = 0;
    *(char **)(param_1 + 0xa08) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    *(long *)(param_1 + 0x150) = param_1 + 0x9e0;
    *(undefined **)(param_1 + 0x260) = puVar4;
    *(long *)(param_1 + 0x268) = param_1 + 0x238;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined1 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined4 *)(param_1 + 0x298) = 0;
    *(undefined8 *)(param_1 + 0x250) = *(undefined8 *)(param_1 + 200);
    *(undefined1 *)(param_1 + 0x279) = 0;
    *(char **)(param_1 + 0x280) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    *(undefined4 *)(param_1 + 0x288) = 0x184;
    FUN_003d6e50(lVar10,param_1 + 600,0,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x186,"start_subchannel_batch");
  }
  else {
    uVar13 = *(undefined8 *)(param_1 + 8);
    uVar6 = FUN_002f1480();
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x128,2,
                 "HealthCheckClient %p CallState %p: error creating health checking call on subchannel (%s); will retry"
                 ,uVar13,param_1,uVar6);
    if (4 < local_1e8) {
      FUN_002f0430(local_1e8,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                   ,300);
    }
    FUN_0053e100(param_1,1);
  }
  return;
}


