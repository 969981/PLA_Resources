/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fc1d0; name: FUN_002fc1d0
 */


void FUN_002fc1d0(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  void *__ptr;
  
  if (PTR_DAT_04373948[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x15c,0,
                 "FD %d %p unref %d %ld -> %ld [%s; %s:%d]",*param_1,param_1,2,
                 *(long *)(param_1 + 2),*(long *)(param_1 + 2) + -2,param_2,
                 "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",param_3);
  }
  plVar1 = (long *)(param_1 + 2);
  do {
    lVar4 = *plVar1;
    lVar5 = lVar4 + -2;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar5 != 0) {
    if (lVar4 < 3) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x16c,2,
                   "assertion failed: %s","old > n");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    return;
  }
  FUN_002ef710(param_1 + 4);
  FUN_002f5bc0(param_1 + 0x28);
  if (DAT_04399800 == '\x01') {
    __ptr = *(void **)(param_1 + 0x2e);
    FUN_002ef750(&DAT_04399810);
    if (DAT_04399808 == __ptr) {
      DAT_04399808 = *(void **)((long)__ptr + 0x10);
    }
    lVar5 = *(long *)((long)__ptr + 0x18);
    if (lVar5 != 0) {
      *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)((long)__ptr + 0x10);
    }
    if (*(long *)((long)__ptr + 0x10) != 0) {
      *(long *)(*(long *)((long)__ptr + 0x10) + 0x18) = lVar5;
    }
    free(__ptr);
    FUN_002ef790(&DAT_04399810);
  }
  if ((param_1[0xc] != 0) && (4 < *(ulong *)(param_1 + 0x12))) {
    FUN_002f0430(*(ulong *)(param_1 + 0x12),
                 "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x169);
  }
  free(param_1);
  return;
}


