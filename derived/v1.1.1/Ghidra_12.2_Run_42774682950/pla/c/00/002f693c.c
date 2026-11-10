/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f693c; name: FUN_002f693c
 */


void FUN_002f693c(byte *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar2 = PTR___tls_init_043738e0;
  if (PTR___tls_init_043738e0 != (undefined *)0x0) {
    grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
  }
  lVar1 = tpidr_el0;
  if (*(byte **)(lVar1 + 0x38) == param_1) {
    while (puVar3 = *(undefined8 **)(param_1 + 8), puVar3 != (undefined8 *)0x0) {
      lVar4 = puVar3[2];
      *(long *)(param_1 + 8) = lVar4;
      if (lVar4 == 0) {
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
      }
                    /* try { // try from 002f69b8 to 002f69bb has its CatchHandler @ 002f6a4c */
      (*(code *)*puVar3)(puVar3,*(undefined4 *)((long)puVar3 + 0xc));
    }
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ApplicationCallbackExecCtx::callback_exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar1 + 0x38) = 0;
    if (((*param_1 & 1) == 0) && ((*PTR_DAT_043737d0 & 1) != 0)) {
                    /* try { // try from 002f6a18 to 002f6a47 has its CatchHandler @ 002f6a48 */
      FUN_002efca0();
    }
  }
  else {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/exec_ctx.h",0x149,2,
                   "assertion failed: %s","head_ == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 002f6988 to 002f69af has its CatchHandler @ 002f6a48 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/exec_ctx.h",0x14a,2,
                   "assertion failed: %s","tail_ == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}


