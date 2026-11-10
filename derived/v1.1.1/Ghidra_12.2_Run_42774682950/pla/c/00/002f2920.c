/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f2920; name: FUN_002f2920
 */


void FUN_002f2920(undefined8 *param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar4 = PTR___tls_init_043737c8;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar3 = PTR_DAT_043737c0;
  lVar8 = tpidr_el0;
  if (*(long *)(lVar8 + 0x30) == 0) {
    local_54 = 0;
    local_60 = 1;
    local_58 = 0xffffffff;
    local_88 = PTR_DAT_043737c0 + 0x10;
    uStack_78 = 0;
    local_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    local_50 = 0;
    local_48 = 0;
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      local_48 = *(undefined8 *)(lVar8 + 0x30);
    }
    puVar5 = PTR_DAT_043737d0;
    if ((*PTR_DAT_043737d0 & 1) != 0) {
      FUN_002efbd4();
    }
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined ***)(lVar8 + 0x30) = &local_88;
    plVar12 = (long *)*param_1;
    if ((plVar12 != (long *)0x0) && (plVar7 = (long *)*plVar12, plVar7 != (long *)0x0)) {
      plVar9 = plVar7 + 1;
      lVar10 = *plVar7;
      do {
        lVar11 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar11 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 002f2aa0 to 002f2ad7 has its CatchHandler @ 002f2ba0 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar7,lVar11);
      }
      if (lVar11 < 1) {
                    /* try { // try from 002f2b78 to 002f2b9f has its CatchHandler @ 002f2ba0 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (*(code *)plVar12[3])(plVar12[4]);
      }
    }
    local_88 = puVar3 + 0x10;
    local_60 = local_60 | 1;
                    /* try { // try from 002f2aec to 002f2aff has its CatchHandler @ 002f2c00 */
    FUN_002eff00(&local_88);
    uVar6 = local_48;
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    *(undefined8 *)(lVar8 + 0x30) = uVar6;
    if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar5 & 1) != 0)) {
                    /* try { // try from 002f2b48 to 002f2b4b has its CatchHandler @ 002f2c00 */
      FUN_002efca0();
    }
  }
  else {
    plVar12 = (long *)*param_1;
    if ((plVar12 != (long *)0x0) && (plVar7 = (long *)*plVar12, plVar7 != (long *)0x0)) {
      plVar9 = plVar7 + 1;
      lVar8 = *plVar7;
      do {
        lVar10 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar10 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar7,lVar10);
      }
      if (lVar10 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar10 == 1) {
                    /* WARNING: Could not recover jumptable at 0x002f29e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)plVar12[3])(plVar12[4]);
        return;
      }
    }
  }
  return;
}


