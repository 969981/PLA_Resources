/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003043b0; name: FUN_003043b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_003043b0(long param_1)

{
  long *plVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong *puVar17;
  ulong *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [24];
  ulong local_f0 [8];
  undefined8 local_b0;
  undefined4 local_a8;
  ulong *local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  char *local_80;
  undefined4 local_78;
  
  puVar5 = PTR_DAT_043739c8;
  puVar4 = PTR_DAT_043738c0;
  puVar3 = PTR___tls_init_043737c8;
  lVar9 = *(long *)(param_1 + 0x170);
  uVar14 = *(ulong *)(lVar9 + 0x10);
  if (3 < uVar14) {
    uVar14 = 4;
  }
  if (uVar14 != 0) {
    uVar15 = 0;
    puVar16 = local_f0;
    puVar17 = (ulong *)(*(long **)(lVar9 + 8) + 1);
    if (**(long **)(lVar9 + 8) != 0) goto LAB_0030442c;
    do {
      *puVar16 = (ulong)((long)puVar17 + 1);
      uVar20 = (ulong)(byte)*puVar17;
      puVar18 = puVar17;
      while( true ) {
        uVar15 = uVar15 + 1;
        puVar16[1] = uVar20;
        puVar16 = puVar16 + 2;
        puVar17 = puVar18 + 4;
        if (uVar14 <= uVar15) goto LAB_0030443c;
        if (puVar18[3] == 0) break;
LAB_0030442c:
        *puVar16 = puVar17[1];
        uVar20 = *puVar17;
        puVar18 = puVar17;
      }
    } while( true );
  }
LAB_0030443c:
  lVar13 = tpidr_el0;
  uVar15 = 0;
LAB_0030446c:
  do {
    uVar20 = uVar14;
    *(undefined4 *)(param_1 + 0x178) = 1;
    local_b0 = 0;
    local_a8 = 0;
    local_98 = (undefined4)uVar20;
    bVar7 = *(char *)(param_1 + 0x17c) != '\0';
    local_90 = (undefined1 *)0x0;
    if (bVar7) {
      local_90 = auStack_108;
    }
    local_88 = 0;
    if (bVar7) {
      local_88 = 0x18;
    }
    uStack_84 = 0;
    local_a0 = local_f0;
    FUN_002fd8f0(*(undefined4 *)(lVar9 + 0x20));
    FUN_002fdac0(*(undefined4 *)(*(long *)(param_1 + 0x170) + 0x10));
    do {
      lVar9 = *(long *)puVar4;
      if (puVar3 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar21 = *(long *)(lVar13 + 0x30);
      uVar8 = *(uint *)(lVar21 + 0x30);
      if (uVar8 == 0xffffffff) {
        uVar8 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar21 + 0x30) = uVar8;
      }
      plVar1 = (long *)(lVar9 + (ulong)uVar8 * 0x1d50 + 0x90);
      do {
        cVar2 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar10 = nnsocketRecvMsg(*(undefined4 *)(param_1 + 0x10),&local_b0,0);
      if (-1 < (long)uVar10) {
        bVar7 = false;
        goto joined_r0x00304548;
      }
      piVar11 = __errno_location();
    } while (*piVar11 == 4);
    bVar7 = true;
joined_r0x00304548:
    if ((uVar15 != 0) && ((long)uVar10 < 1)) {
      lVar9 = *(long *)(param_1 + 0x170);
      *(undefined4 *)(param_1 + 0x178) = 1;
      lVar13 = *(ulong *)(lVar9 + 0x20) - uVar15;
      if (*(ulong *)(lVar9 + 0x20) < uVar15 || lVar13 == 0) goto LAB_003047c8;
      goto LAB_003047c0;
    }
    if (bVar7) {
      piVar11 = __errno_location();
      if (*piVar11 == 0xb) {
        *(undefined4 *)(param_1 + 0x178) = 0;
        dVar23 = *(double *)(param_1 + 0x18);
        dVar25 = *(double *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = 0;
        dVar22 = dVar23 + dVar23;
        if (dVar23 + dVar23 <= dVar25) {
          dVar22 = dVar25;
        }
        dVar24 = dVar25 * 0.01 + dVar23 * 0.99;
        if (dVar23 * 0.8 < dVar25) {
          dVar24 = dVar22;
        }
        *(double *)(param_1 + 0x18) = dVar24;
        if (PTR_DAT_043739c0[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x220,1,
                       "TCP:%p notify_on_read",param_1);
        }
        FUN_002f9700(*(undefined8 *)(param_1 + 8),param_1 + 0x1b0);
        return;
      }
      FUN_00305050(*(undefined8 *)(param_1 + 0x170));
      piVar11 = __errno_location();
      lVar9 = FUN_002f1cd0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x302,
                           *piVar11,"recvmsg");
      if (lVar9 == 0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/error.h",0xfc,2,
                     "assertion failed: %s","error != GRPC_ERROR_NONE");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar12 = FUN_002f0d20(lVar9,0xb,(long)*(int *)(param_1 + 0x10));
      uVar12 = FUN_002f0d20(uVar12,3,0xe);
      FUN_002f2ff0(&local_80,*(undefined8 *)(param_1 + 0x288));
      uVar12 = FUN_002f1340(uVar12,4,&local_80);
      FUN_00304250(param_1,uVar12);
      local_78 = 0x303;
      goto LAB_00304864;
    }
    if (uVar10 == 0) {
      FUN_00305050(*(undefined8 *)(param_1 + 0x170));
      FUN_002f2c60(auStack_128,"Socket closed");
      uVar12 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x310,
                            auStack_128,0,0);
      uVar12 = FUN_002f0d20(uVar12,0xb,(long)*(int *)(param_1 + 0x10));
      uVar12 = FUN_002f0d20(uVar12,3,0xe);
      FUN_002f2ff0(&local_80,*(undefined8 *)(param_1 + 0x288));
      uVar12 = FUN_002f1340(uVar12,4,&local_80);
      FUN_00304250(param_1,uVar12);
      local_78 = 0x311;
      goto LAB_00304864;
    }
    FUN_002fd720(uVar10 & 0xffffffff);
    do {
      cVar2 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar7) {
        *(ulong *)puVar5 = *(long *)puVar5 + uVar10;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    dVar22 = *(double *)(param_1 + 0x20) + (double)uVar10;
    lVar9 = *(long *)(param_1 + 0x170);
    *(double *)(param_1 + 0x20) = dVar22;
    uVar14 = *(ulong *)(lVar9 + 0x20);
    if (uVar14 - uVar15 < uVar10) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x319,2,
                   "assertion failed: %s",
                   "(size_t)read_bytes <= tcp->incoming_buffer->length - total_read_bytes");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar15 = uVar10 + uVar15;
    if (uVar15 == uVar14 || *(int *)(param_1 + 0x178) == 0) {
      if (*(int *)(param_1 + 0x178) == 0) {
        dVar25 = *(double *)(param_1 + 0x18);
        dVar23 = dVar25 + dVar25;
        if (dVar25 + dVar25 <= dVar22) {
          dVar23 = dVar22;
        }
        dVar24 = dVar22 * 0.01 + dVar25 * 0.99;
        if (dVar25 * 0.8 < dVar22) {
          dVar24 = dVar23;
        }
        *(double *)(param_1 + 0x18) = dVar24;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      if (uVar15 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc",0x349,2,
                     "assertion failed: %s","total_read_bytes > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar13 = uVar14 - uVar15;
      if (uVar15 <= uVar14 && lVar13 != 0) {
LAB_003047c0:
        FUN_00305d10(lVar9,lVar13,param_1 + 0x48);
      }
LAB_003047c8:
      FUN_00304250(param_1,0);
      local_78 = 0x350;
LAB_00304864:
      local_80 = "external/com_google_grpc_base/src/core/lib/iomgr/tcp_posix.cc";
      FUN_00302460(param_1,&DAT_03896236,&local_80);
      return;
    }
    uVar14 = 0;
    if (uVar20 != 0) {
      uVar14 = 0;
      puVar16 = local_f0 + 1;
      uVar19 = local_f0[1];
      uVar6 = uVar10 - local_f0[1];
      if (local_f0[1] <= uVar10) goto joined_r0x003045e4;
      do {
        local_f0[uVar14 * 2] = puVar16[-1] + uVar10;
        local_f0[uVar14 * 2 + 1] = uVar19 - uVar10;
        uVar14 = uVar14 + 1;
        uVar6 = 0;
joined_r0x003045e4:
        do {
          uVar10 = uVar6;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_0030446c;
          puVar16 = puVar16 + 2;
          uVar19 = *puVar16;
          uVar6 = uVar10 - uVar19;
        } while (uVar19 <= uVar10);
      } while( true );
    }
  } while( true );
}


