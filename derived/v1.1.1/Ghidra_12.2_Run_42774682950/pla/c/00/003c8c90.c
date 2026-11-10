/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003c8c90; name: FUN_003c8c90
 */


ulong FUN_003c8c90(long *param_1,long *param_2)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  ulong uVar23;
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  long local_e0;
  long lStack_d8;
  long local_d0;
  long **pplStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  puVar22 = PTR_DAT_04373fd8;
  lVar18 = *param_1;
  plVar13 = (long *)(lVar18 + 0x78);
  if (PTR_DAT_04373fd8[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                 "%s %p:%p REF %s",*(undefined8 *)(lVar18 + 0xd0),plVar13,
                 *(undefined8 *)(lVar18 + 0x98),&DAT_038aa230);
  }
  plVar12 = (long *)(lVar18 + 0x80);
  do {
    lVar18 = *plVar12;
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
    if (bVar6) {
      *plVar12 = lVar18 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  lVar16 = *plVar13;
  if ((lVar16 != 0) && (*(char *)(lVar16 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                 "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar16 + 8),plVar13,
                 "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar18,
                 lVar18 + 1,&DAT_038aa230);
  }
  if (lVar18 < 1) goto LAB_003c9580;
  lVar19 = *param_1;
  uVar9 = FUN_003e27e0(lVar19);
  FUN_002fd1c0();
  lVar18 = *(long *)(lVar19 + 0x108) + 0x9e0;
  lVar16 = 0;
  if (param_1[2] != 0) {
    lVar16 = 0x18;
  }
  auVar25 = FUN_003f59b4(uVar9,lVar16 + lVar18);
  lVar11 = auVar25._8_8_;
  FUN_003c9694(lVar11,auVar25._0_8_,param_1);
  *param_2 = lVar11;
  FUN_002f2710(&local_a0);
  puVar5 = PTR_DAT_043738c0;
  puVar4 = PTR___tls_init_043737c8;
  lVar16 = tpidr_el0;
  if (*(char *)(lVar11 + 0xb0) == '\0') {
    lVar21 = *(long *)PTR_DAT_043738c0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar16 = *(long *)(lVar16 + 0x30);
    uVar7 = *(uint *)(lVar16 + 0x30);
    if (uVar7 == 0xffffffff) {
      uVar7 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar16 + 0x30) = uVar7;
    }
    plVar13 = (long *)(lVar21 + (ulong)uVar7 * 0x1d50 + 8);
    do {
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined8 *)(lVar11 + 0x9b0) = 0;
    *(long *)(lVar11 + 0x9b8) = param_1[1];
    if (param_1[8] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x17a,2,
                   "assertion failed: %s","args->add_initial_metadata_count == 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
LAB_003c8fc8:
    *(undefined4 *)(lVar11 + 0x6b8) = 0;
    lVar16 = param_1[9];
    lVar21 = param_1[2];
    if (lVar21 == 0) goto LAB_003c90dc;
LAB_003c8fd8:
    plVar13 = (long *)(lVar11 + lVar18);
    plVar13[1] = 0;
    plVar13[2] = 0;
    *plVar13 = lVar21;
    *(long **)(lVar11 + 0xa8) = plVar13;
    lVar18 = param_1[2];
    plVar13 = (long *)(lVar18 + 0x9e0);
    if (puVar22[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x55,0,
                   "%s %p:%p REF %s",*(undefined8 *)(lVar18 + 0xa38),plVar13,
                   *(undefined8 *)(lVar18 + 0xa00),"child");
    }
    plVar12 = (long *)(lVar18 + 0x9e8);
    do {
      lVar18 = *plVar12;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar6) {
        *plVar12 = lVar18 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar21 = *plVar13;
    if ((lVar21 != 0) && (*(char *)(lVar21 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x85,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar21 + 8),plVar13,
                   "external/com_google_grpc_base\\src/core/lib/transport/transport.h",0x58,lVar18,
                   lVar18 + 1,"child");
    }
    if (lVar18 < 1) {
LAB_003c9580:
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x89,"RefNonZero");
    }
    if (*(char *)(lVar11 + 0xb0) != '\x01') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x186,2,
                   "assertion failed: %s","call->is_client");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar18 = param_1[2];
    if (*(char *)(lVar18 + 0xb0) != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x187,2,
                   "assertion failed: %s","!args->parent->is_client");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar7 = *(uint *)(param_1 + 3);
    if ((uVar7 & 1) != 0) {
      if (*(long *)(lVar18 + 0x6c0) <= lVar16) {
        lVar16 = *(long *)(lVar18 + 0x6c0);
      }
    }
    if ((uVar7 >> 2 & 1) == 0) {
      if ((uVar7 >> 1 & 1) != 0) {
        FUN_002f2c60(auStack_80,
                     "Census context propagation requested without Census tracing propagation");
        lVar18 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x19c,
                              auStack_80,0,0);
        uVar23 = 0;
        if (lVar18 != 0) {
          FUN_002f2c60(&local_e0,"Call creation failed");
          uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x12e,
                               &local_e0,0,0);
          uVar23 = FUN_002f13f0(uVar9,lVar18);
        }
        bVar1 = *(byte *)(param_1 + 3);
        goto joined_r0x003c920c;
      }
      uVar23 = 0;
      if ((*(byte *)(param_1 + 3) >> 3 & 1) == 0) goto LAB_003c91e0;
LAB_003c9210:
      *(undefined1 *)(lVar11 + 0xb2) = 1;
      bVar6 = *(long *)(param_1[2] + 200) != 0;
    }
    else {
      if ((uVar7 >> 1 & 1) == 0) {
        FUN_002f2c60(auStack_80,
                     "Census tracing propagation requested without Census context propagation");
        lVar18 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x194,
                              auStack_80,0,0);
        uVar23 = 0;
        if (lVar18 != 0) {
          FUN_002f2c60(&local_e0,"Call creation failed");
          uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x12e,
                               &local_e0,0,0);
          uVar23 = FUN_002f13f0(uVar9,lVar18);
        }
        uVar9 = *(undefined8 *)(param_1[2] + 0x628);
        pcVar14 = *(code **)(lVar11 + 0x630);
      }
      else {
        uVar23 = 0;
        uVar9 = *(undefined8 *)(lVar18 + 0x628);
        pcVar14 = *(code **)(lVar11 + 0x630);
      }
      if (pcVar14 != (code *)0x0) {
        (*pcVar14)(*(undefined8 *)(lVar11 + 0x628));
      }
      *(undefined8 *)(lVar11 + 0x628) = uVar9;
      *(undefined8 *)(lVar11 + 0x630) = 0;
      bVar1 = *(byte *)(param_1 + 3);
