/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032d69c; name: FUN_0032d69c
 */


void FUN_0032d69c(undefined8 param_1,undefined4 param_2,char param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  char local_88;
  byte local_87;
  byte local_86;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  if (param_3 == '\x0e') {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x8c);
                    /* try { // try from 0032d6e4 to 0032d6f7 has its CatchHandler @ 0032d7dc */
    uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: (type) != (WireFormatLite::TYPE_ENUM): ");
                    /* try { // try from 0032d6f8 to 0032d6ff has its CatchHandler @ 0032d7d8 */
    FUN_0030f41c(auStack_68,uVar1);
  }
  else if (param_3 == '\v') {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x8d);
                    /* try { // try from 0032d724 to 0032d737 has its CatchHandler @ 0032d7d4 */
    uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: (type) != (WireFormatLite::TYPE_MESSAGE): ");
                    /* try { // try from 0032d738 to 0032d73f has its CatchHandler @ 0032d7d0 */
    FUN_0030f41c(auStack_68,uVar1);
  }
  else {
    if (param_3 != '\n') goto LAB_0032d78c;
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/extension_set.cc"
                 ,0x8e);
                    /* try { // try from 0032d768 to 0032d77b has its CatchHandler @ 0032d7cc */
    uVar1 = FUN_0030f3ac(auStack_60,"CHECK failed: (type) != (WireFormatLite::TYPE_GROUP): ");
                    /* try { // try from 0032d77c to 0032d783 has its CatchHandler @ 0032d7c8 */
    FUN_0030f41c(auStack_68,uVar1);
  }
  FUN_0030f658(auStack_60);
LAB_0032d78c:
  local_87 = param_4 & 1;
  local_86 = param_5 & 1;
  local_70 = 0;
  local_88 = param_3;
  FUN_0032d7f0(param_1,param_2,&local_88);
  return;
}


