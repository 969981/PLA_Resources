/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aee50; name: FUN_005aee50
 */


void FUN_005aee50(long param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_50 [32];
  
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
               0x1cb,0,"received initial metadata size exceeds limit (%lu vs. %lu)",param_4,param_5)
  ;
  FUN_002f2c60(auStack_50,"received initial metadata size exceeds limit");
  uVar6 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                       ,0x1d2,auStack_50,0,0);
  uVar6 = FUN_002f0d20(uVar6,3,8);
  FUN_0059adb0(param_1,param_2,uVar6);
  if (*(undefined **)(param_1 + 0x1238) == PTR_LAB_04374fb8) {
    *(undefined **)(param_1 + 0x1238) = PTR_LAB_04374fb8;
    *(long *)(param_1 + 0x1228) = param_1 + 0xfd0;
    *(undefined1 **)(param_1 + 0xfd0) = &LAB_005af170;
    *(undefined8 *)(param_1 + 0xfd8) = 0;
    *(bool *)(param_1 + 0x10a5) = *(int *)(param_1 + 0x1218) != 0;
    if (*(int *)(param_1 + 0x1218) == 0) {
      *(undefined1 *)(param_1 + 0x10a6) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x10a6) = *(undefined1 *)(param_1 + 0x1216);
    }
  }
  else {
    *(undefined1 **)(param_1 + 0x1238) = &LAB_005af230;
  }
  *(undefined1 *)(param_2 + 0x203) = 1;
  uVar2 = (uint)param_3 & 3;
  if (1 < uVar2) {
    param_3 = param_3 & 0xfffffffffffffffc;
    uVar3 = *(undefined4 *)(param_3 + 0x48);
    plVar1 = (long *)(param_3 + 0x40);
    FUN_003d81b0(param_3,param_3,param_3 + 0x20,*(undefined8 *)(param_3 + 0x40),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
                 0x1d7);
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
      FUN_003da320(uVar2,param_3,uVar3,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc"
                   ,0x1d7);
    }
  }
  return;
}


