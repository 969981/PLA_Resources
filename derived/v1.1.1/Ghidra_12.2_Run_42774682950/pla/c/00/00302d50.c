/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00302d50; name: FUN_00302d50
 */


undefined8 FUN_00302d50(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long local_3f30;
  ulong local_3f28;
  long local_3f20 [1998];
  undefined8 local_b0;
  undefined4 local_a8;
  long *local_a0;
  int local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [32];
  
  puVar7 = PTR___tls_init_043737c8;
  lVar18 = *(long *)(param_1 + 0x180);
  lVar19 = *(long *)(param_1 + 0x188);
  plVar1 = (long *)(PTR_DAT_043739c8 + 8);
  lVar13 = *(long *)(lVar18 + 0x10);
  lVar2 = param_1 + 0x350;
  lVar6 = tpidr_el0;
  lVar21 = 0;
LAB_00302db0:
  do {
    if (lVar21 - lVar13 == 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x5a2,2,
                   "assertion failed: %s","iov_size > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar18 = *(long *)(lVar18 + 8);
    if (*(long *)(lVar18 + lVar21 * 0x20) == 0) {
      lVar20 = lVar18 + lVar21 * 0x20;
      local_3f30 = lVar20 + lVar19 + 9;
      local_3f28 = (ulong)*(byte *)(lVar20 + 8);
    }
    else {
      lVar20 = lVar18 + lVar21 * 0x20;
      local_3f30 = *(long *)(lVar20 + 0x10) + lVar19;
      local_3f28 = *(ulong *)(lVar20 + 8);
    }
    lVar20 = lVar21 + 1;
    local_3f28 = local_3f28 - lVar19;
    *(undefined8 *)(param_1 + 0x188) = 0;
    uVar12 = local_3f28;
    if (lVar20 == lVar13) {
      iVar22 = 1;
    }
    else {
      plVar14 = (long *)(lVar18 + lVar21 * 0x20 + 0x30);
      lVar18 = 0;
      plVar15 = local_3f20;
      do {
        lVar20 = lVar18;
        if (plVar14[-2] == 0) {
          *plVar15 = (long)plVar14 + -7;
          uVar9 = (ulong)*(byte *)(plVar14 + -1);
        }
        else {
          *plVar15 = *plVar14;
          uVar9 = plVar14[-1];
        }
        plVar15[1] = uVar9;
        uVar12 = uVar9 + uVar12;
        *(undefined8 *)(param_1 + 0x188) = 0;
        if (lVar20 == 0x3e6) break;
        plVar15 = plVar15 + 2;
        plVar14 = plVar14 + 4;
        lVar18 = lVar20 + 1;
      } while ((lVar21 - lVar13) + 2 + lVar20 != 0);
      iVar22 = (int)lVar20 + 2;
      lVar20 = lVar21 + lVar20 + 1 + 1;
    }
    local_b0 = 0;
    local_a8 = 0;
    local_84 = 0;
    local_a0 = &local_3f30;
    local_98 = iVar22;
    if (*(long *)(param_1 + 0x370) != 0) {
      if (*(char *)(param_1 + 0x37d) != '\0') {
        FUN_00303520();
        goto LAB_0030321c;
      }
      *(undefined1 *)(param_1 + 0x37d) = 0;
      FUN_002ef750(lVar2);
      FUN_002f2c60(auStack_80,"TracedBuffer list shutdown");
      uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x4f7,
                           auStack_80,0,0);
      if (4 < uVar9) {
        FUN_002f0430(uVar9,"external/com_google_grpc_base\\src/core/lib/iomgr/buffer_list.h",0x98);
      }
      FUN_002ef790(lVar2);
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    local_90 = 0;
    local_88 = 0;
    FUN_002fd380(uVar12 & 0xffffffff);
    FUN_002fd550(iVar22);
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    while( true ) {
      lVar18 = *(long *)PTR_DAT_043738c0;
      if (puVar7 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar13 = *(long *)(lVar6 + 0x30);
      uVar8 = *(uint *)(lVar13 + 0x30);
      if (uVar8 == 0xffffffff) {
        uVar8 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar13 + 0x30) = uVar8;
      }
      plVar14 = (long *)(lVar18 + (ulong)uVar8 * 0x1d50 + 0x88);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar5) {
          *plVar14 = *plVar14 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      lVar13 = nnsocketSendMsg(uVar3,&local_b0,0);
      if (-1 < lVar13) break;
      piVar10 = __errno_location();
      if (*piVar10 != 4) {
        piVar10 = __errno_location();
        if (*piVar10 == 0xb) {
          *(long *)(param_1 + 0x188) = lVar19;
          for (; lVar21 != 0; lVar21 = lVar21 + -1) {
            FUN_00306180(*(undefined8 *)(param_1 + 0x180));
          }
          return 0;
        }
        piVar10 = __errno_location();
        iVar22 = *piVar10;
        piVar10 = __errno_location();
        if (iVar22 == 0x20) {
          lVar18 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",
                                0x5c9,*piVar10,"sendmsg");
        }
        else {
          lVar18 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",
                                0x5ce,*piVar10,"sendmsg");
        }
        if (lVar18 == 0) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                       "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar11 = FUN_002f0d20(lVar18,0xb,(long)*(int *)(param_1 + 0x10));
        uVar11 = FUN_002f0d20(uVar11,3,0xe);
        FUN_002f2ff0(auStack_80,*(undefined8 *)(param_1 + 0x288));
        uVar11 = FUN_002f1340(uVar11,4,auStack_80);
        *param_2 = uVar11;
        FUN_00305050(*(undefined8 *)(param_1 + 0x180));
        if (*(long *)(param_1 + 0x370) == 0) {
          return 1;
        }
        FUN_002ef750(lVar2);
        FUN_002f2c60(auStack_80,"TracedBuffer list shutdown");
        uVar12 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x4f7,
                              auStack_80,0,0);
        if (4 < uVar12) {
          FUN_002f0430(uVar12,"external/com_google_grpc_base\\src/core/lib/iomgr/buffer_list.h",0x98
                      );
        }
        FUN_002ef790(lVar2);
        *(undefined8 *)(param_1 + 0x370) = 0;
        return 1;
      }
    }
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = *plVar1 + lVar13;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (*(long *)(param_1 + 0x188) != 0) {
LAB_0030321c:
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x5d7,2,
                   "assertion failed: %s","tcp->outgoing_byte_idx == 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(int *)(param_1 + 0x378) = *(int *)(param_1 + 0x378) + (int)lVar13;
    lVar18 = *(long *)(param_1 + 0x180);
    uVar12 = uVar12 - lVar13;
    if (uVar12 == 0) {
      lVar19 = 0;
      lVar13 = *(long *)(lVar18 + 0x10);
      lVar21 = lVar20;
      if (lVar20 == lVar13) goto LAB_00303080;
      goto LAB_00302db0;
    }
    lVar16 = lVar20 + -1;
    plVar14 = (long *)(*(long *)(lVar18 + 8) + lVar20 * 0x20 + -0x20);
    if (*plVar14 != 0) goto LAB_00303028;
    while( true ) {
      uVar17 = (ulong)*(byte *)(plVar14 + 1);
      uVar9 = uVar12 - uVar17;
      lVar21 = lVar16;
      if (uVar12 < uVar17) break;
      while( true ) {
        uVar12 = uVar9;
        lVar16 = lVar21 + -1;
        plVar14 = plVar14 + -4;
        if (uVar12 == 0) {
          lVar19 = 0;
          lVar13 = *(long *)(lVar18 + 0x10);
          if (lVar21 != lVar13) goto LAB_00302db0;
          goto LAB_00303080;
        }
        if (*plVar14 == 0) break;
LAB_00303028:
        uVar17 = plVar14[1];
        uVar9 = uVar12 - uVar17;
        lVar21 = lVar16;
        if (uVar12 < uVar17) goto LAB_00303034;
      }
    }
LAB_00303034:
    lVar19 = uVar17 - uVar12;
    *(long *)(param_1 + 0x188) = lVar19;
    lVar13 = *(long *)(lVar18 + 0x10);
    lVar21 = lVar16;
    if (lVar16 == lVar13) {
LAB_00303080:
      *param_2 = 0;
      FUN_00305050(*(undefined8 *)(param_1 + 0x180));
      return 1;
    }
  } while( true );
}


