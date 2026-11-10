/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005f7dd8; name: FUN_005f7dd8
 */


void FUN_005f7dd8(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  if (PTR_DAT_04375170[0x10] != '\0') {
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      lVar5 = (long)param_1 + 0x21;
    }
    else {
      lVar5 = param_1[6];
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/xds/xds_routing.cc"
                 ,0x213,1,"[xds_routing_lb %p] XdsRoutingChild %p %s: shutting down child",
                 param_1[3],param_1,lVar5);
  }
  FUN_002fe0e0(*(undefined8 *)(param_1[7] + 0x28),*(undefined8 *)(param_1[3] + 0x28));
  puVar4 = (undefined8 *)param_1[7];
  param_1[7] = 0;
  if (puVar4 != (undefined8 *)0x0) {
                    /* try { // try from 005f7e1c to 005f7e1f has its CatchHandler @ 005f7f3c */
    (**(code **)*puVar4)();
  }
  FUN_005f83f4(param_1 + 8,0);
  if ((char)param_1[0x1a] != '\0') {
    FUN_002f5c80(param_1 + 10);
  }
  lVar5 = param_1[1];
  *(undefined1 *)((long)param_1 + 0xd1) = 1;
  plVar1 = param_1 + 2;
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
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                 "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar5 + 8),param_1 + 1,lVar6);
  }
  if (lVar6 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar6 == 1) {
    (**(code **)(*param_1 + 8))(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
    return;
  }
  return;
}


