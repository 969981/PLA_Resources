/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ff940; name: FUN_002ff940
 */


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002ff940(undefined8 *param_1,undefined8 *param_2,ulong param_3,byte param_4)

{
  undefined4 *puVar1;
  long *plVar2;
  char *pcVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined *puVar9;
  uint uVar10;
  ulong uVar11;
  long *plVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined2 local_90 [4];
  undefined8 local_88;
  undefined4 local_80 [2];
  long local_78;
  undefined2 local_70;
  undefined6 uStack_6e;
  undefined8 uStack_68;
  
  puVar20 = PTR___tls_init_043737c8;
  lVar15 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar8 = tpidr_el0;
  lVar16 = *(long *)(lVar8 + 0x30);
  uVar10 = *(uint *)(lVar16 + 0x30);
  if (uVar10 == 0xffffffff) {
    uVar10 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar16 + 0x30) = uVar10;
  }
  lVar15 = lVar15 + (ulong)uVar10 * 0x1d50;
  plVar14 = (long *)(lVar15 + 0x2b8);
  if ((param_4 & 1) == 0) {
    plVar14 = (long *)(lVar15 + 0x2c0);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar6) {
      *plVar14 = *plVar14 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar9 = PTR_DAT_043739a8;
  } while (cVar5 != '\0');
  uVar17 = param_1[3];
  if (uVar17 != 0) {
    pcVar3 = "short";
    if ((param_4 & 1) == 0) {
      pcVar3 = "long";
    }
    plVar14 = param_1 + 4;
    do {
      uVar11 = thunk_FUN_002f8c50(param_2,param_3);
      if ((uVar11 & 1) != 0) {
        return;
      }
      lVar15 = *(long *)(lVar8 + 0x58);
      if (lVar15 == 0) {
        lVar15 = param_1[1];
        if (puVar20 == (undefined *)0x0) {
          uVar11 = *(ulong *)(lVar8 + 0x30);
          uVar18 = uVar11 >> 4;
LAB_002ffad8:
          uVar18 = uVar18 ^ uVar11 >> 9;
        }
        else {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          uVar11 = *(ulong *)(lVar8 + 0x30);
          uVar18 = uVar11 >> 4;
          if (puVar20 == (undefined *)0x0) goto LAB_002ffad8;
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          uVar11 = *(ulong *)(lVar8 + 0x30);
          uVar18 = uVar18 ^ uVar11 >> 9;
        }
        if (puVar20 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
          uVar11 = *(ulong *)(lVar8 + 0x30);
        }
        uVar18 = uVar18 ^ uVar11 >> 0xe;
        uVar11 = 0;
        if (uVar17 != 0) {
          uVar11 = uVar18 / uVar17;
        }
        lVar15 = lVar15 + (uVar18 - uVar11 * uVar17) * 0x90;
      }
      else {
        lVar16 = *(long *)PTR_DAT_043738c0;
        if (puVar20 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar19 = *(long *)(lVar8 + 0x30);
        uVar10 = *(uint *)(lVar19 + 0x30);
        if (uVar10 == 0xffffffff) {
          uVar10 = nn::os::GetCurrentCoreNumber();
          *(uint *)(lVar19 + 0x30) = uVar10;
        }
        plVar12 = (long *)(lVar16 + (ulong)uVar10 * 0x1d50 + 0x2c8);
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar6) {
            *plVar12 = *plVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
      bVar6 = false;
      lVar16 = lVar15;
      do {
        if (puVar9[0x10] != '\0') {
          FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x137,1,
                       "EXECUTOR (%s) try to schedule %p (%s) (created %s:%d) to thread %ld",
                       *param_1,param_2,pcVar3,param_2[5],*(undefined4 *)(param_2 + 6),
                       *(undefined8 *)(lVar16 + 0x20));
          FUN_002ef750(lVar16);
          if (*(char *)(lVar16 + 0x69) != '\0') goto LAB_002ffb28;
LAB_002ffba8:
          plVar12 = (long *)(lVar16 + 0x50);
          if ((*plVar12 == 0) && (*(char *)(lVar16 + 0x68) == '\0')) {
            lVar15 = *(long *)PTR_DAT_043738c0;
            if (PTR___tls_init_043737c8 != (undefined *)0x0) {
              grpc_core::ExecCtx::exec_ctx_::__tls_init();
            }
            lVar19 = *(long *)(lVar8 + 0x30);
            uVar10 = *(uint *)(lVar19 + 0x30);
            if (uVar10 == 0xffffffff) {
              uVar10 = nn::os::GetCurrentCoreNumber();
              *(uint *)(lVar19 + 0x30) = uVar10;
            }
            plVar2 = (long *)(lVar15 + (ulong)uVar10 * 0x1d50 + 0x2d0);
            do {
              cVar5 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = *plVar2 + 1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            FUN_002ef970(lVar16 + 0x30);
          }
          if (param_2 == (undefined8 *)0x0) {
            if (4 < param_3) {
              FUN_002f0430(param_3,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",
                           0xb4);
            }
          }
          else {
            param_2[3] = param_3;
            *param_2 = 0;
            if (*plVar12 != 0) {
              plVar12 = *(long **)(lVar16 + 0x58);
            }
            *plVar12 = (long)param_2;
            *(undefined8 **)(lVar16 + 0x58) = param_2;
          }
          uVar11 = *(long *)(lVar16 + 0x60) + 1;
          *(ulong *)(lVar16 + 0x60) = uVar11;
          if ((2 < uVar11) && (uVar17 < (ulong)param_1[2])) {
            *(byte *)(lVar16 + 0x69) = ~param_4 & 1;
            cVar5 = *(char *)(lVar16 + 0x68);
            FUN_002ef790(lVar16);
            puVar20 = PTR___tls_init_043737c8;
            if (cVar5 != '\0') goto joined_r0x002ffca8;
            goto LAB_002ffbf0;
          }
          *(byte *)(lVar16 + 0x69) = ~param_4 & 1;
          FUN_002ef790(lVar16);
          puVar20 = PTR___tls_init_043737c8;
          goto joined_r0x002ffca8;
        }
        FUN_002ef750(lVar16);
        if (*(char *)(lVar16 + 0x69) == '\0') goto LAB_002ffba8;
LAB_002ffb28:
        FUN_002ef790(lVar16);
        uVar11 = *(long *)(lVar16 + 0x20) + 1;
        uVar18 = 0;
        if (uVar17 != 0) {
          uVar18 = uVar11 / uVar17;
        }
        lVar16 = param_1[1] + (uVar11 - uVar18 * uVar17) * 0x90;
        bVar6 = (bool)(bVar6 | lVar16 == lVar15);
      } while (lVar16 != lVar15);
      bVar6 = true;
      puVar20 = PTR___tls_init_043737c8;
LAB_002ffbf0:
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          goto joined_r0x002ffca8;
        }
        cVar5 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar7) {
          *plVar14 = 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar17 = param_1[3];
      if (uVar17 < (ulong)param_1[2]) {
        param_1[3] = uVar17 + 1;
        local_90[0] = 0x101;
        local_88 = 0;
        FUN_002f6abc(local_80,*param_1,PTR_LAB_043739b0,param_1[1] + uVar17 * 0x90,0,local_90);
        puVar1 = (undefined4 *)(param_1[1] + uVar17 * 0x90 + 0x70);
        if (puVar1 == local_80) {
          if (((char)local_70 != '\0') && (local_78 != 0)) {
                    /* try { // try from 002fff94 to 002fffbb has its CatchHandler @ 0030000c */
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x7e,2,
                         "assertion failed: %s","!options_.joinable() || impl_ == nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        else {
          lVar15 = param_1[1] + uVar17 * 0x90;
          *puVar1 = local_80[0];
          *(long *)(lVar15 + 0x78) = local_78;
          *(undefined8 *)(lVar15 + 0x88) = uStack_68;
          *(ulong *)(lVar15 + 0x80) = CONCAT62(uStack_6e,local_70);
          local_80[0] = 5;
          local_78 = 0;
          uStack_68 = 0;
          local_70 = 0x101;
        }
        lVar15 = param_1[1] + uVar17 * 0x90;
        piVar13 = (int *)(lVar15 + 0x70);
        iVar4 = *piVar13;
        plVar12 = *(long **)(lVar15 + 0x78);
        if (plVar12 == (long *)0x0) {
          if (iVar4 != 4) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x8b,2,
                         "assertion failed: %s","state_ == FAILED");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          goto LAB_002ffeb4;
        }
        if (iVar4 != 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/thd.h",0x82,2,
                       "assertion failed: %s","state_ == ALIVE");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *piVar13 = 2;
        (**(code **)(*plVar12 + 0x10))();
        *plVar14 = 0;
      }
      else {
LAB_002ffeb4:
        *plVar14 = 0;
      }
joined_r0x002ffca8:
      if (!bVar6) {
        return;
      }
      lVar15 = *(long *)PTR_DAT_043738c0;
      if (puVar20 != (undefined *)0x0) {
        grpc_core::ExecCtx::exec_ctx_::__tls_init();
      }
      lVar16 = *(long *)(lVar8 + 0x30);
      uVar10 = *(uint *)(lVar16 + 0x30);
      if (uVar10 == 0xffffffff) {
        uVar10 = nn::os::GetCurrentCoreNumber();
        *(uint *)(lVar16 + 0x30) = uVar10;
      }
      plVar12 = (long *)(lVar15 + (ulong)uVar10 * 0x1d50 + 0x2e0);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar6) {
          *plVar12 = *plVar12 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      uVar17 = param_1[3];
    } while (uVar17 != 0);
  }
  if (puVar9[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/executor.cc",0x119,1,
                 "EXECUTOR (%s) schedule %p (created %s:%d) inline",*param_1,param_2,param_2[5],
                 *(undefined4 *)(param_2 + 6));
  }
  if (puVar20 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  if (param_2 == (undefined8 *)0x0) {
    if (4 < param_3) {
      FUN_002f0430(param_3,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xb4);
    }
  }
  else {
    lVar15 = *(long *)(lVar8 + 0x30);
    *param_2 = 0;
    param_2[3] = param_3;
    plVar14 = (long *)(lVar15 + 8);
    if (*plVar14 != 0) {
      plVar14 = *(long **)(lVar15 + 0x10);
    }
    *plVar14 = (long)param_2;
    *(undefined8 **)(lVar15 + 0x10) = param_2;
  }
  return;
}


