/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d727c; name: FUN_003d727c
 */


void FUN_003d727c(long param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  char *local_40;
  undefined4 local_38;
  
  lVar8 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar10 = tpidr_el0;
  lVar10 = *(long *)(lVar10 + 0x30);
  uVar6 = *(uint *)(lVar10 + 0x30);
  if (uVar6 == 0xffffffff) {
    uVar6 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar10 + 0x30) = uVar6;
  }
  plVar1 = (long *)(lVar8 + (ulong)uVar6 * 0x1d50 + 0x2a8);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar2 = (ulong *)(param_1 + 0x58);
  uVar9 = *puVar2;
  do {
    if (((uVar9 & 1) != 0) && (uVar7 = uVar9 & 0xfffffffffffffffe, uVar7 != 0)) {
      if (PTR_DAT_04374090[0x10] != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xc6,1,
                     "call_combiner=%p: scheduling notify_on_cancel callback=%p for pre-existing cancellation"
                     ,param_1,param_2);
      }
      local_40 = "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc";
      local_38 = 0xcb;
      if (4 < uVar7) {
        uVar7 = FUN_002f03c0(uVar7,
                             "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",
                             0xcb);
      }
LAB_003d7370:
      FUN_002f019c(&local_40,param_2,uVar7);
      return;
    }
    while (*puVar2 == uVar9) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = param_2;
        cVar3 = ExclusiveMonitorsStatus();
      }
      puVar5 = PTR_DAT_04374090;
      if (cVar3 == '\0') {
        if (PTR_DAT_04374090[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xd0,1,
                       "call_combiner=%p: setting notify_on_cancel=%p",param_1,param_2);
        }
        if (uVar9 == 0) {
          return;
        }
        if (puVar5[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xd9,1,
                       "call_combiner=%p: scheduling old cancel callback=%p",param_1,uVar9);
        }
        local_40 = "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc";
        local_38 = 0xdd;
        uVar7 = 0;
        param_2 = uVar9;
        goto LAB_003d7370;
      }
    }
    ClearExclusiveLocal();
    uVar9 = *puVar2;
  } while( true );
}


