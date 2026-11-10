/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035dc7c; name: FUN_0035dc7c
 */


void FUN_0035dc7c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  if (param_1[1] != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cef);
                    /* try { // try from 0035dcb0 to 0035dcc3 has its CatchHandler @ 0035dd84 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: !name_: ");
                    /* try { // try from 0035dcc4 to 0035dccb has its CatchHandler @ 0035dd80 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  if (param_1[2] != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cf0);
                    /* try { // try from 0035dcf4 to 0035dd07 has its CatchHandler @ 0035dd7c */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: !once_: ");
                    /* try { // try from 0035dd08 to 0035dd0f has its CatchHandler @ 0035dd78 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  if (param_1[3] != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cf1);
                    /* try { // try from 0035dd38 to 0035dd4b has its CatchHandler @ 0035dd74 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: !file_: ");
                    /* try { // try from 0035dd4c to 0035dd53 has its CatchHandler @ 0035dd70 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  *param_1 = param_2;
  return;
}


