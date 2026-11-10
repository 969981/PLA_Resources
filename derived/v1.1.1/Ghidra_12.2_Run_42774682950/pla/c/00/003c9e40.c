/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c9e40; name: FUN_003c9e40
 */


void FUN_003c9e40(long *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
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
  undefined8 uStack_48;
  
  plVar11 = param_1 + 1;
  lVar9 = *param_1;
  do {
    lVar10 = *plVar11;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar4) {
      *plVar11 = lVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),param_1,lVar10);
  }
  puVar5 = PTR___tls_init_043738e0;
  if (lVar10 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar10 == 1) {
    plVar11 = (long *)param_1[0x15];
    local_50 = 0;
    uStack_48 = 0;
    local_58 = 0;
    if (PTR___tls_init_043738e0 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    puVar7 = PTR_DAT_043737d0;
    lVar9 = tpidr_el0;
    if (*(long *)(lVar9 + 0x38) == 0) {
      if ((*PTR_DAT_043737d0 & 1) != 0) {
        FUN_002efbd4();
      }
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
      }
      *(undefined8 **)(lVar9 + 0x38) = &local_58;
    }
    puVar6 = PTR___tls_init_043737c8;
    puVar5 = PTR_DAT_043737c0;
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
                    /* try { // try from 003c9f74 to 003c9f77 has its CatchHandler @ 003ca190 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    local_60 = *(undefined8 *)(lVar9 + 0x30);
    if ((*puVar7 & 1) != 0) {
                    /* try { // try from 003ca0fc to 003ca0ff has its CatchHandler @ 003ca190 */
      FUN_002efbd4();
    }
    if (puVar6 != (undefined *)0x0) {
                    /* try { // try from 003c9f9c to 003c9f9f has its CatchHandler @ 003ca190 */
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar9 + 0x30) = &local_a0;
    if (PTR_DAT_04373fe8[0x10] != '\0') {
                    /* try { // try from 003ca104 to 003ca123 has its CatchHandler @ 003ca18c */
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x244,1,
                   "grpc_call_unref(c=%p)",param_1);
    }
    if (plVar11 != (long *)0x0) {
      lVar10 = *(long *)(*plVar11 + 0xa0);
                    /* try { // try from 003c9fd8 to 003ca02f has its CatchHandler @ 003ca1a8 */
      FUN_002ef750(lVar10);
      if (*(long **)(lVar10 + 0x20) == param_1) {
        plVar1 = (long *)0x0;
        if ((long *)plVar11[1] != param_1) {
          plVar1 = (long *)plVar11[1];
        }
        *(long **)(lVar10 + 0x20) = plVar1;
      }
      lVar2 = plVar11[2];
      *(long *)(*(long *)(lVar2 + 0xa8) + 8) = plVar11[1];
      *(long *)(*(long *)(plVar11[1] + 0xa8) + 0x10) = lVar2;
      FUN_002ef790(lVar10);
      FUN_003c9ce0(*plVar11 + 0x9e0,"child");
    }
    if (*(char *)((long)param_1 + 0xb1) != '\0') {
                    /* try { // try from 003ca164 to 003ca18b has its CatchHandler @ 003ca18c */
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x255,2,
                   "assertion failed: %s","!c->destroy_called");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined1 *)((long)param_1 + 0xb1) = 1;
    if ((param_1[0x18] == 0) || (param_1[0x19] != 0)) {
                    /* try { // try from 003ca05c to 003ca06b has its CatchHandler @ 003ca1ac */
      FUN_003d727c(param_1 + 3,0);
      if (puVar6 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
                    /* try { // try from 003ca080 to 003ca0a3 has its CatchHandler @ 003ca1ac */
      FUN_002eff00(*(undefined8 *)(lVar9 + 0x30));
    }
    else {
      FUN_003c9ab0(param_1,4);
    }
    FUN_003c9ce0(param_1 + 0x13c,"destroy");
    local_a0 = puVar5 + 0x10;
    local_78 = local_78 | 1;
                    /* try { // try from 003ca0b8 to 003ca0cb has its CatchHandler @ 003ca1a4 */
    FUN_002eff00(&local_a0);
    uVar8 = local_60;
    if (puVar6 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar9 + 0x30) = uVar8;
    if ((((byte)local_78 >> 2 & 1) == 0) && ((*puVar7 & 1) != 0)) {
                    /* try { // try from 003ca128 to 003ca12b has its CatchHandler @ 003ca1a4 */
      FUN_002efca0();
    }
    FUN_002f693c(&local_58);
  }
  return;
}


