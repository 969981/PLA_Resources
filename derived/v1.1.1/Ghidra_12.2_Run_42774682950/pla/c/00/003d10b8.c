/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d10b8; name: FUN_003d10b8
 */


long FUN_003d10b8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  char local_44 [4];
  
  do {
    if (*param_1 != 0) {
      bVar4 = false;
      ClearExclusiveLocal();
      break;
    }
    bVar4 = true;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar3) {
      *param_1 = 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  puVar6 = PTR_DAT_043738c0;
  puVar5 = PTR___tls_init_043737c8;
  lVar10 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar8 = tpidr_el0;
  lVar9 = *(long *)(lVar8 + 0x30);
  uVar7 = *(uint *)(lVar9 + 0x30);
  if (uVar7 == 0xffffffff) {
    uVar7 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar9 + 0x30) = uVar7;
  }
  if (bVar4) {
    plVar1 = (long *)(lVar10 + (ulong)uVar7 * 0x1d50 + 0x300);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_44[0] = '\0';
    lVar10 = FUN_0030bcfc(param_1 + 1,local_44);
    *param_1 = 0;
    if ((lVar10 == 0) && (local_44[0] == '\0')) {
      lVar9 = *(long *)puVar6;
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar7 = *(uint *)(lVar8 + 0x30);
      if (uVar7 == 0xffffffff) {
        uVar7 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar7;
      }
      plVar1 = (long *)(lVar9 + (ulong)uVar7 * 0x1d50 + 0x308);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    if (lVar10 != 0) {
      param_1 = param_1 + 0xb;
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(param_1,0x10);
        if (bVar4) {
          *param_1 = *param_1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    plVar1 = (long *)(lVar10 + (ulong)uVar7 * 0x1d50 + 0x2f8);
    do {
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar10 = 0;
  }
  return lVar10;
}


