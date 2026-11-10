/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0035d9ec; name: FUN_0035d9ec
 */


void FUN_0035d9ec(long *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (*param_1 != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cf8);
                    /* try { // try from 0035da24 to 0035da37 has its CatchHandler @ 0035dc68 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: !descriptor_: ");
                    /* try { // try from 0035da38 to 0035da3f has its CatchHandler @ 0035dc64 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (param_1[3] != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cf9);
                    /* try { // try from 0035da68 to 0035da7b has its CatchHandler @ 0035dc60 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: !file_: ");
                    /* try { // try from 0035da7c to 0035da83 has its CatchHandler @ 0035dc5c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (param_1[1] != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cfa);
                    /* try { // try from 0035daac to 0035dabf has its CatchHandler @ 0035dc58 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: !name_: ");
                    /* try { // try from 0035dac0 to 0035dac7 has its CatchHandler @ 0035dc54 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (param_1[2] != 0) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cfb);
                    /* try { // try from 0035daf0 to 0035db03 has its CatchHandler @ 0035dc50 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: !once_: ");
                    /* try { // try from 0035db04 to 0035db0b has its CatchHandler @ 0035dc4c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x10) == 0)) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cfc);
                    /* try { // try from 0035db4c to 0035db5f has its CatchHandler @ 0035dc48 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: file && file->pool_: ");
                    /* try { // try from 0035db60 to 0035db67 has its CatchHandler @ 0035dc44 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    cVar1 = *(char *)(*(long *)(param_3 + 0x10) + 0x29);
  }
  else {
    cVar1 = *(char *)(*(long *)(param_3 + 0x10) + 0x29);
  }
  if (cVar1 == '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cfd);
                    /* try { // try from 0035db94 to 0035dba7 has its CatchHandler @ 0035dc38 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: file->pool_->lazily_build_dependencies_: ");
                    /* try { // try from 0035dba8 to 0035dbaf has its CatchHandler @ 0035dc34 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
    cVar1 = *(char *)(param_3 + 0x41);
  }
  else {
    cVar1 = *(char *)(param_3 + 0x41);
  }
  if (cVar1 != '\0') {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x1cfe);
                    /* try { // try from 0035dbd8 to 0035dbeb has its CatchHandler @ 0035dc40 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: !file->finished_building_: ");
                    /* try { // try from 0035dbec to 0035dbf3 has its CatchHandler @ 0035dc3c */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  param_1[3] = param_3;
  lVar3 = FUN_00340fec(*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x20),param_2);
  param_1[1] = lVar3;
  lVar3 = FUN_00341288(*(undefined8 *)(*(long *)(param_3 + 0x10) + 0x20));
  param_1[2] = lVar3;
  return;
}


