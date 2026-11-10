/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003cbc10; name: FUN_003cbc10
 */


undefined8
FUN_003cbc10(long param_1,int param_2,long param_3,int param_4,int param_5,long param_6,int param_7)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar2 = param_7 + param_2;
  if ((int)uVar2 < 1) {
    uVar13 = 0;
    if (uVar2 != 0) goto LAB_003cbed0;
  }
  else {
    uVar14 = 0;
    lVar12 = param_3;
    do {
      lVar11 = lVar12;
      if ((long)param_2 <= (long)uVar14) {
        lVar11 = param_6 + (long)((int)uVar14 - param_2) * 0x68;
      }
      if (lVar11 == 0) goto LAB_003cbfb4;
      lVar8 = FUN_005a77c0(lVar11);
      if ((((lVar8 != 0) &&
           (uVar9 = FUN_002f1e00("validate_metadata",lVar8,
                                 "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x391)
           , (uVar9 & 1) == 0)) ||
          ((iVar6 = FUN_005a79b0(lVar11), iVar6 == 0 &&
           ((lVar8 = FUN_005a7990(lVar11 + 0x20), lVar8 != 0 &&
            (uVar9 = FUN_002f1e00("validate_metadata",lVar8,
                                  "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x396
                                 ), (uVar9 & 1) == 0)))))) ||
         ((*(long *)(lVar11 + 0x20) != 0 && (0xfffffffe < *(ulong *)(lVar11 + 0x28))))) break;
      uVar7 = FUN_003d9ea0(lVar11);
      uVar14 = uVar14 + 1;
      lVar12 = lVar12 + 0x68;
      *(undefined8 *)(lVar11 + 0x48) = uVar7;
    } while (uVar2 != uVar14);
    uVar13 = (uint)uVar14;
    if (uVar13 != uVar2) {
LAB_003cbed0:
      if (uVar13 != 0) {
        uVar14 = 0;
        do {
          lVar12 = param_3 + uVar14 * 0x68;
          if ((long)param_2 <= (long)uVar14) {
            lVar12 = param_6 + (long)((int)uVar14 - param_2) * 0x68;
          }
          if (lVar12 == 0) goto LAB_003cbfb4;
          uVar2 = (uint)*(ulong *)(lVar12 + 0x48) & 3;
          if (1 < uVar2) {
            uVar9 = *(ulong *)(lVar12 + 0x48) & 0xfffffffffffffffc;
            uVar3 = *(undefined4 *)(uVar9 + 0x48);
            plVar1 = (long *)(uVar9 + 0x40);
            FUN_003d81b0(uVar9,uVar9,uVar9 + 0x20,*(undefined8 *)(uVar9 + 0x40),
                         "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3a3);
            do {
              lVar12 = *plVar1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar5) {
                *plVar1 = lVar12 + -1;
                cVar4 = ExclusiveMonitorsStatus();
              }
            } while (cVar4 != '\0');
            if (lVar12 < 1) goto LAB_003cbfdc;
            if (lVar12 == 1) {
              FUN_003da320(uVar2,uVar9,uVar3,
                           "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3a3);
            }
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 != uVar13);
      }
      return 0;
    }
  }
  lVar12 = param_1 + (long)param_4 * 0xe8 + 0x198;
  if ((param_5 != 0) && (0 < *(int *)(param_1 + 0x6b8))) {
    lVar8 = 0;
    lVar11 = param_1 + 0x658;
    lVar10 = FUN_003dea10(lVar12,lVar11);
    while( true ) {
      if (lVar10 != 0) {
        FUN_002f1e00("prepare_application_metadata",lVar10,
                     "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3ae);
      }
      lVar8 = lVar8 + 1;
      lVar11 = lVar11 + 0x20;
      if (*(int *)(param_1 + 0x6b8) <= lVar8) break;
      lVar10 = FUN_003dea10(lVar12,lVar11);
    }
  }
  if (0 < (int)uVar2) {
    uVar14 = 0;
    do {
      lVar11 = param_3 + uVar14 * 0x68;
      if ((long)param_2 <= (long)uVar14) {
        lVar11 = param_6 + (long)((int)uVar14 - param_2) * 0x68;
      }
      if (lVar11 == 0) {
LAB_003cbfb4:
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/surface/call.cc",0x37d,2,
                     "assertion failed: %s",&DAT_0390ffeb);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar8 = FUN_003dea10(lVar12,(ulong *)(lVar11 + 0x48));
      if (lVar8 != 0) {
        uVar9 = *(ulong *)(lVar11 + 0x48);
        uVar13 = (uint)uVar9 & 3;
        if (1 < uVar13) {
          uVar9 = uVar9 & 0xfffffffffffffffc;
          uVar3 = *(undefined4 *)(uVar9 + 0x48);
          plVar1 = (long *)(uVar9 + 0x40);
          FUN_003d81b0(uVar9,uVar9,uVar9 + 0x20,*(undefined8 *)(uVar9 + 0x40),
                       "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3b7);
          do {
            lVar11 = *plVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *plVar1 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 < 1) {
LAB_003cbfdc:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar11 == 1) {
            FUN_003da320(uVar13,uVar9,uVar3,
                         "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3b7);
          }
        }
        FUN_002f1e00("prepare_application_metadata",lVar8,
                     "external/com_google_grpc_base/src/core/lib/surface/call.cc",0x3b9);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar2);
  }
  *(undefined4 *)(param_1 + 0x6b8) = 0;
  return 1;
}


