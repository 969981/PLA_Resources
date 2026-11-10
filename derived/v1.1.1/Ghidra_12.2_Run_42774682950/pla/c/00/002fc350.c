/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002fc350; name: FUN_002fc350
 */


ulong FUN_002fc350(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_70 [32];
  
  lVar11 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar4 = tpidr_el0;
  lVar12 = *(long *)(lVar4 + 0x30);
  uVar5 = *(uint *)(lVar12 + 0x30);
  if (uVar5 == 0xffffffff) {
    uVar5 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar12 + 0x30) = uVar5;
  }
  plVar1 = (long *)(lVar11 + (ulong)uVar5 * 0x1d50 + 0x40);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = *plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (param_2 == (undefined8 *)0x0) {
    if (*(long *)(lVar4 + 0x50) == param_1) {
      return 0;
    }
    if ((param_3 >> 1 & 1) != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x31c,2,
                   "assertion failed: %s","(flags & GRPC_POLLSET_REEVALUATE_POLLING_ON_WAKEUP) == 0"
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar8 = *(undefined8 **)(param_1 + 0x30);
    puVar13 = (undefined8 *)(param_1 + 0x20);
    if (puVar8 == puVar13) {
LAB_002fc5f4:
      *(undefined4 *)(param_1 + 0x48) = 1;
      return 0;
    }
    lVar11 = puVar8[3];
    *(undefined8 *)(lVar11 + 0x10) = puVar8[2];
    *(long *)(puVar8[2] + 0x18) = lVar11;
    if (puVar8 == (undefined8 *)0x0) goto LAB_002fc5f4;
    puVar9 = *(undefined8 **)(lVar4 + 0x48);
    if (puVar9 == puVar8) {
      puVar8[2] = puVar13;
      puVar8[3] = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar8;
      *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
      puVar8 = *(undefined8 **)(param_1 + 0x30);
      if (puVar8 == puVar13) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        lVar11 = puVar8[3];
        *(undefined8 *)(lVar11 + 0x10) = puVar8[2];
        *(long *)(puVar8[2] + 0x18) = lVar11;
      }
      if (((param_3 & 1) == 0) && (puVar9 == puVar8)) {
        puVar8[2] = puVar13;
        puVar8[3] = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 **)(param_1 + 0x38) = puVar8;
        *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
        return 0;
      }
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
    }
    puVar8[2] = puVar13;
    puVar8[3] = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar8;
    *(undefined8 **)(puVar8[3] + 0x10) = puVar8;
    lVar11 = thunk_FUN_002fcd20(*puVar8);
  }
  else {
    if (param_2 == (undefined8 *)0x1) {
      if ((param_3 >> 1 & 1) != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x301,2,
                     "assertion failed: %s",
                     "(flags & GRPC_POLLSET_REEVALUATE_POLLING_ON_WAKEUP) == 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar13 = *(undefined8 **)(param_1 + 0x30);
      if (puVar13 == (undefined8 *)(param_1 + 0x20)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        lVar11 = thunk_FUN_002fcd20(*puVar13);
        while( true ) {
          if (lVar11 != 0) {
            if (uVar10 == 0) {
              FUN_002f2c60(auStack_70,"Kick Failure");
              uVar10 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc"
                                    ,0x2f1,auStack_70,0,0);
            }
            uVar10 = FUN_002f13f0(uVar10,lVar11);
          }
          puVar13 = (undefined8 *)puVar13[2];
          if (puVar13 == (undefined8 *)(param_1 + 0x20)) break;
          lVar11 = thunk_FUN_002fcd20(*puVar13);
        }
      }
      *(undefined4 *)(param_1 + 0x48) = 1;
      goto joined_r0x002fc59c;
    }
    if ((*(undefined8 **)(lVar4 + 0x48) == param_2) && ((param_3 & 1) == 0)) {
      return 0;
    }
    if ((param_3 >> 1 & 1) != 0) {
      *(undefined4 *)(param_2 + 1) = 1;
    }
    *(undefined4 *)((long)param_2 + 0xc) = 1;
    lVar11 = thunk_FUN_002fcd20(*param_2);
  }
  if (lVar11 == 0) {
    return 0;
  }
  FUN_002f2c60(auStack_70,"Kick Failure");
  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x2f1,
                       auStack_70,0,0);
  uVar10 = FUN_002f13f0(uVar6,lVar11);
joined_r0x002fc59c:
  uVar7 = uVar10;
  if (4 < uVar10) {
    uVar7 = FUN_002f03c0(uVar10,"external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",
                         0x337);
  }
  if (uVar7 == 0) {
    return uVar10;
  }
  FUN_002f1e00("pollset_kick_ext",uVar7,
               "external/com_google_grpc_base/src/core/lib/iomgr/ev_poll_posix.cc",0x337);
  return uVar10;
}


