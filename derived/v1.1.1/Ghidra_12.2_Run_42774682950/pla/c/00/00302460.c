/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00302460; name: FUN_00302460
 */


void FUN_00302460(void *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_40 [32];
  
  lVar5 = *(long *)((long)param_1 + 0x28);
  plVar1 = (long *)((long)param_1 + 0x30);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",199,1,
                 "%s:%p %s:%d unref %ld -> %ld %s",*(undefined8 *)(lVar5 + 8),
                 (long *)((long)param_1 + 0x28),*param_3,*(undefined4 *)(param_3 + 1),lVar6,
                 lVar6 + -1,param_2);
  }
  if (lVar6 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xcb,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar6 != 1) {
    return;
  }
  FUN_002f9530(*(undefined8 *)((long)param_1 + 8),*(undefined8 *)((long)param_1 + 0x1a0),
               *(undefined8 *)((long)param_1 + 0x1a8),"tcp_unref_orphan");
  FUN_00305020((long)param_1 + 0x48);
  FUN_003075b0(*(undefined8 *)((long)param_1 + 0x290));
  free(*(void **)((long)param_1 + 0x288));
  lVar5 = (long)param_1 + 0x350;
  FUN_002ef750(lVar5);
  FUN_002f2c60(auStack_40,"endpoint destroyed");
  uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x27a,
                       auStack_40,0,0);
  if (4 < uVar4) {
    FUN_002f0430(uVar4,"external/com_google_grpc_base\\src/core/lib/iomgr/buffer_list.h",0x98);
  }
  FUN_002ef790(lVar5);
  *(undefined8 *)((long)param_1 + 0x370) = 0;
  FUN_002ef710(lVar5);
  FUN_00304938((long)param_1 + 0x388);
  free(param_1);
  return;
}


