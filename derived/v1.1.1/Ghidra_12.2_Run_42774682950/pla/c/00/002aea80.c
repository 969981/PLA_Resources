/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002aea80; name: FUN_002aea80
 */


void FUN_002aea80(undefined *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long lVar3;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/auth/v1/auth.pb.cc"
                 ,0x71f);
                    /* try { // try from 002aeab8 to 002aeacb has its CatchHandler @ 002aeb34 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 002aeacc to 002aead3 has its CatchHandler @ 002aeb30 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
  }
  if (param_1 != PTR_DAT_043733e0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      FUN_002a8a84(lVar3);
      FUN_002e2ea0(PTR_LAB_04373088,lVar3);
    }
    FUN_002b4014(*(undefined8 *)(param_1 + 0x18));
  }
  return;
}


