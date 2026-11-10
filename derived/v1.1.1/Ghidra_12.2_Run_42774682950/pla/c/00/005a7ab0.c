/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7ab0; name: FUN_005a7ab0
 */


void FUN_005a7ab0(uint *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  void *__ptr;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  __ptr = *(void **)(param_1 + 8);
  if (param_1[1] != 0) {
    uVar9 = 0;
    do {
      uVar8 = (ulong)param_1[6];
      uVar6 = 0;
      if (uVar8 != 0) {
        uVar6 = (uVar9 + *param_1) / uVar8;
      }
      uVar6 = *(ulong *)((long)__ptr + ((uVar9 + *param_1) - uVar6 * uVar8) * 8);
      uVar2 = (uint)uVar6 & 3;
      if (1 < uVar2) {
        uVar6 = uVar6 & 0xfffffffffffffffc;
        uVar3 = *(undefined4 *)(uVar6 + 0x48);
        plVar1 = (long *)(uVar6 + 0x40);
        FUN_003d81b0(uVar6,uVar6,uVar6 + 0x20,*(undefined8 *)(uVar6 + 0x40),
                     "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                     ,0x2a);
        do {
          lVar7 = *plVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar5) {
            *plVar1 = lVar7 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar7 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar7 == 1) {
          FUN_003da320(uVar2,uVar6,uVar3,
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_table.cc"
                       ,0x2a);
        }
      }
      uVar9 = uVar9 + 1;
      __ptr = *(void **)(param_1 + 8);
    } while (uVar9 < param_1[1]);
  }
  free(__ptr);
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}


