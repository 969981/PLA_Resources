/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0059e900; name: FUN_0059e900
 */


void FUN_0059e900(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_88 [32];
  long local_68;
  
  puVar9 = PTR_DAT_04374f08;
  if (*(long *)(param_1 + 0xe28) == 0) {
    if (-1 < *(int *)(param_1 + 0xeac)) {
      pcVar4 = (char *)(param_1 + 0x1339);
      lVar2 = param_1 + 0xa8;
      plVar3 = (long *)(param_1 + 0x10);
      do {
        uVar10 = FUN_005a4c80(lVar2);
        if ((*(uint *)(param_1 + 0xe44) <= uVar10) ||
           (uVar10 = FUN_005ac750(param_1,&local_68), (uVar10 & 1) == 0)) {
          if (*(uint *)(param_1 + 0xeac) < 0x7fffffff) {
            return;
          }
          break;
        }
        if (puVar9[0x10] == '\0') {
          iVar6 = *(int *)(local_68 + 200);
        }
        else {
          puVar5 = &DAT_0392e934;
          if (*(char *)(param_1 + 0xcf0) != '\0') {
            puVar5 = &DAT_039372b9;
          }
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x46f,1,
                       "HTTP:%s: Transport %p allocating new grpc_chttp2_stream %p to id %d",puVar5,
                       param_1,local_68,*(undefined4 *)(param_1 + 0xeac));
          iVar6 = *(int *)(local_68 + 200);
        }
        if (iVar6 != 0) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                       ,0x473,2,"assertion failed: %s","s->id == 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar1 = *(int *)(param_1 + 0xeac) + 2;
        *(int *)(local_68 + 200) = *(int *)(param_1 + 0xeac);
        *(uint *)(param_1 + 0xeac) = uVar1;
        if (uVar1 < 0x7fffffff) {
          FUN_005a48c0(lVar2);
          if (*pcVar4 == '\0') goto LAB_0059ea98;
LAB_0059ea58:
          lVar12 = *(long *)(param_1 + 0x48);
          lVar13 = local_68;
        }
        else {
          if (puVar9[0x10] != '\0') {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xb6c,1,"transport %p set connectivity_state=%d",param_1,3);
          }
          FUN_003d3c24(param_1 + 0x330,3,"no_more_stream_ids");
          FUN_005a48c0(lVar2,*(undefined4 *)(local_68 + 200));
          if (*pcVar4 != '\0') goto LAB_0059ea58;
LAB_0059ea98:
          *pcVar4 = '\x01';
          do {
            lVar13 = *plVar3;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar8) {
              *plVar3 = lVar13 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar12 = *(long *)(param_1 + 8);
          if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x67,1,
                         "%s:%p %s:%d ref %ld -> %ld %s",*(undefined8 *)(lVar12 + 8),
                         (long *)(param_1 + 8),
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                         ,0xc6d,lVar13,lVar13 + 1,"destructive_reclaimer");
          }
          *(undefined1 **)(param_1 + 0x1390) = &LAB_0059f6d0;
          *(long *)(param_1 + 0x1398) = param_1;
          *(undefined8 *)(param_1 + 0x13a0) = 0;
          *(undefined1 *)(param_1 + 0x13a8) = 0;
          *(undefined8 *)(param_1 + 0x13c0) = 0;
          *(undefined4 *)(param_1 + 0x13c8) = 0;
          *(undefined1 *)(param_1 + 0x13a9) = 0;
          *(char **)(param_1 + 0x13b0) =
               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
          ;
          *(undefined4 *)(param_1 + 0x13b8) = 0xc6f;
          uVar11 = FUN_00308350(*(undefined8 *)(param_1 + 0x18));
          FUN_00307d00(uVar11,1,param_1 + 5000);
          lVar12 = *(long *)(param_1 + 0x48);
          lVar13 = local_68;
        }
        local_68 = lVar13;
        if ((lVar12 == 0) && (uVar10 = FUN_005ac230(param_1,lVar13), (uVar10 & 1) != 0)) {
          FUN_00598b70(lVar13,"chttp2_writing:become");
        }
        FUN_00598190(param_1,1);
      } while (-1 < *(int *)(param_1 + 0xeac));
    }
    uVar10 = FUN_005ac750(param_1,&local_68);
    lVar2 = local_68;
    while ((uVar10 & 1) != 0) {
      local_68 = lVar2;
      FUN_002f2c60(auStack_88,"Stream IDs exhausted");
      uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ,0x487,auStack_88,0,0);
      uVar11 = FUN_002f0d20(uVar11,3,0xe);
      FUN_0059adb0(param_1,lVar2,uVar11);
      uVar10 = FUN_005ac750(param_1,&local_68);
      lVar2 = local_68;
    }
  }
  else {
    uVar10 = FUN_005ac750(param_1,&local_68);
    lVar2 = local_68;
    while ((uVar10 & 1) != 0) {
      local_68 = lVar2;
      FUN_002f2c60(auStack_88,"GOAWAY received");
      uVar11 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/chttp2_transport.cc"
                            ,0x461,auStack_88,0,0);
      uVar11 = FUN_002f0d20(uVar11,3,0xe);
      FUN_0059adb0(param_1,lVar2,uVar11);
      uVar10 = FUN_005ac750(param_1,&local_68);
      lVar2 = local_68;
    }
  }
  return;
}


