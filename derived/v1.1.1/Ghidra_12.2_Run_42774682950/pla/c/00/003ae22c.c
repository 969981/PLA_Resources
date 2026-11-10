/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003ae22c; name: FUN_003ae22c
 */


void FUN_003ae22c(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  *param_1 = (long)(PTR_DAT_04373d60 + 0x10);
  uVar3 = param_1[1];
  puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 003ae258 to 003ae26f has its CatchHandler @ 003ae2cc */
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x11c4);
                    /* try { // try from 003ae270 to 003ae283 has its CatchHandler @ 003ae2b8 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003ae284 to 003ae28b has its CatchHandler @ 003ae2b4 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
                    /* try { // try from 003ae294 to 003ae29b has its CatchHandler @ 003ae2cc */
  FUN_003a2ec4(param_1 + 1);
  return;
}


