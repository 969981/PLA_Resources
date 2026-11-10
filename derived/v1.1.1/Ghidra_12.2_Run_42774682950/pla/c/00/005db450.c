/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005db450; name: FUN_005db450
 */


void FUN_005db450(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  plVar9 = param_1 + 0x54;
  do {
    lVar6 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR___tls_init_043737c8;
  } while (cVar2 != '\0');
  if (lVar6 + -1 == 0) {
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = tpidr_el0;
    uVar5 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
    plVar9 = param_1 + 0x55;
    param_1[0x56] = uVar5;
    do {
      lVar8 = *plVar9;
      while (lVar8 == 1) {
        while (*plVar9 == 1) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar3) {
            *plVar9 = 2;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            return;
          }
        }
        ClearExclusiveLocal();
        lVar8 = *plVar9;
      }
    } while (lVar8 != 0);
    plVar9 = (long *)*param_1;
    if (PTR_DAT_04373fd8[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",plVar9[0xb],plVar9,plVar9[4],"max_age max_idle_timer");
    }
    plVar1 = plVar9 + 1;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar7 = *plVar9;
    if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar7 + 8),plVar9,
                   "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar8,
                   lVar8 + 1,"max_age max_idle_timer");
    }
    if (lVar8 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar6 = FUN_002f00fc(*(undefined8 *)(lVar6 + 0x30));
    FUN_002f5c60(param_1 + 0x14,param_1[0x1b] + lVar6,param_1 + 0x1e);
    param_1[0x55] = 3;
  }
  return;
}


