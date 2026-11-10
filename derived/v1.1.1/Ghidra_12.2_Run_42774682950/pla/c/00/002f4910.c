/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f4910; name: FUN_002f4910
 */


undefined8 FUN_002f4910(void)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  
  puVar5 = PTR___tls_init_043737c8;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  puVar6 = PTR_DAT_043738b8;
  lVar4 = tpidr_el0;
  plVar11 = *(long **)(lVar4 + 0x30);
  plVar10 = (long *)plVar11[3];
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar13 = plVar10[0xb];
  if (PTR_DAT_043738b8[0x10] != '\0') {
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      plVar11 = *(long **)(lVar4 + 0x30);
    }
    if ((*(byte *)(plVar11 + 5) & 1) == 0) {
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11);
      if ((uVar8 & 1) != 0) {
        plVar11[5] = plVar11[5] | 1;
        goto LAB_002f49b8;
      }
      uVar9 = 0;
    }
    else {
LAB_002f49b8:
      uVar9 = 1;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xc0,1,
                 "C:%p grpc_combiner_continue_exec_ctx contended=%d exec_ctx_ready_to_finish=%d time_to_execute_final_list=%d"
                 ,plVar10,lVar13 == 0,uVar9,(char)plVar10[0xd]);
  }
  if (lVar13 == 0) {
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    plVar11 = *(long **)(lVar4 + 0x30);
    if ((*(byte *)(plVar11 + 5) & 1) == 0) {
      uVar8 = (**(code **)(*plVar11 + 0x10))(plVar11);
      if ((uVar8 & 1) == 0) goto LAB_002f49f8;
      plVar11[5] = plVar11[5] | 1;
    }
    uVar8 = thunk_FUN_002f8c40();
    if (((uVar8 & 1) == 0) && (uVar8 = FUN_00300278(), (uVar8 & 1) != 0)) {
      lVar13 = *(long *)PTR_DAT_043738c0;
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar12 = *(long *)(lVar4 + 0x30);
      uVar7 = *(uint *)(lVar12 + 0x30);
      if (uVar7 == 0xffffffff) {
        uVar7 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar12 + 0x30) = uVar7;
      }
      plVar11 = (long *)(lVar13 + (ulong)uVar7 * 0x1d50 + 0x290);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_002f4d8c;
    }
  }
