/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a38c4; name: FUN_005a38c4
 */


void FUN_005a38c4(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_40 [32];
  
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
                    /* try { // try from 005a38dc to 005a392f has its CatchHandler @ 005a3960 */
    FUN_002f2c60(auStack_40,"Parser destroyed");
    uVar1 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0x27,auStack_40,0,0);
    uVar2 = FUN_0059ca78(lVar3,uVar1,0);
    if (4 < uVar2) {
      FUN_002f0430(uVar2,
                   "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                   ,0x27);
    }
  }
  if (4 < *(ulong *)(param_1 + 0x10)) {
                    /* try { // try from 005a393c to 005a394b has its CatchHandler @ 005a395c */
    FUN_002f0430(*(ulong *)(param_1 + 0x10),
                 "external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                 ,0x29);
  }
  return;
}


