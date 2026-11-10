/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005171e0; name: FUN_005171e0
 */


void FUN_005171e0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x50) = 1;
  uVar7 = *param_2;
  plVar5 = *(long **)(param_1 + 0x48);
  if (plVar5 != (long *)0x0) {
    lVar4 = plVar5[1];
    plVar1 = plVar5 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar4 + 8),plVar5 + 1,lVar6);
    }
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
      FUN_002e2ea0(PTR_LAB_04373088,plVar5);
    }
  }
  plVar5 = (long *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x48) = uVar7;
  *param_2 = 0;
  do {
    lVar4 = *plVar5;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
    if (bVar3) {
      *plVar5 = lVar4 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar6 = *(long *)(param_1 + 8);
  if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                 "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar6 + 8),(long *)(param_1 + 8),lVar4,
                 lVar4 + 1);
  }
  *(undefined1 *)(param_1 + 0x51) = 1;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar4 = FUN_002f00fc(*(undefined8 *)(lVar4 + 0x30));
  FUN_002f5c60(param_1 + 0x58,
               *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x18) + 0x20) +
                                  0x18) + 0x18) + lVar4,param_1 + 0x90);
  return;
}


