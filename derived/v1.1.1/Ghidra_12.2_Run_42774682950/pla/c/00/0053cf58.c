/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053cf58; name: FUN_0053cf58
 */


void FUN_0053cf58(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long local_30;
  long lStack_28;
  
  puVar3 = PTR_DAT_04374be8;
  if (*(char *)(param_1 + 0x60) != '\0') {
    return;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x78,2,"assertion failed: %s","call_state_ == nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (PTR_DAT_04374be8[0x10] == '\0') {
    plVar4 = *(long **)(param_1 + 0x58);
  }
  else {
    uVar6 = FUN_003d3430(1);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x5b,1,"HealthCheckClient %p: setting state=%s reason=%s",param_1,uVar6,
                 "starting health watch");
    plVar4 = *(long **)(param_1 + 0x58);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,1);
  }
  plVar4 = (long *)(param_1 + 0x10);
  do {
    lVar7 = *plVar4;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
    if (bVar2) {
      *plVar4 = lVar7 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar8 = *(long *)(param_1 + 8);
  if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),(long *)(param_1 + 8),lVar7,
                 lVar7 + 1);
  }
  local_30 = param_1;
  lVar7 = FUN_002e2e80(PTR_FUN_04373078,0xa78);
  if (lVar7 != 0) {
    local_30 = 0;
                    /* try { // try from 0053d020 to 0053d02b has its CatchHandler @ 0053d108 */
    lStack_28 = param_1;
    FUN_0053dd20(lVar7,&lStack_28,*(undefined8 *)(param_1 + 0x28));
    FUN_0053d124(&lStack_28);
  }
  puVar5 = *(undefined8 **)(param_1 + 0x68);
  *(long *)(param_1 + 0x68) = lVar7;
  if (puVar5 != (undefined8 *)0x0) {
                    /* try { // try from 0053d048 to 0053d04b has its CatchHandler @ 0053d104 */
    (**(code **)*puVar5)();
  }
  FUN_0053d124(&local_30);
  if (puVar3[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x7c,1,"HealthCheckClient %p: created CallState %p",param_1,
                 *(undefined8 *)(param_1 + 0x68));
  }
  FUN_0053d1f0(*(undefined8 *)(param_1 + 0x68));
  return;
}


