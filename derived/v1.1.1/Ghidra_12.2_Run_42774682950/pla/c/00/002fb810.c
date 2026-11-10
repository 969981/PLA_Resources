/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fb810; name: FUN_002fb810
 */


void FUN_002fb810(long param_1,undefined4 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  FUN_002ef750();
  uVar5 = *(ulong *)(param_1 + 0x60);
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(undefined4 **)(*(long *)(param_1 + 0x70) + uVar7 * 8) == param_2) goto LAB_002fb8d8;
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  if (uVar5 == *(ulong *)(param_1 + 0x68)) {
    uVar6 = uVar5 * 3 >> 1;
    uVar7 = uVar5 + 8;
    if (uVar5 + 8 <= uVar6) {
      uVar7 = uVar6;
    }
    *(ulong *)(param_1 + 0x68) = uVar7;
    lVar4 = FUN_002ebdc0(*(undefined8 *)(param_1 + 0x70),uVar7 << 3);
    uVar5 = *(ulong *)(param_1 + 0x60);
    *(long *)(param_1 + 0x70) = lVar4;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x70);
  }
  *(ulong *)(param_1 + 0x60) = uVar5 + 1;
  *(undefined4 **)(lVar4 + uVar5 * 8) = param_2;
  if (PTR_DAT_04373948[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x143,0,
                 "FD %d %p   ref %d %ld -> %ld [%s; %s:%d]",*param_2,param_2,2,
                 *(long *)(param_2 + 2),*(long *)(param_2 + 2) + 2,"multipoller",
                 "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x379);
  }
  plVar1 = (long *)(param_2 + 2);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x155,2,
                 "assertion failed: %s","gpr_atm_no_barrier_fetch_add(&fd->refst, n) > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002fc350(param_1,0,0);
LAB_002fb8d8:
  FUN_002ef790(param_1);
  return;
}


