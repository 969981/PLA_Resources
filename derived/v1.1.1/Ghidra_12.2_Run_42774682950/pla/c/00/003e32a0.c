/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e32a0; name: FUN_003e32a0
 */


void FUN_003e32a0(ulong *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = (uint)*param_1 & 3;
  if (1 < uVar2) {
    uVar7 = *param_1 & 0xfffffffffffffffc;
    uVar3 = *(undefined4 *)(uVar7 + 0x48);
                    /* try { // try from 003e32d0 to 003e3407 has its CatchHandler @ 003e3408 */
    FUN_003d81b0(uVar7,uVar7,uVar7 + 0x20,*(undefined8 *)(uVar7 + 0x40),
                 "external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x1bb);
    plVar1 = (long *)(uVar7 + 0x40);
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      FUN_003da320(uVar2,uVar7,uVar3,"external/com_google_grpc_base/src/core/lib/surface/channel.cc"
                   ,0x1bb);
    }
  }
  uVar2 = (uint)param_1[1] & 3;
  if (1 < uVar2) {
    uVar7 = param_1[1] & 0xfffffffffffffffc;
    uVar3 = *(undefined4 *)(uVar7 + 0x48);
    FUN_003d81b0(uVar7,uVar7,uVar7 + 0x20,*(undefined8 *)(uVar7 + 0x40),
                 "external/com_google_grpc_base/src/core/lib/surface/channel.cc",0x1bc);
    plVar1 = (long *)(uVar7 + 0x40);
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar6 < 1) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/transport/metadata.h",0x104,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar6 == 1) {
      FUN_003da320(uVar2,uVar7,uVar3,"external/com_google_grpc_base/src/core/lib/surface/channel.cc"
                   ,0x1bc);
    }
  }
  return;
}


