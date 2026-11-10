/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a5690; name: FUN_005a5690
 */


void FUN_005a5690(uint param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar8 = tpidr_el0;
  lVar8 = *(long *)(lVar8 + 0x30);
  uVar4 = *(uint *)(lVar8 + 0x30);
  if (uVar4 == 0xffffffff) {
    uVar4 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar8 + 0x30) = uVar4;
  }
  plVar1 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x220);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_1 < 0x7f) {
    pbVar6 = (byte *)FUN_005a6270(param_2,1);
  }
  else {
    iVar5 = FUN_005a7a00(param_1 - 0x7f);
    pbVar6 = (byte *)FUN_005a6270(param_2,iVar5);
    if (iVar5 + -1 != 0) {
      *pbVar6 = 0xff;
      FUN_005a7a40(param_1 - 0x7f,pbVar6 + 1,iVar5 + -1);
      return;
    }
  }
  *pbVar6 = (byte)param_1 | 0x80;
  return;
}


