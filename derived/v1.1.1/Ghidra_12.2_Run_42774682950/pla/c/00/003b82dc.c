/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003b82dc; name: FUN_003b82dc
 */


void FUN_003b82dc(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04373d68 + 0x10);
  uVar3 = param_1[1];
  puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 003b8310 to 003b8327 has its CatchHandler @ 003b8394 */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x203a);
                    /* try { // try from 003b8328 to 003b833b has its CatchHandler @ 003b8384 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003b833c to 003b8343 has its CatchHandler @ 003b8380 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
                    /* try { // try from 003b834c to 003b8353 has its CatchHandler @ 003b8394 */
  FUN_003a2ec4(param_1 + 1);
  FUN_003aab64(param_1 + 6);
  FUN_0032dd18(param_1 + 2);
  return;
}


