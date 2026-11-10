/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ec230; name: FUN_005ec230
 */


void FUN_005ec230(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  if (PTR_DAT_04375158[0x10] != '\0') {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar4 = param_1 + 0x21;
    }
    else {
      lVar4 = *(long *)(param_1 + 0x30);
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x25f,1,"[priority_lb %p] child %s (%p): starting failover timer for %d ms",
                 *(long *)(param_1 + 0x18),lVar4,param_1,
                 *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x38));
  }
  plVar1 = (long *)(param_1 + 0x10);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar5 = *(long *)(param_1 + 8);
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar5 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x264,lVar4,lVar4 + 1,"ChildPriority+OnFailoverTimerLocked");
  }
  FUN_005eb030(0);
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar4 = FUN_002f00fc(*(undefined8 *)(lVar4 + 0x30));
  FUN_002f5c60(param_1 + 0xd8,lVar4 + *(int *)(*(long *)(param_1 + 0x18) + 0x38),param_1 + 0x110);
  *(undefined1 *)(param_1 + 0x158) = 1;
  return;
}


