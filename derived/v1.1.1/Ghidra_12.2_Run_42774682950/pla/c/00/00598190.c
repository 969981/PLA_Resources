/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00598190; name: FUN_00598190
 */


void FUN_00598190(long param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    if (0x13 < param_2) {
switchD_005981d0_default:
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0xcef,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (PTR_DAT_04374f08[0x10] != '\0') {
      pcVar5 = "SERVER";
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        pcVar5 = "CLIENT";
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x31c,1,"W:%p %s [%s] state %s -> %s [%s]",param_1,pcVar5,
                   *(undefined8 *)(param_1 + 0x20),"WRITING","WRITING+MORE",
                   (&PTR_s_INITIAL_WRITE_0418a650)[(int)param_2]);
    }
    *(undefined4 *)(param_1 + 0x40) = 2;
  }
  else if (*(int *)(param_1 + 0x40) == 0) {
    switch(param_2) {
    case 0:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x118);
      pcVar5 = "INITIAL_WRITE";
      break;
    case 1:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x120);
      pcVar5 = "START_NEW_STREAM";
      break;
    case 2:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x128);
      pcVar5 = "SEND_MESSAGE";
      break;
    case 3:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x130);
      pcVar5 = "SEND_INITIAL_METADATA";
      break;
    case 4:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x138);
      pcVar5 = "SEND_TRAILING_METADATA";
      break;
    case 5:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x140);
      pcVar5 = "RETRY_SEND_PING";
      break;
    case 6:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x148);
      pcVar5 = "CONTINUE_PINGS";
      break;
    case 7:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x150);
      pcVar5 = "GOAWAY_SENT";
      break;
    case 8:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x158);
      pcVar5 = "RST_STREAM";
      break;
    case 9:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x160);
      pcVar5 = "CLOSE_FROM_API";
      break;
    case 10:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x168);
      pcVar5 = "STREAM_FLOW_CONTROL";
      break;
    case 0xb:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x170);
      pcVar5 = "TRANSPORT_FLOW_CONTROL";
      break;
    case 0xc:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x178);
      pcVar5 = "SEND_SETTINGS";
      break;
    case 0xd:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x188);
      pcVar5 = "FLOW_CONTROL_UNSTALLED_BY_SETTING";
      break;
    case 0xe:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 400);
      pcVar5 = "FLOW_CONTROL_UNSTALLED_BY_UPDATE";
      break;
    case 0xf:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x198);
      pcVar5 = "APPLICATION_PING";
      break;
    case 0x10:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x1a0);
      pcVar5 = "KEEPALIVE_PING";
      break;
    case 0x11:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x1a8);
      pcVar5 = "TRANSPORT_FLOW_CONTROL_UNSTALLED";
      break;
    case 0x12:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x1b0);
      pcVar5 = "PING_RESPONSE";
      break;
    case 0x13:
      lVar7 = *(long *)PTR_DAT_043738c0;
      if (PTR___tls_init_043737c8 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar8 = tpidr_el0;
      lVar8 = *(long *)(lVar8 + 0x30);
      uVar4 = *(uint *)(lVar8 + 0x30);
      if (uVar4 == 0xffffffff) {
        uVar4 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar8 + 0x30) = uVar4;
      }
      plVar6 = (long *)(lVar7 + (ulong)uVar4 * 0x1d50 + 0x1b8);
      pcVar5 = "FORCE_RST_STREAM";
      break;
    default:
      goto switchD_005981d0_default;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = *plVar6 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (PTR_DAT_04374f08[0x10] != '\0') {
      if (2 < *(uint *)(param_1 + 0x40)) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x316,2,"Should never reach here.");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pcVar1 = "SERVER";
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        pcVar1 = "CLIENT";
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x31c,1,"W:%p %s [%s] state %s -> %s [%s]",param_1,pcVar1,
                   *(undefined8 *)(param_1 + 0x20),
                   (&PTR_DAT_0418a6f0)[(int)*(uint *)(param_1 + 0x40)],"WRITING",pcVar5);
    }
    *(undefined4 *)(param_1 + 0x40) = 1;
    plVar6 = (long *)(param_1 + 0x10);
    do {
      lVar7 = *plVar6;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar3) {
        *plVar6 = lVar7 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar8 = *(long *)(param_1 + 8);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar8 + 8),(long *)(param_1 + 8),
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x37b,lVar7,lVar7 + 1,"writing");
    }
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *(undefined1 **)(param_1 + 0xd8) = &LAB_005998b0;
    *(long *)(param_1 + 0xe0) = param_1;
    *(char **)(param_1 + 0xf8) =
         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
    ;
    *(undefined2 *)(param_1 + 0xf0) = 0;
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x100) = 0x38e;
    thunk_FUN_002f5250(*(undefined8 *)(param_1 + 0x30),param_1 + 0xd0,0);
    return;
  }
  return;
}


