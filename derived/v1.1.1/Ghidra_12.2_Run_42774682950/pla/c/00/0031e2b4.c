/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e2b4; name: FUN_0031e2b4
 */


void FUN_0031e2b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  byte local_58 [16];
  undefined8 local_48;
  undefined1 auStack_40 [48];
  
  FUN_0030f640(auStack_40,2,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/message_lite.cc"
               ,0x85);
                    /* try { // try from 0031e2d8 to 0031e2eb has its CatchHandler @ 0031e36c */
  FUN_0031e380(local_58,"parse",param_1);
                    /* try { // try from 0031e2ec to 0031e2fb has its CatchHandler @ 0031e340 */
  uVar1 = FUN_0030f3e8(auStack_40,local_58);
                    /* try { // try from 0031e2fc to 0031e303 has its CatchHandler @ 0031e330 */
  FUN_0030f41c(auStack_60,uVar1);
  if ((local_58[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_48);
  }
  FUN_0030f658(auStack_40);
  return;
}


