/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a9cd0; name: FUN_005a9cd0
 */


undefined8 FUN_005a9cd0(undefined4 *param_1,uint param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  ulong local_30;
  undefined *puStack_28;
  
  if (param_2 < 8) {
    local_30 = (ulong)param_2;
    puStack_28 = PTR_FUN_043739e0;
    FUN_002e6390(local_68,"goaway frame too short (%d bytes)",0x21,&local_30,1);
    uVar1 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar1 = local_58;
    }
                    /* try { // try from 005a9d2c to 005a9d4f has its CatchHandler @ 005a9dac */
    FUN_002f2ff0(auStack_50,uVar1);
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_goaway.cc"
                         ,0x2c,auStack_50,0,0);
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
  }
  else {
    free(*(void **)(param_1 + 4));
    param_1[6] = param_2 - 8;
    uVar3 = FUN_002ebd50();
    uVar2 = 0;
    *(undefined8 *)(param_1 + 4) = uVar3;
    param_1[7] = 0;
    *param_1 = 0;
  }
  return uVar2;
}


