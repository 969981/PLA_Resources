/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00602294; name: FUN_00602294
 */


void FUN_00602294(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  *param_1 = (long)(PTR_DAT_04375198 + 0x10);
  uVar3 = param_1[1];
  puVar4 = (ulong *)(uVar3 & 0xfffffffffffffffe);
  if ((uVar3 & 1) != 0) {
    puVar4 = (ulong *)*puVar4;
  }
  if (puVar4 != (ulong *)0x0) {
                    /* try { // try from 006022c4 to 006022db has its CatchHandler @ 006023a8 */
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/timestamp.pb.cc"
                 ,0x7e);
                    /* try { // try from 006022dc to 006022ef has its CatchHandler @ 00602394 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: GetArena() == nullptr: ");
                    /* try { // try from 006022f0 to 006022f7 has its CatchHandler @ 00602390 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    uVar3 = param_1[1];
  }
  if ((((uVar3 & 1) != 0) && (plVar5 = (long *)(uVar3 & 0xfffffffffffffffe), *plVar5 == 0)) &&
     (plVar5 != (long *)0x0)) {
    plVar6 = plVar5 + 1;
    lVar2 = *plVar6;
    if (lVar2 != plVar5[2]) {
                    /* try { // try from 00602330 to 00602337 has its CatchHandler @ 0060237c */
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


