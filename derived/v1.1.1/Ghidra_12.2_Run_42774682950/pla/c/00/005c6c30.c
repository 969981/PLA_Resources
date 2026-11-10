/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005c6c30; name: FUN_005c6c30
 */


void FUN_005c6c30(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined4 local_58;
  undefined1 local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar5 = PTR___tls_init_043737c8;
  puVar4 = PTR_DAT_043737c0;
  local_54 = 0;
  local_60 = 1;
  local_58 = 0xffffffff;
  local_88 = PTR_DAT_043737c0 + 0x10;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_50 = 0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_043737d0;
  lVar3 = tpidr_el0;
  local_48 = *(undefined8 *)(lVar3 + 0x30);
  if ((*PTR_DAT_043737d0 & 1) != 0) {
    FUN_002efbd4();
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined ***)(lVar3 + 0x30) = &local_88;
  plVar7 = DAT_0439f040;
  if ((DAT_0439f040 != (long *)0x0) && (plVar9 = (long *)*DAT_0439f040, plVar9 != (long *)0x0)) {
    plVar11 = plVar9 + 1;
    lVar10 = *plVar9;
    do {
      lVar12 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
                    /* try { // try from 005c6d0c to 005c6f13 has its CatchHandler @ 005c7058 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar9,lVar12);
    }
    if (lVar12 < 1) {
                    /* try { // try from 005c6f8c to 005c7053 has its CatchHandler @ 005c7058 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar12 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  plVar7 = DAT_0439f060;
  if ((DAT_0439f060 != (long *)0x0) && (plVar9 = (long *)*DAT_0439f060, plVar9 != (long *)0x0)) {
    plVar11 = plVar9 + 1;
    lVar10 = *plVar9;
    do {
      lVar12 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar9,lVar12);
    }
    if (lVar12 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar12 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  plVar7 = DAT_0439f080;
  if ((DAT_0439f080 != (long *)0x0) && (plVar9 = (long *)*DAT_0439f080, plVar9 != (long *)0x0)) {
    plVar11 = plVar9 + 1;
    lVar10 = *plVar9;
    do {
      lVar12 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar9,lVar12);
    }
    if (lVar12 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar12 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  plVar7 = DAT_0439f0a0;
  if ((DAT_0439f0a0 != (long *)0x0) && (plVar9 = (long *)*DAT_0439f0a0, plVar9 != (long *)0x0)) {
    plVar11 = plVar9 + 1;
    lVar10 = *plVar9;
    do {
      lVar12 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar9,lVar12);
    }
    if (lVar12 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar12 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  plVar7 = DAT_0439f0c0;
  if ((DAT_0439f0c0 != (long *)0x0) && (plVar9 = (long *)*DAT_0439f0c0, plVar9 != (long *)0x0)) {
    plVar11 = plVar9 + 1;
    lVar10 = *plVar9;
    do {
      lVar12 = *plVar11;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar2) {
        *plVar11 = lVar12 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((lVar10 != 0) && (*(char *)(lVar10 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar10 + 8),plVar9,lVar12);
    }
    if (lVar12 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar12 == 1) {
      (*(code *)plVar7[3])(plVar7[4]);
    }
  }
  local_88 = puVar4 + 0x10;
  local_60 = local_60 | 1;
                    /* try { // try from 005c6f28 to 005c6f3b has its CatchHandler @ 005c7054 */
  FUN_002eff00(&local_88);
  uVar8 = local_48;
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  *(undefined8 *)(lVar3 + 0x30) = uVar8;
  if ((((byte)local_60 >> 2 & 1) == 0) && ((*puVar6 & 1) != 0)) {
                    /* try { // try from 005c6f84 to 005c6f87 has its CatchHandler @ 005c7054 */
    FUN_002efca0();
  }
  return;
}


