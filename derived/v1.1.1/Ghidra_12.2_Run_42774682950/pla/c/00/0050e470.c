/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050e470; name: FUN_0050e470
 */


void FUN_0050e470(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_28;
  long local_18;
  
  if (*(long *)(param_1 + 0x38) == 0) {
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
                   ,0x225,lVar5,lVar5 + 1,"ChannelState+ads");
    }
    local_28 = param_1;
    lVar5 = FUN_002e2e80(PTR_FUN_04373078,0xe0);
    if (lVar5 != 0) {
      local_28 = 0;
                    /* try { // try from 0050e52c to 0050e537 has its CatchHandler @ 0050e574 */
      local_18 = param_1;
      FUN_00520b70(lVar5,&local_18);
      FUN_0050e3a4(&local_18);
    }
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    *(long *)(param_1 + 0x38) = lVar5;
    if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0050e554 to 0050e557 has its CatchHandler @ 0050e570 */
      (**(code **)*puVar4)();
    }
    FUN_0050e3a4(&local_28);
  }
  else if (*(long *)(*(long *)(param_1 + 0x38) + 0x18) != 0) {
    FUN_0050e590();
    return;
  }
  return;
}


