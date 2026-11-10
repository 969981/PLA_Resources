/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a48c0; name: FUN_005a48c0
 */


void FUN_005a48c0(undefined8 *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  plVar2 = (long *)param_1[1];
  uVar9 = param_1[2];
  puVar8 = (undefined4 *)*param_1;
  if ((uVar9 != 0) && (param_2 <= (uint)puVar8[uVar9 - 1])) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                 ,0x43,2,"assertion failed: %s","count == 0 || keys[count - 1] < key");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                 ,0x44,2,"assertion failed: %s","value");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar9 != 0) {
    uVar3 = 0;
    uVar5 = uVar9;
    do {
      uVar1 = uVar3 + (uVar5 - uVar3 >> 1);
      if ((uint)puVar8[uVar1] < param_2) {
        uVar3 = uVar1 + 1;
      }
      else {
        uVar5 = uVar1;
        if ((uint)puVar8[uVar1] <= param_2) {
          if ((plVar2 + uVar1 != (long *)0x0) && (plVar2[uVar1] != 0)) {
            FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
                         ,0x4c,2,"assertion failed: %s",
                         "grpc_chttp2_stream_map_find(map, key) == nullptr");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          break;
        }
      }
    } while (uVar3 < uVar5);
  }
  if (uVar9 == param_1[4]) {
    if (uVar9 >> 2 < (ulong)param_1[3]) {
      uVar3 = 0;
      if (uVar9 != 0) {
        lVar7 = *plVar2;
        plVar4 = plVar2;
        puVar6 = puVar8;
        if (lVar7 != 0) goto LAB_005a498c;
        while (uVar9 = uVar9 - 1, uVar9 != 0) {
          while( true ) {
            plVar4 = plVar4 + 1;
            puVar6 = puVar6 + 1;
            lVar7 = *plVar4;
            if (lVar7 == 0) break;
LAB_005a498c:
            puVar8[uVar3] = *puVar6;
            plVar2[uVar3] = lVar7;
            uVar3 = uVar3 + 1;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_005a49a8;
          }
        }
      }
LAB_005a49a8:
      param_1[3] = 0;
      uVar9 = uVar3;
    }
    else {
      param_1[4] = uVar9 << 1;
      puVar8 = (undefined4 *)FUN_002ebdc0(puVar8,uVar9 << 3);
      *param_1 = puVar8;
      plVar2 = (long *)FUN_002ebdc0(plVar2,uVar9 << 4);
      param_1[1] = plVar2;
    }
  }
  puVar8[uVar9] = param_2;
  plVar2[uVar9] = param_3;
  param_1[2] = uVar9 + 1;
  return;
}


