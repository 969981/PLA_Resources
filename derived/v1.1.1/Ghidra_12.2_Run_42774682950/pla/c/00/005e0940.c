/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e0940; name: FUN_005e0940
 */


void FUN_005e0940(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long local_158;
  long *local_150;
  undefined8 uStack_148;
  long lStack_140;
  long local_138;
  long local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x5d1,2,"assertion failed: %s","lb_channel_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x5d4,2,"assertion failed: %s","lb_calld_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar8 = (long *)(param_1 + 0x10);
  do {
    lVar9 = *plVar8;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = lVar9 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar10 = *(long *)(param_1 + 8);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar10 + 8),(long *)(param_1 + 8),lVar9,
                 lVar9 + 1);
  }
  local_158 = param_1;
  puVar6 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x208);
  puVar4 = PTR_DAT_043750e8;
  if (puVar6 == (undefined8 *)0x0) goto LAB_005e0c94;
  local_158 = 0;
  *puVar6 = &PTR_LAB_0418dff0;
  puVar6[1] = puVar4;
  puVar6[2] = 1;
  plVar8 = puVar6 + 3;
  *plVar8 = param_1;
  local_58 = 0;
  puVar6[4] = 0;
  puVar6[8] = 0;
  puVar6[0x12] = 0;
  *(undefined2 *)(puVar6 + 0x1c) = 0;
  *(undefined2 *)(puVar6 + 0x37) = 0;
  *(undefined1 *)((long)puVar6 + 0x1ba) = 0;
  puVar6[0x2e] = 0;
  puVar6[0x2f] = 0;
  if (*(char *)(param_1 + 0x50) != '\0') {
                    /* try { // try from 005e1008 to 005e107f has its CatchHandler @ 005e10f8 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x2e6,2,"assertion failed: %s","!grpclb_policy()->shutting_down_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char **)(param_1 + 0x38) == (char *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x2ea,2,"assertion failed: %s","grpclb_policy()->server_name_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (**(char **)(param_1 + 0x38) == '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x2eb,2,"assertion failed: %s","grpclb_policy()->server_name_[0] != \'\\0\'");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(puVar6 + 0xf) = 0x2ee;
  puVar6[0x14] = &LAB_005e12a0;
  puVar6[0x15] = puVar6;
  *(undefined4 *)(puVar6 + 0x19) = 0x2f0;
  puVar6[0x1e] = &LAB_005e13ec;
  puVar6[0x1f] = puVar6;
  *(undefined4 *)(puVar6 + 0x23) = 0x2f2;
  puVar6[10] = &LAB_005e1154;
  *(undefined2 *)(puVar6 + 0xd) = 0;
  puVar6[0x10] = 0;
  *(undefined4 *)(puVar6 + 0x11) = 0;
  puVar6[0xe] = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc";
  puVar6[0x16] = 0;
  *(undefined2 *)(puVar6 + 0x17) = 0;
  puVar6[0x1a] = 0;
  *(undefined4 *)(puVar6 + 0x1b) = 0;
  puVar6[0x18] = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc";
  puVar6[0x20] = 0;
  *(undefined2 *)(puVar6 + 0x21) = 0;
  puVar6[0x24] = 0;
  *(undefined4 *)(puVar6 + 0x25) = 0;
  puVar6[0x22] = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc";
  puVar6[0x3b] = 0;
  *(undefined2 *)(puVar6 + 0x3c) = 0;
  puVar6[0x3f] = 0;
  *(undefined4 *)(puVar6 + 0x40) = 0;
  puVar6[0x3d] = 
  "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc";
  puVar6[0x39] = &LAB_005e1550;
  puVar6[0x3a] = puVar6;
  *(undefined4 *)(puVar6 + 0x3e) = 0x2f4;
  puVar6[0xb] = puVar6;
  puVar6[0xc] = 0;
  if (*(int *)(param_1 + 0x78) == 0) {
    lVar9 = 0x7fffffffffffffff;
    lVar10 = param_1;
  }
  else {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 005e0afc to 005e0aff has its CatchHandler @ 005e110c */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar9 = tpidr_el0;
                    /* try { // try from 005e0b18 to 005e0b8b has its CatchHandler @ 005e110c */
    lVar9 = FUN_002f00fc(*(undefined8 *)(lVar9 + 0x30));
    lVar9 = lVar9 + *(int *)(*plVar8 + 0x78);
    lVar10 = *plVar8;
  }
  uVar15 = *(undefined8 *)(lVar10 + 0x58);
  uVar13 = *(undefined8 *)(lVar10 + 0x28);
  lVar10 = FUN_003db7f0();
  if (lVar10 != -0x35010ff23f0011ef) {
                    /* try { // try from 005e1080 to 005e10cf has its CatchHandler @ 005e110c */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,2,
                 "assertion failed: %s",
                 "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)PTR_DAT_04373fe0 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,2,
                 "assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar13 = FUN_003e2f70(uVar15,0,0xffff,uVar13,*(long *)PTR_DAT_04373fe0 + 0x440,0,lVar9,0);
  puVar6[4] = uVar13;
                    /* try { // try from 005e0b90 to 005e0ba3 has its CatchHandler @ 005e1108 */
  lVar10 = FUN_0053f520(0,0,PTR_PTR_04374c10);
  lVar9 = *(long *)(*plVar8 + 0x40);
  bVar1 = *(byte *)(lVar9 + 0x20);
  if ((bVar1 & 1) == 0) {
    if (bVar1 >> 1 != 0) goto LAB_005e0bc4;
LAB_005e0bd8:
    lVar9 = *(long *)(*plVar8 + 0x38);
  }
  else {
    if (*(long *)(lVar9 + 0x28) == 0) goto LAB_005e0bd8;
LAB_005e0bc4:
    if ((bVar1 & 1) == 0) {
      lVar9 = lVar9 + 0x21;
    }
    else {
      lVar9 = *(long *)(lVar9 + 0x30);
    }
  }
                    /* try { // try from 005e0be4 to 005e0c7f has its CatchHandler @ 005e1114 */
  FUN_005e4330(&local_150,lVar9,lVar10);
  uVar13 = FUN_003c8370(&local_150,1);
  puVar6[8] = uVar13;
  if ((local_150 != (long *)0x0) && (plVar8 = (long *)*local_150, plVar8 != (long *)0x0)) {
    plVar11 = plVar8 + 1;
    lVar9 = *plVar8;
    do {
      lVar14 = *plVar11;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar3) {
        *plVar11 = lVar14 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar8,lVar14);
    }
    if (lVar14 < 1) {
                    /* try { // try from 005e10d0 to 005e10f7 has its CatchHandler @ 005e1114 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar14 == 1) {
      (*(code *)local_150[3])(local_150[4]);
    }
  }
  FUN_004fcf20(puVar6 + 5);
  FUN_004fcf20(puVar6 + 0x26);
  if (lVar10 != 0) {
                    /* try { // try from 005e0c84 to 005e0c8b has its CatchHandler @ 005e10fc */
    FUN_0053f5f0(lVar10);
  }
  FUN_00546ca4(&local_58);
LAB_005e0c94:
  puVar7 = *(undefined8 **)(param_1 + 0x70);
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  if (puVar7 != (undefined8 *)0x0) {
                    /* try { // try from 005e0ca8 to 005e0cab has its CatchHandler @ 005e1104 */
    (**(code **)*puVar7)();
  }
  FUN_00546ca4(&local_158);
  if (puVar4[0x10] == '\0') {
    lVar9 = *(long *)(param_1 + 0x70);
    lVar10 = *(long *)(lVar9 + 0x20);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x5d7,1,"[grpclb %p] Query for backends (lb_channel: %p, lb_calld: %p)",param_1,
                 *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x70));
    lVar9 = *(long *)(param_1 + 0x70);
    lVar10 = *(long *)(lVar9 + 0x20);
  }
  if (lVar10 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x327,2,"assertion failed: %s","lb_call_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (puVar4[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x329,1,"[grpclb %p] lb_calld=%p: Starting LB call %p",
                 *(undefined8 *)(lVar9 + 0x18),lVar9);
  }
  local_138 = 0;
  lStack_140 = 0;
  uStack_c8 = 0;
  local_d0 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_150 = (long *)0xa000000000;
  uStack_148 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar10 = *(long *)(lVar9 + 0x40);
  if (lVar10 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x339,2,"assertion failed: %s","send_message_payload_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar8 = (long *)(lVar9 + 8);
  plVar11 = (long *)(lVar9 + 0x10);
  local_100 = DAT_0388a7a8;
  local_f8 = 0;
  do {
    lVar14 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar14 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar12 = *plVar8;
  local_f0 = lVar10;
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar12 + 8),plVar8,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x342,lVar14,lVar14 + 1,"on_initial_request_sent");
  }
                    /* try { // try from 005e0d8c to 005e0d97 has its CatchHandler @ 005e1150 */
  iVar5 = FUN_003cba10(*(undefined8 *)(lVar9 + 0x20),&local_150,2,lVar9 + 0x48);
  if (iVar5 != 0) {
                    /* try { // try from 005e0f90 to 005e1007 has its CatchHandler @ 005e1150 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x346,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_f0 = lVar9 + 0x90;
  local_f8 = 0;
  local_150 = DAT_0388a588;
  lStack_140 = lVar9 + 0x28;
  uStack_148 = 0;
  local_100 = DAT_0388a848;
  do {
    lVar10 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar14 = *plVar8;
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x10) != '\0')) {
                    /* try { // try from 005e0dec to 005e0e27 has its CatchHandler @ 005e1100 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar14 + 8),plVar8,
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x358,lVar10,lVar10 + 1,"on_message_received");
  }
                    /* try { // try from 005e0e30 to 005e0e73 has its CatchHandler @ 005e1150 */
  iVar5 = FUN_003cba10(*(undefined8 *)(lVar9 + 0x20),&local_150,2,lVar9 + 0x98);
  if (iVar5 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x35c,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_138 = lVar9 + 0x148;
  local_130 = lVar9 + 0x150;
  lStack_140 = lVar9 + 0x130;
  local_150 = DAT_0388a5c8;
  uStack_148 = 0;
  iVar5 = FUN_003cba10(*(undefined8 *)(lVar9 + 0x20),&local_150,1,lVar9 + 0xe8);
  if (iVar5 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/grpclb/grpclb.cc"
                 ,0x36c,2,"assertion failed: %s","GRPC_CALL_OK == call_error");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}


