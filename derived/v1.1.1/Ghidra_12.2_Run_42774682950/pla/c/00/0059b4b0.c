/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059b4b0; name: FUN_0059b4b0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0059b4b0(ulong param_1,long param_2,int param_3,int param_4,ulong param_5)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  bool bVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  char *local_78;
  undefined4 local_70;
  ulong local_58;
  
  uVar6 = param_1;
  if (*(char *)(param_2 + 0x201) == '\0') {
    bVar10 = false;
    bVar4 = false;
    if (param_3 != 0) {
      uVar6 = param_5;
      if (4 < param_5) {
        uVar6 = FUN_002f03c0(param_5,
                             "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x8aa);
      }
      bVar10 = true;
      bVar4 = true;
      *(ulong *)(param_2 + 0x208) = uVar6;
      *(undefined1 *)(param_2 + 0x201) = 1;
    }
    if (param_4 != 0) goto LAB_0059b578;
LAB_0059b5d0:
    if (!bVar10) goto LAB_0059b888;
LAB_0059b5d4:
    if (*(char *)(param_2 + 0x200) == '\0') goto LAB_0059b888;
    uVar6 = param_5;
    if (4 < param_5) {
      uVar6 = FUN_002f03c0(param_5,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x8b6);
    }
    uVar7 = FUN_0059be30(uVar6,param_2,"Stream removed");
    iVar2 = *(int *)(param_2 + 200);
    if (iVar2 == 0) {
      uVar6 = FUN_005ac840(param_1,param_2);
    }
    else {
      uVar6 = uVar7;
      if (4 < uVar7) {
        uVar6 = FUN_002f03c0(uVar7,
                             "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x8b8);
      }
      lVar5 = param_1 + 0xa8;
      local_58 = uVar6;
      lVar8 = FUN_005a4ae0(lVar5,iVar2);
      if (lVar8 == 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x7f9,2,"assertion failed: %s",&DAT_038d12a5);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (*(long *)(param_1 + 0x1230) == lVar8) {
        *(undefined8 *)(param_1 + 0x1230) = 0;
        FUN_005ade80(param_1);
        if (*(char *)(lVar8 + 0x7d8) != '\0') goto LAB_0059b66c;
LAB_0059b9bc:
        lVar5 = FUN_005a4c80(lVar5);
        if (lVar5 != 0) goto LAB_0059b9c8;
LAB_0059b728:
        if (*(char *)(param_1 + 0x1338) == '\0') {
          *(char *)(param_1 + 0x1338) = '\x01';
          plVar12 = (long *)(param_1 + 0x10);
          do {
            lVar5 = *plVar12;
            cVar3 = '\x01';
            bVar10 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar10) {
              *plVar12 = lVar5 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          lVar11 = *(long *)(param_1 + 8);
          if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                         "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar11 + 8),
                         (long *)(param_1 + 8),
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xc62,lVar5,lVar5 + 1,"benign_reclaimer");
          }
          *(undefined1 **)(param_1 + 0x1348) = &LAB_0059f480;
          *(ulong *)(param_1 + 0x1350) = param_1;
          *(undefined8 *)(param_1 + 0x1358) = 0;
          *(undefined2 *)(param_1 + 0x1360) = 0;
          *(char **)(param_1 + 0x1368) =
               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
          ;
          *(undefined8 *)(param_1 + 0x1378) = 0;
          *(undefined4 *)(param_1 + 0x1380) = 0;
          *(undefined4 *)(param_1 + 0x1370) = 0xc64;
          uVar9 = FUN_00308350(*(undefined8 *)(param_1 + 0x18));
          FUN_00307d00(uVar9,0,param_1 + 0x1340);
        }
        if (*(int *)(param_1 + 0xe30) != 2) goto LAB_0059b9c8;
        FUN_002f2c60(&local_78,"Last stream closed after sending GOAWAY");
        uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                             ,0x812,&local_78,&local_58,1);
        FUN_0059a470(param_1,uVar9);
        uVar6 = FUN_005ac410(param_1,lVar8);
      }
      else {
        if (*(char *)(lVar8 + 0x7d8) == '\0') goto LAB_0059b9bc;
LAB_0059b66c:
        if (*(long *)(lVar8 + 2000) == 0) {
          if (4 < *(ulong *)(lVar8 + 0x958)) {
            FUN_002f0430(*(ulong *)(lVar8 + 0x958),
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0x808);
          }
          if (4 < uVar6) {
            uVar6 = FUN_002f03c0(uVar6,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                                 ,0x809);
          }
          *(ulong *)(lVar8 + 0x958) = uVar6;
          goto LAB_0059b9bc;
        }
        plVar12 = *(long **)(lVar8 + 0x9a0);
        if (uVar6 == 0) {
          FUN_002f2c60(&local_78,"Truncated message");
          uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                               ,0x802,&local_78,0,0);
          local_58 = uVar6;
        }
        FUN_0059c7e4(plVar12,uVar6);
        lVar11 = plVar12[4];
        plVar1 = plVar12 + 5;
        do {
          lVar13 = *plVar1;
          cVar3 = '\x01';
          bVar10 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar10) {
            *plVar1 = lVar13 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if ((lVar11 != 0) && (*(char *)(lVar11 + 0x10) != '\0')) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                       "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar11 + 8),plVar12 + 4,lVar13);
        }
        if (lVar13 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar13 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12);
          FUN_002e2ea0(PTR_LAB_04373088,plVar12);
        }
        *(undefined8 *)(lVar8 + 0x9a0) = 0;
        lVar5 = FUN_005a4c80(lVar5);
        if (lVar5 == 0) goto LAB_0059b728;
LAB_0059b9c8:
        uVar6 = FUN_005ac410(param_1,lVar8);
      }
      if ((uVar6 & 1) != 0) {
        FUN_003c9ce0(*(undefined8 *)(lVar8 + 0x10),"chttp2_writing:remove_stream");
      }
      if (4 < local_58) {
        FUN_002f0430(local_58,
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                     ,0x819);
      }
      uVar6 = FUN_0059e900(param_1);
    }
    if (uVar7 != 0) {
      uVar6 = FUN_0059bad0(param_1,param_2,uVar7);
    }
    bVar10 = true;
  }
  else {
    if (*(char *)(param_2 + 0x200) != '\0') {
      lVar5 = FUN_0059be30(param_5,param_2,"Stream removed");
      if (lVar5 != 0) {
        FUN_0059bad0(param_1,param_2,lVar5);
      }
      FUN_0059ab90(param_1,param_2);
      return;
    }
    bVar4 = false;
    bVar10 = true;
    if (param_4 == 0) goto LAB_0059b5d0;
LAB_0059b578:
    if (*(char *)(param_2 + 0x200) != '\0') goto LAB_0059b5d0;
    if (param_5 < 5) {
      *(ulong *)(param_2 + 0x210) = param_5;
      *(undefined1 *)(param_2 + 0x200) = 1;
      uVar6 = param_5;
    }
    else {
      uVar9 = FUN_002f03c0(param_5,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x8af);
      *(undefined8 *)(param_2 + 0x210) = uVar9;
      *(undefined1 *)(param_2 + 0x200) = 1;
      uVar6 = FUN_002f03c0(param_5,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                           ,0x8b1);
    }
    uVar6 = FUN_0059bcd0(param_1,param_2,uVar6);
    if (*(char *)(param_2 + 0x201) != '\0') goto LAB_0059b5d4;
LAB_0059b888:
    bVar10 = false;
  }
  if (!bVar4) goto joined_r0x0059ba28;
  if (*(int *)(param_2 + 0x218) == 0) {
    *(undefined4 *)(param_2 + 0x218) = 3;
    if (*(int *)(param_2 + 0x21c) != 0) goto LAB_0059b8a0;
LAB_0059b950:
    *(undefined4 *)(param_2 + 0x21c) = 3;
    lVar5 = *(long *)(param_2 + 0x198);
  }
  else {
    if (*(int *)(param_2 + 0x21c) == 0) goto LAB_0059b950;
LAB_0059b8a0:
    lVar5 = *(long *)(param_2 + 0x198);
  }
  if (lVar5 != 0) {
    if ((*(char *)(param_2 + 0x203) != '\0') &&
       (FUN_00305050(param_2 + 0x6a8), *(char *)(param_2 + 0x7d8) == '\0')) {
      FUN_00305050(param_2 + 0x7e8);
    }
    FUN_005b39d0(param_2 + 0x228,*(undefined8 *)(param_2 + 400));
    uVar9 = *(undefined8 *)(param_2 + 0x198);
    *(undefined8 *)(param_2 + 0x198) = 0;
    local_78 = 
    "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc";
    local_70 = 0x49d;
    uVar6 = FUN_002f019c(&local_78,uVar9,0);
  }
  FUN_0059a890(uVar6,param_2);
joined_r0x0059ba28:
  if (bVar10) {
    FUN_0059ab90(param_1,param_2);
    FUN_003c9ce0(*(undefined8 *)(param_2 + 0x10),"chttp2");
  }
  if (4 < param_5) {
    FUN_002f0430(param_5,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                 ,0x8ce);
  }
  return;
}


