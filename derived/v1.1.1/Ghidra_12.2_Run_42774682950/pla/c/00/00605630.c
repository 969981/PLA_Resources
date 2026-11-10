/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00605630; name: FUN_00605630
 */


void FUN_00605630(long param_1,undefined4 param_2,long param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined8 in_stack_ffffffffffffff20;
  undefined4 uVar15;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  undefined4 local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff20 >> 0x20);
  plVar1 = (long *)(param_1 + 0x78);
  puVar8 = (undefined8 *)FUN_003d7720(plVar1);
  puVar5 = PTR___tls_init_043738e0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  if (PTR___tls_init_043738e0 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_043737d0;
  lVar4 = tpidr_el0;
  if (*(long *)(lVar4 + 0x38) == 0) {
    if ((*PTR_DAT_043737d0 & 1) != 0) {
      FUN_002efbd4();
    }
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar4 + 0x38) = &local_78;
  }
  puVar5 = PTR___tls_init_043737c8;
  local_8c = 0;
  local_98 = 1;
  local_90 = 0xffffffff;
  local_c0 = PTR_DAT_043737c0 + 0x10;
  uStack_b0 = 0;
  local_b8 = 0;
  local_88 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 00605718 to 0060571b has its CatchHandler @ 00605a64 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_80 = *(undefined8 *)(lVar4 + 0x30);
  if ((*puVar6 & 1) != 0) {
                    /* try { // try from 006059c0 to 006059c3 has its CatchHandler @ 00605a64 */
    FUN_002efbd4();
  }
  if (puVar5 != (undefined *)0x0) {
                    /* try { // try from 00605740 to 00605743 has its CatchHandler @ 00605a64 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar4 + 0x30) = &local_c0;
                    /* try { // try from 0060575c to 0060578f has its CatchHandler @ 00605a7c */
  lVar9 = FUN_002ebd50(0x1d0);
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 006059cc to 006059ff has its CatchHandler @ 00605a7c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc"
                 ,0xe8,1,
                 "grpc_channel_watch_connectivity_state(channel=%p, last_observed_state=%d, deadline=gpr_timespec { tv_sec: %ld, tv_nsec: %d, clock_type: %d }, cq=%p, tag=%p)"
                 ,param_1,param_2,param_3,param_4 & 0xffffffff,
                 CONCAT44(uVar15,(int)(param_4 >> 0x20)),param_5,param_6);
  }
  uVar10 = FUN_003ceb00(param_5,param_6);
  if ((uVar10 & 1) == 0) {
                    /* try { // try from 00605a18 to 00605a3f has its CatchHandler @ 00605a7c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc"
                 ,0xea,2,"assertion failed: %s","grpc_cq_begin_op(cq, tag)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef6d0(lVar9);
  *(undefined2 *)(lVar9 + 0x48) = 0;
  *(undefined1 **)(lVar9 + 0x30) = &LAB_00605b00;
  *(undefined4 *)(lVar9 + 0x58) = 0xee;
  *(undefined1 **)(lVar9 + 0x78) = &LAB_00605b40;
  *(long *)(lVar9 + 0x80) = lVar9;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined4 *)(lVar9 + 0x68) = 0;
  *(char **)(lVar9 + 0x50) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc";
  *(undefined8 *)(lVar9 + 0x88) = 0;
  *(undefined2 *)(lVar9 + 0x90) = 0;
  *(undefined8 *)(lVar9 + 0xa8) = 0;
  *(undefined4 *)(lVar9 + 0xb0) = 0;
  *(char **)(lVar9 + 0x98) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc";
  *(undefined4 *)(lVar9 + 0xa0) = 0xf0;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined4 *)(lVar9 + 0x138) = param_2;
  *(undefined8 *)(lVar9 + 0x140) = param_5;
  *(long *)(lVar9 + 0x1b8) = param_1;
  *(long *)(lVar9 + 0x38) = lVar9;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined8 *)(lVar9 + 0x1c0) = 0;
  *(undefined8 *)(lVar9 + 0x1c8) = param_6;
                    /* try { // try from 006057fc to 00605933 has its CatchHandler @ 00605a80 */
  plVar11 = (long *)FUN_002ebd50(0x18);
  plVar11[2] = param_4;
  *plVar11 = lVar9;
  plVar11[1] = param_3;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined2 *)(lVar9 + 0xd8) = 0;
  *(undefined8 *)(lVar9 + 0xf0) = 0;
  *(undefined4 *)(lVar9 + 0xf8) = 0;
  *(char **)(lVar9 + 0xe0) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/channel_connectivity.cc";
  *(undefined1 **)(lVar9 + 0xc0) = &LAB_00605b80;
  *(long **)(lVar9 + 200) = plVar11;
  *(undefined4 *)(lVar9 + 0xe8) = 0xfd;
  if ((undefined *)*puVar8 != PTR_PTR_04374a38) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00605a40 to 00605a63 has its CatchHandler @ 00605a80 */
    abort();
  }
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",*(undefined8 *)(param_1 + 0xd0),plVar1,
                 *(undefined8 *)(param_1 + 0x98),"watch_channel_connectivity");
  }
  plVar11 = (long *)(param_1 + 0x80);
  do {
    lVar13 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar13 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar12 = *plVar1;
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar12 + 8),plVar1,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar13,
                 lVar13 + 1,"watch_channel_connectivity");
  }
  if (lVar13 < 1) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x89
                  ,"RefNonZero");
  }
  FUN_003ceda0(param_5);
  auVar14 = FUN_003d6b40();
  FUN_00527880(puVar8,auVar14._0_8_,auVar14._8_8_,lVar9 + 0x138,lVar9 + 0x28,lVar9 + 0xb8);
  local_c0 = PTR_DAT_043737c0 + 0x10;
  local_98 = local_98 | 1;
                    /* try { // try from 00605950 to 0060596b has its CatchHandler @ 00605a78 */
  FUN_002eff00(&local_c0);
  uVar7 = local_80;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar4 + 0x30) = uVar7;
  if ((((byte)local_98 >> 2 & 1) == 0) && ((*PTR_DAT_043737d0 & 1) != 0)) {
                    /* try { // try from 00605a04 to 00605a07 has its CatchHandler @ 00605a78 */
    FUN_002efca0();
  }
  FUN_002f693c(&local_78);
  return;
}


