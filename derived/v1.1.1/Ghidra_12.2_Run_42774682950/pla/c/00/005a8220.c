/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a8220; name: FUN_005a8220
 */


undefined8 FUN_005a8220(uint *param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  byte local_a8 [16];
  ulong local_98;
  undefined1 auStack_90 [32];
  ulong local_70;
  undefined *puStack_68;
  ulong local_60;
  undefined *puStack_58;
  
  plVar12 = (long *)(param_2 & 0xfffffffffffffffc);
  if (*plVar12 == 0) {
    uVar10 = (ulong)*(byte *)(plVar12 + 1);
    lVar13 = plVar12[4];
  }
  else {
    uVar10 = plVar12[1];
    lVar13 = plVar12[4];
  }
  if (lVar13 == 0) {
    uVar14 = (ulong)*(byte *)(plVar12 + 5);
    uVar4 = param_1[3];
    local_60 = (ulong)param_1[4];
    if (param_1[4] <= uVar4) goto LAB_005a830c;
  }
  else {
    uVar14 = plVar12[5];
    uVar4 = param_1[3];
    local_60 = (ulong)param_1[4];
    if (param_1[4] <= uVar4) {
LAB_005a830c:
      uVar10 = uVar10 + uVar14 + 0x20;
      if (uVar10 <= local_60) {
        uVar14 = (ulong)param_1[2];
        local_60 = local_60 - uVar14;
        do {
          if (uVar10 <= local_60) {
            uVar9 = FUN_003e0280(param_2,
                                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                                 ,0xbc);
            uVar4 = param_1[6];
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = (param_1[1] + *param_1) / uVar4;
            }
            *(undefined8 *)
             (*(long *)(param_1 + 8) + (ulong)((param_1[1] + *param_1) - uVar1 * uVar4) * 8) = uVar9
            ;
            param_1[1] = param_1[1] + 1;
            param_1[2] = param_1[2] + (int)uVar10;
            return 0;
          }
          uVar16 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
          plVar12 = (long *)(uVar16 & 0xfffffffffffffffc);
          if (*plVar12 == 0) {
            uVar15 = (ulong)*(byte *)(plVar12 + 1);
            if (plVar12[4] != 0) goto LAB_005a8470;
LAB_005a8494:
            lVar13 = uVar15 + *(byte *)(plVar12 + 5);
          }
          else {
            uVar15 = plVar12[1];
            if (plVar12[4] == 0) goto LAB_005a8494;
LAB_005a8470:
            lVar13 = uVar15 + plVar12[5];
          }
          if (uVar14 < lVar13 + 0x20U) goto LAB_005a85a8;
          uVar1 = param_1[6];
          uVar4 = *param_1 + 1;
          param_1[2] = (int)uVar14 - (int)(lVar13 + 0x20U);
          uVar5 = 0;
          if (uVar1 != 0) {
            uVar5 = uVar4 / uVar1;
          }
          uVar8 = (uint)uVar16 & 3;
          *param_1 = uVar4 - uVar5 * uVar1;
          param_1[1] = param_1[1] - 1;
          if (1 < uVar8) {
            lVar13 = plVar12[9];
            plVar2 = plVar12 + 8;
            FUN_003d81b0(plVar12,plVar12,plVar12 + 4,plVar12[8],
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                         ,0x56);
            do {
              lVar11 = *plVar2;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar7) {
                *plVar2 = lVar11 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (lVar11 < 1) goto LAB_005a85d0;
            if (lVar11 == 1) {
              FUN_003da320(uVar8,plVar12,(int)lVar13,
                           "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                           ,0x56);
            }
          }
          uVar14 = (ulong)param_1[2];
          local_60 = param_1[4] - uVar14;
        } while( true );
      }
      uVar4 = param_1[1];
      do {
        if (uVar4 == 0) {
          return 0;
        }
        uVar10 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
        plVar12 = (long *)(uVar10 & 0xfffffffffffffffc);
        if (*plVar12 == 0) {
          uVar14 = (ulong)*(byte *)(plVar12 + 1);
          if (plVar12[4] != 0) goto LAB_005a8360;
LAB_005a8374:
          uVar16 = (ulong)*(byte *)(plVar12 + 5);
        }
        else {
          uVar14 = plVar12[1];
          if (plVar12[4] == 0) goto LAB_005a8374;
LAB_005a8360:
          uVar16 = plVar12[5];
        }
        uVar14 = uVar14 + uVar16 + 0x20;
        if (param_1[2] < uVar14) {
LAB_005a85a8:
          FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0x52,2,"assertion failed: %s","elem_bytes <= tbl->mem_used");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar5 = param_1[6];
        uVar1 = *param_1 + 1;
        uVar4 = uVar4 - 1;
        param_1[1] = uVar4;
        param_1[2] = param_1[2] - (int)uVar14;
        uVar8 = 0;
        if (uVar5 != 0) {
          uVar8 = uVar1 / uVar5;
        }
        uVar3 = (uint)uVar10 & 3;
        *param_1 = uVar1 - uVar8 * uVar5;
        if (1 < uVar3) {
          lVar13 = plVar12[9];
          plVar2 = plVar12 + 8;
          FUN_003d81b0(plVar12,plVar12,plVar12 + 4,plVar12[8],
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0x56);
          do {
            lVar11 = *plVar2;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar7) {
              *plVar2 = lVar11 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (lVar11 < 1) {
LAB_005a85d0:
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar11 == 1) {
            FUN_003da320(uVar3,plVar12,(int)lVar13,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                         ,0x56);
          }
          uVar4 = param_1[1];
        }
      } while( true );
    }
  }
  local_70 = (ulong)uVar4;
  puStack_68 = PTR_FUN_043739e0;
  puStack_58 = PTR_FUN_043739e0;
  FUN_002e6390(local_a8,
               "HPACK max table size reduced to %d but not reflected by hpack stream (still at %d)",
               0x52,&local_70,2);
  uVar10 = (ulong)local_a8 | 1;
  if ((local_a8[0] & 1) != 0) {
    uVar10 = local_98;
  }
                    /* try { // try from 005a82ac to 005a82cf has its CatchHandler @ 005a85f8 */
  FUN_002f2ff0(auStack_90,uVar10);
  uVar9 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0xa0,auStack_90,0,0);
  if ((local_a8[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
  }
  return uVar9;
}


