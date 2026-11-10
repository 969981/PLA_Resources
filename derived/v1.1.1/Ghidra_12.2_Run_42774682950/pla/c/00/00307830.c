/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00307830; name: FUN_00307830
 */


void FUN_00307830(long *param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  if (param_2 < 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x366,2,
                 "assertion failed: %s","thread_count >= 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef750(*param_1 + 0x38);
  plVar5 = param_1 + 0x1f;
  lVar4 = *param_1;
  *(int *)(lVar4 + 0x5c) = *(int *)(lVar4 + 0x5c) - param_2;
  do {
    lVar3 = *plVar5;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar2) {
      *plVar5 = lVar3 + -param_2;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if (((int)lVar3 < param_2) || (*(int *)(lVar4 + 0x5c) < 0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/resource_quota.cc",0x36d,2,
                 "Releasing more threads (%d) than currently allocated (rq threads: %d, ru threads: %d)"
                 ,param_2,*(int *)(lVar4 + 0x5c) + param_2);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002ef790(lVar4 + 0x38);
  return;
}


