/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053e648; name: FUN_0053e648
 */


void FUN_0053e648(long param_1,ulong param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  char *pcVar10;
  long *plVar11;
  ulong uVar12;
  void *pvVar13;
  long lVar14;
  undefined8 uVar15;
  char *local_60;
  undefined4 local_58;
  undefined1 auStack_38 [8];
  
  puVar5 = *(undefined8 **)(param_1 + 0x748);
  *(undefined8 *)(param_1 + 0x748) = 0;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0053e678 to 0053e67b has its CatchHandler @ 0053eab8 */
    (**(code **)*puVar5)();
  }
  if (param_2 != 0) {
    if (4 < param_2) {
      FUN_002f0430(param_2,
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                   ,0x1c5);
    }
    pcVar10 = (char *)(param_1 + 0xa28);
    do {
      if (*pcVar10 != '\0') {
        ClearExclusiveLocal();
        goto LAB_0053e774;
      }
      cVar1 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pcVar10,0x10);
      if (bVar4) {
        *pcVar10 = '\x01';
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    local_58 = 0x1a7;
    local_60 = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    FUN_005362b0(auStack_38,*(undefined8 *)(param_1 + 200),&local_60,"cancel");
    puVar5 = (undefined8 *)FUN_002ebd50(0x58);
    puVar5[5] = 0;
    puVar3 = PTR_LAB_04374c48;
    *(undefined2 *)(puVar5 + 6) = 0;
    puVar2 = PTR_LAB_043738c8;
    *puVar5 = puVar3;
    puVar5[1] = param_1;
    puVar5[9] = 0;
    *(undefined4 *)(puVar5 + 10) = 0;
    puVar5[7] = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    *(undefined4 *)(puVar5 + 8) = 0x1aa;
    puVar5[3] = puVar2;
    puVar5[4] = puVar5;
    FUN_003d6e50(param_1 + 0x28,puVar5 + 2,0,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x1ab,"health_cancel");
LAB_0053e774:
    FUN_00305020(param_1 + 0x798);
    local_60 = 
    "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
    ;
    local_58 = 0x1c8;
    FUN_005363bc(*(undefined8 *)(param_1 + 200),&local_60,"recv_message_ready");
    return;
  }
  if (*(long *)(param_1 + 0x7b8) == 0) {
    FUN_002f2c60(&local_60,"health check response was empty");
    lVar14 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                          ,200,&local_60,0,0);
joined_r0x0053e7dc:
    uVar15 = 3;
    if (lVar14 == 0) {
      uVar15 = 3;
      pcVar10 = "backend unhealthy";
      goto LAB_0053e984;
    }
  }
  else {
    if (*(long *)(param_1 + 0x7a8) == 1) {
      plVar11 = *(long **)(param_1 + 0x7a0);
      if (*plVar11 == 0) {
        pvVar13 = (void *)0x0;
        pvVar6 = (void *)((long)plVar11 + 9);
      }
      else {
        pvVar13 = (void *)0x0;
        pvVar6 = (void *)plVar11[2];
      }
    }
    else {
                    /* try { // try from 0053e7e4 to 0053e7e7 has its CatchHandler @ 0053ea68 */
      pvVar13 = (void *)FUN_002ebd50();
      if (*(long *)(param_1 + 0x7a8) != 0) {
        plVar11 = *(long **)(param_1 + 0x7a0);
        lVar14 = 0;
        uVar9 = 0;
        lVar7 = 0;
        pvVar6 = pvVar13;
        if (*plVar11 != 0) goto LAB_0053e840;
LAB_0053e85c:
        memcpy(pvVar6,(void *)((long)plVar11 + lVar14 + 9),
               (ulong)*(byte *)((long)plVar11 + lVar14 + 8));
        plVar11 = *(long **)(param_1 + 0x7a0);
        if (*(long *)((long)plVar11 + lVar14) != 0) goto LAB_0053e814;
        do {
          uVar12 = (ulong)*(byte *)((long)plVar11 + lVar14 + 8);
          while( true ) {
            lVar7 = uVar12 + lVar7;
            uVar9 = uVar9 + 1;
            lVar14 = lVar14 + 0x20;
            if (*(ulong *)(param_1 + 0x7a8) <= uVar9) goto LAB_0053e884;
            pvVar6 = (void *)((long)pvVar13 + lVar7);
            if (*(long *)((long)plVar11 + lVar14) == 0) goto LAB_0053e85c;
LAB_0053e840:
            memcpy(pvVar6,*(void **)((long)plVar11 + lVar14 + 0x10),
                   *(size_t *)((long)plVar11 + lVar14 + 8));
            plVar11 = *(long **)(param_1 + 0x7a0);
            if (*(long *)((long)plVar11 + lVar14) == 0) break;
LAB_0053e814:
            uVar12 = *(ulong *)((long)plVar11 + lVar14 + 8);
          }
        } while( true );
      }
LAB_0053e884:
      pvVar6 = pvVar13;
    }
                    /* try { // try from 0053e894 to 0053e8a7 has its CatchHandler @ 0053ea70 */
    lVar7 = FUN_0053f520(0,0,PTR_PTR_04374c10);
    uVar15 = *(undefined8 *)(param_1 + 0x7b8);
                    /* try { // try from 0053e8b0 to 0053e8e3 has its CatchHandler @ 0053ea88 */
    piVar8 = (int *)FUN_0053ee00(PTR_DAT_04374c60,lVar7);
    if ((piVar8 == (int *)0x0) ||
       (uVar9 = FUN_005403e0(pvVar6,uVar15,piVar8,PTR_DAT_04374c60,lVar7), (uVar9 & 1) == 0)) {
                    /* try { // try from 0053e900 to 0053e92b has its CatchHandler @ 0053ea7c */
      FUN_002f2c60(&local_60,"cannot parse health check response");
      lVar14 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                            ,0xe4,&local_60,0,0);
      bVar4 = false;
    }
    else {
      bVar4 = *piVar8 == 1;
      lVar14 = 0;
    }
    if (lVar7 != 0) {
                    /* try { // try from 0053e938 to 0053e93f has its CatchHandler @ 0053ea6c */
      FUN_0053f5f0(lVar7);
    }
    if (pvVar13 != (void *)0x0) {
      FUN_002e2ea0(PTR_LAB_04373088,pvVar13);
    }
    if (!bVar4) goto joined_r0x0053e7dc;
    uVar15 = 2;
  }
  pcVar10 = (char *)FUN_002f1480(lVar14);