joined_r0x003c920c:
      if ((bVar1 >> 3 & 1) != 0) goto LAB_003c9210;
LAB_003c91e0:
      bVar6 = false;
    }
  }
  else {
    *(undefined8 *)(lVar11 + 0x9c0) = 0;
    *(undefined8 *)(lVar11 + 0x9b8) = 0;
    *(undefined8 *)(lVar11 + 0x9b0) = 0;
    lVar21 = *(long *)puVar5;
    if (puVar4 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar16 = *(long *)(lVar16 + 0x30);
    uVar7 = *(uint *)(lVar16 + 0x30);
    if (uVar7 == 0xffffffff) {
      uVar7 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar16 + 0x30) = uVar7;
    }
    plVar13 = (long *)(lVar21 + (ulong)uVar7 * 0x1d50);
    do {
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *plVar13 = *plVar13 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      puVar4 = PTR_DAT_04373fe0;
    } while (cVar2 != '\0');
    if (2 < (ulong)param_1[8]) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x16b,2,
                   "assertion failed: %s",
                   "args->add_initial_metadata_count < MAX_SEND_EXTRA_METADATA_COUNT");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (param_1[8] == 0) goto LAB_003c8fc8;
    uVar23 = 0;
    do {
      lVar16 = param_1[7];
      *(undefined8 *)(lVar11 + uVar23 * 0x20 + 0x658) = *(undefined8 *)(lVar16 + uVar23 * 8);
      uVar20 = *(ulong *)(lVar16 + uVar23 * 8);
      lVar16 = FUN_003db7f0();
      if (lVar16 != -0x35010ff23f0011ef) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x34,
                     2,"assertion failed: %s",
                     "grpc_core::StaticMetadataInitCanary() == grpc_core::kGrpcStaticMetadataInitCanary"
                    );
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long **)puVar4 == (long *)0x0) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/static_metadata.h",0x35,
                     2,"assertion failed: %s","grpc_core::g_static_metadata_slice_table != nullptr")
        ;
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if ((*(long *)(uVar20 & 0xfffffffffffffffc) == **(long **)puVar4) ||
         (iVar8 = FUN_002f3c80(), iVar8 == 0)) {
        uVar20 = *(ulong *)(param_1[7] + uVar23 * 8) & 0xfffffffffffffffc;
        plVar13 = *(long **)(uVar20 + 0x20);
        if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
          plVar12 = plVar13 + 1;
          do {
            lVar16 = *plVar12;
            cVar2 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar6) {
              *plVar12 = lVar16 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          lVar21 = *plVar13;
          if ((lVar21 != 0) && (*(char *)(lVar21 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                         "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar21 + 8),plVar13,lVar16,
                         lVar16 + 1);
          }
          if (lVar16 < 1) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("prior > 0",
                          "external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x7c,
                          "RefNonZero");
          }
        }
        uStack_98 = *(undefined8 *)(uVar20 + 0x28);
        local_a0 = *(long **)(uVar20 + 0x20);
        uStack_88 = *(undefined8 *)(uVar20 + 0x38);
        uStack_90 = *(undefined8 *)(uVar20 + 0x30);
      }
      puVar22 = PTR_DAT_04373fd8;
      uVar23 = uVar23 + 1;
    } while (uVar23 < (ulong)param_1[8]);
    *(int *)(lVar11 + 0x6b8) = (int)param_1[8];
    lVar16 = param_1[9];
    lVar21 = param_1[2];
    if (lVar21 != 0) goto LAB_003c8fd8;
