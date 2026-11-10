/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6b70; name: FUN_005a6b70
 */


void FUN_005a6b70(long *param_1,ulong param_2,ulong param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *local_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar9 = (long *)(param_2 & 0xfffffffffffffffc);
  if (*plVar9 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/surface/validate_metadata.h",0x24,2,
                 "assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)plVar9[1] < 5) {
    bVar3 = true;
  }
  else {
    bVar3 = *(int *)(plVar9[2] + plVar9[1] + -4) != 0x6e69622d;
  }
  lVar10 = *(long *)PTR_DAT_043738c0;
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
  lVar10 = lVar10 + (ulong)uVar4 * 0x1d50;
  plVar1 = plVar9 + 4;
  if (bVar3) {
    plVar5 = (long *)(lVar10 + 600);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar3) {
        *plVar5 = *plVar5 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    local_60 = (long *)*plVar1;
    if ((local_60 != (long *)0x0) && (plVar5 = (long *)*local_60, plVar5 != (long *)0x0)) {
      plVar6 = plVar5 + 1;
      do {
        lVar10 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar8 = *plVar5;
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                     "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar5,lVar10,lVar10 + 1);
      }
      if (lVar10 < 1) {
LAB_005a6de0:
                    /* WARNING: Subroutine does not return */
        __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                      0x7c,"RefNonZero");
      }
      local_60 = (long *)*plVar1;
    }
    lVar10 = *plVar1;
    lVar11 = plVar9[7];
    lVar8 = plVar9[6];
    param_1[1] = plVar9[5];
    *param_1 = lVar10;
    param_1[3] = lVar11;
    param_1[2] = lVar8;
    *(undefined2 *)(param_1 + 4) = 0;
    uStack_58 = plVar9[5];
  }
  else {
    if ((param_3 & 1) != 0) {
      plVar5 = (long *)(lVar10 + 0x268);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = *plVar5 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar5 = (long *)*plVar1;
      if ((plVar5 != (long *)0x0) && (plVar6 = (long *)*plVar5, plVar6 != (long *)0x0)) {
        plVar5 = plVar6 + 1;
        do {
          lVar10 = *plVar5;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
          if (bVar3) {
            *plVar5 = lVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar8 = *plVar6;
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar6,lVar10,lVar10 + 1);
        }
        if (lVar10 < 1) goto LAB_005a6de0;
        plVar5 = (long *)*plVar1;
      }
      lVar8 = plVar9[5];
      lVar10 = *plVar1;
      lVar12 = plVar9[7];
      lVar11 = plVar9[6];
      *(undefined2 *)(param_1 + 4) = 0x100;
      param_1[1] = lVar8;
      *param_1 = lVar10;
      param_1[3] = lVar12;
      param_1[2] = lVar11;
      uVar7 = plVar9[5] & 0xff;
      if (plVar5 != (long *)0x0) {
        uVar7 = plVar9[5];
      }
      uVar7 = uVar7 + 1;
      goto LAB_005a6d9c;
    }
    plVar9 = (long *)(lVar10 + 0x270);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar3) {
        *plVar9 = *plVar9 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_005a86d0(&local_60,plVar1);
    *(undefined2 *)(param_1 + 4) = 0x80;
    param_1[1] = uStack_58;
    *param_1 = (long)local_60;
    param_1[3] = lStack_48;
    param_1[2] = lStack_50;
  }
  uVar7 = uStack_58 & 0xff;
  if (local_60 != (long *)0x0) {
    uVar7 = uStack_58;
  }
LAB_005a6d9c:
  param_1[5] = uVar7;
  return;
}


