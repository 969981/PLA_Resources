/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e37c0; name: FUN_003e37c0
 */


undefined8
FUN_003e37c0(int *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 *param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  
  puVar2 = PTR___tls_init_043738e0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x1e6,1,
                 "grpc_channel_create_registered_call(channel=%p, parent_call=%p, propagation_mask=%x, completion_queue=%p, registered_call_handle=%p, deadline=gpr_timespec { tv_sec: %ld, tv_nsec: %d, clock_type: %d }, reserved=%p)"
                 ,param_1,param_2,param_3,param_4,param_5,param_6,(int)param_7,
                 (int)((ulong)param_7 >> 0x20),param_8);
    puVar2 = PTR___tls_init_043738e0;
  }
  PTR___tls_init_043738e0 = puVar2;
  if (param_8 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x1e7,2,
                 "assertion failed: %s","!reserved");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e0 = 0;
  if (puVar2 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x38) == 0) {
    if ((*PTR_DAT_043737d0 & 1) != 0) {
      FUN_002efbd4();
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar1 + 0x38) = &local_e0;
  }
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_f4 = 0;
  local_100 = 1;
  local_f8 = 0xffffffff;
  local_128 = PTR_DAT_043737c0 + 0x10;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_f0 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 003e38b0 to 003e38b3 has its CatchHandler @ 003e3ad8 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_e8 = *(undefined8 *)(lVar1 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
                    /* try { // try from 003e3a94 to 003e3a97 has its CatchHandler @ 003e3ad8 */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003e38e0 to 003e38e3 has its CatchHandler @ 003e3ad8 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_128;
                    /* try { // try from 003e3900 to 003e39a3 has its CatchHandler @ 003e3af0 */
  uVar4 = FUN_003e0280(*param_5,"external/com_google_grpc_base/src/core/lib/surface/channel.cc",
                       0x1ec);
  uVar5 = FUN_003e0280(param_5[1],"external/com_google_grpc_base/src/core/lib/surface/channel.cc",
                       0x1ec);
  uStack_78 = FUN_002efd90(param_6,param_7);
  if (*param_1 == 0) {
                    /* try { // try from 003e3ab0 to 003e3ad7 has its CatchHandler @ 003e3af0 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x167,2,
                 "assertion failed: %s","channel->is_client");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar5 < 4) {
    local_80 = 1;
  }
  else {
    local_80 = 2;
    local_68 = uVar5;
  }
  puStack_88 = &local_70;
  uStack_b8 = 0;
  uStack_98 = 0;
  local_90 = 0;
  local_c0 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_70 = uVar4;
  lVar6 = FUN_003c8c90(&local_c0,&local_c8);
  if (lVar6 != 0) {
    FUN_002f1e00("call_create",lVar6,"external/com_google_grpc_base/src/core/lib/surface/channel.cc"
                 ,0x17c);
  }
  local_128 = puVar2 + 0x10;
  local_100 = local_100 | 1;
                    /* try { // try from 003e39bc to 003e39cf has its CatchHandler @ 003e3aec */
  FUN_002eff00(&local_128);
  uVar4 = local_e8;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar4;
  if ((((byte)local_100 >> 2 & 1) == 0) && ((*PTR_DAT_043737d0 & 1) != 0)) {
                    /* try { // try from 003e3a9c to 003e3a9f has its CatchHandler @ 003e3aec */
    FUN_002efca0();
  }
  FUN_002f693c(&local_e0);
  return local_c8;
}


