/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005388d0; name: FUN_005388d0
 */


void FUN_005388d0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  if (((*(char *)(param_1 + 0xb9) != '\0') || (*(char *)(param_1 + 0xb8) != '\0')) ||
     (*(long *)(param_1 + 0xb0) != 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0xb8) = 1;
  plVar1 = (long *)(param_1 + 0x40);
  do {
    lVar6 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar6 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (PTR_DAT_04374bb0[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x3c0,0,"SUBCHANNEL: %p %12s 0x%lx -> 0x%lx [%s]",param_1,"WEAK_REF",lVar6,
                 lVar6 + 1,"connecting");
  }
  if (lVar6 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x2ee,2,"assertion failed: %s","old_refs != 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(param_1 + 0x130) == '\0') {
    *(undefined1 *)(param_1 + 0x130) = 1;
    local_38 = *(undefined8 *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 0x128);
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar5 = tpidr_el0;
    lVar5 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
    lVar5 = lVar5 + lVar6;
    lVar6 = FUN_0053ed18(param_1 + 0xf0);
    local_30 = lVar5;
    if (lVar5 <= lVar6) {
      local_30 = lVar6;
    }
    *(long *)(param_1 + 0x120) = lVar6;
    local_28 = *(undefined8 *)(param_1 + 0x10);
    FUN_00538bfc(param_1,1);
    (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
              (*(long **)(param_1 + 0x48),&local_38,param_1 + 0x50,param_1 + 0x68);
    return;
  }
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x3c5,2,"assertion failed: %s","!have_retry_alarm_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  lVar6 = *(long *)(param_1 + 0x120);
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar5 = tpidr_el0;
  lVar5 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
  if (lVar6 - lVar5 < 1) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x3ca,1,"Subchannel %p: Retry immediately",param_1);
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc",
                 0x3cc,1,"Subchannel %p: Retry in %ld milliseconds",param_1);
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
  puVar4 = PTR_LAB_04374bb8;
  *(undefined2 *)(param_1 + 400) = 0;
  *(char **)(param_1 + 0x198) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/subchannel.cc";
  *(undefined4 *)(param_1 + 0x1a0) = 0x3d0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined **)(param_1 + 0x178) = puVar4;
  *(long *)(param_1 + 0x180) = param_1;
  FUN_002f5c60(param_1 + 0x138,*(undefined8 *)(param_1 + 0x120),param_1 + 0x170);
  return;
}


