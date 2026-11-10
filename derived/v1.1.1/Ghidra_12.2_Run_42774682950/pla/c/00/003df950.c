/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003df950; name: FUN_003df950
 */


void FUN_003df950(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  
  uVar11 = *param_1;
  puVar9 = (undefined8 *)(uVar11 & 0xfffffffffffffffc);
  if (((long *)*puVar9 != (long *)0x0) && (plVar7 = *(long **)*puVar9, plVar7 != (long *)0x0)) {
    plVar1 = plVar7 + 1;
    do {
      lVar10 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar8 = *plVar7;
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x79,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar8 + 8),plVar7,lVar10,lVar10 + 1);
    }
    if (lVar10 < 1) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("prior > 0","external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",
                    0x7c,"RefNonZero");
    }
  }
  uVar6 = FUN_003d9360(puVar9,param_2);
  *param_1 = uVar6;
  uVar2 = (uint)uVar11 & 3;
  if (1 < uVar2) {
    uVar3 = *(undefined4 *)(puVar9 + 9);
    plVar7 = puVar9 + 8;
    FUN_003d81b0(puVar9,puVar9,puVar9 + 4,puVar9[8],
                 "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x128);
    do {
      lVar10 = *plVar7;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar5) {
        *plVar7 = lVar10 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar10 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar10 == 1) {
      FUN_003da320(uVar2,puVar9,uVar3,
                   "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x128);
      return;
    }
  }
  return;
}


