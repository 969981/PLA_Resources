/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00360228; name: FUN_00360228
 */


void FUN_00360228(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_70 [48];
  undefined1 auStack_38 [8];
  
  *param_1 = param_2;
  param_1[4] = 0;
  param_1[3] = (long)(param_1 + 4);
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[6] = (long)(param_1 + 7);
  param_1[8] = 0;
                    /* try { // try from 00360270 to 00360277 has its CatchHandler @ 003602f8 */
  FUN_003800dc(param_1 + 9);
  if (*param_1 == 0) {
                    /* try { // try from 00360280 to 00360297 has its CatchHandler @ 003602e8 */
    FUN_0030f640(auStack_70,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.cc"
                 ,0x18f6);
                    /* try { // try from 00360298 to 003602ab has its CatchHandler @ 003602d8 */
    uVar1 = FUN_0030f3ac(auStack_70,"CHECK failed: builder_: ");
                    /* try { // try from 003602ac to 003602b3 has its CatchHandler @ 003602d4 */
    FUN_0030f41c(auStack_38,uVar1);
    FUN_0030f658(auStack_70);
  }
  return;
}


