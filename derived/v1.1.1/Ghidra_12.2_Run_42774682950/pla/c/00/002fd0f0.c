/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fd0f0; name: FUN_002fd0f0
 */


int FUN_002fd0f0(int param_1,int *param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int *piVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR_DAT_043738c0;
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
  plVar1 = (long *)(lVar7 + (ulong)uVar5 * 0x1d50 + 0x80);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *plVar1 = *plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  piVar6 = param_2;
  if (0 < (int)param_3) {
    do {
      uVar2 = param_3 >> 1;
      uVar5 = param_3 + ~uVar2;
      param_3 = uVar2;
      if (piVar6[uVar2] <= param_1) {
        piVar6 = piVar6 + uVar2 + 1;
        param_3 = uVar5;
      }
    } while (0 < (int)param_3);
  }
  return (int)((ulong)((long)piVar6 - (long)param_2) >> 2) + -1;
}


