/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0053db60; name: FUN_0053db60
 */


void FUN_0053db60(long param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_28;
  
  puVar3 = PTR_DAT_04374be8;
  if (PTR_DAT_04374be8[0x10] == '\0') {
    plVar4 = *(long **)(param_1 + 0x58);
  }
  else {
    uVar6 = FUN_003d3430(3);
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x5b,1,"HealthCheckClient %p: setting state=%s reason=%s",param_1,uVar6,
                 "health check call failed; will retry after backoff");
    plVar4 = *(long **)(param_1 + 0x58);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,3);
  }
  lVar5 = FUN_0053ed18(param_1 + 0x70);
  if (puVar3[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x87,1,"HealthCheckClient %p: health check call lost...",param_1);
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar7 = tpidr_el0;
    lVar7 = FUN_002f00fc(*(undefined8 *)(lVar7 + 0x30));
    if (lVar5 - lVar7 < 1) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                   ,0x8e,1,"HealthCheckClient %p: ... retrying immediately.",param_1);
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                   ,0x8a,1,"HealthCheckClient %p: ... will retry in %ldms.",param_1);
    }
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
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/health/health_check_client.cc"
                 ,0x93,lVar7,lVar7 + 1,"health_retry_timer");
  }
  local_28 = 0;
  FUN_0053d124(&local_28);
  *(undefined1 *)(param_1 + 0x120) = 1;
  FUN_002f5c60(param_1 + 0xa0,lVar5,param_1 + 0xd8);
  return;
}


