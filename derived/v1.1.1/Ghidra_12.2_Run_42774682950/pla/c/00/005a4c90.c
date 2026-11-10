/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a4c90; name: FUN_005a4c90
 */


undefined8 FUN_005a4c90(long *param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  
  lVar5 = param_1[2];
  if (lVar5 == param_1[3]) {
    return 0;
  }
  if (param_1[3] == 0) {
LAB_005a4d1c:
    lVar5 = param_1[1];
    iVar4 = rand();
    uVar7 = param_1[2];
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = (ulong)(long)iVar4 / uVar7;
    }
    return *(undefined8 *)(lVar5 + ((long)iVar4 - uVar3 * uVar7) * 8);
  }
  if (lVar5 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    puVar1 = (undefined4 *)*param_1;
    plVar2 = (long *)param_1[1];
    lVar6 = 0;
    lVar10 = *plVar2;
    plVar8 = plVar2;
    puVar9 = puVar1;
    if (lVar10 != 0) goto LAB_005a4cf8;
    while (lVar5 = lVar5 + -1, lVar5 != 0) {
      while( true ) {
        plVar8 = plVar8 + 1;
        puVar9 = puVar9 + 1;
        lVar10 = *plVar8;
        if (lVar10 == 0) break;
LAB_005a4cf8:
        puVar1[lVar6] = *puVar9;
        plVar2[lVar6] = lVar10;
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + -1;
        if (lVar5 == 0) goto LAB_005a4d14;
      }
    }
LAB_005a4d14:
    param_1[2] = lVar6;
    param_1[3] = 0;
    if (lVar6 != 0) goto LAB_005a4d1c;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/stream_map.cc"
               ,0xa1,2,"assertion failed: %s","map->count > 0");
                    /* WARNING: Subroutine does not return */
  abort();
}