LAB_0053e984:
  FUN_0053cc1c(*(undefined8 *)(param_1 + 8),uVar15,pcVar10);
  *(undefined1 *)(param_1 + 0x8c0) = 1;
  FUN_00305020(param_1 + 0x798);
  *(long *)(param_1 + 0x760) = param_1;
  *(long *)(param_1 + 0x1d8) = param_1 + 0xd0;
  puVar2 = PTR_LAB_04374c28;
  *(undefined8 *)(param_1 + 0x768) = 0;
  *(char **)(param_1 + 0x778) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
  ;
  *(undefined2 *)(param_1 + 0x770) = 0;
  *(undefined8 *)(param_1 + 0x788) = 0;
  *(undefined **)(param_1 + 0x758) = puVar2;
  *(undefined4 *)(param_1 + 0x780) = 0x1db;
  *(long *)(param_1 + 0x130) = param_1 + 0x748;
  *(long *)(param_1 + 0x138) = param_1 + 0x750;
  *(byte *)(param_1 + 0x1e0) = *(byte *)(param_1 + 0x1e0) | 0x10;
  *(undefined4 *)(param_1 + 0x790) = 0;
  *(undefined8 *)(param_1 + 0x1e8) = *(undefined8 *)(param_1 + 200);
  puVar2 = PTR_LAB_04374c30;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined **)(param_1 + 0x1f8) = puVar2;
  *(long *)(param_1 + 0x200) = param_1 + 0x1d0;
  *(undefined1 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(undefined1 *)(param_1 + 0x211) = 0;
  *(char **)(param_1 + 0x218) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
  ;
  *(undefined4 *)(param_1 + 0x220) = 0x184;
  FUN_003d6e50(param_1 + 0x28,param_1 + 0x1f0,0,
               "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
               ,0x186,"start_subchannel_batch");
  return;
}


