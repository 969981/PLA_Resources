/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b9f60; name: FUN_003b9f60
 */


void FUN_003b9f60(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04373e50 + 0x10);
  uVar3 = param_1[1];
  puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 003b9f94 to 003b9fab has its CatchHandler @ 003ba018 */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x2376);
                    /* try { // try from 003b9fac to 003b9fbf has its CatchHandler @ 003ba008 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003b9fc0 to 003b9fc7 has its CatchHandler @ 003ba004 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
                    /* try { // try from 003b9fd0 to 003b9fd7 has its CatchHandler @ 003ba018 */
  FUN_003a2ec4(param_1 + 1);
  FUN_003aab64(param_1 + 6);
  FUN_0032dd18(param_1 + 2);
  return;
}


