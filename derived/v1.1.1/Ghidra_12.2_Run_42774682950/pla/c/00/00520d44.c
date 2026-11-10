/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00520d44; name: FUN_00520d44
 */


void FUN_00520d44(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_28;
  long local_18;
  
  if (*(char *)(param_1 + 0xd9) != '\0') {
    return;
  }
  lVar5 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar5 + 0x20) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x26a,2,"assertion failed: %s","chand_->channel_ != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x26b,2,"assertion failed: %s","calld_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04374a30[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x26d,1,
                 "[xds_client %p] Start new call from retryable call (chand: %p, retryable call: %p)"
                 ,*(undefined8 *)(lVar5 + 0x18),lVar5,param_1);
  }
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar5 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar5 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar6 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                 ,0x273,lVar5,lVar5 + 1,"RetryableCall+start_new_call");
  }
  local_28 = param_1;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0x1a0);
  if (lVar5 != 0) {
    local_28 = 0;
                    /* try { // try from 00520e1c to 00520e27 has its CatchHandler @ 00520edc */
    local_18 = param_1;
    FUN_0050e79c(lVar5,&local_18);
    FUN_0050f620(&local_18);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar5;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00520e44 to 00520e47 has its CatchHandler @ 00520ed8 */
    (**(code **)*puVar4)();
  }
  FUN_0050f620(&local_28);
  return;
}


