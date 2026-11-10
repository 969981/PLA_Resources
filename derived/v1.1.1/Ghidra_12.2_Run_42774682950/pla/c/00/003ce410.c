/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ce410; name: FUN_003ce410
 */


void FUN_003ce410(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar2 = PTR___tls_init_043738e0;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (PTR___tls_init_043738e0 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x38) == 0) {
    if ((*PTR_DAT_043737d0 & 1) != 0) {
      FUN_002efbd4();
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar1 + 0x38) = &local_48;
  }
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_5c = 0;
  local_68 = 1;
  local_60 = 0xffffffff;
  local_90 = PTR_DAT_043737c0 + 0x10;
  uStack_80 = 0;
  local_88 = 0;
  local_58 = 0;
  uStack_70 = 0;
  local_78 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 003ce4c8 to 003ce4cb has its CatchHandler @ 003ce630 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_50 = *(undefined8 *)(lVar1 + 0x30);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003ce594 to 003ce597 has its CatchHandler @ 003ce630 */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003ce4f0 to 003ce4f3 has its CatchHandler @ 003ce630 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_90;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 003ce59c to 003ce5bb has its CatchHandler @ 003ce5d4 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc",0x68c,1,
                 "grpc_completion_queue_shutdown(cq=%p)",param_1);
  }
                    /* try { // try from 003ce524 to 003ce52b has its CatchHandler @ 003ce5d4 */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))(param_1);
  local_90 = puVar2 + 0x10;
  local_68 = local_68 | 1;
                    /* try { // try from 003ce540 to 003ce553 has its CatchHandler @ 003ce644 */
  FUN_002eff00(&local_90);
  uVar5 = local_50;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_68 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003ce5c0 to 003ce5c3 has its CatchHandler @ 003ce644 */
    FUN_002efca0();
  }
  FUN_002f693c(&local_48);
  return;
}


