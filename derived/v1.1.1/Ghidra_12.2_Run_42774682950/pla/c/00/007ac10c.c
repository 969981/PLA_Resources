/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ac10c; name: FUN_007ac10c
 */


void FUN_007ac10c(long *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  long *plVar4;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04376f90 + 0x10);
  uVar2 = param_1[1];
  puVar3 = (ulong *)(uVar2 & 0xfffffffffffffffe);
  if ((uVar2 & 1) != 0) {
    puVar3 = (ulong *)*puVar3;
  }
  if (puVar3 != (ulong *)0x0) {
                    /* try { // try from 007ac13c to 007ac153 has its CatchHandler @ 007ac200 */
    FUN_0030f640(auStack_50,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/hydro/v1/datastore.pb.cc"
                 ,0xf7d);
                    /* try { // try from 007ac154 to 007ac167 has its CatchHandler @ 007ac1e4 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 007ac168 to 007ac16f has its CatchHandler @ 007ac1e0 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar2 = param_1[1];
  }
  if ((((uVar2 & 1) != 0) && (plVar4 = (long *)(uVar2 & 0xfffffffffffffffe), *plVar4 == 0)) &&
     (plVar4 != (long *)0x0)) {
    if ((*(byte *)(plVar4 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar4[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar4);
  }
  FUN_007ac05c(param_1 + 2);
  return;
}


