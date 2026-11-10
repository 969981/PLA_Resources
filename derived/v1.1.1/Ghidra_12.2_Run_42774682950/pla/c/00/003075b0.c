/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003075b0; name: FUN_003075b0
 */


void FUN_003075b0(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  plVar1 = param_1 + 0x13;
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x33d,2,
                 "assertion failed: %s","old >= amount");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar4 == 1) {
    FUN_002f4f9c(*(undefined8 *)(*param_1 + 0x10),param_1 + 0x36,0);
    return;
  }
  return;
}


