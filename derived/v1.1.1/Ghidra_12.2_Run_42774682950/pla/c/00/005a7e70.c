/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7e70; name: FUN_005a7e70
 */


undefined8 FUN_005a7e70(uint *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long *plVar16;
  byte local_a8 [16];
  ulong local_98;
  undefined1 auStack_90 [32];
  ulong local_70;
  undefined *puStack_68;
  ulong local_60;
  undefined *puStack_58;
  
  if (param_1[4] == param_2) {
    return 0;
  }
  local_60 = (ulong)param_1[3];
  local_70 = (ulong)param_2;
  if (param_1[3] < param_2) {
    puStack_58 = PTR_FUN_043739e0;
    puStack_68 = PTR_FUN_043739e0;
    FUN_002e6390(local_a8,"Attempt to make hpack table %d bytes when max is %d bytes",0x39,&local_70
                 ,2);
    uVar12 = (ulong)local_a8 | 1;
    if ((local_a8[0] & 1) != 0) {
      uVar12 = local_98;
    }
                    /* try { // try from 005a7ef8 to 005a7f1b has its CatchHandler @ 005a81f4 */
    FUN_002f2ff0(auStack_90,uVar12);
    uVar7 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                         ,0x7f,auStack_90,0,0);
    if ((local_a8[0] & 1) == 0) {
      return uVar7;
    }
    FUN_002e2ea0(PTR_LAB_04373088,local_98);
    return uVar7;
  }
  if (PTR_DAT_04374f08[0x10] == '\0') {
    uVar13 = param_1[2];
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                 ,0x82,1,"Update hpack parser table size to %d",local_70);
    uVar13 = param_1[2];
  }
  if (param_2 < uVar13) {
    do {
      uVar12 = *(ulong *)(*(long *)(param_1 + 8) + (ulong)*param_1 * 8);
      plVar16 = (long *)(uVar12 & 0xfffffffffffffffc);
      if (*plVar16 == 0) {
        uVar15 = (ulong)*(byte *)(plVar16 + 1);
        if (plVar16[4] != 0) goto LAB_005a7f98;
LAB_005a7fbc:
        lVar2 = uVar15 + *(byte *)(plVar16 + 5);
      }
      else {
        uVar15 = plVar16[1];
        if (plVar16[4] == 0) goto LAB_005a7fbc;
LAB_005a7f98:
        lVar2 = uVar15 + plVar16[5];
      }
      if ((ulong)uVar13 < lVar2 + 0x20U) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                     ,0x52,2,"assertion failed: %s","elem_bytes <= tbl->mem_used");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar4 = param_1[6];
      uVar11 = *param_1 + 1;
      param_1[2] = uVar13 - (int)(lVar2 + 0x20U);
      uVar13 = 0;
      if (uVar4 != 0) {
        uVar13 = uVar11 / uVar4;
      }
      uVar3 = (uint)uVar12 & 3;
      *param_1 = uVar11 - uVar13 * uVar4;
      param_1[1] = param_1[1] - 1;
      if (1 < uVar3) {
        lVar2 = plVar16[9];
        plVar1 = plVar16 + 8;
        FUN_003d81b0(plVar16,plVar16,plVar16 + 4,plVar16[8],
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                     ,0x56);
        do {
          lVar10 = *plVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar6) {
            *plVar1 = lVar10 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (lVar10 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar10 == 1) {
          FUN_003da320(uVar3,plVar16,(int)lVar2,
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0x56);
        }
      }
      uVar13 = param_1[2];
    } while (param_2 < uVar13);
  }
  uVar11 = param_1[6];
  uVar13 = param_2 + 0x1f >> 5;
  param_1[4] = param_2;
  param_1[5] = uVar13;
  if (uVar11 < uVar13) {
    if (uVar13 <= uVar11 * 2) {
      uVar13 = uVar11 * 2;
    }
    puVar8 = (undefined8 *)FUN_002ebd50((ulong)uVar13 << 3);
    uVar12 = (ulong)param_1[1];
    pvVar9 = *(void **)(param_1 + 8);
    if (param_1[1] != 0) {
      uVar11 = *param_1;
      uVar4 = param_1[6];
      puVar14 = puVar8;
      do {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar11 / uVar4;
        }
        uVar12 = uVar12 - 1;
        uVar3 = uVar11 - uVar3 * uVar4;
        uVar11 = uVar11 + 1;
        *puVar14 = *(undefined8 *)((long)pvVar9 + (ulong)uVar3 * 8);
        puVar14 = puVar14 + 1;
      } while (uVar12 != 0);
    }
    free(pvVar9);
    *(undefined8 **)(param_1 + 8) = puVar8;
    param_1[6] = uVar13;
  }
  else {
    if (uVar11 / 3 <= uVar13) {
      return 0;
    }
    if (uVar13 < 0x11) {
      uVar13 = 0x10;
    }
    if (uVar13 == uVar11) {
      return 0;
    }
    puVar8 = (undefined8 *)FUN_002ebd50(uVar13 << 3);
    uVar12 = (ulong)param_1[1];
    pvVar9 = *(void **)(param_1 + 8);
    if (param_1[1] != 0) {
      uVar11 = *param_1;
      uVar4 = param_1[6];
      puVar14 = puVar8;
      do {
        uVar3 = 0;
        if (uVar4 != 0) {
          uVar3 = uVar11 / uVar4;
        }
        uVar12 = uVar12 - 1;
        uVar3 = uVar11 - uVar3 * uVar4;
        uVar11 = uVar11 + 1;
        *puVar14 = *(undefined8 *)((long)pvVar9 + (ulong)uVar3 * 8);
        puVar14 = puVar14 + 1;
      } while (uVar12 != 0);
    }
    free(pvVar9);
    *(undefined8 **)(param_1 + 8) = puVar8;
    param_1[6] = uVar13;
  }
  *param_1 = 0;
  return 0;
}


