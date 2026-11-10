/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ca7b0; name: FUN_003ca7b0
 */


undefined4
FUN_003ca7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR___tls_init_043738e0;
  if (PTR_DAT_04373fe8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x7ad,1,
                 "grpc_call_start_batch(call=%p, ops=%p, nops=%lu, tag=%p, reserved=%p)",param_1,
                 param_2,param_3,param_4,param_5);
    puVar2 = PTR___tls_init_043738e0;
  }
  PTR___tls_init_043738e0 = puVar2;
  if (param_5 == 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
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
      *(undefined8 **)(lVar1 + 0x38) = &local_68;
    }
    puVar3 = PTR___tls_init_043737c8;
    puVar2 = PTR_DAT_043737c0;
    local_7c = 0;
    local_88 = 1;
    local_80 = 0xffffffff;
    local_b0 = PTR_DAT_043737c0 + 0x10;
    uStack_a0 = 0;
    local_a8 = 0;
    local_78 = 0;
    uStack_90 = 0;
    local_98 = 0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
                    /* try { // try from 003ca8d0 to 003ca8d3 has its CatchHandler @ 003caa1c */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    local_70 = *(undefined8 *)(lVar1 + 0x30);
    if ((*puVar4 & 1) != 0) {
                    /* try { // try from 003ca9a4 to 003ca9a7 has its CatchHandler @ 003caa1c */
      FUN_002efbd4();
    }
    if (puVar3 != (undefined *)0x0) {
                    /* try { // try from 003ca8f8 to 003ca8fb has its CatchHandler @ 003caa1c */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar1 + 0x30) = &local_b0;
                    /* try { // try from 003ca914 to 003ca92b has its CatchHandler @ 003ca9c0 */
    uVar6 = FUN_003caa40(param_1,param_2,param_3,param_4,0);
    local_b0 = puVar2 + 0x10;
    local_88 = local_88 | 1;
                    /* try { // try from 003ca944 to 003ca957 has its CatchHandler @ 003caa30 */
    FUN_002eff00(&local_b0);
    uVar5 = local_70;
    if (puVar3 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    if ((((byte)local_88 >> 2 & 1) == 0) && ((*puVar4 & 1) != 0)) {
                    /* try { // try from 003ca9ac to 003ca9af has its CatchHandler @ 003caa30 */
      FUN_002efca0();
    }
    FUN_002f693c(&local_68);
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}


