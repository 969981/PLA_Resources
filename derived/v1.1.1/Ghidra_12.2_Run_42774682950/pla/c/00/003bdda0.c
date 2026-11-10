/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bdda0; name: FUN_003bdda0
 */


void FUN_003bdda0(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04373ea0 + 0x10);
  uVar3 = param_1[1];
  puVar2 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 003bddd4 to 003bddeb has its CatchHandler @ 003bde5c */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/descriptor.pb.cc"
                 ,0x28fd);
                    /* try { // try from 003bddec to 003bddff has its CatchHandler @ 003bde40 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 003bde00 to 003bde07 has its CatchHandler @ 003bde3c */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
                    /* try { // try from 003bde10 to 003bde17 has its CatchHandler @ 003bde5c */
  FUN_003a2ec4(param_1 + 1);
  FUN_003bdcf0(param_1 + 2);
  return;
}


