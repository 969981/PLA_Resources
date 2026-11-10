/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005abad0; name: FUN_005abad0
 */


undefined8 FUN_005abad0(undefined1 *param_1,uint param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  byte local_68 [16];
  ulong local_58;
  undefined1 auStack_50 [32];
  ulong local_30;
  undefined *puStack_28;
  ulong local_20;
  undefined *puStack_18;
  
  if (param_2 == 4) {
    *param_1 = 0;
    return 0;
  }
  local_30 = (ulong)param_2;
  puStack_28 = PTR_FUN_043739e0;
  local_20 = param_3 & 0xff;
  puStack_18 = PTR_FUN_043739e8;
  FUN_002e6390(local_68,"invalid rst_stream: length=%d, flags=%02x",0x29,&local_30,2);
  uVar1 = (ulong)local_68 | 1;
  if ((local_68[0] & 1) != 0) {
    uVar1 = local_58;
  }
                    /* try { // try from 005abb4c to 005abb6f has its CatchHandler @ 005abb9c */
  FUN_002f2ff0(auStack_50,uVar1);
  uVar2 = FUN_002f0690("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/frame_rst_stream.cc"
                       ,0x4d,auStack_50,0,0);
  if ((local_68[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return uVar2;
}


