/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e28a0; name: FUN_003e28a0
 */


void FUN_003e28a0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar2 = PTR___tls_init_043738e0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
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
    *(undefined8 **)(lVar1 + 0x38) = &local_58;
  }
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_6c = 0;
  local_78 = 1;
  local_70 = 0xffffffff;
  local_a0 = PTR_DAT_043737c0 + 0x10;
  uStack_90 = 0;
  local_98 = 0;
  local_68 = 0;
  uStack_80 = 0;
  local_88 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 003e295c to 003e295f has its CatchHandler @ 003e2a94 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  local_60 = *(undefined8 *)(lVar1 + 0x30);
  if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003e2a4c to 003e2a4f has its CatchHandler @ 003e2a94 */
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003e2984 to 003e2987 has its CatchHandler @ 003e2a94 */
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_a0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 003e2a54 to 003e2a73 has its CatchHandler @ 003e2a8c */
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x157,1,
                 "grpc_channel_reset_connect_backoff(channel=%p)",param_1);
  }
                    /* try { // try from 003e29b0 to 003e29b7 has its CatchHandler @ 003e2a90 */
  lVar6 = FUN_003d6900(0);
  *(undefined1 *)(lVar6 + 0x68) = 1;
                    /* try { // try from 003e29c8 to 003e29df has its CatchHandler @ 003e2aac */
  plVar7 = (long *)FUN_003d7710(param_1 + 0x78,0);
  (**(code **)(*plVar7 + 8))(plVar7,lVar6);
  local_a0 = puVar2 + 0x10;
  local_78 = local_78 | 1;
                    /* try { // try from 003e29f4 to 003e2a07 has its CatchHandler @ 003e2aa8 */
  FUN_002eff00(&local_a0);
  uVar5 = local_60;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003e2a78 to 003e2a7b has its CatchHandler @ 003e2aa8 */
    FUN_002efca0();
  }
  FUN_002f693c(&local_58);
  return;
}


