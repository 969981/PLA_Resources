/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d6e50; name: FUN_003d6e50
 */


void FUN_003d6e50(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  char *local_70;
  undefined4 local_68;
  
  puVar7 = PTR_DAT_04374090;
  if (PTR_DAT_04374090[0x10] != '\0') {
    uVar9 = FUN_002f1480(param_3);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x74,1,
                 "==> CallCombiner::Start() [%p] closure=%p [%s:%d: %s] error=%s",param_1,param_2,
                 param_4,param_5,param_6,uVar9);
  }
  do {
    lVar10 = *param_1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = lVar10 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar7[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x7c,1,
                 "  size: %ld -> %ld",lVar10,lVar10 + 1);
  }
  puVar6 = PTR_DAT_043738c0;
  puVar5 = PTR___tls_init_043737c8;
  lVar12 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar11 = *(long *)(lVar4 + 0x30);
  uVar8 = *(uint *)(lVar11 + 0x30);
  if (uVar8 == 0xffffffff) {
    uVar8 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar11 + 0x30) = uVar8;
  }
  plVar1 = (long *)(lVar12 + (ulong)uVar8 * 0x1d50 + 0x2a0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar10 != 0) {
    if (puVar7[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x8a,1,
                   "  QUEUING");
    }
    *(undefined8 *)(param_2 + 0x18) = param_3;
    FUN_0030bc68(param_1 + 1,param_2);
    return;
  }
  lVar10 = *(long *)puVar6;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar12 = *(long *)(lVar4 + 0x30);
  uVar8 = *(uint *)(lVar12 + 0x30);
  if (uVar8 == 0xffffffff) {
    uVar8 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar12 + 0x30) = uVar8;
  }
  plVar1 = (long *)(lVar10 + (ulong)uVar8 * 0x1d50 + 0x298);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar7[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0x84,1,
                 "  EXECUTING IMMEDIATELY");
  }
  local_70 = "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc";
  local_68 = 0x62;
  FUN_002f019c(&local_70,param_2,param_3);
  return;
}


