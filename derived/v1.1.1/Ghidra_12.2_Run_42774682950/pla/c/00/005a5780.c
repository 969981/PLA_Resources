/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a5780; name: FUN_005a5780
 */


void FUN_005a5780(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  long lVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long *plVar27;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  byte local_70;
  byte local_6f;
  ulong local_68;
  
  plVar27 = (long *)(param_2 & 0xfffffffffffffffc);
  pbVar18 = (byte *)(plVar27 + 1);
  if (*plVar27 == 0) {
    if (*pbVar18 == 0) goto LAB_005a580c;
  }
  else if (*(long *)pbVar18 == 0) {
LAB_005a580c:
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x2aa,2,"assertion failed: %s",
                 "((elem_key).refcount ? (elem_key).data.refcounted.length : (elem_key).data.inlined.length) > 0"
                );
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*plVar27 == 0) {
    if (*(char *)((long)plVar27 + 9) == ':') goto LAB_005a57d4;
LAB_005a5844:
    *(undefined1 *)(param_3 + 0x18) = 1;
  }
  else {
    if (*(char *)plVar27[2] != ':') goto LAB_005a5844;
LAB_005a57d4:
    if (*(char *)(param_3 + 0x18) != '\0') {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x2b5,2,"assertion failed: %s",
                   "st->seen_regular_header == 0 && \"Reserved header (colon-prefixed) happening after regular ones.\""
                  );
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  if (PTR_DAT_04374f08[0x10] == '\0') {
    if ((param_2 & 1) == 0) goto LAB_005a5930;
LAB_005a5860:
    lVar20 = 0x48;
    if ((~(uint)param_2 & 3) != 0) {
      lVar20 = 0x40;
    }
    uVar12 = *(uint *)((long)plVar27 + lVar20);
    uVar25 = (ulong)uVar12;
    pbVar19 = (byte *)(param_1 + (uVar25 & 0x3f) + 0x30);
    bVar2 = *pbVar19;
    *pbVar19 = bVar2 + 1;
    if ((byte)(bVar2 + 1) == 0xff) {
      uVar11 = 0;
      lVar20 = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      do {
        lVar24 = param_1 + lVar20;
        lVar20 = lVar20 + 2;
        bVar2 = *(byte *)(lVar24 + 0x30) >> 1;
        *(byte *)(lVar24 + 0x30) = bVar2;
        bVar5 = *(byte *)(lVar24 + 0x31) >> 1;
        uVar11 = uVar11 + bVar2 + (uint)bVar5;
        *(byte *)(lVar24 + 0x31) = bVar5;
      } while (lVar20 != 0x40);
    }
    else {
      uVar11 = *(int *)(param_1 + 0x2c) + 1;
    }
    uVar23 = (ulong)(uVar12 >> 6) & 0x3f;
    *(uint *)(param_1 + 0x2c) = uVar11;
    if ((*(ulong *)(param_1 + uVar23 * 0x10 + 0x70) == param_2) ||
       (uVar23 = (ulong)(uVar12 >> 0xc) & 0x3f,
       *(ulong *)(param_1 + uVar23 * 0x10 + 0x70) == param_2)) {
      uVar12 = *(uint *)(param_1 + uVar23 * 0x10 + 0x78);
      if (*(uint *)(param_1 + 0x10) < uVar12) {
        FUN_005a5690((*(uint *)(param_1 + 0x10) - uVar12) + *(int *)(param_1 + 0x18) + 0x3e,param_3)
        ;
        return;
      }
    }
    bVar9 = uVar11 >> 5 <= (uint)*pbVar19;
  }
  else {
    FUN_005a6340(param_2);
    if ((param_2 & 1) != 0) goto LAB_005a5860;
LAB_005a5930:
    if ((*plVar27 == 0) || (1 < *(uint *)(*plVar27 + 8))) {
      FUN_005a6420(param_2,param_3);
      return;
    }
    uVar25 = 0;
    bVar9 = false;
  }
  uVar23 = FUN_005a8620(param_2,*(undefined1 *)(param_3 + 0x38));
  bVar6 = false;
  if (((param_2 & 1) != 0) && (uVar23 < 0x200)) {
    bVar6 = bVar9;
  }
  lVar20 = *plVar27;
  if (lVar20 == 0) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/slice/slice_internal.h",0xf7,2,
                 "assertion failed: %s","slice.refcount != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(int *)(lVar20 + 8) == 1) {
    uVar12 = *(uint *)(lVar20 + 0x68);
  }
  else if (*(int *)(lVar20 + 8) == 0) {
    uVar12 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar20 + 0x28) * 4);
  }
  else {
    uVar12 = FUN_003da780(plVar27[2],plVar27[1],*(undefined4 *)PTR_DAT_043740a8);
    lVar20 = *plVar27;
  }
  puVar8 = PTR_DAT_043738c0;
  puVar7 = PTR___tls_init_043737c8;
  uVar22 = (ulong)(uVar12 >> 6 & 0x3f);
  if ((*(long *)(param_1 + uVar22 * 0x10 + 0x470) == lVar20) ||
     (uVar22 = (ulong)(uVar12 >> 0xc & 0x3f), *(long *)(param_1 + uVar22 * 0x10 + 0x470) == lVar20))
  {
    uVar11 = *(uint *)(param_1 + uVar22 * 0x10 + 0x478);
    if (*(uint *)(param_1 + 0x10) < uVar11) {
      iVar14 = (*(uint *)(param_1 + 0x10) - uVar11) + *(int *)(param_1 + 0x18);
      uVar11 = iVar14 + 0x3e;
      if (bVar6) {
        lVar20 = *(long *)PTR_DAT_043738c0;
        if (PTR___tls_init_043737c8 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar24 = tpidr_el0;
        lVar24 = *(long *)(lVar24 + 0x30);
        uVar10 = *(uint *)(lVar24 + 0x30);
        if (uVar10 == 0xffffffff) {
          uVar10 = nn::os::GetCurrentCoreNumber();
          *(uint *)(lVar24 + 0x30) = uVar10;
        }
        plVar27 = (long *)(lVar20 + (ulong)uVar10 * 0x1d50 + 0x228);
        do {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar9) {
            *plVar27 = *plVar27 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 < 0x3f) {
          uVar10 = 1;
        }
        else {
          uVar10 = FUN_005a7a00(iVar14 + -1);
        }
        FUN_005a6b70(&local_90,param_2,*(undefined1 *)(param_3 + 0x38));
        if (local_68 >> 0x20 == 0) {
          if ((uint)local_68 < 0x7f) {
            iVar15 = 1;
            uVar13 = uVar10 + 1;
            bVar2 = local_6f;
          }
          else {
            iVar15 = FUN_005a7a00();
            uVar13 = iVar15 + uVar10;
            bVar2 = local_6f;
          }
          if (uVar13 < 0x17) {
            pbVar18 = (byte *)FUN_005a6270(param_3,(ulong)uVar13 + (ulong)bVar2);
            if (uVar10 - 1 == 0) {
              *pbVar18 = (byte)uVar11 | 0x40;
            }
            else {
              *pbVar18 = 0x7f;
              FUN_005a7a40(iVar14 + -1,pbVar18 + 1,uVar10 - 1);
            }
            pbVar19 = pbVar18 + uVar10;
            if (iVar15 == 1) {
              *pbVar19 = local_70 | (byte)local_68;
            }
            else {
              *pbVar19 = local_70 | 0x7f;
              FUN_005a7a40((uint)local_68 - 0x7f,pbVar19 + 1,iVar15 + -1);
            }
            if (bVar2 != 0) {
              pbVar18[uVar13] = 0;
            }
            FUN_005a6e00(param_3,&local_b0);
            FUN_005a6930(param_1,param_2,uVar23,uVar25,uVar12);
            return;
          }
LAB_005a610c:
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                       ,0x21f,2,"assertion failed: %s",
                       "len_pfx + len_val_len < (sizeof(size_t) + sizeof(uint8_t*) - 1 + sizeof(void*))"
                      );
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      else {
        lVar20 = *(long *)PTR_DAT_043738c0;
        if (PTR___tls_init_043737c8 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar24 = tpidr_el0;
        lVar24 = *(long *)(lVar24 + 0x30);
        uVar12 = *(uint *)(lVar24 + 0x30);
        if (uVar12 == 0xffffffff) {
          uVar12 = nn::os::GetCurrentCoreNumber();
          *(uint *)(lVar24 + 0x30) = uVar12;
        }
        plVar27 = (long *)(lVar20 + (ulong)uVar12 * 0x1d50 + 0x238);
        do {
          cVar3 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar9) {
            *plVar27 = *plVar27 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (uVar11 < 0xf) {
          uVar12 = 1;
        }
        else {
          uVar12 = FUN_005a7a00(iVar14 + 0x2f);
        }
        FUN_005a6b70(&local_90,param_2,*(undefined1 *)(param_3 + 0x38));
        if (local_68 >> 0x20 == 0) {
          iVar15 = (uint)local_68 - 0x7f;
          if ((uint)local_68 < 0x7f) {
            iVar16 = 1;
            uVar10 = uVar12 + 1;
            bVar2 = local_6f;
          }
          else {
            iVar16 = FUN_005a7a00(iVar15);
            uVar10 = iVar16 + uVar12;
            bVar2 = local_6f;
          }
          if (uVar10 < 0x17) {
            pbVar18 = (byte *)FUN_005a6270(param_3,(ulong)uVar10 + (ulong)bVar2);
            if (uVar12 - 1 == 0) {
              *pbVar18 = (byte)uVar11;
            }
            else {
              *pbVar18 = 0xf;
              FUN_005a7a40(iVar14 + 0x2f,pbVar18 + 1,uVar12 - 1);
            }
            pbVar19 = pbVar18 + uVar12;
            if (iVar16 == 1) {
              *pbVar19 = local_70 | (byte)local_68;
            }
            else {
              *pbVar19 = local_70 | 0x7f;
              FUN_005a7a40(iVar15,pbVar19 + 1,iVar16 + -1);
            }
            if (bVar2 != 0) {
              pbVar18[uVar10] = 0;
            }
            FUN_005a6e00(param_3,&local_b0);
            return;
          }
          goto LAB_005a610c;
        }
      }
      goto LAB_005a60bc;
    }
  }
  bVar9 = uVar23 < 0x200 && (param_2 & 1) == 0;
  if (!(bool)(bVar9 | bVar6)) {
    FUN_005a6420(param_2,param_3);
    goto joined_r0x005a5ba4;
  }
  lVar20 = *(long *)PTR_DAT_043738c0;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar24 = tpidr_el0;
  lVar26 = *(long *)(lVar24 + 0x30);
  uVar11 = *(uint *)(lVar26 + 0x30);
  if (uVar11 == 0xffffffff) {
    uVar11 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar26 + 0x30) = uVar11;
  }
  plVar21 = (long *)(lVar20 + (ulong)uVar11 * 0x1d50 + 0x230);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar4) {
      *plVar21 = *plVar21 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar20 = *(long *)puVar8;
  if (puVar7 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar24 = *(long *)(lVar24 + 0x30);
  uVar11 = *(uint *)(lVar24 + 0x30);
  if (uVar11 == 0xffffffff) {
    uVar11 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar24 + 0x30) = uVar11;
  }
  plVar21 = (long *)(lVar20 + (ulong)uVar11 * 0x1d50 + 600);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar21,0x10);
    if (bVar4) {
      *plVar21 = *plVar21 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (*plVar27 == 0) {
    uVar11 = (uint)*pbVar18;
  }
  else {
    uVar11 = (uint)*(undefined8 *)pbVar18;
  }
  FUN_005a6b70(&local_90,param_2,*(undefined1 *)(param_3 + 0x38));
  if (local_68 >> 0x20 != 0) {
LAB_005a60bc:
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x203,2,"assertion failed: %s","v.length <= (0xffffffffu)");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar10 = (uint)local_68;
  if (uVar11 < 0x7f) {
    iVar14 = 1;
    if (uVar10 < 0x7f) goto LAB_005a5c94;
LAB_005a5c64:
    uVar13 = FUN_005a7a00(uVar10 - 0x7f);
  }
  else {
    iVar14 = FUN_005a7a00(uVar11 - 0x7f);
    if (0x7e < uVar10) goto LAB_005a5c64;
LAB_005a5c94:
    uVar13 = 1;
  }
  if (0x16 < iVar14 + 1U) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x249,2,"assertion failed: %s",
                 "1 + len_key_len < (sizeof(size_t) + sizeof(uint8_t*) - 1 + sizeof(void*))");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar17 = (undefined1 *)FUN_005a6270(param_3,iVar14 + 1U);
  *puVar17 = 0x40;
  if (iVar14 + -1 == 0) {
    puVar17[1] = (char)uVar11;
    plVar21 = (long *)*plVar27;
  }
  else {
    puVar17[1] = 0x7f;
    FUN_005a7a40(uVar11 - 0x7f,puVar17 + 2,iVar14 + -1);
    plVar21 = (long *)*plVar27;
  }
  if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
    plVar1 = plVar21 + 1;
    do {
      lVar20 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar24 = *plVar21;
    if ((lVar24 != 0) && (*(char *)(lVar24 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar24 + 8),plVar21,lVar20,lVar20 + 1);
    }
    if (lVar20 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  lStack_a8 = plVar27[1];
  local_b0 = *plVar27;
  lStack_98 = plVar27[3];
  lStack_a0 = plVar27[2];
  FUN_005a6e00(param_3,&local_b0);
  pbVar18 = (byte *)FUN_005a6270(param_3,uVar13 + local_6f);
  if (uVar13 - 1 == 0) {
    *pbVar18 = local_70 | (byte)local_68;
    if (local_6f != 0) {
LAB_005a5dd0:
      pbVar18[uVar13] = 0;
    }
  }
  else {
    *pbVar18 = local_70 | 0x7f;
    FUN_005a7a40(uVar10 - 0x7f,pbVar18 + 1,uVar13 - 1);
    if (local_6f != 0) goto LAB_005a5dd0;
  }
  uStack_c8 = uStack_88;
  local_d0 = local_90;
  uStack_b8 = uStack_78;
  uStack_c0 = uStack_80;
  FUN_005a6e00(param_3,&local_d0);
joined_r0x005a5ba4:
  if (bVar6) {
    FUN_005a6930(param_1,param_2,uVar23,uVar25,uVar12);
  }
  else if ((bVar9) && (iVar14 = FUN_005a6f40(param_1,uVar23), iVar14 != 0)) {
    FUN_005a7070(param_1,*plVar27,iVar14,uVar12);
  }
  return;
}