LAB_002f49f8:
  if (((char)plVar10[0xd] == '\0') || (3 < plVar10[0xc])) {
    lVar13 = FUN_0030bc8c(plVar10 + 1);
    if (puVar6[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xde,1,
                   "C:%p maybe_finish_one n=%p",plVar10,lVar13);
    }
    if (lVar13 == 0) {
      lVar13 = *(long *)PTR_DAT_043738c0;
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar12 = *(long *)(lVar4 + 0x30);
      uVar7 = *(uint *)(lVar12 + 0x30);
      if (uVar7 == 0xffffffff) {
        uVar7 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar12 + 0x30) = uVar7;
      }
      plVar11 = (long *)(lVar13 + (ulong)uVar7 * 0x1d50 + 0x290);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
        if (bVar3) {
          *plVar11 = *plVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_002f4d8c:
      if (puVar5 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar13 = *(long *)(lVar4 + 0x30);
      lVar12 = **(long **)(lVar13 + 0x18);
      if (puVar5 == (undefined *)0x0) {
        *(long *)(lVar13 + 0x18) = lVar12;
      }
      else {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        *(long *)(*(long *)(lVar4 + 0x30) + 0x18) = lVar12;
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
        lVar13 = *(long *)(lVar4 + 0x30);
        lVar12 = *(long *)(lVar13 + 0x18);
      }
      if (lVar12 == 0) {
        if (puVar5 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          lVar13 = *(long *)(lVar4 + 0x30);
        }
        *(undefined8 *)(lVar13 + 0x20) = 0;
        cVar2 = puVar6[0x10];
      }
      else {
        cVar2 = puVar6[0x10];
      }
      if (cVar2 != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xb1,1,
                     "C:%p queue_offload",plVar10);
      }
      FUN_00300160(plVar10 + 0x10,0,0,0);
      return 1;
    }
    uVar8 = *(ulong *)(lVar13 + 0x18);
    *(undefined1 *)(lVar13 + 0x20) = 0;
    (**(code **)(lVar13 + 8))(*(undefined8 *)(lVar13 + 0x10),uVar8);
    if (4 < uVar8) {
      FUN_002f0430(uVar8,"external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xed);
    }
  }
  else {
    plVar11 = (long *)plVar10[0xe];
    if (plVar11 == (long *)0x0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xf0,2,
                   "assertion failed: %s","c != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar10[0xe] = 0;
    plVar10[0xf] = 0;
    cVar2 = puVar6[0x10];
    while( true ) {
      if (cVar2 != '\0') {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xf6,1,
                     "C:%p execute_final[%d] c=%p",plVar10,0,plVar11);
      }
      uVar8 = plVar11[3];
      *(undefined1 *)(plVar11 + 4) = 0;
      plVar1 = (long *)*plVar11;
      (*(code *)plVar11[1])(plVar11[2],uVar8);
      if (4 < uVar8) {
        FUN_002f0430(uVar8,"external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0xfd);
      }
      if (plVar1 == (long *)0x0) break;
      cVar2 = puVar6[0x10];
      plVar11 = plVar1;
    }
  }
  if (puVar5 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar13 = *(long *)(lVar4 + 0x30);
  lVar12 = **(long **)(lVar13 + 0x18);
  if (puVar5 == (undefined *)0x0) {
    *(long *)(lVar13 + 0x18) = lVar12;
  }
  else {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
    *(long *)(*(long *)(lVar4 + 0x30) + 0x18) = lVar12;
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
    lVar13 = *(long *)(lVar4 + 0x30);
    lVar12 = *(long *)(lVar13 + 0x18);
  }
  if (lVar12 == 0) {
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar13 = *(long *)(lVar4 + 0x30);
    }
    *(undefined8 *)(lVar13 + 0x20) = 0;
  }
  plVar11 = plVar10 + 0xc;
  *(undefined1 *)(plVar10 + 0xd) = 0;
  do {
    lVar13 = *plVar11;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
    if (bVar3) {
      *plVar11 = lVar13 + -2;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (puVar6[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x108,1,
                 "C:%p finish old_state=%ld",plVar10,lVar13);
  }
  switch(lVar13) {
  case 0:
  case 1:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x125,2,
                 "Should never reach here.");
                    /* WARNING: Subroutine does not return */
    abort();
  case 2:
    break;
  case 3:
    return 1;
  case 4:
  case 5:
    if (plVar10[0xe] != 0) {
      *(undefined1 *)(plVar10 + 0xd) = 1;
    }
  default:
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar13 = *(long *)(lVar4 + 0x30);
    lVar12 = *(long *)(lVar13 + 0x18);
    *plVar10 = lVar12;
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar13 = *(long *)(lVar4 + 0x30);
      lVar12 = *plVar10;
    }
    *(long **)(lVar13 + 0x18) = plVar10;
    if (lVar12 != 0) {
      return 1;
    }
    if (puVar5 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
      lVar13 = *(long *)(lVar4 + 0x30);
    }
    *(long **)(lVar13 + 0x20) = plVar10;
    return 1;
  }
  if (puVar6[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x42,1,
                 "C:%p really_destroy",plVar10);
  }
  if (*plVar11 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x43,2,
                 "assertion failed: %s","gpr_atm_no_barrier_load(&lock->state) == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (plVar10 + 10 != (long *)plVar10[1]) {
                    /* try { // try from 002f4f48 to 002f4f97 has its CatchHandler @ 002f4f98 */
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2b,2,
                 "assertion failed: %s","head_.Load(MemoryOrder::RELAXED) == &stub_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((long *)plVar10[9] != (long *)plVar10[1]) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/mpscq.h",0x2c,2,
                 "assertion failed: %s","tail_ == &stub_");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_002e2ea0(PTR_LAB_04373088,plVar10);
  return 1;
}


