/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a4e50; name: FUN_005a4e50
 */


void FUN_005a4e50(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  
  lVar12 = 0;
  plVar11 = *(long **)(param_1 + 0x470);
  lVar7 = param_1;
  if (plVar11 != (long *)0x0) goto LAB_005a4eb8;
  while( true ) {
    do {
      do {
        uVar1 = (uint)*(ulong *)(lVar7 + 0x70) & 3;
        if (1 < uVar1) {
          uVar10 = *(ulong *)(lVar7 + 0x70) & 0xfffffffffffffffc;
          uVar2 = *(undefined4 *)(uVar10 + 0x48);
          plVar11 = (long *)(uVar10 + 0x40);
          FUN_003d81b0(uVar10,uVar10,uVar10 + 0x20,*(undefined8 *)(uVar10 + 0x40),
                       "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                       ,0x30a);
          do {
            lVar7 = *plVar11;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar4) {
              *plVar11 = lVar7 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (lVar7 < 1) {
            FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                         "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
            abort();
          }
          if (lVar7 == 1) {
            FUN_003da320(uVar1,uVar10,uVar2,
                         "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_encoder.cc"
                         ,0x30a);
          }
        }
        lVar12 = lVar12 + 1;
        if (lVar12 == 0x40) {
          free(*(void **)(param_1 + 0x20));
          return;
        }
        lVar7 = param_1 + lVar12 * 0x10;
        plVar11 = *(long **)(lVar7 + 0x470);
      } while (plVar11 == (long *)0x0);
LAB_005a4eb8:
      plVar5 = (long *)*plVar11;
    } while (plVar5 == (long *)0x0);
    plVar8 = plVar5 + 1;
    lVar6 = *plVar5;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar6 + 8),plVar5,lVar9);
    }
    if (lVar9 < 1) break;
    if (lVar9 == 1) {
      (*(code *)plVar11[3])(plVar11[4]);
    }
  }
  FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
               "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
  abort();
}


