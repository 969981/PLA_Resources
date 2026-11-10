/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7c80; name: FUN_005a7c80
 */


void FUN_005a7c80(uint *param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  
  if (param_1[3] != param_2) {
    if (PTR_DAT_04374f08[0x10] == '\0') {
      uVar5 = param_1[2];
    }
    else {
      FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                   ,0x6d,1,"Update hpack parser max size to %d",param_2);
      uVar5 = param_1[2];
    }
    if (param_2 < uVar5) {
      do {
        uVar10 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
        plVar12 = (long *)(uVar10 & 0xfffffffffffffffc);
        if (*plVar12 == 0) {
          uVar11 = (ulong)*(byte *)(plVar12 + 1);
          if (plVar12[4] == 0) goto LAB_005a7d28;
LAB_005a7d04:
          lVar3 = uVar11 + plVar12[5];
        }
        else {
          uVar11 = plVar12[1];
          if (plVar12[4] != 0) goto LAB_005a7d04;
LAB_005a7d28:
          lVar3 = uVar11 + *(byte *)(plVar12 + 5);
        }
        if ((ulong)uVar5 < lVar3 + 0x20U) {
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0x52,2,"assertion failed: %s","elem_bytes <= tbl->mem_used");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar6 = param_1[6];
        uVar1 = *param_1 + 1;
        param_1[2] = uVar5 - (int)(lVar3 + 0x20U);
        uVar5 = 0;
        if (uVar6 != 0) {
          uVar5 = uVar1 / uVar6;
        }
        uVar4 = (uint)uVar10 & 3;
        *param_1 = uVar1 - uVar5 * uVar6;
        param_1[1] = param_1[1] - 1;
        if (1 < uVar4) {
          lVar3 = plVar12[9];
          plVar2 = plVar12 + 8;
          FUN_003d81b0(plVar12,plVar12,plVar12 + 4,plVar12[8],
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0x56);
          do {
            lVar9 = *plVar2;
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar8) {
              *plVar2 = lVar9 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (lVar9 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar9 == 1) {
            FUN_003da320(uVar4,plVar12,(int)lVar3,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                         ,0x56);
          }
        }
        uVar5 = param_1[2];
      } while (param_2 < uVar5);
    }
    param_1[3] = param_2;
  }
  return;
}


