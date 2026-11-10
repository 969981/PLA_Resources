/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7460; name: FUN_003d7460
 */


void FUN_003d7460(long param_1,ulong param_2)

{
  long *plVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  char *local_40;
  undefined4 local_38;
  
  lVar6 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar8 = tpidr_el0;
  lVar8 = *(long *)(lVar8 + 0x30);
  uVar5 = *(uint *)(lVar8 + 0x30);
  if (uVar5 == 0xffffffff) {
    uVar5 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar8 + 0x30) = uVar5;
  }
  plVar1 = (long *)(lVar6 + (ulong)uVar5 * 0x1d50 + 0x2b0);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  puVar2 = (ulong *)(param_1 + 0x58);
  do {
    uVar7 = *puVar2;
    if (1 < uVar7 && (uVar7 & 1) != 0) {
      if (param_2 < 5) {
        return;
      }
      FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xec)
      ;
      return;
    }
    while (*puVar2 == uVar7) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = param_2 | 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        if (uVar7 == 0) {
          return;
        }
        if (PTR_DAT_04374090[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc",0xf4,1,
                       "call_combiner=%p: scheduling notify_on_cancel callback=%p",param_1,uVar7);
        }
        local_40 = "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc";
        local_38 = 0xf8;
        if (4 < param_2) {
          param_2 = FUN_002f03c0(param_2,
                                 "external/com_google_grpc_base/src/core/lib/iomgr/call_combiner.cc"
                                 ,0xf8);
        }
        FUN_002f019c(&local_40,uVar7,param_2);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}


