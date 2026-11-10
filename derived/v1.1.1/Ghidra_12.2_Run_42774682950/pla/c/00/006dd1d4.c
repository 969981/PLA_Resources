/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dd1d4; name: FUN_006dd1d4
 */


undefined4 FUN_006dd1d4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  undefined1 auStack_70 [8];
  byte local_68;
  undefined8 local_58;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined1 auStack_38 [24];
  ulong local_18;
  
  if (param_3 < 0) {
                    /* try { // try from 006dd280 to 006dd29f has its CatchHandler @ 006dd2dc */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
                    /* try { // try from 006dd1ec to 006dd1ff has its CatchHandler @ 006dd2dc */
  FUN_0050a1b0(auStack_70,param_2,param_3,&local_18);
  if (local_18 == 0) {
    uVar1 = FUN_006dc50c(param_1,auStack_70);
  }
  else {
    uVar1 = 0x80141;
    if (4 < local_18) {
                    /* try { // try from 006dd218 to 006dd227 has its CatchHandler @ 006dd2a0 */
      FUN_002f0430(local_18,"client/src/grpc/grpc_RomConfigData.cpp",0x94);
    }
  }
  FUN_006dd2e8(auStack_38);
  FUN_003e9f80(auStack_50,local_48);
  if ((local_68 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_58);
  }
  return uVar1;
}


