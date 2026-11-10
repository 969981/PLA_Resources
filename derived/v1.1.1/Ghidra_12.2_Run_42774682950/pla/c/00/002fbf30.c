/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fbf30; name: FUN_002fbf30
 */


void FUN_002fbf30(long param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  FUN_002ef750();
  if (*(long *)(param_1 + 0x50) == *(long *)(param_1 + 0x58)) {
    uVar5 = *(long *)(param_1 + 0x50) * 2;
    if (uVar5 < 9) {
      uVar5 = 8;
    }
    *(ulong *)(param_1 + 0x58) = uVar5;
    uVar4 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x60),uVar5 << 3);
    *(undefined8 *)(param_1 + 0x60) = uVar4;
  }
  if (PTR_DAT_04373948[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x143,0,
                 "FD %d %p   ref %d %ld -> %ld [%s; %s:%d]",*param_2,param_2,2,
                 *(long *)(param_2 + 2),*(long *)(param_2 + 2) + 2,"pollset_set",
                 "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x51f);
  }
  plVar1 = (long *)(param_2 + 2);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar6 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x155,2,
                 "assertion failed: %s","gpr_atm_no_barrier_fetch_add(&fd->refst, n) > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(param_1 + 0x50);
  *(long *)(param_1 + 0x50) = lVar6 + 1;
  *(undefined4 **)(*(long *)(param_1 + 0x60) + lVar6 * 8) = param_2;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar5 = 0;
    do {
      FUN_002fb810(*(undefined8 *)(*(long *)(param_1 + 0x30) + uVar5 * 8),param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar5 = 0;
    do {
      FUN_002fbf30(*(undefined8 *)(*(long *)(param_1 + 0x48) + uVar5 * 8),param_2);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ulong *)(param_1 + 0x38));
  }
  FUN_002ef790(param_1);
  return;
}


