/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ded3c; name: FUN_002ded3c
 */


void FUN_002ded3c(long *param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  *param_1 = (long)(PTR_DAT_04373768 + 0x10);
  puVar2 = (ulong *)(param_1[1] & 0xfffffffffffffffe);
  if ((param_1[1] & 1U) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  if (puVar2 != (ulong *)0x0) {
                    /* try { // try from 002ded68 to 002ded7f has its CatchHandler @ 002dee24 */
    FUN_0030f640(auStack_40,3,
                 "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/common/value.pb.cc"
                 ,0xea);
                    /* try { // try from 002ded80 to 002ded93 has its CatchHandler @ 002dee10 */
    uVar1 = FUN_0030f3ac(auStack_40,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 002ded94 to 002ded9b has its CatchHandler @ 002dee0c */
    FUN_0030f41c(auStack_48,uVar1);
    FUN_0030f658(auStack_40);
  }
  if (*(int *)((long)param_1 + 0x1c) != 0) {
                    /* try { // try from 002dedac to 002dedb3 has its CatchHandler @ 002dee24 */
    FUN_002de8d8(param_1);
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


