/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ca220; name: FUN_003ca220
 */


undefined8 FUN_003ca220(undefined8 param_1,long param_2)

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
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x269,1,
                 "grpc_call_cancel(call=%p, reserved=%p)",param_1,param_2);
    puVar2 = PTR___tls_init_043738e0;
  }
  PTR___tls_init_043738e0 = puVar2;
  if (param_2 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x26a,2,
                 "assertion failed: %s","!reserved");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  if (puVar2 != (undefined *)0x0) {
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
                    /* try { // try from 003ca2f0 to 003ca2f3 has its CatchHandler @ 003ca474 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_50 = *(undefined8 *)(lVar1 + 0x30);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003ca3fc to 003ca3ff has its CatchHandler @ 003ca474 */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003ca318 to 003ca31b has its CatchHandler @ 003ca474 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_90;
                    /* try { // try from 003ca334 to 003ca33f has its CatchHandler @ 003ca418 */
  FUN_003c9ab0(param_1,4);
  local_90 = puVar2 + 0x10;
  local_68 = local_68 | 1;
                    /* try { // try from 003ca354 to 003ca367 has its CatchHandler @ 003ca488 */
  FUN_002eff00(&local_90);
  uVar5 = local_50;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_68 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003ca404 to 003ca407 has its CatchHandler @ 003ca488 */
    FUN_002efca0();
  }
  FUN_002f693c(&local_48);
  return 0;
}


