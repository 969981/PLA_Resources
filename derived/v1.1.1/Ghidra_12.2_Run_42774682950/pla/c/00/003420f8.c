/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003420f8; name: FUN_003420f8
 */


void FUN_003420f8(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  uVar1 = FUN_00342190();
  uVar2 = FUN_003c403c(uVar1,param_1,param_2);
  if ((uVar2 & 1) == 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x566);
                    /* try { // try from 00342138 to 0034214b has its CatchHandler @ 00342170 */
    uVar1 = FUN_0030f3ac(auStack_50,
                         "CHECK failed: GeneratedDatabase()->Add(encoded_file_descriptor, size): ");
                    /* try { // try from 0034214c to 00342153 has its CatchHandler @ 0034216c */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  return;
}


