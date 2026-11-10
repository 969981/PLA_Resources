/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005ed928; name: FUN_005ed928
 */


void FUN_005ed928(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
               ,0x106,0,"Start resolving.");
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
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                 ,0x10a,lVar5,lVar5 + 1,"dns-resolving");
  }
  if (*(char *)(param_1 + 0x49) != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
                 ,0x10b,2,"assertion failed: %s","!resolving_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  *(undefined1 **)(param_1 + 0x58) = &LAB_005edc78;
  *(long *)(param_1 + 0x60) = param_1;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined2 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(char **)(param_1 + 0x78) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/dns/native/dns_resolver.cc"
  ;
  *(undefined4 *)(param_1 + 0x80) = 0x10f;
  *(undefined4 *)(param_1 + 0x90) = 0;
  FUN_002fdea0(*(undefined8 *)(param_1 + 0x30),"https",*(undefined8 *)(param_1 + 0x40),
               param_1 + 0x50,param_1 + 0x160);
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  uVar4 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
  *(undefined8 *)(param_1 + 0x128) = uVar4;
  return;
}


