/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a15d0; name: FUN_005a15d0
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_005a15d0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 *puVar6;
  ulong uVar7;
  char cVar8;
  bool bVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  byte bVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined *puVar26;
  long *plVar27;
  long *local_d8;
  undefined8 local_d0;
  long *local_c8;
  char local_c0;
  long alStack_b8 [4];
  undefined8 local_98;
  undefined7 local_90;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 local_80 [5];
  bool bStack_7b;
  undefined2 uStack_7a;
  ulong local_78;
  long *plStack_70;
  
  local_98 = 0;
  local_90 = 0;
  uStack_89 = 0;
  uStack_88 = 0;
  uStack_87 = 0;
  uStack_86 = 0;
  lVar23 = *(long *)PTR_DAT_043738c0;
  alStack_b8[3] = param_1;
  if (PTR___tls_init_043737c8 != (undefined *)0x0) {
    grpc_core::ExecCtx::exec_ctx_::__tls_init();
  }
  lVar21 = tpidr_el0;
  lVar24 = *(long *)(lVar21 + 0x30);
  uVar11 = *(uint *)(lVar24 + 0x30);
  if (uVar11 == 0xffffffff) {
    uVar11 = nn::os::GetCurrentCoreNumber();
    *(uint *)(lVar24 + 0x30) = uVar11;
  }
  plVar27 = (long *)(lVar23 + (ulong)uVar11 * 0x1d50 + 0xf8);
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar9) {
      *plVar27 = *plVar27 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if ((*(char *)(alStack_b8[3] + 0xe34) != '\0') && (*(char *)(alStack_b8[3] + 0xe35) == '\0')) {
    lVar23 = alStack_b8[3] + 0x358;
    FUN_005a9420(&local_d8,alStack_b8[3] + 0xe74,alStack_b8[3] + 0xe58,
                 *(undefined4 *)(alStack_b8[3] + 0xe38),7);
    FUN_003052c0(lVar23,&local_d8);
    *(undefined4 *)(alStack_b8[3] + 0xe38) = 0;
    *(undefined2 *)(alStack_b8[3] + 0xe34) = 0x100;
    lVar23 = *(long *)PTR_DAT_043738c0;
    if (PTR___tls_init_043737c8 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar24 = *(long *)(lVar21 + 0x30);
    uVar11 = *(uint *)(lVar24 + 0x30);
    if (uVar11 == 0xffffffff) {
      uVar11 = nn::os::GetCurrentCoreNumber();
      *(uint *)(lVar24 + 0x30) = uVar11;
    }
    plVar27 = (long *)(lVar23 + (ulong)uVar11 * 0x1d50 + 0xe8);
    do {
      cVar8 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar9) {
        *plVar27 = *plVar27 + 1;
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
  }
  if (*(long *)(alStack_b8[3] + 0xfa8) != 0) {
    uVar25 = 0;
    do {
      lVar23 = alStack_b8[3] + 0x358;
      FUN_005a44a0(&local_d8,1,*(undefined8 *)(*(long *)(alStack_b8[3] + 0xfb8) + uVar25 * 8));
      FUN_003052c0(lVar23,&local_d8);
      uVar25 = uVar25 + 1;
    } while (uVar25 < *(ulong *)(alStack_b8[3] + 0xfa8));
  }
  *(undefined8 *)(alStack_b8[3] + 0xfa8) = 0;
  FUN_00305640(alStack_b8[3] + 0xcf8,alStack_b8[3] + 0x358);
  *(undefined4 *)(alStack_b8[3] + 0x15cc) = 0;
  if (*(long *)(alStack_b8[3] + 0xd08) != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc",
                 0xea,2,"assertion failed: %s","t_->qbuf.count == 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_005a5020(alStack_b8[3] + 0x480,*(undefined4 *)(alStack_b8[3] + 0xe3c));
  if ((0 < *(long *)(param_1 + 0x1138)) &&
     (uVar25 = FUN_005aca10(alStack_b8[3],&local_d8), (uVar25 & 1) != 0)) {
    lVar23 = *(long *)(alStack_b8[3] + 0x48);
    do {
      if ((lVar23 == 0) && (uVar25 = FUN_005ac230(alStack_b8[3],local_d8), (uVar25 & 1) != 0)) {
        plVar27 = (long *)local_d8[2];
        lVar23 = *plVar27;
        if ((lVar23 != 0) && (*(char *)(lVar23 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x96,1,
                       "%s:%p ref_if_non_zero %ld -> %ld",*(undefined8 *)(lVar23 + 8),plVar27,
                       plVar27[1],plVar27[1] + 1);
        }
        plVar27 = plVar27 + 1;
        lVar23 = *plVar27;
        do {
          while( true ) {
            if (lVar23 == 0) {
              FUN_005ac410(alStack_b8[3],local_d8);
              goto LAB_005a17d4;
            }
            lVar24 = *plVar27;
            if (lVar24 == lVar23) break;
            ClearExclusiveLocal();
            lVar23 = lVar24;
          }
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
          if (bVar9) {
            *plVar27 = lVar23 + 1;
            cVar8 = ExclusiveMonitorsStatus();
          }
          lVar23 = lVar24;
        } while (cVar8 != '\0');
      }
LAB_005a17d4:
      uVar25 = FUN_005aca10(alStack_b8[3],&local_d8);
      if ((uVar25 & 1) == 0) break;
      lVar23 = *(long *)(alStack_b8[3] + 0x48);
    } while( true );
  }
  puVar26 = PTR_DAT_04374f08;
  if (*(ulong *)(alStack_b8[3] + 0x378) < 0x100001) {
    uVar25 = FUN_005ac320(alStack_b8[3],&local_d8);
    plVar27 = local_d8;
    lVar23 = local_d0;
    local_d0 = alStack_b8[3];
    while( true ) {
      alStack_b8[3] = local_d0;
      if (plVar27 == (long *)0x0) break;
      local_d8 = alStack_b8 + 3;
      if ((uVar25 & 1) == 0) break;
      local_c0 = '\0';
      alStack_b8[2] = 0;
      local_c8 = plVar27;
      if (puVar26[0x10] == '\0') {
        uVar25 = *(ulong *)(param_1 + 0x378);
        cVar8 = (char)plVar27[0x136];
        uVar10 = _local_80;
      }
      else {
        pcVar14 = "SERVER";
        if (*(char *)(local_d0 + 0xcf0) != '\0') {
          pcVar14 = "CLIENT";
        }
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                     ,0x1b0,1,"W:%p %s[%d] im-(sent,send)=(%d,%d) announce=%d",local_d0,pcVar14,
                     (int)plVar27[0x19],(char)plVar27[0x136],plVar27[0x1a] != 0,
                     (int)plVar27[0x139] - (int)plVar27[0x13a]);
        uVar25 = *(ulong *)(param_1 + 0x378);
        cVar8 = (char)local_c8[0x136];
        uVar10 = _local_80;
      }
      _local_80 = uVar10;
      if ((cVar8 == '\0') && (plVar16 = (long *)local_c8[0x1a], plVar16 != (long *)0x0)) {
        if ((((*(char *)(local_d0 + 0xcf0) == '\0') &&
             ((local_c8[0x1f] == 0 && (local_c8[0x141] == 0)))) &&
            (((int)local_c8[0x166] == 0 || (local_c8[0x170] == 0)))) &&
           ((local_c8[0x1c] != 0 && (plVar16[1] == *plVar16)))) {
          if (puVar26[0x10] == '\0') {
            lVar23 = plVar16[6];
            lVar24 = alStack_b8[2];
          }
          else {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                         ,0x250,1,"not sending initial_metadata (Trailers-Only)");
            plVar16 = (long *)local_c8[0x1a];
            lVar23 = plVar16[6];
            lVar24 = alStack_b8[2];
          }
          alStack_b8[2] = lVar24;
          if (lVar23 != 0) {
            alStack_b8[2] = lVar24 + 1;
            alStack_b8[lVar24] = lVar23;
            plVar16 = (long *)local_c8[0x1a];
          }
          if (plVar16[0x12] != 0) {
            plVar1 = alStack_b8 + alStack_b8[2];
            alStack_b8[2] = alStack_b8[2] + 1;
            *plVar1 = plVar16[0x12];
          }
        }
        else {
          local_80 = (undefined1  [5])CONCAT14(0,*(uint *)(local_c8 + 0x19));
          uStack_7a = (undefined2)((ulong)uVar10 >> 0x30);
          _local_80 = CONCAT15(*(int *)(local_d0 + 0xe54) != 0,local_80);
          local_78 = (ulong)*(uint *)(local_d0 + 0xe4c);
          plStack_70 = local_c8 + 0x3d;
          FUN_005a52f0(local_d0 + 0x480,0,0,plVar16,local_80,local_d0 + 0x358);
          FUN_0059a7e0(local_d0);
          *(int *)((long)local_d8 + 0xc) = *(int *)((long)local_d8 + 0xc) + 1;
        }
        local_c8[0x1a] = 0;
        *(undefined1 *)(local_c8 + 0x136) = 1;
        *(undefined1 *)((long)local_d8 + 0x1a) = 1;
        FUN_00599e40(local_d0,local_c8,local_c8 + 0x1b,0,"send_initial_metadata_finished");
      }
      iVar13 = (**(code **)(local_c8[0x137] + 0x30))(local_c8 + 0x137);
      if (iVar13 != 0) {
        lVar23 = local_d0 + 0x358;
        FUN_005abdf0(local_80,(int)local_c8[0x19],iVar13,local_c8 + 0x3d);
        FUN_003052c0(lVar23,local_80);
        FUN_0059a7e0(local_d0);
        *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      }
      plVar1 = local_c8;
      lVar23 = local_d0;
      plVar16 = local_d8;
      if (((char)local_c8[0x136] == '\0') ||
         ((uVar17 = local_c8[0x141], uVar17 == 0 &&
          (((int)local_c8[0x166] == 0 || (local_c8[0x170] == 0)))))) {
LAB_005a1f38:
        cVar8 = (char)local_c8[0x136];
joined_r0x005a1e14:
        if (cVar8 == '\0') goto LAB_005a1f44;
LAB_005a1cb8:
        if ((((local_c8[0x1c] == 0) || (local_c8[0x1f] != 0)) || (local_c8[0x141] != 0)) ||
           (((int)local_c8[0x166] != 0 && (local_c8[0x170] != 0)))) goto LAB_005a1f44;
        if (puVar26[0x10] == '\0') {
          uVar17 = FUN_003dffd0();
          if ((uVar17 & 1) != 0) goto LAB_005a1cf0;
LAB_005a2100:
          uVar10 = _local_80;
          plStack_70 = local_c8 + 0x3d;
          local_80 = (undefined1  [5])CONCAT14(1,(int)local_c8[0x19]);
          uStack_7a = SUB82(uVar10,6);
          _local_80 = CONCAT15(*(int *)(local_d0 + 0xe54) != 0,local_80);
          local_78 = (ulong)*(uint *)(local_d0 + 0xe4c);
          FUN_005a52f0(local_d0 + 0x480,alStack_b8,alStack_b8[2],local_c8[0x1c],local_80,
                       local_d0 + 0x358);
        }
        else {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                       ,0x22f,1,"sending trailing_metadata");
          uVar17 = FUN_003dffd0(local_c8[0x1c]);
          if ((uVar17 & 1) == 0) goto LAB_005a2100;
LAB_005a1cf0:
          FUN_005a3a80((int)local_c8[0x19],local_c8 + 0x13d,0,1,local_c8 + 0x3d,local_d0 + 0x358);
        }
        *(int *)(local_d8 + 2) = (int)local_d8[2] + 1;
        FUN_0059a7e0(local_d0);
        local_c8[0x1c] = 0;
        if ((undefined1 *)local_c8[0x1d] != (undefined1 *)0x0) {
          *(undefined1 *)local_c8[0x1d] = 1;
          local_c8[0x1d] = 0;
        }
        *(undefined1 *)((long)local_c8 + 0x9b1) = 1;
        *(undefined1 *)((long)local_c8 + 0x206) = 1;
        if (*(char *)(local_d0 + 0xcf0) == '\0') {
          if (*(char *)((long)local_c8 + 0x201) == '\0') {
            lVar23 = local_d0 + 0x358;
            FUN_005ab960(local_80,(int)local_c8[0x19],0,local_c8 + 0x3d);
            FUN_003052c0(lVar23,local_80);
            bVar15 = *(byte *)(local_d0 + 0xcf0) ^ 1;
          }
          else {
            bVar15 = 1;
          }
        }
        else {
          bVar15 = 0;
        }
        FUN_0059b4b0(local_d0,local_c8,bVar15,1,0);
        *(undefined1 *)((long)local_d8 + 0x1a) = 1;
        FUN_00599e40(local_d0,local_c8,local_c8 + 0x1e,0,"send_trailing_metadata_finished");
        lVar23 = *(ulong *)(param_1 + 0x378) - uVar25;
        if (uVar25 <= *(ulong *)(param_1 + 0x378) && lVar23 != 0) goto LAB_005a1f54;
      }
      else {
        lVar19 = local_c8[0x138];
        lVar24 = lVar19 + (ulong)*(uint *)(local_d0 + 0xe48);
        uVar11 = *(uint *)(local_d0 + 0xe48) + (int)lVar19;
        uVar22 = *(ulong *)(local_d0 + 0x1138);
        uVar20 = 0;
        if (-1 < lVar24) {
          uVar20 = (ulong)uVar11;
        }
        if ((long)uVar22 <= (long)uVar20) {
          uVar20 = uVar22;
        }
        uVar7 = (ulong)*(uint *)(local_d0 + 0xe4c);
        if ((long)uVar20 <= (long)(ulong)*(uint *)(local_d0 + 0xe4c)) {
          uVar7 = uVar20;
        }
        if ((int)uVar7 != 0) {
          lVar24 = local_c8[0x165];
          if ((int)local_c8[0x166] == 0) {
            if (uVar17 != 0) {
              plVar2 = local_c8 + 0x13d;
              plVar3 = local_c8 + 0x3d;
              lVar19 = local_d0 + 0x358;
              plVar4 = local_c8 + 0x137;
              uVar20 = uVar7 & 0xffffffff;
              if (uVar17 <= (uVar7 & 0xffffffff)) goto LAB_005a1d38;
              do {
                uVar12 = 0;
                while( true ) {
                  uVar11 = uVar12 & 1;
                  FUN_005a3a80((int)plVar1[0x19],plVar2,uVar20 & 0xffffffff,uVar11,plVar3,lVar19);
                  (**(code **)(plVar1[0x137] + 0x20))(plVar4,uVar20);
                  plVar1[0x165] = plVar1[0x165] + uVar20;
                  if (local_c8[0x141] == 0) goto LAB_005a1e2c;
                  uVar17 = 0;
                  if (-1 < (long)(plVar1[0x138] + (ulong)*(uint *)(lVar23 + 0xe48))) {
                    uVar17 = (ulong)(*(uint *)(lVar23 + 0xe48) + (int)plVar1[0x138]);
                  }
                  if ((long)*(ulong *)(lVar23 + 0x1138) <= (long)uVar17) {
                    uVar17 = *(ulong *)(lVar23 + 0x1138);
                  }
                  uVar20 = (ulong)*(uint *)(lVar23 + 0xe4c);
                  if ((long)uVar17 <= (long)(ulong)*(uint *)(lVar23 + 0xe4c)) {
                    uVar20 = uVar17;
                  }
                  if ((int)uVar20 == 0) {
                    uVar11 = uVar12 & 1;
                    goto LAB_005a1e2c;
                  }
                  uVar17 = plVar1[0x141];
                  uVar20 = uVar20 & 0xffffffff;
                  if (uVar20 < uVar17) break;
LAB_005a1d38:
                  uVar20 = uVar17;
                  if ((plVar1[0x1f] != 0) || (plVar1[0x1c] == 0)) break;
                  uVar12 = FUN_003dffd0();
                }
              } while( true );
            }
            FUN_0059a7e0(local_d0);
          }
          else {
            uVar11 = 0;
            plVar2 = local_c8 + 0x13d;
            plVar3 = local_c8 + 0x16c;
            plVar4 = local_c8 + 0x3d;
            lVar19 = local_d0 + 0x358;
            plVar5 = local_c8 + 0x137;
            while ((uVar17 != 0 || (local_c8[0x170] != 0))) {
              uVar17 = 0;
              if (-1 < (long)(plVar1[0x138] + (ulong)*(uint *)(lVar23 + 0xe48))) {
                uVar17 = (ulong)(*(uint *)(lVar23 + 0xe48) + (int)plVar1[0x138]);
              }
              if ((long)*(ulong *)(lVar23 + 0x1138) <= (long)uVar17) {
                uVar17 = *(ulong *)(lVar23 + 0x1138);
              }
              uVar20 = (ulong)*(uint *)(lVar23 + 0xe4c);
              if ((long)uVar17 <= (long)(ulong)*(uint *)(lVar23 + 0xe4c)) {
                uVar20 = uVar17;
              }
              if ((int)uVar20 == 0) break;
              if (local_c8[0x170] == 0) {
                if ((int)plVar1[0x166] == 0) {
                  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                               ,0x188,2,"assertion failed: %s",
                               "s_->stream_compression_method != GRPC_STREAM_COMPRESSION_IDENTITY_COMPRESS"
                              );
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                lVar18 = plVar1[0x16b];
                if (lVar18 == 0) {
                  lVar18 = FUN_005a2b60();
                  plVar1[0x16b] = lVar18;
                }
                plVar1[0x16a] = plVar1[0x141];
                uVar17 = FUN_005a2b40(lVar18,plVar2,plVar3,0,0xffffffffffffffff,1);
                if ((uVar17 & 1) == 0) {
                  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                               ,0x193,2,"Stream compression failed.");
                  uVar17 = local_c8[0x141];
                }
                else {
LAB_005a1b08:
                  uVar17 = local_c8[0x141];
                }
              }
              else {
                if ((int)plVar1[0x166] == 0) {
                  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                               ,0x163,2,"assertion failed: %s",
                               "s_->stream_compression_method != GRPC_STREAM_COMPRESSION_IDENTITY_COMPRESS"
                              );
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar17 = plVar1[0x170];
                uVar22 = uVar20 & 0xffffffff;
                if ((((uVar20 & 0xffffffff) < uVar17) || (uVar22 = uVar17, plVar1[0x141] != 0)) ||
                   (plVar1[0x1f] != 0)) {
                  uVar17 = uVar22;
                  uVar12 = 0;
LAB_005a1b80:
                  uVar11 = uVar12 & 1;
                  FUN_005a3a80((int)plVar1[0x19],plVar3,uVar17 & 0xffffffff,uVar11,plVar4,lVar19);
                  (**(code **)(plVar1[0x137] + 0x20))(plVar5,uVar17);
                  if (plVar1[0x170] != 0) goto LAB_005a1b08;
                  plVar1[0x165] = plVar1[0x165] + plVar1[0x16a];
                  uVar17 = local_c8[0x141];
                }
                else {
                  uVar12 = 0;
                  if (plVar1[0x1c] == 0) goto LAB_005a1b80;
                  if (plVar1[0x16b] == 0) {
                    uVar12 = FUN_003dffd0();
                    goto LAB_005a1b80;
                  }
                  uVar17 = FUN_005a2b40(plVar1[0x16b],plVar2,plVar3,0,0xffffffffffffffff,2);
                  if ((uVar17 & 1) == 0) {
                    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                                 ,0x171,2,"Stream compression failed.");
                  }
                  FUN_005a2be0(plVar1[0x16b]);
                  plVar1[0x16b] = 0;
                  uVar17 = local_c8[0x141];
                }
              }
            }
LAB_005a1e2c:
            FUN_0059a7e0(local_d0);
            puVar26 = PTR_DAT_04374f08;
            if (uVar11 != 0) {
              local_c8[0x1c] = 0;
              if ((undefined1 *)local_c8[0x1d] != (undefined1 *)0x0) {
                *(undefined1 *)local_c8[0x1d] = 1;
                local_c8[0x1d] = 0;
              }
              *(undefined1 *)((long)local_c8 + 0x9b1) = 1;
              *(undefined1 *)((long)local_c8 + 0x206) = 1;
              if (*(char *)(local_d0 + 0xcf0) == '\0') {
                if (*(char *)((long)local_c8 + 0x201) == '\0') {
                  lVar19 = local_d0 + 0x358;
                  FUN_005ab960(local_80,(int)local_c8[0x19],0,local_c8 + 0x3d);
                  FUN_003052c0(lVar19,local_80);
                  bVar15 = *(byte *)(local_d0 + 0xcf0) ^ 1;
                }
                else {
                  bVar15 = 1;
                }
              }
              else {
                bVar15 = 0;
              }
              FUN_0059b4b0(local_d0,local_c8,bVar15,1,0);
            }
          }
          uVar17 = FUN_005a29c0(lVar23,plVar1,plVar1[0x165] - lVar24,plVar1 + 0x162,plVar1 + 0x27,0)
          ;
          if ((uVar17 & 1) != 0) {
            *(undefined1 *)((long)plVar16 + 0x1a) = 1;
          }
          local_c0 = '\x01';
          if ((local_c8[0x141] != 0) || (((int)local_c8[0x166] != 0 && (local_c8[0x170] != 0)))) {
            FUN_00598b70(local_c8,"chttp2_writing:fork");
            FUN_005ac230(local_d0,local_c8);
          }
          *(int *)((long)local_d8 + 0x14) = *(int *)((long)local_d8 + 0x14) + 1;
          goto LAB_005a1f38;
        }
        if ((long)uVar22 < 1) {
          if (PTR_DAT_04374f38[0x10] != '\0') {
            if ((int)local_c8[0x166] == 0) {
              lVar23 = 0;
            }
            else {
              lVar23 = local_c8[0x170];
            }
            uVar12 = 0;
            if (-1 < lVar24) {
              uVar12 = uVar11;
            }
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                         ,0xa1,0,
                         "%s:%p stream %d moved to stalled list by %s. This is FULLY expected to happen in a healthy program that is not seeing flow control stalls. However, if you know that there are unwanted stalls, here is some helpful data: [fc:pending=%ld:pending-compressed=%ld:flowed=%ld:peer_initwin=%d:t_win=%ld:s_win=%d:s_delta=%ld]"
                         ,*(undefined8 *)(local_d0 + 0x20),local_d0,(int)local_c8[0x19],"transport",
                         uVar17,lVar23,local_c8[0x27],*(undefined4 *)(local_d0 + 0xe9c),uVar22,
                         uVar12,lVar19);
          }
          FUN_005ac920(local_d0,local_c8);
          cVar8 = (char)local_c8[0x136];
          goto joined_r0x005a1e14;
        }
        if ((-1 < lVar24) && (uVar11 != 0)) goto LAB_005a1f38;
        if (PTR_DAT_04374f38[0x10] != '\0') {
          if ((int)local_c8[0x166] == 0) {
            lVar23 = 0;
          }
          else {
            lVar23 = local_c8[0x170];
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                       ,0xa1,0,
                       "%s:%p stream %d moved to stalled list by %s. This is FULLY expected to happen in a healthy program that is not seeing flow control stalls. However, if you know that there are unwanted stalls, here is some helpful data: [fc:pending=%ld:pending-compressed=%ld:flowed=%ld:peer_initwin=%d:t_win=%ld:s_win=%d:s_delta=%ld]"
                       ,*(undefined8 *)(local_d0 + 0x20),local_d0,(int)local_c8[0x19],"stream",
                       uVar17,lVar23,local_c8[0x27],*(undefined4 *)(local_d0 + 0xe9c),uVar22,0,
                       lVar19);
        }
        FUN_005acbe0(local_d0,local_c8);
        if ((char)local_c8[0x136] != '\0') goto LAB_005a1cb8;
LAB_005a1f44:
        lVar23 = *(ulong *)(param_1 + 0x378) - uVar25;
        if (uVar25 <= *(ulong *)(param_1 + 0x378) && lVar23 != 0) {
LAB_005a1f54:
          plVar27[0x169] = lVar23 + plVar27[0x169];
          if ((*(char *)((long)plVar27 + 0xb39) != '\0') &&
             (uVar25 = FUN_00308360(*(undefined8 *)(param_1 + 0x18)), (uVar25 & 1) != 0)) {
            FUN_005aced8(param_1 + 0x15b8,plVar27);
          }
        }
      }
      if (local_c0 == '\0') {
        pcVar14 = "chttp2_writing:no_write";
LAB_005a18cc:
        FUN_00598c60(plVar27,pcVar14);
      }
      else {
        uVar25 = FUN_005ac510(param_1,plVar27);
        pcVar14 = "chttp2_writing:already_writing";
        if ((uVar25 & 1) == 0) goto LAB_005a18cc;
      }
      if (0x100000 < *(ulong *)(alStack_b8[3] + 0x378)) goto LAB_005a22f4;
      uVar25 = FUN_005ac320(alStack_b8[3],&local_d8);
      plVar27 = local_d8;
      lVar23 = local_d0;
      local_d0 = alStack_b8[3];
    }
  }
  else {
LAB_005a22f4:
    uStack_87 = 1;
    plVar27 = local_d8;
    lVar23 = local_d0;
  }
  local_d0 = lVar23;
  local_d8 = plVar27;
  iVar13 = (**(code **)(*(long *)(alStack_b8[3] + 0x1130) + 0x18))
                     (alStack_b8[3] + 0x1130,*(long *)(alStack_b8[3] + 0x368) != 0);
  if (iVar13 != 0) {
    local_78 = 0;
    plStack_70 = (long *)0x0;
    _local_80 = 0;
    lVar23 = alStack_b8[3] + 0x358;
    FUN_005abdf0(&local_d8,0,iVar13,local_80);
    FUN_003052c0(lVar23,&local_d8);
    FUN_0059a7e0(alStack_b8[3]);
  }
  if (*(long *)(param_1 + 0xec8) != 0) {
    if (*(long *)(param_1 + 0xed8) == 0) {
      if ((*(int *)(param_1 + 0xf10) == 0) && (*(int *)(param_1 + 0xef0) != 0)) {
        if ((PTR_DAT_04374f00[0x10] != '\0' || PTR_DAT_04374f08[0x10] != '\0') ||
            PTR_DAT_04374f30[0x10] != '\0') {
          pcVar14 = "SERVER";
          if (*(char *)(param_1 + 0xcf0) != '\0') {
            pcVar14 = "CLIENT";
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                       ,0x47,1,"%s: Ping delayed [%s]: too many recent pings: %d/%d",pcVar14,
                       *(undefined8 *)(param_1 + 0x20),0);
        }
      }
      else {
        if (PTR___tls_init_043737c8 != (undefined *)0x0) {
          grpc_core::ExecCtx::exec_ctx_::__tls_init();
        }
        lVar23 = FUN_002f00fc(*(undefined8 *)(lVar21 + 0x30));
        if ((*(char *)(param_1 + 0x15b0) == '\0') &&
           (lVar24 = FUN_005a4c80(param_1 + 0xa8), lVar24 == 0)) {
          lVar24 = *(long *)(param_1 + 0xf08);
          puVar6 = &LAB_006ddd00 + lVar24;
        }
        else {
          lVar24 = *(long *)(param_1 + 0xf08);
          puVar6 = (undefined1 *)(lVar24 + *(long *)(param_1 + 0xef8) + 1000);
        }
        if (lVar23 < (long)puVar6) {
          if ((PTR_DAT_04374f00[0x10] == '\0' && PTR_DAT_04374f08[0x10] == '\0') &&
              PTR_DAT_04374f30[0x10] == '\0') {
            cVar8 = *(char *)(param_1 + 0xf50);
          }
          else {
            pcVar14 = "SERVER";
            if (*(char *)(param_1 + 0xcf0) != '\0') {
              pcVar14 = "CLIENT";
            }
            FUN_002ebea0((double)lVar24,(double)(long)puVar6,(double)lVar23,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                         ,0x5f,1,
                         "%s: Ping delayed [%s]: not enough time elapsed since last ping.  Last ping %f: Next ping %f: Now %f"
                         ,pcVar14,*(undefined8 *)(param_1 + 0x20));
            cVar8 = *(char *)(param_1 + 0xf50);
          }
          if (cVar8 == '\0') {
            *(undefined1 *)(param_1 + 0xf50) = 1;
            plVar27 = (long *)(param_1 + 0x10);
            do {
              lVar23 = *plVar27;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
              if (bVar9) {
                *plVar27 = lVar23 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            lVar21 = *(long *)(param_1 + 8);
            if ((lVar21 != 0) && (*(char *)(lVar21 + 0x10) != '\0')) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                           "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar21 + 8),
                           (long *)(param_1 + 8),
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                           ,0x68,lVar23,lVar23 + 1,"retry_initiate_ping_locked");
            }
            *(long *)(param_1 + 0xf70) = param_1;
            puVar26 = PTR_LAB_04374f40;
            *(undefined8 *)(param_1 + 0xf98) = 0;
            *(undefined4 *)(param_1 + 4000) = 0;
            *(undefined **)(param_1 + 0xf68) = puVar26;
            *(undefined8 *)(param_1 + 0xf78) = 0;
            *(undefined2 *)(param_1 + 0xf80) = 0;
            *(char **)(param_1 + 0xf88) =
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc";
            *(undefined4 *)(param_1 + 0xf90) = 0x6b;
            FUN_002f5c60(param_1 + 0xf18,puVar6,param_1 + 0xf60);
          }
        }
        else {
          *(long *)(param_1 + 0xee8) = *(long *)(param_1 + 0xf58);
          *(long *)(param_1 + 0xf58) = *(long *)(param_1 + 0xf58) + 1;
          local_d8 = (long *)0x38b53f1;
          uVar25 = (ulong)local_d0 >> 0x20;
          local_d0 = CONCAT44((int)uVar25,0x74);
          FUN_002f02b4(&local_d8,param_1 + 0xeb8);
          if (*(long *)(param_1 + 0xec8) != 0) {
            if (*(long *)(param_1 + 0xed8) == 0) {
              *(undefined8 *)(param_1 + 0xee0) = *(undefined8 *)(param_1 + 0xed0);
              *(long *)(param_1 + 0xed8) = *(long *)(param_1 + 0xec8);
            }
            else {
              **(long **)(param_1 + 0xee0) = *(long *)(param_1 + 0xec8);
              *(undefined8 *)(param_1 + 0xee0) = *(undefined8 *)(param_1 + 0xed0);
            }
            *(long *)(param_1 + 0xec8) = 0;
            *(undefined8 *)(param_1 + 0xed0) = 0;
          }
          FUN_005a44a0(&local_d8,0,*(undefined8 *)(param_1 + 0xee8));
          FUN_003052c0(param_1 + 0x358,&local_d8);
          lVar24 = *(long *)PTR_DAT_043738c0;
          if (PTR___tls_init_043737c8 != (undefined *)0x0) {
            grpc_core::ExecCtx::exec_ctx_::__tls_init();
          }
          lVar21 = *(long *)(lVar21 + 0x30);
          uVar11 = *(uint *)(lVar21 + 0x30);
          if (uVar11 == 0xffffffff) {
            uVar11 = nn::os::GetCurrentCoreNumber();
            *(uint *)(lVar21 + 0x30) = uVar11;
          }
          plVar27 = (long *)(lVar24 + (ulong)uVar11 * 0x1d50 + 0xf0);
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar27,0x10);
            if (bVar9) {
              *plVar27 = *plVar27 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          *(long *)(param_1 + 0xf08) = lVar23;
          if ((PTR_DAT_04374f00[0x10] != '\0' || PTR_DAT_04374f08[0x10] != '\0') ||
              PTR_DAT_04374f30[0x10] != '\0') {
            pcVar14 = "SERVER";
            if (*(char *)(param_1 + 0xcf0) != '\0') {
              pcVar14 = "CLIENT";
            }
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                         ,0x7f,1,"%s: Ping sent [%s]: %d/%d",pcVar14,*(undefined8 *)(param_1 + 0x20)
                         ,*(undefined4 *)(param_1 + 0xf10),*(undefined4 *)(param_1 + 0xef0));
          }
          *(uint *)(param_1 + 0xf10) =
               *(int *)(param_1 + 0xf10) - (uint)(*(int *)(param_1 + 0xf10) != 0);
        }
      }
    }
    else if ((PTR_DAT_04374f00[0x10] != '\0' || PTR_DAT_04374f08[0x10] != '\0') ||
             PTR_DAT_04374f30[0x10] != '\0') {
      pcVar14 = "SERVER";
      if (*(char *)(param_1 + 0xcf0) != '\0') {
        pcVar14 = "CLIENT";
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                   ,0x3c,1,"%s: Ping delayed [%s]: already pinging",pcVar14,
                   *(undefined8 *)(param_1 + 0x20));
    }
  }
  return (ulong)CONCAT12(uStack_86,CONCAT11(uStack_87,*(long *)(alStack_b8[3] + 0x368) != 0));
}


