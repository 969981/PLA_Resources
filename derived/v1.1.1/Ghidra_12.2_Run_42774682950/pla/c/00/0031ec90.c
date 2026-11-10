/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031ec90; name: FUN_0031ec90
 */


uint FUN_0031ec90(long *param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  byte local_68 [16];
  undefined8 local_58;
  undefined1 auStack_50 [48];
  
  uVar2 = (**(code **)(*param_1 + 0x30))();
  if ((uVar2 & 1) == 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message_lite.cc"
                 ,0x1c1);
                    /* try { // try from 0031eccc to 0031ecdb has its CatchHandler @ 0031ed9c */
    uVar3 = FUN_0030f3ac(auStack_50,"CHECK failed: IsInitialized(): ");
                    /* try { // try from 0031ece0 to 0031ecf3 has its CatchHandler @ 0031ed88 */
    FUN_0031e380(local_68,"serialize",param_1);
                    /* try { // try from 0031ecf4 to 0031ed03 has its CatchHandler @ 0031ed5c */
    uVar3 = FUN_0030f3e8(uVar3,local_68);
                    /* try { // try from 0031ed04 to 0031ed0b has its CatchHandler @ 0031ed4c */
    FUN_0030f41c(auStack_70,uVar3);
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
    FUN_0030f658(auStack_50);
  }
  uVar1 = FUN_0031edb0(param_1,param_2);
  return uVar1 & 1;
}


