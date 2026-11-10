/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050e28c; name: FUN_0050e28c
 */


void FUN_0050e28c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_28;
  long local_18;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    return;
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
                 ,0x20a,lVar5,lVar5 + 1,"ChannelState+lrs");
  }
  local_28 = param_1;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0xe0);
  if (lVar5 != 0) {
    local_28 = 0;
                    /* try { // try from 0050e340 to 0050e34b has its CatchHandler @ 0050e388 */
    local_18 = param_1;
    FUN_00520324(lVar5,&local_18);
    FUN_0050e3a4(&local_18);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x40);
  *(long *)(param_1 + 0x40) = lVar5;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 0050e368 to 0050e36b has its CatchHandler @ 0050e384 */
    (**(code **)*puVar4)();
  }
  FUN_0050e3a4(&local_28);
  return;
}


