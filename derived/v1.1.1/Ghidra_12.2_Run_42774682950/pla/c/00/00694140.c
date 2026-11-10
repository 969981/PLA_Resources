/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00694140; name: FUN_00694140
 */


void FUN_00694140(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  *param_1 = (long)(PTR_DAT_04375d00 + 0x10);
  puVar2 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 0069416c to 00694183 has its CatchHandler @ 00694230 */
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
                 ,0xeea);
                    /* try { // try from 00694184 to 00694197 has its CatchHandler @ 0069421c */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00694198 to 0069419f has its CatchHandler @ 00694218 */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  if (param_1 != (long *)PTR_DAT_04375cf8) {
    FUN_0069de8c(param_1[2]);
  }
  if ((((param_1[1] & 1U) != 0) &&
      (plVar3 = (long *)(param_1[1] & 0xfffffffffffffffe), *plVar3 == 0)) && (plVar3 != (long *)0x0)
     ) {
    if ((*(byte *)(plVar3 + 1) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,plVar3[3]);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar3);
  }
  return;
}


