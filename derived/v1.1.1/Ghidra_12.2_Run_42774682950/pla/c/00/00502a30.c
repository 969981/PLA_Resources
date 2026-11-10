/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00502a30; name: FUN_00502a30
 */


undefined8 FUN_00502a30(long param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  char *__s;
  undefined8 uVar5;
  void *__ptr;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [32];
  char *local_a8;
  size_t local_a0;
  long *local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  if (*(ulong **)(param_1 + 0x30) != (ulong *)0x0) {
    if (*(long *)(param_1 + 0x58) == 0) {
      uVar10 = **(ulong **)(param_1 + 0x30);
      lVar4 = FUN_003db7f0();
      if (lVar4 != -0x35010ff23f0011ef) goto LAB_00502e18;
      if (*(long *)PTR_DAT_04373ff0 == 0) goto LAB_00502e40;
      uVar7 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + 0x38);
      if (((uVar10 != uVar7) &&
          (*(long *)((uVar10 & 0xfffffffffffffffc) + 0x20) !=
           *(long *)((uVar7 & 0xfffffffffffffffc) + 0x20))) && (iVar3 = FUN_002f3c80(), iVar3 != 0))
      {
        __s = (char *)FUN_00304ac0((**(ulong **)(param_1 + 0x30) & 0xfffffffffffffffc) + 0x20,2);
        local_78 = (long *)0x38e66f0;
        uStack_70 = 0x23;
        local_a0 = 0;
        local_a8 = __s;
        if ((__s != (char *)0x0) && (local_a0 = strlen(__s), (long)local_a0 < 0)) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        FUN_002eced0(&local_48,&local_78,&local_a8);
                    /* try { // try from 00502b08 to 00502b33 has its CatchHandler @ 00502ef8 */
        FUN_002f2c60(&local_78,"Received http2 :status header with non-200 OK status");
        uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/http/client/http_client_filter.cc"
                             ,0x82,&local_78,0,0);
                    /* try { // try from 00502b38 to 00502b73 has its CatchHandler @ 00502f08 */
        FUN_002f2ff0(&local_a8,__s);
        uVar5 = FUN_002f1340(uVar5,0xb,&local_a8);
        iVar3 = atoi(__s);
        iVar3 = FUN_003d8060(iVar3);
        uVar5 = FUN_002f0d20(uVar5,3,(long)iVar3);
        local_d0 = local_38;
        uStack_d8 = uStack_40;
        local_e0 = local_48;
        local_48 = 0;
        uStack_40 = 0;
        local_38 = 0;
                    /* try { // try from 00502b90 to 00502bab has its CatchHandler @ 00502ec0 */
        FUN_002f3230(auStack_c8,&local_e0);
        uVar5 = FUN_002f1340(uVar5,5,auStack_c8);
        if ((local_e0 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_d0);
        }
                    /* try { // try from 00502bc8 to 00502bcf has its CatchHandler @ 00502eb0 */
        free(__s);
        if ((local_48 & 1) == 0) {
          return uVar5;
        }
        FUN_002e2ea0(PTR_LAB_04373088,local_38);
        return uVar5;
      }
    }
    FUN_003df5e0(param_1,2);
  }
  if (*(ulong **)(param_1 + 0x50) == (ulong *)0x0) {
LAB_00502cc8:
    puVar8 = *(ulong **)(param_1 + 0x90);
  }
  else {
    FUN_003ec710(&local_78,(**(ulong **)(param_1 + 0x50) & 0xfffffffffffffffc) + 0x20);
    uStack_f8 = uStack_70;
    local_100 = local_78;
    uStack_e8 = uStack_60;
    uStack_f0 = uStack_68;
    uVar10 = **(ulong **)(param_1 + 0x50) & 0xfffffffffffffffc;
    uStack_118 = *(undefined8 *)(uVar10 + 0x28);
    local_120 = *(undefined8 *)(uVar10 + 0x20);
    uStack_108 = *(undefined8 *)(uVar10 + 0x38);
    uStack_110 = *(undefined8 *)(uVar10 + 0x30);
    iVar3 = FUN_002f3dd0(&local_100,&local_120);
    if (iVar3 == 0) {
      FUN_003df950(*(undefined8 *)(param_1 + 0x50),&local_78);
      goto LAB_00502cc8;
    }
    if ((local_78 == (long *)0x0) || (plVar6 = (long *)*local_78, plVar6 == (long *)0x0))
    goto LAB_00502cc8;
    plVar9 = plVar6 + 1;
    lVar4 = *plVar6;
    do {
      lVar11 = *plVar9;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar2) {
        *plVar9 = lVar11 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar6,lVar11);
    }
    if (lVar11 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar11 != 1) goto LAB_00502cc8;
    (*(code *)local_78[3])(local_78[4]);
    puVar8 = *(ulong **)(param_1 + 0x90);
  }
  if (puVar8 == (ulong *)0x0) {
    return 0;
  }
  uVar10 = *puVar8;
  lVar4 = FUN_003db7f0();
  if (lVar4 != -0x35010ff23f0011ef) {
LAB_00502e18:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13d,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)PTR_DAT_04373ff0 == 0) {
LAB_00502e40:
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x13e,2,
                 "assertion failed: %s","grpc_core::g_static_mdelem_manifested != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = *(ulong *)(*(long *)PTR_DAT_04373ff0 + 0x220);
  if (((uVar10 == uVar7) ||
      (*(long *)((uVar10 & 0xfffffffffffffffc) + 0x20) ==
       *(long *)((uVar7 & 0xfffffffffffffffc) + 0x20))) || (iVar3 = FUN_002f3c80(), iVar3 == 0))
  goto LAB_00502df0;
  uVar10 = **(ulong **)(param_1 + 0x90) & 0xfffffffffffffffc;
  uStack_138 = *(undefined8 *)(uVar10 + 0x28);
  local_140 = *(undefined8 *)(uVar10 + 0x20);
  uStack_128 = *(undefined8 *)(uVar10 + 0x38);
  uStack_130 = *(undefined8 *)(uVar10 + 0x30);
  iVar3 = FUN_002f3f00(&local_140,"application/grpc",0x10);
  uVar10 = **(ulong **)(param_1 + 0x90) & 0xfffffffffffffffc;
  if (iVar3 != 0) {
    if (*(long *)(uVar10 + 0x20) == 0) {
      cVar1 = *(char *)(uVar10 + 0x39);
    }
    else {
      cVar1 = *(char *)(*(long *)(uVar10 + 0x30) + 0x10);
    }
    if (cVar1 == '+') goto LAB_00502df0;
    if (*(long *)(uVar10 + 0x20) == 0) {
      cVar1 = *(char *)(uVar10 + 0x39);
    }
    else {
      cVar1 = *(char *)(*(long *)(uVar10 + 0x30) + 0x10);
    }
    if (cVar1 == ';') goto LAB_00502df0;
  }
  __ptr = (void *)FUN_00304ac0(uVar10 + 0x20,2);
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/http/client/http_client_filter.cc"
               ,0xaf,1,"Unexpected content-type \'%s\'",__ptr);
  free(__ptr);
LAB_00502df0:
  FUN_003df5e0(param_1,0xe);
  return 0;
}


