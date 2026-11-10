/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ca4b0; name: FUN_003ca4b0
 */


undefined8 FUN_003ca4b0(undefined8 param_1,int param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  
  puVar2 = PTR___tls_init_043738e0;
  local_a0 = 0;
  uStack_98 = 0;
  local_a8 = 0;
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
    *(undefined8 **)(lVar1 + 0x38) = &local_a8;
  }
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_bc = 0;
  local_c8 = 1;
  local_c0 = 0xffffffff;
  local_f0 = PTR_DAT_043737c0 + 0x10;
  uStack_e0 = 0;
  local_e8 = 0;
  local_b8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 003ca57c to 003ca57f has its CatchHandler @ 003ca71c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_b0 = *(undefined8 *)(lVar1 + 0x30);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003ca6a8 to 003ca6ab has its CatchHandler @ 003ca71c */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003ca5a4 to 003ca5a7 has its CatchHandler @ 003ca71c */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_f0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 003ca6b0 to 003ca6db has its CatchHandler @ 003ca734 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2a2,1,
                 "grpc_call_cancel_with_status(c=%p, status=%d, description=%s, reserved=%p)",
                 param_1,param_2,param_3,param_4);
  }
  if (param_4 != 0) {
                    /* try { // try from 003ca6f4 to 003ca71b has its CatchHandler @ 003ca734 */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2a3,2,
                 "assertion failed: %s","reserved == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
                    /* try { // try from 003ca5d4 to 003ca633 has its CatchHandler @ 003ca734 */
  FUN_002f2ff0(auStack_70,param_3);
  uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x2d6,auStack_70
                       ,0,0);
  FUN_002f2ff0(auStack_90,param_3);
  uVar5 = FUN_002f1340(uVar5,5,auStack_90);
  uVar5 = FUN_002f0d20(uVar5,3,(long)param_2);
  FUN_003c9ab0(param_1,uVar5);
  local_f0 = puVar2 + 0x10;
  local_c8 = local_c8 | 1;
                    /* try { // try from 003ca648 to 003ca65b has its CatchHandler @ 003ca730 */
  FUN_002eff00(&local_f0);
  uVar5 = local_b0;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_c8 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003ca6e0 to 003ca6e3 has its CatchHandler @ 003ca730 */
    FUN_002efca0();
  }
  FUN_002f693c(&local_a8);
  return 0;
}


