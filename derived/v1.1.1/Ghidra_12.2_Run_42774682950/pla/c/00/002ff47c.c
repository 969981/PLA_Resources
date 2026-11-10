/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ff47c; name: FUN_002ff47c
 */


long FUN_002ff47c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar2 = PTR___tls_init_043738e0;
  local_68 = 0;
  local_78 = 1;
  uStack_70 = 0;
  if (PTR___tls_init_043738e0 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x38) == 0) {
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 **)(lVar1 + 0x38) = &local_78;
  }
  puVar3 = PTR_DAT_043739a8;
  puVar2 = PTR___tls_init_043737c8;
  lVar4 = 0;
  while (param_2 != (long *)0x0) {
    lVar5 = *param_2;
    uVar6 = param_2[3];
    if (puVar3[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x81,1,
                   "EXECUTOR (%s) run %p [created by %s:%d]",param_1,param_2,param_2[5],
                   *(undefined4 *)(param_2 + 6));
    }
    *(undefined1 *)(param_2 + 4) = 0;
    (*(code *)param_2[1])(param_2[2],uVar6);
    if (4 < uVar6) {
      FUN_002f0430(uVar6,"external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x87);
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar4 = lVar4 + 1;
                    /* try { // try from 002ff540 to 002ff5b3 has its CatchHandler @ 002ff5e4 */
    FUN_002eff00(*(undefined8 *)(lVar1 + 0x30));
    param_2 = (long *)lVar5;
  }
  FUN_002f693c(&local_78);
  return lVar4;
}


