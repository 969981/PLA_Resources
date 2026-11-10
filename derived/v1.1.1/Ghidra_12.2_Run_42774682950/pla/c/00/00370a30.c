/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00370a30; name: FUN_00370a30
 */


uint FUN_00370a30(undefined8 param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_3 == (byte *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/text_format.cc"
                 ,0x74b);
                    /* try { // try from 00370a74 to 00370a93 has its CatchHandler @ 00370aec */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: output: ");
    uVar3 = FUN_0030f3ac(uVar3,"output specified is nullptr");
                    /* try { // try from 00370a94 to 00370a9b has its CatchHandler @ 00370ae8 */
    FUN_0030f41c(auStack_58,uVar3);
    FUN_0030f658(auStack_50);
    bVar1 = bRam0000000000000000;
  }
  else {
    bVar1 = *param_3;
  }
  if ((bVar1 & 1) == 0) {
    param_3[0] = 0;
    param_3[1] = 0;
  }
  else {
    **(undefined1 **)(param_3 + 0x10) = 0;
    param_3[8] = 0;
    param_3[9] = 0;
    param_3[10] = 0;
    param_3[0xb] = 0;
    param_3[0xc] = 0;
    param_3[0xd] = 0;
    param_3[0xe] = 0;
    param_3[0xf] = 0;
  }
  FUN_0030e55c(auStack_50,param_3);
                    /* try { // try from 00370ac4 to 00370ad3 has its CatchHandler @ 00370b00 */
  uVar2 = FUN_00372488(param_1,param_2,auStack_50);
  return uVar2 & 1;
}


