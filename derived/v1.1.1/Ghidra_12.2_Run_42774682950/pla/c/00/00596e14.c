/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00596e14; name: FUN_00596e14
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00596e14(undefined8 *param_1,ulong *param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  undefined1 *puVar4;
  char *pcVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  char cVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined8 uVar15;
  void *__s;
  long lVar16;
  long lVar17;
  long *plVar18;
  undefined8 *puVar19;
  uint uVar20;
  char *pcVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined1 auVar28 [12];
  uint local_f4;
  uint local_dc;
  undefined1 auStack_b8 [32];
  byte local_98 [16];
  undefined8 local_88;
  char *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  plVar24 = param_1 + 1;
  *plVar24 = (long)PTR_DAT_04374ee8;
  plVar18 = param_1 + 2;
  *plVar18 = 1;
  param_1[3] = param_3;
  uVar15 = FUN_00308330(param_3);
  puVar26 = param_1 + 4;
  *puVar26 = uVar15;
  puVar19 = (undefined8 *)((long)param_1 + 0x10bc);
  param_1[5] = param_5;
  uVar15 = FUN_002f45b0();
  *(undefined4 *)(param_1 + 8) = 0;
  bVar11 = (param_4 & 1) == 0;
  pcVar1 = "client_transport";
  if (bVar11) {
    pcVar1 = "server_transport";
  }
  param_1[0x66] = pcVar1;
  *(undefined4 *)(param_1 + 0x67) = 2;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[6] = uVar15;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[99] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x6a] = 0;
  param_1[0x69] = 0;
  param_1[0x68] = param_1 + 0x69;
  *(undefined4 *)(param_1 + 0x1c4) = 0xffff;
  *(undefined4 *)(param_1 + 0x1c7) = 8;
  uVar13 = 1;
  if (bVar11) {
    uVar13 = 2;
  }
  *(undefined4 *)((long)param_1 + 0xeac) = uVar13;
  *(byte *)(param_1 + 0x19e) = (byte)param_4 & 1;
  param_1[0x1c5] = 0;
  *(undefined4 *)(param_1 + 0x1c6) = 0;
  *(undefined2 *)((long)param_1 + 0xe34) = 1;
  *(undefined4 *)(param_1 + 0x1d6) = 0;
  param_1[0x1eb] = 0;
  param_1[0x216] = 0;
  *(undefined4 *)(param_1 + 0x217) = 0;
  param_1[0x1dd] = 0;
  param_1[0x1d8] = 0;
  param_1[0x1d7] = 0;
  param_1[0x1da] = 0;
  param_1[0x1d9] = 0;
  param_1[0x1dc] = 0;
  param_1[0x1db] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  uVar15 = _DAT_03889ba0;
  *(undefined8 *)((long)param_1 + 0x10c4) = _UNK_03889ba8;
  *puVar19 = uVar15;
  param_1[0x21a] = 0;
                    /* try { // try from 00596f48 to 00596f4f has its CatchHandler @ 00597dac */
  __s = (void *)FUN_002ebd50(0x400);
  param_1[0x21a] = __s;
  memset(__s,0,0x400);
  uVar13 = 0x18;
  if ((param_4 & 1) == 0) {
    uVar13 = 0;
  }
  *(undefined4 *)(param_1 + 0x242) = uVar13;
  param_1[0x241] = 0;
  *(undefined4 *)((long)param_1 + 0x1214) = 0x1000000;
  param_1[0x243] = 0;
  *(undefined4 *)(param_1 + 0x244) = 0;
  param_1[0x248] = 0;
  *(undefined2 *)(param_1 + 0x27a) = 0;
  *(undefined2 *)(param_1 + 0x2b6) = 0;
  param_1[0x246] = 0;
  param_1[0x245] = 0;
  *(undefined2 *)(param_1 + 0x267) = 0;
  param_1[0x264] = 0;
  param_1[0x266] = 0;
  param_1[0x265] = 0;
  *(undefined1 *)(param_1 + 0x2ba) = 0;
  param_1[0x2b7] = 0;
  *param_1 = &DAT_0418a578;
  param_1[0x2b9] = 0;
  param_1[0x2b8] = 0;
                    /* try { // try from 00596fcc to 0059701b has its CatchHandler @ 00597dcc */
  FUN_005a4830(param_1 + 0x15,8);
  FUN_00305000(param_1 + 0x3e);
  FUN_00305000(param_1 + 0x6b);
  if ((param_4 & 1) != 0) {
    FUN_002f2ff0(auStack_b8,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n");
    FUN_003052c0(param_1 + 0x6b,auStack_b8);
  }
  FUN_005a4df0();
  FUN_00305000(param_1 + 0x19f);
  puVar10 = PTR_PTR_04374ef0;
  uVar13 = *(undefined4 *)(PTR_PTR_04374ef0 + 8);
  *(undefined4 *)((long)param_1 + 0xe3c) = uVar13;
  *(undefined4 *)(param_1 + 0x1cb) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe74) = uVar13;
  *(undefined4 *)(param_1 + 0x1d2) = uVar13;
  uVar13 = *(undefined4 *)(puVar10 + 0x28);
  *(undefined4 *)(param_1 + 0x1c8) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe5c) = uVar13;
  *(undefined4 *)(param_1 + 0x1cf) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe94) = uVar13;
  uVar13 = *(undefined4 *)(puVar10 + 0x48);
  *(undefined4 *)((long)param_1 + 0xe44) = uVar13;
  *(undefined4 *)(param_1 + 0x1cc) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe7c) = uVar13;
  *(undefined4 *)(param_1 + 0x1d3) = uVar13;
  uVar13 = *(undefined4 *)(puVar10 + 0x68);
  *(undefined4 *)(param_1 + 0x1c9) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe64) = uVar13;
  *(undefined4 *)(param_1 + 0x1d0) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe9c) = uVar13;
  uVar13 = *(undefined4 *)(puVar10 + 0x88);
  *(undefined4 *)((long)param_1 + 0xe4c) = uVar13;
  *(undefined4 *)(param_1 + 0x1cd) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe84) = uVar13;
  *(undefined4 *)(param_1 + 0x1d4) = uVar13;
  uVar13 = *(undefined4 *)(puVar10 + 0xa8);
  *(undefined4 *)(param_1 + 0x1ca) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe6c) = uVar13;
  *(undefined4 *)(param_1 + 0x1d1) = uVar13;
  *(undefined4 *)((long)param_1 + 0xea4) = uVar13;
  uVar13 = *(undefined4 *)(puVar10 + 200);
  *(undefined4 *)((long)param_1 + 0xe54) = uVar13;
  *(undefined4 *)(param_1 + 0x1ce) = uVar13;
  *(undefined4 *)((long)param_1 + 0xe8c) = uVar13;
  *(undefined4 *)(param_1 + 0x1d5) = uVar13;
                    /* try { // try from 005970b4 to 00597217 has its CatchHandler @ 00597dc4 */
  FUN_005af240(param_1 + 0x1fa);
  FUN_005a9cb0(param_1 + 0x222);
  if ((param_4 & 1) != 0) {
    iVar12 = *(int *)(puVar10 + 0x2c);
    if (iVar12 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x41f,1,"Requested parameter %s clamped from %d to %d",
                   *(undefined8 *)(puVar10 + 0x20),0,iVar12);
    }
    if (iVar12 != *(int *)((long)param_1 + 0xe5c)) {
      *(int *)((long)param_1 + 0xe5c) = iVar12;
      *(undefined1 *)((long)param_1 + 0xe34) = 1;
    }
    iVar12 = *(int *)(puVar10 + 0x4c);
    if (iVar12 != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x41f,1,"Requested parameter %s clamped from %d to %d",
                   *(undefined8 *)(puVar10 + 0x40),0,iVar12);
    }
    if (iVar12 != *(int *)(param_1 + 0x1cc)) {
      *(int *)(param_1 + 0x1cc) = iVar12;
      *(undefined1 *)((long)param_1 + 0xe34) = 1;
    }
  }
  uVar14 = *(uint *)(puVar10 + 0xac);
  if ((uVar14 < 0x2001) && (uVar14 = *(uint *)(puVar10 + 0xb0), uVar14 >> 0xd != 0)) {
    uVar14 = 0x2000;
    if (*(int *)((long)param_1 + 0xe6c) != 0x2000) goto LAB_005971a4;
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x41f,1,"Requested parameter %s clamped from %d to %d",
                 *(undefined8 *)(puVar10 + 0xa0),0x2000,uVar14);
    if (uVar14 != *(uint *)((long)param_1 + 0xe6c)) {
LAB_005971a4:
      *(uint *)((long)param_1 + 0xe6c) = uVar14;
      *(undefined1 *)((long)param_1 + 0xe34) = 1;
    }
  }
  uVar14 = *(uint *)(puVar10 + 0xcc);
  if (uVar14 < 2) {
    if (*(int *)(puVar10 + 0xd0) == 0) {
      uVar14 = 0;
      goto LAB_005971f0;
    }
    uVar14 = 1;
    if (*(int *)(param_1 + 0x1ce) != 1) goto LAB_00597224;
  }
  else {
LAB_005971f0:
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x41f,1,"Requested parameter %s clamped from %d to %d",
                 *(undefined8 *)(puVar10 + 0xc0),1,uVar14);
    if (uVar14 != *(uint *)(param_1 + 0x1ce)) {
LAB_00597224:
      *(uint *)(param_1 + 0x1ce) = uVar14;
      *(undefined1 *)((long)param_1 + 0xe34) = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x1de) = DAT_0418a71c;
  param_1[0x1df] = (long)DAT_0418a720;
  *(undefined4 *)((long)param_1 + 0xef4) = DAT_0418a718;
  param_1[0x1e0] = (long)DAT_0418a724;
  bVar11 = *(char *)(param_1 + 0x19e) != '\0';
  piVar2 = &DAT_0418a70c;
  if (bVar11) {
    piVar2 = &DAT_0418a708;
  }
  piVar3 = &DAT_0418a714;
  if (bVar11) {
    piVar3 = &DAT_0418a710;
  }
  iVar12 = *piVar3;
  puVar4 = &DAT_0439ef9c;
  if (bVar11) {
    puVar4 = &DAT_0439ef98;
  }
  uVar8 = *puVar4;
  lVar27 = 0x7fffffffffffffff;
  if (*piVar2 != 0x7fffffff) {
    lVar27 = (long)*piVar2;
  }
  param_1[0x2b4] = lVar27;
  lVar27 = 0x7fffffffffffffff;
  if (iVar12 != 0x7fffffff) {
    lVar27 = (long)iVar12;
  }
  param_1[0x2b5] = lVar27;
  *(undefined1 *)(param_1 + 0x2b6) = uVar8;
  if (param_2 == (ulong *)0x0) {
    local_dc = 1;
    goto LAB_00597988;
  }
  if (*param_2 == 0) {
    local_dc = 1;
LAB_005978b4:
    local_80 = "chttp2";
    local_78 = PTR_LAB_043737d8;
    local_70 = *puVar26;
    puStack_68 = PTR_LAB_043737d8;
                    /* try { // try from 005978d0 to 005978eb has its CatchHandler @ 00597dc8 */
    FUN_002e6390(local_98,"%s %s",5,&local_80,2);
                    /* try { // try from 005978ec to 005978ff has its CatchHandler @ 00597d80 */
    uVar15 = FUN_0059d43c(&DAT_03996322,puVar26,local_98);
    puVar19 = (undefined8 *)param_1[0x2b8];
    if (puVar19 == (undefined8 *)0x0) {
LAB_00597968:
      param_1[0x2b8] = uVar15;
    }
    else {
      lVar27 = puVar19[1];
      plVar25 = puVar19 + 2;
      do {
        lVar17 = *plVar25;
        cVar9 = '\x01';
        bVar11 = (bool)ExclusiveMonitorPass(plVar25,0x10);
        if (bVar11) {
          *plVar25 = lVar17 + -1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      if ((lVar27 != 0) && (*(char *)(lVar27 + 0x10) != '\0')) {
                    /* try { // try from 00597938 to 00597957 has its CatchHandler @ 00597cc0 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar27 + 8),puVar19 + 1,lVar17);
      }
      if (lVar17 < 1) {
                    /* try { // try from 00597c98 to 00597cbf has its CatchHandler @ 00597cc0 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar17 != 1) goto LAB_00597968;
      (**(code **)*puVar19)(puVar19);
      FUN_002e2ea0(PTR_LAB_04373088,puVar19);
      param_1[0x2b8] = uVar15;
    }
    if ((local_98[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_88);
    }
  }
  else {
    bVar11 = (param_4 & 1) == 0;
    pcVar1 = "clients";
    if (bVar11) {
      pcVar1 = "servers";
    }
    pcVar5 = "client";
    if (bVar11) {
      pcVar5 = "server";
    }
    lVar27 = 0;
    local_dc = 1;
    uVar23 = 0;
    local_f4 = 1;
    plVar25 = plVar24;
    do {
      lVar17 = param_2[1] + lVar27;
      pcVar21 = *(char **)(lVar17 + 8);
      iVar12 = strcmp(pcVar21,"grpc.http2.initial_sequence_number");
      if (iVar12 == 0) {
        plVar25 = (long *)((ulong)plVar25 & 0xffffffff00000000 | 0x7fffffff);
                    /* try { // try from 005974ec to 0059788b has its CatchHandler @ 00597dd0 */
        uVar14 = FUN_002e4c30(lVar17,0xffffffff,plVar25);
        if (-1 < (int)uVar14) {
          uVar20 = *(uint *)((long)param_1 + 0xeac) & 1;
          if (uVar20 == (uVar14 & 1)) {
            *(uint *)((long)param_1 + 0xeac) = uVar14;
          }
          else {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xfb,2,"%s: low bit must be %d on %s","grpc.http2.initial_sequence_number"
                         ,uVar20,pcVar5);
          }
        }
      }
      else {
        iVar12 = strcmp(pcVar21,"grpc.http2.hpack_table_size.encoder");
        if (iVar12 == 0) {
          puVar19 = (undefined8 *)((ulong)puVar19 & 0xffffffff00000000 | 0x7fffffff);
          iVar12 = FUN_002e4c30(lVar17,0xffffffff,puVar19);
          if (-1 < iVar12) {
            FUN_005a5000(param_1 + 0x90);
          }
        }
        else {
          iVar12 = strcmp(pcVar21,"grpc.http2.max_pings_without_data");
          if (iVar12 == 0) {
            uVar13 = FUN_002e4c30(lVar17,DAT_0418a71c,0x7fffffff);
            *(undefined4 *)(param_1 + 0x1de) = uVar13;
          }
          else {
            iVar12 = strcmp(pcVar21,"grpc.http2.max_ping_strikes");
            if (iVar12 == 0) {
              uVar13 = FUN_002e4c30(lVar17,DAT_0418a718);
              *(undefined4 *)((long)param_1 + 0xef4) = uVar13;
            }
            else {
              iVar12 = strcmp(pcVar21,"grpc.http2.min_time_between_pings_ms");
              if (iVar12 == 0) {
                iVar12 = FUN_002e4c30(lVar17,DAT_0418a720);
                param_1[0x1df] = (long)iVar12;
              }
              else {
                iVar12 = strcmp(pcVar21,"grpc.http2.min_ping_interval_without_data_ms");
                if (iVar12 == 0) {
                  iVar12 = FUN_002e4c30(lVar17,DAT_0418a724);
                  param_1[0x1e0] = (long)iVar12;
                }
                else {
                  iVar12 = strcmp(pcVar21,"grpc.http2.write_buffer_size");
                  if (iVar12 == 0) {
                    uVar13 = FUN_002e4c30(lVar17,0);
                    *(undefined4 *)(param_1 + 0x1c4) = uVar13;
                  }
                  else {
                    iVar12 = strcmp(pcVar21,"grpc.http2.bdp_probe");
                    if (iVar12 == 0) {
                      local_dc = FUN_002e4ee0(lVar17,1);
                    }
                    else {
                      iVar12 = strcmp(pcVar21,"grpc.keepalive_time_ms");
                      if (iVar12 == 0) {
                        puVar6 = &DAT_0418a70c;
                        if (*(char *)(param_1 + 0x19e) != '\0') {
                          puVar6 = &DAT_0418a708;
                        }
                        iVar12 = FUN_002e4c30(lVar17,(ulong)*puVar6 | 0x100000000);
                        lVar17 = 0x7fffffffffffffff;
                        if (iVar12 != 0x7fffffff) {
                          lVar17 = (long)iVar12;
                        }
                        param_1[0x2b4] = lVar17;
                      }
                      else {
                        iVar12 = strcmp(pcVar21,"grpc.keepalive_timeout_ms");
                        if (iVar12 == 0) {
                          puVar7 = &DAT_0418a714;
                          if (*(char *)(param_1 + 0x19e) != '\0') {
                            puVar7 = &DAT_0418a710;
                          }
                          iVar12 = FUN_002e4c30(lVar17,*puVar7);
                          lVar17 = 0x7fffffffffffffff;
                          if (iVar12 != 0x7fffffff) {
                            lVar17 = (long)iVar12;
                          }
                          param_1[0x2b5] = lVar17;
                        }
                        else {
                          iVar12 = strcmp(pcVar21,"grpc.keepalive_permit_without_calls");
                          if (iVar12 == 0) {
                            iVar12 = FUN_002e4c30(lVar17,0);
                            *(bool *)(param_1 + 0x2b6) = iVar12 != 0;
                          }
                          else {
                            iVar12 = strcmp(pcVar21,"grpc.optimization_target");
                            if (iVar12 == 0) {
                              FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                           ,0x145,1,"GRPC_ARG_OPTIMIZATION_TARGET is deprecated");
                            }
                            else {
                              iVar12 = strcmp(pcVar21,"grpc.enable_channelz");
                              if (iVar12 == 0) {
                                local_f4 = FUN_002e4ee0(lVar17,1);
                              }
                              else {
                                iVar12 = strcmp(pcVar21,"grpc.max_concurrent_streams");
                                if (iVar12 == 0) {
                                  lVar16 = 0;
                                  pcVar21 = "grpc.max_concurrent_streams";
                                }
                                else {
                                  iVar12 = strcmp(pcVar21,"grpc.http2.hpack_table_size.decoder");
                                  if (iVar12 == 0) {
                                    lVar16 = 1;
                                    pcVar21 = "grpc.http2.hpack_table_size.decoder";
                                  }
                                  else {
                                    iVar12 = strcmp(pcVar21,"grpc.max_metadata_size");
                                    if (iVar12 == 0) {
                                      lVar16 = 2;
                                      pcVar21 = "grpc.max_metadata_size";
                                    }
                                    else {
                                      iVar12 = strcmp(pcVar21,"grpc.http2.max_frame_size");
                                      if (iVar12 == 0) {
                                        lVar16 = 3;
                                        pcVar21 = "grpc.http2.max_frame_size";
                                      }
                                      else {
                                        iVar12 = strcmp(pcVar21,"grpc.http2.true_binary");
                                        if (iVar12 == 0) {
                                          lVar16 = 4;
                                          pcVar21 = "grpc.http2.true_binary";
                                        }
                                        else {
                                          iVar12 = strcmp(pcVar21,"grpc.http2.lookahead_bytes");
                                          if (iVar12 != 0) goto LAB_00597324;
                                          lVar16 = 5;
                                          pcVar21 = "grpc.http2.lookahead_bytes";
                                        }
                                      }
                                    }
                                  }
                                }
                                if ((&DAT_0418a4d0)[lVar16 * 0x20 + (param_4 & 1)] == '\0') {
                                  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                               ,0x16c,0,"%s is not available on %s",pcVar21,pcVar1);
                                }
                                else {
                                  uVar14 = FUN_002e4c30(lVar17,(&DAT_0418a4c4)[lVar16 * 4]);
                                  if (-1 < (int)uVar14) {
                                    uVar22 = (ulong)*(uint *)(lVar16 * 0x20 + 0x418a4c0);
                                    uVar20 = *(uint *)(PTR_PTR_04374ef0 + uVar22 * 0x20 + 0xc);
                                    if ((uVar20 <= uVar14) &&
                                       (uVar20 = *(uint *)(PTR_PTR_04374ef0 + uVar22 * 0x20 + 0x10),
                                       uVar14 <= *(uint *)(PTR_PTR_04374ef0 + uVar22 * 0x20 + 0x10))
                                       ) {
                                      uVar20 = uVar14;
                                    }
                                    if (uVar20 != uVar14) {
                                      FUN_002ebea0(
                                                  "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                                  ,0x41f,1,
                                                  "Requested parameter %s clamped from %d to %d",
                                                  *(undefined8 *)(PTR_PTR_04374ef0 + uVar22 * 0x20),
                                                  uVar14,uVar20);
                                    }
                                    if (uVar20 != *(uint *)((long)param_1 + uVar22 * 4 + 0xe58)) {
                                      *(uint *)((long)param_1 + uVar22 * 4 + 0xe58) = uVar20;
                                      *(undefined1 *)((long)param_1 + 0xe34) = 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00597324:
      uVar23 = uVar23 + 1;
      lVar27 = lVar27 + 0x20;
    } while (uVar23 < *param_2);
    if ((local_f4 & 1) != 0) goto LAB_005978b4;
  }
  local_dc = local_dc & 1;
LAB_00597988:
  plVar25 = param_1 + 0x226;
  if (*PTR_DAT_04374ef8 == '\0') {
                    /* try { // try from 005979b4 to 005979bf has its CatchHandler @ 00597d7c */
    FUN_005aa550(plVar25,param_1);
    local_dc = 0;
  }
  else {
                    /* try { // try from 005979a0 to 005979af has its CatchHandler @ 00597da8 */
    FUN_005aa58c(plVar25,param_1,local_dc);
  }
  param_1[0x1e1] = 0x8000000000000000;
  param_1[0x1f8] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x1e2) = 0;
  *(undefined1 *)(param_1 + 0x1ea) = 0;
  *(undefined4 *)(param_1 + 0x1f9) = 0;
  if (param_1[0x2b4] == 0x7fffffffffffffff) {
    *(undefined4 *)((long)param_1 + 0x15b4) = 3;
  }
  else {
    *(undefined4 *)((long)param_1 + 0x15b4) = 0;
    do {
      lVar27 = *plVar18;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar27 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    lVar17 = *plVar24;
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
                    /* try { // try from 00597a28 to 00597aa7 has its CatchHandler @ 00597dc8 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar17 + 8),plVar24,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x1a9,lVar27,lVar27 + 1,"init keepalive ping");
    }
    param_1[0x283] = &LAB_0059d6a0;
    param_1[0x284] = param_1;
    param_1[0x285] = 0;
    *(undefined2 *)(param_1 + 0x286) = 0;
    param_1[0x289] = 0;
    *(undefined4 *)(param_1 + 0x28a) = 0;
    param_1[0x287] =
         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
    ;
    puVar10 = PTR___tls_init_043737c8;
    *(undefined4 *)(param_1 + 0x288) = 0x1ab;
    if (puVar10 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar27 = tpidr_el0;
                    /* try { // try from 00597ac0 to 00597b53 has its CatchHandler @ 00597dc8 */
    lVar27 = FUN_002f00fc(*(undefined8 *)(lVar27 + 0x30));
    FUN_002f5c60(param_1 + 0x2a6,param_1[0x2b4] + lVar27,param_1 + 0x282);
  }
  if (local_dc != 0) {
    do {
      lVar27 = *plVar18;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar27 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    lVar17 = *plVar24;
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar17 + 8),plVar24,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x205,lVar27,lVar27 + 1,"bdp_ping");
    }
    FUN_00597ea0(param_1);
                    /* try { // try from 00597b5c to 00597b7b has its CatchHandler @ 00597dc0 */
    auVar28 = (**(code **)(*plVar25 + 0x28))(plVar25);
    local_80 = auVar28._0_8_;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,auVar28._8_4_);
    FUN_00597fd0(&local_80,param_1,0);
  }
                    /* try { // try from 00597b7c to 00597c47 has its CatchHandler @ 00597dc8 */
  FUN_00598190(param_1,0);
  if (*(char *)(param_1 + 0x267) == '\0') {
    *(undefined1 *)(param_1 + 0x267) = 1;
    do {
      lVar27 = *plVar18;
      cVar9 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar11) {
        *plVar18 = lVar27 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    lVar17 = *plVar24;
    if ((lVar17 != 0) && (*(char *)(lVar17 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                   "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar17 + 8),plVar24,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0xc62,lVar27,lVar27 + 1,"benign_reclaimer");
    }
    param_1[0x269] = &LAB_0059f480;
    param_1[0x26a] = param_1;
    param_1[0x26b] = 0;
    *(undefined2 *)(param_1 + 0x26c) = 0;
    param_1[0x26d] =
         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
    ;
    param_1[0x26f] = 0;
    *(undefined4 *)(param_1 + 0x270) = 0;
    *(undefined4 *)(param_1 + 0x26e) = 0xc64;
    uVar15 = FUN_00308350(param_1[3]);
    FUN_00307d00(uVar15,0,param_1 + 0x268);
  }
  return;
}


