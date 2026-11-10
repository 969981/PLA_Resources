/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005239c4; name: FUN_005239c4
 */


void FUN_005239c4(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0xd9) == '\0') {
    lVar5 = FUN_0053ed18(param_1 + 0x28);
    puVar4 = PTR___tls_init_043737c8;
    if (PTR_DAT_04374a30[0x10] != '\0') {
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar6 = tpidr_el0;
      lVar7 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
      if (lVar7 < lVar5) {
        if (puVar4 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar6 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
        lVar6 = lVar5 - lVar6;
      }
      else {
        lVar6 = 0;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x27c,1,
                   "[xds_client %p] Failed to connect to xds server (chand: %p) retry timer will fire in %ldms."
                   ,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),*(long *)(param_1 + 0x20),
                   lVar6);
    }
    plVar1 = (long *)(param_1 + 0x10);
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *(long *)(param_1 + 8);
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar7 + 8),(long *)(param_1 + 8),
                   "external/com_google_grpc_base/src/core/ext/filters/client_channel/xds/xds_client.cc"
                   ,0x281,lVar6,lVar6 + 1,"RetryableCall+retry_timer_start");
    }
    local_28 = 0;
    FUN_00518d08(&local_28);
    FUN_002f5c60(param_1 + 0x58,lVar5,param_1 + 0x90);
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  return;
}


