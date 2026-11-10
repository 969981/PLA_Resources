/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e9ef0; name: FUN_005e9ef0
 */


void FUN_005e9ef0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_DAT_04375158;
  if (*(char *)(param_1 + 0xd0) != '\0') {
    return;
  }
  if (PTR_DAT_04375158[0x10] == '\0') {
    cVar2 = *(char *)(param_1 + 0x158);
  }
  else {
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      lVar5 = param_1 + 0x21;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x30);
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x293,1,"[priority_lb %p] child %s (%p): deactivating -- will remove in %d ms.",
                 *(undefined8 *)(param_1 + 0x18),lVar5,param_1,900000);
    cVar2 = *(char *)(param_1 + 0x158);
  }
  if (cVar2 != '\0') {
    if (puVar4[0x10] != '\0') {
      if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
        lVar5 = param_1 + 0x21;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x30);
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                   ,0x26f,1,"[priority_lb %p] child %s (%p): cancelling failover timer",
                   *(undefined8 *)(param_1 + 0x18),lVar5,param_1);
    }
    FUN_002f5c80(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x158) = 0;
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
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/lb_policy/priority/priority.cc"
                 ,0x29b,lVar5,lVar5 + 1,"ChildPriority+timer");
  }
  FUN_005eb030(0);
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  lVar5 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
  FUN_002f5c60(param_1 + 0x50,lVar5 + 900000,param_1 + 0x88);
  *(undefined1 *)(param_1 + 0xd0) = 1;
  return;
}


