/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b7a90; name: FUN_003b7a90
 */


void FUN_003b7a90(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04373e78 + 0x10);
  uVar3 = param_1[1];
  puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 003b7ac4 to 003b7adb has its CatchHandler @ 003b7b48 */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x1f4b);
                    /* try { // try from 003b7adc to 003b7aef has its CatchHandler @ 003b7b38 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003b7af0 to 003b7af7 has its CatchHandler @ 003b7b34 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
                    /* try { // try from 003b7b00 to 003b7b07 has its CatchHandler @ 003b7b48 */
  FUN_003a2ec4(param_1 + 1);
  FUN_003aab64(param_1 + 5);
  FUN_0032dd18(param_1 + 2);
  return;
}


