/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a3970; name: FUN_005a3970
 */


undefined8 FUN_005a3970(undefined8 param_1,ulong param_2,undefined4 param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  ulong local_30;
  undefined *puStack_28;
  
  if ((param_2 & 0xfe) == 0) {
    uVar2 = 0;
    if ((param_2 & 1) == 0) {
      *(undefined1 *)(param_4 + 0x960) = 0;
    }
    else {
      *(undefined1 *)(param_4 + 0x960) = 1;
      *(undefined1 *)(param_4 + 0x205) = 1;
    }
  }
  else {
    local_30 = param_2 & 0xff;
    puStack_28 = PTR_FUN_043739e8;
    FUN_002e6390(local_68,"unsupported data flags: 0x%02x",0x1e,&local_30,1);
    uVar1 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar1 = local_58;
    }
                    /* try { // try from 005a39cc to 005a39fb has its CatchHandler @ 005a3a50 */
    FUN_002f2ff0(auStack_50,uVar1);
    uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_data.cc"
                         ,0x32,auStack_50,0,0);
    uVar2 = FUN_002f0d20(uVar2,2,param_3);
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
  }
  return uVar2;
}


