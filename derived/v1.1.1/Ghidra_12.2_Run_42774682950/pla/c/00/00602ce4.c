/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00602ce4; name: FUN_00602ce4
 */


void FUN_00602ce4(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_043751d0 + 0x10);
  uVar3 = param_1[1];
  puVar4 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if (puVar4 != (ulong *)0x0) {
                    /* try { // try from 00602d14 to 00602d2b has its CatchHandler @ 00602df8 */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/empty.pb.cc"
                 ,0x75);
                    /* try { // try from 00602d2c to 00602d3f has its CatchHandler @ 00602de4 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 00602d40 to 00602d47 has its CatchHandler @ 00602de0 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar3 = param_1[1];
  }
  if ((((uVar3 & 1) != 0) && (plVar5 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar5 == 0)) &&
     (plVar5 != (long *)0x0)) {
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    if (lVar2 != plVar5[2]) {
                    /* try { // try from 00602d80 to 00602d87 has its CatchHandler @ 00602dcc */
      FUN_0030cac0(plVar6);
      lVar2 = *plVar6;
    }
    if (lVar2 != 0) {
      plVar5[2] = lVar2;
      FUN_002e2ea0(PTR_LAB_04373088);
    }
    FUN_002e2ea0(PTR_LAB_04373088,plVar5);
  }
  return;
}


