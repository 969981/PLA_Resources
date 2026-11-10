/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a2860; name: FUN_005a2860
 */


void FUN_005a2860(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long local_58;
  
  if (*(long *)(param_1 + 0x15c0) != 0) {
    FUN_003e7870(*(long *)(param_1 + 0x15c0),*(undefined4 *)(param_1 + 0x15c8));
  }
  *(undefined4 *)(param_1 + 0x15c8) = 0;
  uVar2 = FUN_005ac5d0(param_1,&local_58);
  if ((uVar2 & 1) != 0) {
    if (param_2 < 5) {
      do {
        if (*(long *)(local_58 + 0xb28) != 0) {
          FUN_005a29c0(param_1,local_58,*(long *)(local_58 + 0xb28),local_58 + 0xb18,
                       local_58 + 0x130,param_2);
          *(undefined8 *)(local_58 + 0xb28) = 0;
        }
        FUN_00598c60(local_58,"chttp2_writing:end");
        uVar2 = FUN_005ac5d0(param_1,&local_58);
      } while ((uVar2 & 1) != 0);
    }
    else {
      lVar4 = *(long *)(local_58 + 0xb28);
      lVar1 = local_58;
      while( true ) {
        local_58 = lVar1;
        if (lVar4 != 0) {
          uVar3 = FUN_002f03c0(param_2,
                               "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc"
                               ,0x2b6);
          FUN_005a29c0(param_1,lVar1,lVar4,lVar1 + 0xb18,lVar1 + 0x130,uVar3);
          *(undefined8 *)(local_58 + 0xb28) = 0;
        }
        FUN_00598c60(local_58,"chttp2_writing:end");
        uVar2 = FUN_005ac5d0(param_1,&local_58);
        if ((uVar2 & 1) == 0) break;
        lVar4 = *(long *)(local_58 + 0xb28);
        lVar1 = local_58;
      }
    }
  }
  FUN_00305050(param_1 + 0x358);
  if (4 < param_2) {
    FUN_002f0430(param_2,
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/writing.cc",
                 700);
  }
  return;
}


