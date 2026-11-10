/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059cdf0; name: FUN_0059cdf0
 */


void FUN_0059cdf0(long param_1,ulong param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  ulong local_10d8;
  ulong local_10d0;
  ulong local_10c8;
  ulong local_10c0;
  undefined1 auStack_10b8 [32];
  int local_1098 [2];
  undefined8 local_1090;
  undefined8 uStack_1088;
  undefined8 uStack_1080;
  undefined8 uStack_1078;
  undefined1 local_1070 [345] [12];
  
  if (4 < param_2) {
    FUN_002f03c0(param_2,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x9d9);
  }
  if (param_2 == 0) {
    uVar5 = 0;
    local_10c0 = 0;
    lVar7 = *(long *)(param_1 + 0x48);
  }
  else {
    local_10c0 = param_2;
    FUN_002f2c60(local_1070,"Endpoint read failed");
    uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x9de,local_1070,&local_10c0,1);
    uVar5 = FUN_002f0d20(uVar4,0xe,*(undefined4 *)(param_1 + 0x40));
    local_10c0 = param_2;
    if (4 < param_2) {
      FUN_002f0430(param_2,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x9e3);
    }
    lVar7 = *(long *)(param_1 + 0x48);
  }
  if (lVar7 == 0) {
    local_10d8 = uVar5;
    if (4 < uVar5) {
      local_10d8 = FUN_002f03c0(uVar5,
                                "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                ,0x9e7);
    }
    local_10d0 = 0;
    local_10c8 = 0;
    if (*(long *)(param_1 + 0x200) != 0) {
      lVar7 = 0;
      uVar11 = 1;
      do {
        local_10d0 = 0;
        lVar6 = (**(code **)(*(long *)(param_1 + 0x1130) + 0x48))(param_1 + 0x1130);
        lVar8 = *(long *)(param_1 + 0x1f8);
        if (lVar6 != 0) {
          if (*(long *)(lVar8 + lVar7) == 0) {
            uVar9 = (ulong)*(byte *)(lVar8 + lVar7 + 8);
          }
          else {
            uVar9 = *(ulong *)(lVar8 + lVar7 + 8);
          }
          *(ulong *)(lVar6 + 8) = *(long *)(lVar6 + 8) + uVar9;
        }
        local_10d0 = FUN_005ad030(param_1,lVar8 + lVar7);
        if (local_10d0 != 0) break;
        bVar2 = uVar11 < *(ulong *)(param_1 + 0x200);
        uVar11 = uVar11 + 1;
        lVar7 = lVar7 + 0x20;
      } while (bVar2);
      if (local_10d0 != 0) {
        local_1098[0] = 0;
        uStack_1088 = 0;
        local_1090 = 0;
        uStack_1078 = 0;
        uStack_1080 = 0;
        FUN_00579a20(local_1070,0,local_1098);
        if (*(long *)(param_1 + 0x200) == 0) {
LAB_0059cfa4:
          uVar9 = FUN_0057a660(local_1070);
          if (uVar9 != 0) goto LAB_0059cfb0;
          FUN_002f2c60(auStack_10b8,"Trying to connect an http1.x server");
          uVar4 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                               ,0x9c1,auStack_10b8,0,0);
          uVar4 = FUN_002f0d20(uVar4,0xc,(long)local_1098[0]);
          iVar3 = FUN_003d8060(local_1098[0]);
          uVar11 = FUN_002f0d20(uVar4,3,(long)iVar3);
        }
        else {
          lVar7 = 0;
          uVar11 = 1;
          do {
            uVar9 = FUN_00579ad0(local_1070,*(long *)(param_1 + 0x1f8) + lVar7,0);
            bVar2 = uVar11 < *(ulong *)(param_1 + 0x200);
            uVar11 = uVar11 + 1;
            lVar7 = lVar7 + 0x20;
          } while (uVar9 == 0 && bVar2);
          if (uVar9 == 0) goto LAB_0059cfa4;
LAB_0059cfb0:
          if (4 < uVar9) {
            FUN_002f0430(uVar9,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x9c6);
          }
          uVar11 = 0;
        }
        FUN_00579a60(local_1070);
        FUN_00579a70(local_1098);
        local_10c8 = uVar11;
        if (4 < uVar5) {
          FUN_002f0430(uVar5,
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x9f3);
        }
        FUN_002f2c60(local_1070,"Failed parsing HTTP/2");
        uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x9f5,local_1070,&local_10d8,3);
      }
    }
    if (local_10d8 < 5) {
      if (4 < local_10d0) goto LAB_0059d168;
LAB_0059d0b8:
      if (4 < local_10c8) goto LAB_0059d184;
LAB_0059d0c4:
      lVar7 = *(long *)(param_1 + 0x1208);
    }
    else {
      FUN_002f0430(local_10d8,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x9f8);
      if (local_10d0 < 5) goto LAB_0059d0b8;
LAB_0059d168:
      FUN_002f0430(local_10d0,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x9f8);
      if (local_10c8 < 5) goto LAB_0059d0c4;
LAB_0059d184:
      FUN_002f0430(local_10c8,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0x9f8);
      lVar7 = *(long *)(param_1 + 0x1208);
    }
    if (lVar7 != 0) {
      if ((0 < lVar7) && (uVar11 = FUN_005accd0(param_1,local_1070), (uVar11 & 1) != 0)) {
        lVar7 = *(long *)(param_1 + 0x48);
        uVar4 = local_1070[0]._0_8_;
        while( true ) {
          local_1070[0]._0_8_ = uVar4;
          if ((lVar7 == 0) && (uVar11 = FUN_005ac230(param_1,uVar4), (uVar11 & 1) != 0)) {
            FUN_00598b70(uVar4,"chttp2_writing:become");
          }
          FUN_00598190(param_1,0xd);
          uVar11 = FUN_005accd0(param_1,local_1070);
          if ((uVar11 & 1) == 0) break;
          lVar7 = *(long *)(param_1 + 0x48);
          uVar4 = local_1070[0]._0_8_;
        }
      }
      *(undefined8 *)(param_1 + 0x1208) = 0;
    }
  }
  if (uVar5 == 0) {
    plVar10 = (long *)(param_1 + 0x48);
    if (*plVar10 == 0) {
LAB_0059d320:
      if (*(int *)(param_1 + 0x15b4) == 0) {
        FUN_002f5c80(param_1 + 0x1530);
      }
      FUN_00305050(param_1 + 0x1f0);
      if (*(uint *)(param_1 + 0x15cc) >> 4 < 0x271) {
        *(char **)(param_1 + 0x1d0) =
             "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
        ;
        *(long *)(param_1 + 0x1b8) = param_1;
        *(undefined8 *)(param_1 + 0x1c0) = 0;
        *(undefined2 *)(param_1 + 0x1c8) = 0;
        *(undefined8 *)(param_1 + 0x1e0) = 0;
        *(undefined1 **)(param_1 + 0x1b0) = &LAB_0059e830;
        *(undefined4 *)(param_1 + 0x1d8) = 0xa36;
        *(undefined4 *)(param_1 + 0x1e8) = 0;
        FUN_003082c0(*(undefined8 *)(param_1 + 0x18),param_1 + 0x1f0,param_1 + 0x1a8,
                     *(long *)(param_1 + 0xe28) != 0);
        local_1070[0] = (**(code **)(*(long *)(param_1 + 0x1130) + 0x20))(param_1 + 0x1130);
        FUN_00597fd0(local_1070,param_1,0);
        return;
      }
      *(undefined1 *)(param_1 + 0x15d0) = 1;
      if (PTR_DAT_04374f08[0x10] == '\0') {
        return;
      }
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                   ,0xa25,1,
                   "transport %p : Pausing reading due to too many unwritten SETTINGS ACK and RST_STREAM frames"
                   ,param_1);
      return;
    }
    FUN_002f2c60(local_1070,"Transport closed");
    uVar5 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xa0d,local_1070,plVar10,1);
    if (uVar5 == 0) {
      if (*plVar10 == 0) goto LAB_0059d320;
      uVar5 = 0;
      goto LAB_0059d208;
    }
  }
  uVar11 = *(ulong *)(param_1 + 0xe28);
  if (uVar11 != 0) {
    if (4 < uVar11) {
      uVar11 = FUN_002f03c0(uVar11,
                            "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ,0xa13);
    }
    uVar5 = FUN_002f13f0(uVar5,uVar11);
  }
  uVar11 = uVar5;
  if (4 < uVar5) {
    uVar11 = FUN_002f03c0(uVar5,
                          "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                          ,0xa16);
  }
  FUN_0059a470(param_1,uVar11);
  *(undefined1 *)(param_1 + 0x50) = 0;
LAB_0059d208:
  FUN_00305050(param_1 + 0x1f0);
  lVar7 = *(long *)(param_1 + 8);
  plVar10 = (long *)(param_1 + 0x10);
  do {
    lVar6 = *plVar10;
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar6 + -1;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x10) != '\0')) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",199,1,
                 "%s:%p %s:%d unref %ld -> %ld %s",*(undefined8 *)(lVar7 + 8),(long *)(param_1 + 8),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xa2d,lVar6,lVar6 + -1,"reading_action");
  }
  if (lVar6 < 1) {
    FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xcb,2,
                 "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (lVar6 == 1) {
    FUN_0059669c(param_1);
    FUN_002e2ea0(PTR_LAB_04373088,param_1);
  }
  if (4 < uVar5) {
    FUN_002f0430(uVar5,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0xa30);
  }
  return;
}


