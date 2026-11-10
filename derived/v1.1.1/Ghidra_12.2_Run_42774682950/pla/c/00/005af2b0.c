/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005af2b0; name: FUN_005af2b0
 */


void FUN_005af2b0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined1 auStack_50 [32];
  
  uVar2 = (uint)param_2 & 3;
  if (1 < uVar2) {
    param_2 = param_2 & 0xfffffffffffffffc;
    uVar3 = *(undefined4 *)(param_2 + 0x48);
    plVar1 = (long *)(param_2 + 0x40);
    FUN_003d81b0(param_2,param_2,param_2 + 0x20,*(undefined8 *)(param_2 + 0x40),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                 ,0x63c);
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
      FUN_003da320(uVar2,param_2,uVar3,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
                   ,0x63c);
    }
  }
  FUN_002f2c60(auStack_50,"on_header callback not set");
  FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/hpack_parser.cc"
               ,0x63d,auStack_50,0,0);
  return;
}


