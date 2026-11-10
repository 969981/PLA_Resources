/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00516a7c; name: FUN_00516a7c
 */


void FUN_00516a7c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long local_28;
  long local_18;
  
  if (((((*(long *)(param_1 + 0x198) != 0) || (*(long *)(param_1 + 0x48) != 0)) ||
       (*(char *)(param_1 + 0x20) == '\0')) ||
      ((lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x20) + 0x38), lVar5 == 0 ||
       (lVar5 = *(long *)(lVar5 + 0x18), lVar5 == 0)))) || (*(char *)(lVar5 + 0x21) == '\0')) {
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
                 ,0x63e,lVar5,lVar5 + 1,"LRS+load_report+start");
  }
  local_28 = param_1;
  lVar5 = FUN_002e2e80(PTR_FUN_04373078,0xf8);
  if (lVar5 != 0) {
    local_28 = 0;
                    /* try { // try from 00516b64 to 00516b6f has its CatchHandler @ 00516bac */
    local_18 = param_1;
    FUN_00523678(lVar5,&local_18,*(undefined8 *)(param_1 + 400));
    FUN_005189b4(&local_18);
  }
  puVar4 = *(undefined8 **)(param_1 + 0x198);
  *(long *)(param_1 + 0x198) = lVar5;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 00516b8c to 00516b8f has its CatchHandler @ 00516ba8 */
    (**(code **)*puVar4)();
  }
  FUN_005189b4(&local_28);
  return;
}


