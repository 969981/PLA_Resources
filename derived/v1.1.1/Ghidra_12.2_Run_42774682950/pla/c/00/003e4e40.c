/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e4e40; name: FUN_003e4e40
 */


void FUN_003e4e40(ulong *param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar4 = *(long *)(lVar4 + 0x30);
  uVar3 = *(uint *)(lVar4 + 0x30);
  if (uVar3 == 0xffffffff) {
    uVar3 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar4 + 0x30) = uVar3;
  }
  if (*param_1 >> 1 <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x136,
                  "operator[]");
  }
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = (ulong *)param_1[1];
  }
  param_1 = param_1 + (ulong)uVar3 * 8 + 1;
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_1,0x10);
    if (bVar2) {
      *param_1 = *param_1 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  return;
}


