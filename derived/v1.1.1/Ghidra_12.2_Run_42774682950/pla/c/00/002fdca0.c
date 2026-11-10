/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fdca0; name: FUN_002fdca0
 */


void FUN_002fdca0(uint param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  double dVar9;
  
  if (0xffffff < (int)param_1) {
    param_1 = 0x1000000;
  }
  param_1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  if ((int)param_1 < 5) {
    lVar6 = *(long *)PTR_DAT_043738c0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar7 = tpidr_el0;
    lVar7 = *(long *)(lVar7 + 0x30);
    uVar4 = *(uint *)(lVar7 + 0x30);
    if (uVar4 == 0xffffffff) {
      uVar4 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar7 + 0x30) = uVar4;
    }
    plVar5 = (long *)(lVar6 + (ulong)uVar4 * 0x1d50 + (ulong)(param_1 + 0x200) * 8 + 0x310);
  }
  else {
    dVar9 = (double)(int)param_1;
    if ((ulong)dVar9 >> 0x38 < 0x41) {
      bVar1 = (&DAT_039f9708)[(long)dVar9 + 0xbfec000000000000U >> 0x32];
      iVar8 = *(int *)(&DAT_039f9774 + (ulong)bVar1 * 4);
      lVar6 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar7 = tpidr_el0;
      lVar7 = *(long *)(lVar7 + 0x30);
      uVar4 = *(uint *)(lVar7 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar7 + 0x30) = uVar4;
      }
      lVar6 = lVar6 + (ulong)uVar4 * 0x1d50 +
              ((ulong)bVar1 - (ulong)((ulong)dVar9 < (ulong)(double)(long)iVar8)) * 8;
      lVar7 = 0x1338;
    }
    else {
      lVar6 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar7 = tpidr_el0;
      lVar7 = *(long *)(lVar7 + 0x30);
      uVar4 = *(uint *)(lVar7 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar7 + 0x30) = uVar4;
      }
      iVar8 = FUN_002fd0f0(param_1,&DAT_039f9760,0x40);
      lVar6 = lVar6 + (ulong)uVar4 * 0x1d50 + (long)iVar8 * 8;
      lVar7 = 0x1310;
    }
    plVar5 = (long *)(lVar6 + lVar7);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = *plVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


