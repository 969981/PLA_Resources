/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cebd0; name: FUN_003cebd0
 */


void FUN_003cebd0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 local_38;
  
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc",0x692,1,
                 "grpc_completion_queue_destroy(cq=%p)",param_1);
  }
  FUN_003ce410(param_1);
  puVar3 = PTR___tls_init_043737c8;
  puVar2 = PTR_DAT_043737c0;
  local_44 = 0;
  local_50 = 1;
  local_48 = 0xffffffff;
  local_78 = PTR_DAT_043737c0 + 0x10;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_40 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar4 = PTR_DAT_043737d0;
  lVar1 = tpidr_el0;
  local_38 = *(undefined8 *)(lVar1 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar1 + 0x30) = &local_78;
                    /* try { // try from 003cec88 to 003ceca3 has its CatchHandler @ 003ced3c */
  FUN_003ce6c0(param_1,"destroy",
               "external/com_google_grpc_base/src/core/lib/surface/completion_queue.cc",0x696);
  local_78 = puVar2 + 0x10;
  local_50 = local_50 | 1;
                    /* try { // try from 003cecb8 to 003ceccb has its CatchHandler @ 003ced9c */
  FUN_002eff00(&local_78);
  uVar5 = local_38;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar1 + 0x30) = uVar5;
  if ((((byte)local_50 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003ced34 to 003ced37 has its CatchHandler @ 003ced9c */
    FUN_002efca0();
  }
  return;
}


