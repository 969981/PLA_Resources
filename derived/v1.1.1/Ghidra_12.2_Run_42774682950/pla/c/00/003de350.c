/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003de350; name: FUN_003de350
 */


void FUN_003de350(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  ulong *puVar8;
  
  puVar8 = *(ulong **)(param_1 + 0x10);
  if (puVar8 != (ulong *)0x0) {
    uVar5 = *puVar8;
    uVar7 = (uint)uVar5 & 3;
    if (1 < uVar7) goto LAB_003de39c;
LAB_003de384:
    puVar8 = (ulong *)puVar8[1];
    if (puVar8 != (ulong *)0x0) {
      while( true ) {
        uVar5 = *puVar8;
        uVar7 = (uint)uVar5 & 3;
        if (uVar7 < 2) break;
LAB_003de39c:
        uVar5 = uVar5 & 0xfffffffffffffffc;
        uVar2 = *(undefined4 *)(uVar5 + 0x48);
        plVar1 = (long *)(uVar5 + 0x40);
        FUN_003d81b0(uVar5,uVar5,uVar5 + 0x20,*(undefined8 *)(uVar5 + 0x40),
                     "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x5a);
        do {
          lVar6 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar6 < 1) {
          FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                       "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (lVar6 != 1) break;
        FUN_003da320(uVar7,uVar5,uVar2,
                     "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x5a);
        puVar8 = (ulong *)puVar8[1];
        if (puVar8 == (ulong *)0x0) {
          return;
        }
      }
      goto LAB_003de384;
    }
  }
  return;
}


