/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f5244; name: thunk_FUN_002f5250
 */


void thunk_FUN_002f5250(long param_1,undefined8 *param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  
  puVar5 = PTR___tls_init_043737c8;
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x12f,2,
                 "assertion failed: %s","lock != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar9 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar10 = *(long *)(lVar4 + 0x30);
  uVar6 = *(uint *)(lVar10 + 0x30);
  if (uVar6 == 0xffffffff) {
    uVar6 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar10 + 0x30) = uVar6;
  }
  plVar8 = (long *)(lVar9 + (ulong)uVar6 * 0x1d50 + 0x288);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
    if (bVar3) {
      *plVar8 = *plVar8 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (PTR_DAT_043738b8[0x10] != '\0') {
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x133,1,
                 "C:%p grpc_combiner_execute_finally c=%p; ac=%p",param_1,param_2,
                 *(undefined8 *)(*(long *)(lVar4 + 0x30) + 0x18));
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  if (*(long *)(*(long *)(lVar4 + 0x30) + 0x18) != param_1) {
    param_2[3] = param_1;
    puVar7 = (undefined8 *)FUN_002ebd50(0x58);
    puVar5 = PTR_LAB_043738c8;
    *puVar7 = &LAB_002f5470;
    puVar7[1] = param_2;
    puVar7[4] = puVar7;
    puVar7[5] = 0;
    *(undefined2 *)(puVar7 + 6) = 0;
    *(undefined4 *)(puVar7 + 10) = 0;
    puVar7[7] = "external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc";
    *(undefined4 *)(puVar7 + 8) = 0x13a;
    puVar7[3] = puVar5;
    puVar7[9] = 0;
    FUN_002f4f9c(param_1,puVar7 + 2,param_3);
    return;
  }
  plVar8 = (long *)(param_1 + 0x70);
  if (*plVar8 == 0) {
    plVar1 = (long *)(param_1 + 0x60);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 2;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (param_2 == (undefined8 *)0x0) {
    if (4 < param_3) {
      FUN_002f0430(param_3,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xb4);
      return;
    }
  }
  else {
    param_2[3] = param_3;
    *param_2 = 0;
    if (*plVar8 != 0) {
      plVar8 = *(long **)(param_1 + 0x78);
    }
    *plVar8 = (long)param_2;
    *(undefined8 **)(param_1 + 0x78) = param_2;
  }
  return;
}


