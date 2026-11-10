/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6420; name: FUN_005a6420
 */


void FUN_005a6420(ulong param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  byte bVar20;
  long local_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  
  puVar4 = PTR_DAT_043738c0;
  puVar3 = PTR___tls_init_043737c8;
  lVar18 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar15 = tpidr_el0;
  lVar17 = *(long *)(lVar15 + 0x30);
  uVar5 = *(uint *)(lVar17 + 0x30);
  if (uVar5 == 0xffffffff) {
    uVar5 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar17 + 0x30) = uVar5;
  }
  plVar14 = (long *)(lVar18 + (ulong)uVar5 * 0x1d50 + 0x240);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar18 = *(long *)puVar4;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar17 = *(long *)(lVar15 + 0x30);
  uVar5 = *(uint *)(lVar17 + 0x30);
  if (uVar5 == 0xffffffff) {
    uVar5 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar17 + 0x30) = uVar5;
  }
  plVar14 = (long *)(lVar18 + (ulong)uVar5 * 0x1d50 + 600);
  do {
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar2) {
      *plVar14 = *plVar14 + 1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  plVar14 = (long *)(param_1 & 0xfffffffffffffffc);
  if (*plVar14 == 0) {
    uVar5 = (uint)*(byte *)(plVar14 + 1);
  }
  else {
    uVar5 = (uint)plVar14[1];
  }
  cVar1 = *(char *)(param_2 + 0x38);
  iVar6 = FUN_005a79b0(plVar14);
  lVar18 = *(long *)puVar4;
  if (puVar3 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar15 = *(long *)(lVar15 + 0x30);
  uVar7 = *(uint *)(lVar15 + 0x30);
  if (uVar7 == 0xffffffff) {
    uVar7 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar15 + 0x30) = uVar7;
  }
  lVar18 = lVar18 + (ulong)uVar7 * 0x1d50;
  plVar13 = plVar14 + 4;
  if (iVar6 == 0) {
    plVar12 = (long *)(lVar18 + 600);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = *plVar12 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if ((long *)*plVar13 != (long *)0x0) {
      plVar12 = *(long **)*plVar13;
      if (plVar12 == (long *)0x0) {
        uStack_98 = plVar14[5];
        local_80 = *plVar13;
        lStack_68 = plVar14[7];
        lStack_70 = plVar14[6];
        uStack_78 = plVar14[5];
        bVar19 = 0;
      }
      else {
        plVar11 = plVar12 + 1;
        do {
          lVar18 = *plVar11;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar2) {
            *plVar11 = lVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar15 = *plVar12;
        if ((lVar15 != 0) && (*(char *)(lVar15 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar15 + 8),plVar12,lVar18,lVar18 + 1)
          ;
        }
        if (lVar18 < 1) goto LAB_005a6818;
        uStack_98 = plVar14[5];
        local_80 = *plVar13;
        lStack_68 = plVar14[7];
        lStack_70 = plVar14[6];
        bVar19 = 0;
        uStack_78 = plVar14[5];
        if (plVar14[4] == 0) {
          uVar7 = (uint)uStack_78 & 0xff;
          iVar6 = 0;
          local_a0 = local_80;
          lStack_88 = lStack_68;
          lStack_90 = lStack_70;
          goto joined_r0x005a66f0;
        }
      }
joined_r0x005a66a8:
      iVar6 = 0;
      local_a0 = local_80;
      lStack_90 = lStack_70;
      lStack_88 = lStack_68;
      goto joined_r0x005a66a8;
    }
    uStack_98 = plVar14[5];
    local_a0 = *plVar13;
    lStack_88 = plVar14[7];
    lStack_90 = plVar14[6];
    uVar7 = (uint)*(byte *)(plVar14 + 5);
    bVar19 = 0;
    iVar6 = 0;
    if (0x7e < uVar5) goto LAB_005a6774;
LAB_005a673c:
    iVar8 = 1;
    iVar16 = uVar7 - 0x7f;
    if (uVar7 < 0x7f) goto LAB_005a6788;
LAB_005a6748:
    bVar20 = (byte)uVar7;
    uVar7 = FUN_005a7a00(iVar16);
  }
  else {
    if (cVar1 == '\0') {
      plVar12 = (long *)(lVar18 + 0x270);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      FUN_005a86d0(&local_80,plVar13);
      iVar6 = 0;
      bVar19 = 0x80;
      uStack_98 = uStack_78;
      if (local_80 != 0) goto joined_r0x005a66a8;
      uVar7 = (uint)uStack_78 & 0xff;
      local_a0 = local_80;
      lStack_88 = lStack_68;
      lStack_90 = lStack_70;
    }
    else {
      plVar12 = (long *)(lVar18 + 0x268);
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar2) {
          *plVar12 = *plVar12 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar12 = (long *)*plVar13;
      if ((plVar12 != (long *)0x0) && (plVar11 = (long *)*plVar12, plVar11 != (long *)0x0)) {
        plVar12 = plVar11 + 1;
        do {
          lVar18 = *plVar12;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar2) {
            *plVar12 = lVar18 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        lVar15 = *plVar11;
        if ((lVar15 != 0) && (*(char *)(lVar15 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                       "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar15 + 8),plVar11,lVar18,lVar18 + 1)
          ;
        }
        if (lVar18 < 1) goto LAB_005a6818;
        plVar12 = (long *)*plVar13;
      }
      uStack_98 = plVar14[5];
      local_a0 = *plVar13;
      lStack_88 = plVar14[7];
      lStack_90 = plVar14[6];
      uStack_78 = plVar14[5] & 0xff;
      if (plVar12 != (long *)0x0) {
        uStack_78 = plVar14[5];
      }
      bVar19 = 0;
      iVar6 = 1;
      uStack_78 = uStack_78 + 1;
joined_r0x005a66a8:
      if (uStack_78 >> 0x20 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                     ,0x203,2,"assertion failed: %s","v.length <= (0xffffffffu)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar7 = (uint)uStack_78;
    }
joined_r0x005a66f0:
    if (uVar5 < 0x7f) goto LAB_005a673c;
LAB_005a6774:
    iVar8 = FUN_005a7a00(uVar5 - 0x7f);
    iVar16 = uVar7 - 0x7f;
    if (0x7e < uVar7) goto LAB_005a6748;
LAB_005a6788:
    bVar20 = (byte)uVar7;
    uVar7 = 1;
  }
  if (0x16 < iVar8 + 1U) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x249,2,"assertion failed: %s",
                 "1 + len_key_len < (sizeof(size_t) + sizeof(uint8_t*) - 1 + sizeof(void*))");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar9 = (undefined1 *)FUN_005a6270(param_2,iVar8 + 1U);
  *puVar9 = 0;
  if (iVar8 + -1 == 0) {
    puVar9[1] = (char)uVar5;
    plVar13 = (long *)*plVar14;
  }
  else {
    puVar9[1] = 0x7f;
    FUN_005a7a40(uVar5 - 0x7f,puVar9 + 2,iVar8 + -1);
    plVar13 = (long *)*plVar14;
  }
  if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
    plVar12 = plVar13 + 1;
    do {
      lVar18 = *plVar12;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar2) {
        *plVar12 = lVar18 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar15 = *plVar13;
    if ((lVar15 != 0) && (*(char *)(lVar15 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar15 + 8),plVar13,lVar18,lVar18 + 1);
    }
    if (lVar18 < 1) {
LAB_005a6818:
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  lStack_b8 = plVar14[1];
  local_c0 = *plVar14;
  lStack_a8 = plVar14[3];
  lStack_b0 = plVar14[2];
  FUN_005a6e00(param_2,&local_c0);
  pbVar10 = (byte *)FUN_005a6270(param_2,uVar7 + iVar6);
  if (uVar7 - 1 == 0) {
    *pbVar10 = bVar19 | bVar20;
    local_e0 = local_a0;
    uStack_d8 = uStack_98;
    lStack_d0 = lStack_90;
    lStack_c8 = lStack_88;
  }
  else {
    *pbVar10 = bVar19 | 0x7f;
    FUN_005a7a40(iVar16,pbVar10 + 1,uVar7 - 1);
    local_e0 = local_a0;
    uStack_d8 = uStack_98;
    lStack_d0 = lStack_90;
    lStack_c8 = lStack_88;
  }
  if (iVar6 != 0) {
    pbVar10[uVar7] = 0;
  }
  local_a0 = local_e0;
  uStack_98 = uStack_d8;
  lStack_90 = lStack_d0;
  lStack_88 = lStack_c8;
  FUN_005a6e00(param_2,&local_e0);
  return;
}


