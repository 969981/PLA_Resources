/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fd1c0; name: FUN_002fd1c0
 */


void FUN_002fd1c0(uint param_1)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  double dVar9;
  
  if (0x3ffff < (int)param_1) {
    param_1 = 0x40000;
  }
  param_1 = param_1 & ((int)param_1 >> 0x1f ^ 0xffffffffU);
  if ((int)param_1 < 6) {
    lVar6 = *(long *)PTR_DAT_043738c0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar7 = tpidr_el0;
    lVar7 = *(long *)(lVar7 + 0x30);
    uVar5 = *(uint *)(lVar7 + 0x30);
    if (uVar5 == 0xffffffff) {
      uVar5 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar7 + 0x30) = uVar5;
    }
    lVar6 = lVar6 + (ulong)uVar5 * 0x1d50 + (ulong)param_1 * 8;
  }
  else {
    dVar9 = (double)(int)param_1;
    if ((ulong)dVar9 < 0x408c000000000000) {
      bVar2 = (&DAT_039f9586)[(long)dVar9 + 0xbfe8000000000000U >> 0x31];
      iVar8 = *(int *)(&DAT_039f9604 + ((ulong)bVar2 + 6) * 4);
      lVar6 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar7 = tpidr_el0;
      lVar7 = *(long *)(lVar7 + 0x30);
      uVar5 = *(uint *)(lVar7 + 0x30);
      if (uVar5 == 0xffffffff) {
        uVar5 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar7 + 0x30) = uVar5;
      }
      lVar6 = lVar6 + (ulong)uVar5 * 0x1d50 +
              (long)(int)((int)((ulong)bVar2 + 6) -
                         (uint)((ulong)dVar9 < (ulong)(double)(long)iVar8)) * 8;
    }
    else {
      lVar6 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar7 = tpidr_el0;
      lVar7 = *(long *)(lVar7 + 0x30);
      uVar5 = *(uint *)(lVar7 + 0x30);
      if (uVar5 == 0xffffffff) {
        uVar5 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar7 + 0x30) = uVar5;
      }
      iVar8 = FUN_002fd0f0(param_1,&DAT_039f9604,0x40);
      lVar6 = lVar6 + (ulong)uVar5 * 0x1d50 + (long)iVar8 * 8;
    }
  }
  plVar1 = (long *)(lVar6 + 0x310);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  return;
}


