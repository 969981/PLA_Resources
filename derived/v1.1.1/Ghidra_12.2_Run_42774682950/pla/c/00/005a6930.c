/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a6930; name: FUN_005a6930
 */


void FUN_005a6930(long param_1,ulong param_2,undefined8 param_3,uint param_4,undefined4 param_5)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  
  iVar7 = FUN_005a6f40(param_1,param_3);
  if (iVar7 == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                 ,0x1bd,2,"assertion failed: %s",
                 "((grpc_mdelem_data_storage)((elem).payload & (uintptr_t)1))");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = param_4 >> 6 & 0x3f;
  uVar11 = (ulong)uVar5;
  puVar12 = (ulong *)(param_1 + uVar11 * 0x10 + 0x70);
  uVar8 = *puVar12;
  uVar10 = uVar11;
  if (uVar8 != param_2) {
    if (uVar8 == 0) {
      if (param_2 == 0) {
LAB_005a6af8:
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                     ,0x71,2,"assertion failed: %s","md.payload != 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_003e0280(param_2,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                   ,0x72);
      *puVar12 = param_2;
    }
    else {
      uVar6 = param_4 >> 0xc & 0x3f;
      uVar10 = (ulong)uVar6;
      puVar12 = (ulong *)(param_1 + uVar10 * 0x10 + 0x70);
      if (*puVar12 != param_2) {
        if (param_2 == 0) goto LAB_005a6af8;
        FUN_003e0280(param_2,
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                     ,0x72);
        if (*puVar12 != 0) {
          lVar9 = param_1 + 0x70;
          if (*(uint *)(lVar9 + uVar10 * 0x10 + 8) <= *(uint *)(lVar9 + uVar11 * 0x10 + 8)) {
            uVar5 = uVar6;
          }
          puVar12 = (ulong *)(lVar9 + (ulong)uVar5 * 0x10);
          uVar10 = *puVar12;
          *puVar12 = param_2;
          *(int *)(puVar12 + 1) = iVar7;
          if (uVar10 == 0) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                         ,0x75,2,"assertion failed: %s","md.payload != 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          uVar5 = (uint)uVar10 & 3;
          if (1 < uVar5) {
            uVar10 = uVar10 & 0xfffffffffffffffc;
            uVar2 = *(undefined4 *)(uVar10 + 0x48);
            plVar1 = (long *)(uVar10 + 0x40);
            FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                         ,0x76);
            do {
              lVar9 = *plVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *plVar1 = lVar9 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (lVar9 < 1) {
              FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,
                           2,"assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (lVar9 == 1) {
              FUN_003da320(uVar5,uVar10,uVar2,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                           ,0x76);
            }
          }
          goto LAB_005a6aa4;
        }
        *puVar12 = param_2;
      }
    }
  }
  *(int *)(param_1 + uVar10 * 0x10 + 0x78) = iVar7;
LAB_005a6aa4:
  FUN_005a7070(param_1,*(undefined8 *)(param_2 & 0xfffffffffffffffc),iVar7,param_5);
  return;
}


