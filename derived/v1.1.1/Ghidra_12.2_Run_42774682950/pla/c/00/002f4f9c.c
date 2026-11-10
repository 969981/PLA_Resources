/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f4f9c; name: FUN_002f4f9c
 */


void FUN_002f4f9c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  puVar7 = PTR_DAT_043738c0;
  puVar6 = PTR___tls_init_043737c8;
  lVar9 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  lVar11 = *(long *)(lVar5 + 0x30);
  uVar8 = *(uint *)(lVar11 + 0x30);
  if (uVar8 == 0xffffffff) {
    uVar8 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar11 + 0x30) = uVar8;
  }
  plVar1 = (long *)(lVar9 + (ulong)uVar8 * 0x1d50 + 0x280);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar2 = param_1 + 0xc;
  do {
    uVar10 = *puVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar4) {
      *puVar2 = uVar10 + 2;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (PTR_DAT_043738b8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x85,1,
                 "C:%p grpc_combiner_execute c=%p last=%ld",param_1,param_2,uVar10);
  }
  if (uVar10 == 1) {
    lVar9 = *(long *)puVar7;
    if (puVar6 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar11 = *(long *)(lVar5 + 0x30);
    uVar8 = *(uint *)(lVar11 + 0x30);
    if (uVar8 == 0xffffffff) {
      uVar8 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar11 + 0x30) = uVar8;
    }
    plVar1 = (long *)(lVar9 + (ulong)uVar8 * 0x1d50 + 0x278);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (puVar6 == (undefined *)0x0) {
      lVar9 = *(long *)(lVar5 + 0x30);
      param_1[0xb] = lVar9;
      *param_1 = 0;
      lVar11 = *(long *)(lVar9 + 0x18);
    }
    else {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      param_1[0xb] = *(undefined8 *)(lVar5 + 0x30);
      *param_1 = 0;
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar9 = *(long *)(lVar5 + 0x30);
      lVar11 = *(long *)(lVar9 + 0x18);
      if (puVar6 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar9 = *(long *)(lVar5 + 0x30);
      }
    }
    if (lVar11 == 0) {
      *(undefined8 **)(lVar9 + 0x20) = param_1;
      if (puVar6 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar9 = *(long *)(lVar5 + 0x30);
      }
      *(undefined8 **)(lVar9 + 0x18) = param_1;
      lVar9 = *(long *)(param_2 + 8);
    }
    else {
      **(undefined8 **)(lVar9 + 0x20) = param_1;
      if (puVar6 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar9 = *(long *)(lVar5 + 0x30);
      }
      *(undefined8 **)(lVar9 + 0x20) = param_1;
      lVar9 = *(long *)(param_2 + 8);
    }
  }
  else {
    lVar9 = param_1[0xb];
    if (lVar9 != 0) {
      if (puVar6 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      if (lVar9 != *(long *)(lVar5 + 0x30)) {
        param_1[0xb] = 0;
      }
    }
    if ((uVar10 & 1) == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x99,2,
                   "assertion failed: %s","last & STATE_UNORPHANED");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = *(long *)(param_2 + 8);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("cl->cb","external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x9a,
                  "combiner_exec");
  }
  *(undefined8 *)(param_2 + 0x18) = param_3;
  FUN_0030bc68(param_1 + 1,param_2);
  return;
}