LAB_003c90dc:
    uVar23 = 0;
    bVar6 = false;
  }
  *(long *)(lVar11 + 0x6c0) = lVar16;
  lStack_d8 = param_1[6];
  local_d0 = lVar11 + 0x618;
  pplStack_c8 = &local_a0;
  local_c0 = *(undefined8 *)(lVar11 + 0x98);
  local_b0 = *(undefined8 *)(lVar11 + 0x10);
  lStack_a8 = lVar11 + 0x18;
  local_e0 = lVar11 + 0x9e0;
  lStack_b8 = lVar16;
  lVar18 = FUN_003d7a30(lVar19 + 0x78,1,&LAB_003c9870,lVar11,&local_e0);
  if (lVar18 != 0) {
    if (uVar23 == 0) {
      FUN_002f2c60(auStack_80,"Call creation failed");
      uVar23 = FUN_002f0690("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x12e,
                            auStack_80,0,0);
    }
    uVar23 = FUN_002f13f0(uVar23,lVar18);
  }
  lVar18 = param_1[2];
  if (lVar18 != 0) {
    plVar13 = (long *)(lVar18 + 0xa0);
    lVar19 = *(long *)(lVar11 + 0xa8);
    lVar16 = *plVar13;
    if (lVar16 == 0) {
      puVar10 = *(ulong **)(lVar18 + 0x10);
      do {
        uVar15 = *puVar10;
        uVar20 = uVar15 + 0x30;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar10,0x10);
        if (bVar3) {
          *puVar10 = uVar20;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (puVar10[1] < uVar20) {
        lVar16 = FUN_003f5a34(puVar10,0x30);
      }
      else {
        lVar16 = (long)puVar10 + uVar15 + 0x20;
      }
      *(undefined8 *)(lVar16 + 0x20) = 0;
      FUN_002ef6d0(lVar16);
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
                    /* try { // try from 003c936c to 003c9373 has its CatchHandler @ 003c9690 */
          FUN_002ef710(lVar16);
          lVar16 = *plVar13;
          FUN_002ef750(lVar16);
          lVar18 = *(long *)(lVar16 + 0x20);
          goto joined_r0x003c9384;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar16;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_002ef750(lVar16);
    lVar18 = *(long *)(lVar16 + 0x20);
joined_r0x003c9384:
    if (lVar18 == 0) {
      *(long *)(lVar16 + 0x20) = lVar11;
      plVar13 = (long *)(lVar19 + 8);
      *(long *)(lVar19 + 0x10) = lVar11;
    }
    else {
      *(long *)(lVar19 + 8) = lVar18;
      lVar18 = *(long *)(*(long *)(lVar18 + 0xa8) + 0x10);
      *(long *)(lVar19 + 0x10) = lVar18;
      *(long *)(*(long *)(lVar18 + 0xa8) + 8) = lVar11;
      plVar13 = (long *)(*(long *)(*(long *)(lVar19 + 8) + 0xa8) + 0x10);
    }
    *plVar13 = lVar11;
    FUN_002ef790(lVar16);
  }
  if (uVar23 != 0) {
    uVar20 = uVar23;
    if (4 < uVar23) {
      uVar20 = FUN_002f03c0(uVar23,"external/com_google_grpc_base/src/core/lib/surface/call.cc",
                            0x1c3);
    }
    FUN_003c9ab0(lVar11,uVar20);
  }
  if (bVar6) {
    FUN_003c9ab0(lVar11,4);
  }
  if (param_1[4] != 0) {
    if (param_1[5] != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x1cb,2,
                   "assertion failed: %s",
                   "args->pollset_set_alternative == nullptr && \"Only one of \'cq\' and \'pollset_set_alternative\' should be \" \"non-nullptr.\""
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_003ce650(param_1[4],&DAT_0398db48,
                 "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x1cc);
    FUN_003ceda0(param_1[4]);
    auVar24 = FUN_003d6b40();
    *(undefined1 (*) [12])(lVar11 + 0x80) = auVar24;
  }
  if (param_1[5] != 0) {
    auVar24 = FUN_003d6b30();
    *(undefined1 (*) [12])(lVar11 + 0x80) = auVar24;
  }
  uVar20 = FUN_003d6b90(lVar11 + 0x80);
  if ((uVar20 & 1) == 0) {
    FUN_003d7b40(lVar11 + 0x9e0,lVar11 + 0x80);
  }
  if (*(char *)(lVar11 + 0xb0) == '\0') {
    lVar18 = FUN_003e0400(*(undefined8 *)(lVar11 + 0x9b8));
    if (lVar18 == 0) goto LAB_003c947c;
    lVar18 = lVar18 + 0x40;
  }
  else {
    lVar18 = *(long *)(*(long *)(lVar11 + 0x90) + 0x68);
    if (lVar18 == 0) goto LAB_003c947c;
    lVar18 = lVar18 + 0x58;
  }
  FUN_003e4ce0(lVar18);
LAB_003c947c:
  plVar13 = local_a0;
  if ((local_a0 != (long *)0x0) && (plVar12 = (long *)*local_a0, plVar12 != (long *)0x0)) {
    plVar17 = plVar12 + 1;
    lVar18 = *plVar12;
    do {
      lVar16 = *plVar17;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar6) {
        *plVar17 = lVar16 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar18 != 0) && (*(char *)(lVar18 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar18 + 8),plVar12,lVar16);
    }
    if (lVar16 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar16 == 1) {
      (*(code *)plVar13[3])(plVar13[4]);
    }
  }
  return uVar23;
}


